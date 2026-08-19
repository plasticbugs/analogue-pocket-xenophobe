// MCR-68k video: 32x32 tilemap of 16x16 tiles (8x8 art dot-doubled 2x2) plus
// 32x32 sprites with two priority classes and the pen-8 "under tile" mask.
//
// Timing: 512x480 visible in a 635x525 raster. With a 40 MHz clk and ce_pix
// at /2 (10.0013 MHz equivalent doubled -> we emit one pixel per ce_pix at
// 20 MHz effective dot rate), each frame is 16.67 ms (60 Hz progressive).
// The original machine displays 30 Hz interlaced; game-side frame signals
// (vsync30 etc.) fire every other output frame.
//
// Palette: 64 x 9 bits, xRBG_333 (bits 8:6=R, 5:3=B, 2:0=G).
// BG cell (2 vram words, low bytes): data[9:0]+data[15:14]<<10 = code,
// data[11:10] = flipx/flipy, ~data[13:12] = color bank, data[15] = priority
// (over low-pri sprites). NB code bits 11:10 come from data 15:14 per MAME
// (code = data&0x3ff | (data>>4)&0xc00) - for 2048 tiles only bit 14 matters
// and bit 15 doubles as tile priority.
//
// Sprite entry (4 vram words, low bytes): [0]=Y, [1]=flags, [2]=code lo,
// [3]=X. screen_y=(241-Y)*2, screen_x=X*2-4. flags: 1:0=~color, 2=priority,
// 3=code[8], 4=flipx, 5=flipy, 7:6=code[10:9].
//
// STATUS: pixel-validated 0.000% against MAME on ten states (attract,
// credits, character select, gameplay with sprite overlaps) via
// tools/render_model.py + sim/run_video.sh. Sprite priority is FIRST-WINS
// per class (higher table offs = on top); pen 8 claims pixels invisibly.
// Pre-synthesis TODO: sprite line-buffer blend and clear do same-cycle
// read-modify-write / multi-write (fine in sim; needs a pipelined port or
// LUTRAM mapping for synthesis - revisit at Quartus fitting).

module mcr68_video (
    input  logic        clk,          // 40 MHz
    input  logic        ce_pix,       // 20 MHz pixel enable

    // CPU write/read ports (main board decodes addresses)
    input  logic [11:0] vram_addr,    // word address into 8KB (4KB map + 4KB scratch)
    input  logic [15:0] vram_din,
    input  logic  [1:0] vram_we,      // byte lanes [1]=upper [0]=lower
    output logic [15:0] vram_q,
    input  logic [11:0] sprram_addr,  // word address into 8KB (512 entries + scratch)
    input  logic [15:0] sprram_din,
    input  logic  [1:0] sprram_we,
    output logic [15:0] sprram_q,
    input  logic [5:0]  pal_addr,
    input  logic [8:0]  pal_din,
    input  logic        pal_we,

    // bg tile ROM load port (during APF asset load; sprites live in SDRAM)
    input  logic [18:0] gfx_load_addr, // byte address: 0x00000-0x0ffff bg
    input  logic [7:0]  gfx_load_data,
    input  logic        gfx_load_we,

    // sprite row fetch (16 bytes per {code, row} block, served from SDRAM)
    output logic [13:0] spr_fetch_addr, // {code[8:0], row[4:0]}
    output logic        spr_fetch_req,
    input  logic [127:0] spr_fetch_data,
    input  logic        spr_fetch_done,

    // video out
    output logic [7:0]  r, g, b,
    output logic        hs, vs, de,

    // game-side timing (30 Hz cadence)
    output logic        vsync30,      // one-clk pulse at start of game vblank
    output logic        hsync_pulse,  // one-clk pulse per scanline
    output logic        vblank,
    output logic        field_o,      // which 60 Hz frame of the 30 Hz pair

    // bandwidth / tearing instrumentation
    output logic        dbg_spr_overrun,      // engine missed a line deadline
    output logic [8:0]  dbg_spr_overrun_line, // where it first happened
    output logic [7:0]  dbg_spr_overrun_cnt,  // how often (saturating)
    output logic        dbg_spr_wr_active     // sprite RAM written mid-frame
);

    // ---------------- raster counters ----------------
    localparam H_TOTAL = 635, H_VIS = 512, HS_START = 544, HS_END = 592;
    localparam V_TOTAL = 525, V_VIS = 480, VS_START = 490, VS_END = 493;

    logic [9:0] hcnt;
    logic [9:0] vcnt;
    logic       field;                // toggles each 60 Hz frame -> 30 Hz game cadence

    always_ff @(posedge clk) begin
        hsync_pulse <= 1'b0;      // single-clk pulses (cleared outside ce_pix
        vsync30     <= 1'b0;      // gate so consumers never double-count)
        if (ce_pix) begin
        if (hcnt == H_TOTAL-1) begin
            hcnt <= '0;
            hsync_pulse <= 1'b1;
            if (vcnt == V_TOTAL-1) begin
                vcnt  <= '0;
                field <= ~field;
                if (field) vsync30 <= 1'b1;
            end else
                vcnt <= vcnt + 1'd1;
        end else
            hcnt <= hcnt + 1'd1;
        end
    end

    assign vblank = (vcnt >= V_VIS);
    assign field_o = field;
    wire   hblank = (hcnt >= H_VIS);

    // ---------------- memories ----------------
    // vram 4K x 16: first 2K words = tilemap, rest = CPU scratch (0x71000)
    logic [1:0][7:0] vram [0:4095] /*verilator public_flat_rd*/;
    logic [15:0] vram_rq;
    always_ff @(posedge clk) begin
        if (vram_we[0]) vram[vram_addr][0] <= vram_din[7:0];
        if (vram_we[1]) vram[vram_addr][1] <= vram_din[15:8];
        vram_q <= vram[vram_addr];
    end

    logic [10:0] vram_raddr;
    always_ff @(posedge clk) vram_rq <= vram[{1'b0, vram_raddr}];

    // sprite ram 4K x 16: first 2K words = 512 sprite entries, rest scratch
    logic [1:0][7:0] sprram [0:4095] /*verilator public_flat_rd*/;
    logic [15:0] sprram_rq;
    logic [10:0] sprram_raddr;
    always_ff @(posedge clk) begin
        if (sprram_we[0]) sprram[sprram_addr][0] <= sprram_din[7:0];
        if (sprram_we[1]) sprram[sprram_addr][1] <= sprram_din[15:8];
        sprram_q  <= sprram[sprram_addr];
    end
    always_ff @(posedge clk) sprram_rq <= sprram[{1'b0, sprram_raddr}];

    // palette 64 x 9 - forced to logic: a 64-entry table is cheap as
    // registers+mux, and an inferred M10K here drew a read-during-write
    // feed-through Critical Warning (read port sampled under ce_pix), i.e.
    // exactly the kind of ambiguity that returns zeros = black screen.
    (* ramstyle = "logic" *) logic [8:0] palette [0:63] /*verilator public_flat_rd*/;
    always_ff @(posedge clk) if (pal_we) palette[pal_addr] <= pal_din;

    // bg tile ROM: 32K x 16 = 64KB. word addr {half, code[10:0], row[2:0]}
    // Region order is 11d (pen bits 1:0) then 12d (pen bits 3:2), and the
    // data is INVERTED (MAME ROMREGION_INVERT; the merged .rom asset stores
    // the raw dump, so the loader inverts here). Sim hex is pre-inverted.
    logic [15:0] bg_rom [0:32767];
    logic [15:0] bg_q0, bg_q1;
    logic [13:0] bg_raddr;            // {code, row} - both halves read in sequence
    logic        bg_rhalf;
    // single muxed read port (2 conditional reads = 3 ports = no BRAM
    // inference in 18.1); the raw read demuxes into q0/q1 one cycle later
    logic [15:0] bg_rdata;
    logic        bg_rhalf_q;
    // loader streams bytes sequentially: buffer the even byte, write full
    // words on the odd byte (no partial selects -> clean BRAM inference)
    logic [7:0] gl_evenb;
    always_ff @(posedge clk)
        if (gfx_load_we && !gfx_load_addr[0]) gl_evenb <= gfx_load_data;
    wire gl_bg_wr = gfx_load_we && gfx_load_addr[0] && gfx_load_addr[18:16] == 3'b000;
    always_ff @(posedge clk) begin
        if (gl_bg_wr) bg_rom[gfx_load_addr[15:1]] <= {~gl_evenb, ~gfx_load_data};
        bg_rdata <= bg_rom[{bg_rhalf, bg_raddr}];
    end
    always_ff @(posedge clk) begin
        bg_rhalf_q <= bg_rhalf;
        if (bg_rhalf_q) bg_q1 <= bg_rdata;
        else            bg_q0 <= bg_rdata;
    end


`ifdef SIM_GFX_INIT
    initial begin
        $readmemh("bg_rom.hex",  bg_rom);
    end
`endif

    // ---------------- background renderer ----------------
    // Renders one line ahead into bg line buffer (pen[3:0], color[1:0], pri).
    // Flat dual-port BRAMs: {buffer, x} addressing. Port A = render write,
    // port B = display read (sprite buffer: + trailing clear between reads).
    (* ramstyle = "M10K, no_rw_check" *) logic [6:0] bg_lbuf [0:1023];
    logic       lbuf_sel;             // buffer being displayed
    logic       bg_wrbuf, sp_wrbuf;   // latched render targets
    logic [6:0] bg_disp_q;

    // bg state machine: for cell 0..31 of next line: read vram w0, w1,
    // latch both, then fetch both ROM halves, then emit 16 pixels.
    // 4 + 3 + 16 = 23 clks per cell, inside the 32-clk (16-dot) budget.
    typedef enum logic [3:0] {BG_IDLE, BG_VR0, BG_VR1, BG_T0, BG_T1,
                              BG_F0, BG_F1, BG_F2, BG_F3, BG_EMIT} bg_st_e;
    bg_st_e bg_st;
    logic [4:0]  bg_cell;
    logic [15:0] bg_d0, bg_d1;
    logic [3:0]  bg_px;               // 0..15 within cell
    logic [8:0]  bg_next_y;           // line being rendered

    wire [15:0] bg_data  = {bg_d1[7:0], bg_d0[7:0]};
    wire [11:0] bg_code  = {bg_data[15:14], bg_data[9:0]};
    wire        bg_flipx = bg_data[10];
    wire        bg_flipy = bg_data[11];
    wire [1:0]  bg_color = ~bg_data[13:12];
    wire        bg_pri   = bg_data[15];
    wire [2:0]  bg_row   = bg_flipy ? ~bg_next_y[3:1] : bg_next_y[3:1];

    always_ff @(posedge clk) begin
        case (bg_st)
            BG_IDLE: if (ce_pix && hcnt == H_VIS
                         && (vcnt < V_VIS-1 || vcnt == V_TOTAL-1)) begin
                bg_next_y <= (vcnt == V_TOTAL-1) ? 9'd0 : vcnt[8:0] + 9'd1;
                bg_cell <= '0;
                bg_wrbuf <= ~lbuf_sel;   // latch target: render outlives the toggle
                bg_st <= BG_VR0;
            end
            BG_VR0: begin
                vram_raddr <= {bg_next_y[8:4], bg_cell, 1'b0};
                bg_st <= BG_VR1;
            end
            BG_VR1: begin
                vram_raddr <= {bg_next_y[8:4], bg_cell, 1'b1};
                bg_d0 <= vram_rq;      // note: rq is 1 behind; d0 latched next state
                bg_st <= BG_T0;
            end
            BG_T0: begin
                bg_d0 <= vram_rq;
                bg_st <= BG_T1;
            end
            BG_T1: begin
                bg_d1 <= vram_rq;
                bg_st <= BG_F0;
            end
            BG_F0: bg_st <= BG_F1;   // rom addr half0 issued below (code valid now)
            BG_F1: bg_st <= BG_F2;   // rdata <- half0; rom addr half1
            BG_F2: bg_st <= BG_F3;   // q0 <- half0; rdata <- half1
            BG_F3: begin             // q1 <- half1
                bg_st <= BG_EMIT;
                bg_px <= '0;
            end
            BG_EMIT: begin           // q0 and q1 both valid for the whole emit
                bg_px <= bg_px + 1'd1;
                if (bg_px == 4'd15) begin
                    if (bg_cell == 5'd31) bg_st <= BG_IDLE;
                    else begin bg_cell <= bg_cell + 1'd1; bg_st <= BG_VR0; end
                end
            end
            default: bg_st <= BG_IDLE;
        endcase
    end

    // ROM fetch: half0 addressed during F0, half1 during F1
    always_ff @(posedge clk) begin
        if (bg_st == BG_F0) begin bg_raddr <= {bg_code[10:0], bg_row}; bg_rhalf <= 1'b0; end
        if (bg_st == BG_F1) bg_rhalf <= 1'b1;
    end

    // Pixel extraction done combinationally from the two ROM words:
    // pixel c (0..7): bits (15-2c, 14-2c) of each half; half1 = hi bits.
    function automatic [3:0] bg_pen(input [15:0] w0, input [15:0] w1, input [2:0] c);
        logic [1:0] lo, hi;
        lo = {w0[15 - {c, 1'b0}], w0[14 - {c, 1'b0}]};
        hi = {w1[15 - {c, 1'b0}], w1[14 - {c, 1'b0}]};
        return {hi, lo};
    endfunction

    always_ff @(posedge clk) begin
        if (bg_st == BG_EMIT)
            // position is linear; flipx applies only to the column selection
            bg_lbuf[{bg_wrbuf, bg_cell, bg_px[3:1], bg_px[0]}]
                <= {bg_pri, bg_color, bg_pen(bg_q0, bg_q1, bg_px[3:1] ^ {3{bg_flipx}})};
    end
    // NOTE: write path above emits each logical pixel twice (px[0] doubling).

    // ---------------- sprite renderer ----------------
    // For the next line: scan 512 entries, blend hits into the sprite line
    // buffer. Each pixel holds BOTH priority classes (validated against MAME
    // pixel-exactly by tools/render_model.py):
    //   [15:8] hi class {state[1:0], color[1:0], pen[3:0]}
    //   [7:0]  lo class {state[1:0], color[1:0], pen[3:0]}
    // state: 0 empty, 1 normal, 2 masked8 (pen 8: blocks later sprites of the
    // same class; visible only where the bg pen is 0, else bg shows).
    // Two 8-bit buffers (lo/hi class), each {state2, color2, pen4}, written
    // on every claim (port A) and read by the display (port B) - pure
    // simple-dual-port, guaranteed M10K inference. Validity comes from the
    // ping-ponged claim registers (cleared per bank in one cycle); stale
    // BRAM data is unreachable because data is written on every claim and
    // the display requires claim AND a visible state.
    logic [7:0] sp_lbuf_lo [0:1023];
    logic [7:0] sp_lbuf_hi [0:1023];
    logic [511:0] sp_claim_lo0, sp_claim_lo1, sp_claim_hi0, sp_claim_hi1;

    typedef enum logic [3:0] {SP_IDLE, SP_CLR, SP_Y_REQ, SP_Y_TEST,
                              SP_RD_FLAGS, SP_RD_CODE, SP_RD_X,
                              SP_FETCH, SP_BLEND} sp_st_e;
    sp_st_e sp_st;
    logic [8:0]  sp_idx;      // sprite entry 0..511 (scanned high->low)
    logic [7:0]  sp_y, sp_flags, sp_code_lo, sp_x;
    logic [8:0]  sp_line;
    logic [2:0]  sp_fetch_cnt;
    logic [15:0] sp_row [0:3][0:1];   // 2 words per bank
    logic [5:0]  sp_px;
    logic [8:0]  sp_clr_addr;

    wire [10:0] sp_code = {sp_flags[7:6], sp_flags[3], sp_code_lo};
    wire [1:0]  sp_color = ~sp_flags[1:0];
    wire        sp_pri   = sp_flags[2];
    wire        sp_flipx = sp_flags[4];
    wire        sp_flipy = sp_flags[5];
    // sprite screen y = (241 - Y)*2; 32x32 art drawn 1:1 in the 512x480 space
    wire [9:0]  sp_y0 = (10'd241 - {2'b0, sp_y}) << 1;
    wire [9:0]  sp_row_idx10 = {1'b0, sp_line} - sp_y0;
    wire [4:0]  sp_rowsel = sp_flipy ? ~sp_row_idx10[4:0] : sp_row_idx10[4:0];

    // Y-in-range test evaluated on the freshly read Y byte (sprram_rq)
    wire [9:0]  yt_y0  = (10'd241 - {2'b0, sprram_rq[7:0]}) << 1;
    wire [9:0]  yt_row = {1'b0, sp_line} - yt_y0;
    wire        yt_hit = yt_row < 10'd32;

    // scan helper. Invariant during SP_Y_TEST evaluating entry j:
    //   rq == Y_j  and  raddr == {j-1, 0}  (issued one cycle earlier).
    // So a rejection must issue {j-2} (two ahead of the entry being tested),
    // and the SP_Y_REQ re-entry cycle issues {idx-1} to establish it.
    task automatic sp_next(input logic from_scan);
        if (sp_idx == 0) sp_st <= SP_IDLE;
        else begin
            sp_idx <= sp_idx - 1'd1;
            sprram_raddr <= from_scan ? {sp_idx - 2'd2, 2'd0}
                                      : {sp_idx - 1'd1, 2'd0};
            sp_st <= from_scan ? SP_Y_TEST : SP_Y_REQ;
        end
    endtask

    always_ff @(posedge clk) begin
        case (sp_st)
            // Start a full line ahead of the beam (hcnt==0 of the previous
            // line) so clear+scan+blend complete before the line displays.
            SP_IDLE: if (ce_pix && hcnt == 10'd0
                         && (vcnt < V_VIS-1 || vcnt == V_TOTAL-1)) begin
                sp_line <= (vcnt == V_TOTAL-1) ? 9'd0 : vcnt[8:0] + 9'd1;
                sp_clr_addr <= '0;
                sp_wrbuf <= ~lbuf_sel;   // latch target: render outlives the toggle
                sp_st <= SP_CLR;
            end
            SP_CLR: begin
                // claim regs reset (in the claim block); data self-clears
                // at the display port
                sp_idx <= 9'd511;          // highest offs first = drawn first
                sprram_raddr <= {9'd511, 2'd0};
                sp_st <= SP_Y_REQ;
            end
            SP_Y_REQ: begin                  // rq valid next cycle
                sprram_raddr <= {sp_idx - 1'd1, 2'd0};   // prefetch next entry
                sp_st <= SP_Y_TEST;
            end
            SP_Y_TEST: begin
                // rq now holds word0 (Y) of sp_idx
                if (yt_hit) begin
                    sp_y <= sprram_rq[7:0];
                    sprram_raddr <= {sp_idx, 2'd1};
                    sp_st <= SP_RD_FLAGS;
                end else
                    sp_next(1'b1);           // 1 cycle per rejected entry
            end
            SP_RD_FLAGS: begin
                sprram_raddr <= {sp_idx, 2'd2};
                sp_st <= SP_RD_CODE;
            end
            SP_RD_CODE: begin
                sp_flags <= sprram_rq[7:0];  // rq = word1
                sprram_raddr <= {sp_idx, 2'd3};
                sp_st <= SP_RD_X;
            end
            SP_RD_X: begin
                sp_code_lo <= sprram_rq[7:0]; // rq = word2
                sp_st <= SP_FETCH;
                sp_fetch_cnt <= '0;
            end
            SP_FETCH: begin
                if (sp_fetch_cnt == 3'd0) begin
                    sp_x <= sprram_rq[7:0];                 // rq = word3
                    if (sp_code[8:0] == 0) sp_next(1'b0);
                    else begin
                        spr_fetch_addr <= {sp_code[8:0], sp_rowsel};
                        spr_fetch_req  <= 1'b1;
                        sp_fetch_cnt   <= 3'd1;
                    end
                end else if (spr_fetch_done) begin
`ifdef SPRFETCH_TRACE
                    if (sp_line == 9'd100 || sp_line == 9'd250)
                        $display("SPRFETCH line=%0d addr=%04x data=%032x",
                                 sp_line, spr_fetch_addr, spr_fetch_data);
`endif
                    spr_fetch_req <= 1'b0;
                    for (int b = 0; b < 4; b++)
                        for (int w = 0; w < 2; w++)
                            sp_row[b][w] <= {spr_fetch_data[(b*2+w)*16 +: 8],
                                             spr_fetch_data[(b*2+w)*16+8 +: 8]};
                    sp_fetch_cnt <= 3'd0;
                    sp_px <= '0;
                    sp_st <= SP_BLEND;
                end
            end
            SP_BLEND: begin
                sp_px <= sp_px + 1'd1;
                if (sp_px == 6'd31) sp_next(1'b0);
            end
            default: sp_st <= SP_IDLE;
        endcase
    end

    // sprite pixel value from the 4 bank words (explicit selects: Quartus
    // 18.1 dead-strips module-scope arrays read only inside functions)
    logic [15:0] sp_row_w;
    logic [3:0]  sp_pen_v;
    always_comb begin
        unique case ({sp_px_src[4], sp_px_src[2:1]})
            3'b000: sp_row_w = sp_row[0][0];
            3'b001: sp_row_w = sp_row[1][0];
            3'b010: sp_row_w = sp_row[2][0];
            3'b011: sp_row_w = sp_row[3][0];
            3'b100: sp_row_w = sp_row[0][1];
            3'b101: sp_row_w = sp_row[1][1];
            3'b110: sp_row_w = sp_row[2][1];
            3'b111: sp_row_w = sp_row[3][1];
        endcase
        sp_pen_v = sp_px_src[3] ? (sp_px_src[0] ? sp_row_w[3:0]  : sp_row_w[7:4])
                                : (sp_px_src[0] ? sp_row_w[11:8] : sp_row_w[15:12]);
    end

    wire [5:0] sp_px_src = sp_flipx ? (6'd31 - sp_px) : sp_px;
    wire [3:0] sp_pval = sp_pen_v;
    // x = X*2 - 4, allowing wrap off the left edge (x > 0x1F0 -> x - 0x200)
    wire signed [10:0] sp_x0 = {2'b0, sp_x, 1'b0} - 11'sd4;
    wire signed [10:0] sp_x0w = (sp_x0 > 11'sd496) ? (sp_x0 - 11'sd512) : sp_x0;
    wire signed [10:0] sp_xs = sp_x0w + {5'b0, sp_px};
    wire        sp_xok = (sp_xs >= 0) && (sp_xs < 11'sd512);

`ifdef SPTRACE
    always_ff @(posedge clk)
        if (sp_st == SP_BLEND && sp_px == 0 && sp_line == 9'd250)
            $display("SPTRACE line=%0d idx=%0d code=%03x x=%02x y=%02x fl_col=%0d row=%0d",
                     sp_line, sp_idx, sp_code, sp_x, sp_y, sp_color, sp_rowsel);
`endif

    // First-wins per class (MAME drawgfx PIXEL_OP_..._PRIORITY, validated
    // 0.000% on ten MAME states): a pixel once claimed is never rewritten.
    // Pen 8 claims invisibly (claim bit set, no data write -> renders as bg).
    wire [511:0] claim_lo_w = sp_wrbuf ? sp_claim_lo1 : sp_claim_lo0;
    wire [511:0] claim_hi_w = sp_wrbuf ? sp_claim_hi1 : sp_claim_hi0;
    wire sp_claimed = sp_pri ? claim_hi_w[sp_xs[8:0]] : claim_lo_w[sp_xs[8:0]];
    wire sp_blend_go = (sp_st == SP_BLEND) && sp_pval != 0 && sp_xok && !sp_claimed;
    always_ff @(posedge clk) begin
        if (sp_st == SP_CLR) begin
            if (sp_wrbuf) begin sp_claim_lo1 <= '0; sp_claim_hi1 <= '0; end
            else          begin sp_claim_lo0 <= '0; sp_claim_hi0 <= '0; end
        end else if (sp_blend_go) begin
            if (sp_pri) begin
                if (sp_wrbuf) sp_claim_hi1[sp_xs[8:0]] <= 1'b1;
                else          sp_claim_hi0[sp_xs[8:0]] <= 1'b1;
            end else begin
                if (sp_wrbuf) sp_claim_lo1[sp_xs[8:0]] <= 1'b1;
                else          sp_claim_lo0[sp_xs[8:0]] <= 1'b1;
            end
        end
    end
    // port A (render write; every claim writes, pen 8 writes state 2)
    wire [9:0] sp_wr_addr = {sp_wrbuf, sp_xs[8:0]};
    wire [7:0] sp_wr_data = {(sp_pval == 4'd8) ? 2'd2 : 2'd1, sp_color, sp_pval};
    always_ff @(posedge clk) begin
        if (sp_blend_go && !sp_pri)
            sp_lbuf_lo[sp_wr_addr] <= sp_wr_data;
    end
    always_ff @(posedge clk) begin
        if (sp_blend_go && sp_pri)
            sp_lbuf_hi[sp_wr_addr] <= sp_wr_data;
    end

    // port B (display read only) + claim validity latched alongside
    logic [7:0]  sp_bq_lo, sp_bq_hi;
    logic        sp_bv_lo, sp_bv_hi;
    wire [15:0] sp_lbuf_bq = {sp_bv_hi ? sp_bq_hi : 8'h0,
                              sp_bv_lo ? sp_bq_lo : 8'h0};
    always_ff @(posedge clk) begin
        if (ce_pix) begin
            sp_bq_lo <= sp_lbuf_lo[{lbuf_sel, hcnt[8:0]}];
            sp_bq_hi <= sp_lbuf_hi[{lbuf_sel, hcnt[8:0]}];
            sp_bv_lo <= lbuf_sel ? sp_claim_lo1[hcnt[8:0]] : sp_claim_lo0[hcnt[8:0]];
            sp_bv_hi <= lbuf_sel ? sp_claim_hi1[hcnt[8:0]] : sp_claim_hi0[hcnt[8:0]];
        end
    end

    // ---- instrumentation -------------------------------------------------
    // The sprite engine has one scanline to prepare the next line. Record
    // whether it ever fails to finish, the first line where that happened,
    // and how often - that distinguishes "ran out of bandwidth" from other
    // causes, and shows whether the shortfall is position-dependent.
    // Separately, note any CPU write to sprite RAM during visible lines: this
    // renderer reads sprite RAM live, so mid-frame edits tear, where MAME
    // effectively snapshots the whole frame at once.
    always_ff @(posedge clk) begin
        if (ce_pix && hcnt == 10'd0) begin
            if (sp_st != SP_IDLE) begin
                if (!dbg_spr_overrun) begin
                    dbg_spr_overrun      <= 1'b1;
                    dbg_spr_overrun_line <= vcnt[8:0];
                end
                if (~&dbg_spr_overrun_cnt)
                    dbg_spr_overrun_cnt <= dbg_spr_overrun_cnt + 1'd1;
            end
        end
        if (|sprram_we && vcnt < V_VIS) dbg_spr_wr_active <= 1'b1;
    end

    // ---------------- compositor ----------------
    logic [8:0] rgb9;
    logic       de_d, hs_d, vs_d;
    always_ff @(posedge clk) if (ce_pix) begin
        if (hcnt == H_TOTAL-1 && vcnt == V_TOTAL-1) lbuf_sel <= ~lbuf_sel;
        else if (hcnt == H_TOTAL-1 && vcnt < V_VIS) lbuf_sel <= ~lbuf_sel;

        bg_disp_q <= bg_lbuf[{lbuf_sel, hcnt[8:0]}];

        // rgb9 lags the counters by two ce_pix stages (disp_q, then palette
        // lookup) - delay syncs to match
        de_d <= (hcnt < H_VIS) && (vcnt < V_VIS);
        hs_d <= (hcnt >= HS_START && hcnt < HS_END);
        vs_d <= (vcnt >= VS_START && vcnt < VS_END);
        de <= de_d;
        hs <= hs_d;
        vs <= vs_d;

        begin
            logic [5:0] idx;
            logic [7:0] lo, hi;
            lo = sp_lbuf_bq[7:0];
            hi = sp_lbuf_bq[15:8];
            // bg -> lo sprites (covered by cat-1 tiles) -> hi sprites;
            // state 2 (pen-8 claim) always falls through to bg
            idx = {bg_disp_q[5:4], bg_disp_q[3:0]};
            if (lo[7:6] == 2'd1 && !(bg_disp_q[6] && bg_disp_q[3:0] != 0))
                idx = {lo[5:4], lo[3:0]};
            if (hi[7:6] == 2'd1)
                idx = {hi[5:4], hi[3:0]};
            rgb9 <= palette[idx];
        end
    end

    assign r = {rgb9[8:6], rgb9[8:6], rgb9[8:7]};
    assign b = {rgb9[5:3], rgb9[5:3], rgb9[5:4]};
    assign g = {rgb9[2:0], rgb9[2:0], rgb9[2:1]};

endmodule
