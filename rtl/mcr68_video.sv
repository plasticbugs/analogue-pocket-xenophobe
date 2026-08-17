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
// STATUS: first draft for simulation bring-up. Known pre-synthesis TODOs:
//  - sprite line-buffer blend does same-cycle read-modify-write (fine in sim,
//    must be pipelined addr/data for BRAM inference)
//  - pen-8 mask semantics simplified vs MAME's per-priority-class handling;
//    verify against MAME captures once frames render
//  - verify bg_q0/bg_q1 fetch timing against emit window (px>=2 guard)

module mcr68_video (
    input  logic        clk,          // 40 MHz
    input  logic        ce_pix,       // 20 MHz pixel enable

    // CPU write/read ports (main board decodes addresses)
    input  logic [10:0] vram_addr,    // word address into 4KB
    input  logic [15:0] vram_din,
    input  logic  [1:0] vram_we,      // byte lanes [1]=upper [0]=lower
    output logic [15:0] vram_q,
    input  logic [9:0]  sprram_addr,  // word address into 2KB
    input  logic [15:0] sprram_din,
    input  logic  [1:0] sprram_we,
    output logic [15:0] sprram_q,
    input  logic [5:0]  pal_addr,
    input  logic [8:0]  pal_din,
    input  logic        pal_we,

    // graphics ROM load port (during APF asset load)
    input  logic [17:0] gfx_load_addr, // byte address: 0x00000-0x0ffff bg, 0x10000+ sprites
    input  logic [7:0]  gfx_load_data,
    input  logic        gfx_load_we,

    // video out
    output logic [7:0]  r, g, b,
    output logic        hs, vs, de,

    // game-side timing (30 Hz cadence)
    output logic        vsync30,      // one-clk pulse at start of game vblank
    output logic        hsync_pulse,  // one-clk pulse per scanline
    output logic        vblank
);

    // ---------------- raster counters ----------------
    localparam H_TOTAL = 635, H_VIS = 512, HS_START = 544, HS_END = 592;
    localparam V_TOTAL = 525, V_VIS = 480, VS_START = 490, VS_END = 493;

    logic [9:0] hcnt;
    logic [9:0] vcnt;
    logic       field;                // toggles each 60 Hz frame -> 30 Hz game cadence

    always_ff @(posedge clk) if (ce_pix) begin
        hsync_pulse <= 1'b0;
        vsync30     <= 1'b0;
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

    assign vblank = (vcnt >= V_VIS);
    wire   hblank = (hcnt >= H_VIS);

    // ---------------- memories ----------------
    // vram 2K x 16 (CPU) / render reads via port b
    logic [15:0] vram [0:2047];
    logic [15:0] vram_rq;
    always_ff @(posedge clk) begin
        if (vram_we[0]) vram[vram_addr][7:0]  <= vram_din[7:0];
        if (vram_we[1]) vram[vram_addr][15:8] <= vram_din[15:8];
        vram_q <= vram[vram_addr];
    end

    logic [10:0] vram_raddr;
    always_ff @(posedge clk) vram_rq <= vram[vram_raddr];

    // sprite ram 1K x 16
    logic [15:0] sprram [0:1023];
    logic [15:0] sprram_rq;
    logic [9:0]  sprram_raddr;
    always_ff @(posedge clk) begin
        if (sprram_we[0]) sprram[sprram_addr][7:0]  <= sprram_din[7:0];
        if (sprram_we[1]) sprram[sprram_addr][15:8] <= sprram_din[15:8];
        sprram_q  <= sprram[sprram_addr];
        sprram_rq <= sprram[sprram_raddr];
    end

    // palette 64 x 9
    logic [8:0] palette [0:63];
    always_ff @(posedge clk) if (pal_we) palette[pal_addr] <= pal_din;

    // bg tile ROM: 32K x 16 = 64KB. word addr {half, code[10:0], row[2:0]}
    logic [15:0] bg_rom [0:32767];
    logic [15:0] bg_q0, bg_q1;
    logic [13:0] bg_raddr;            // {code, row} - both halves read in sequence
    logic        bg_rhalf;
    always_ff @(posedge clk) begin
        if (gfx_load_we && gfx_load_addr[17:16] == 2'b00) begin
            if (gfx_load_addr[0]) bg_rom[gfx_load_addr[15:1]][7:0]  <= gfx_load_data;
            else                  bg_rom[gfx_load_addr[15:1]][15:8] <= gfx_load_data;
        end
        if (bg_rhalf) bg_q1 <= bg_rom[{1'b1, bg_raddr}];
        else          bg_q0 <= bg_rom[{1'b0, bg_raddr}];
    end

    // sprite ROM: 4 banks x 32K x 16 = 256KB. Per bank, sprite row = 2 words.
    // word addr within bank: {code[8:0], row[4:0], word}
    logic [15:0] spr_rom [0:3][0:32767];
    logic [15:0] spr_q [0:3];
    logic [14:0] spr_raddr;
    always_ff @(posedge clk) begin
        if (gfx_load_we && gfx_load_addr[17:16] != 2'b00) begin
            // sprites start at 0x10000; 64KB per bank
            logic [1:0] bank;
            bank = gfx_load_addr[17:16] - 2'd1;
            if (gfx_load_addr[0]) spr_rom[bank][gfx_load_addr[15:1]][7:0]  <= gfx_load_data;
            else                  spr_rom[bank][gfx_load_addr[15:1]][15:8] <= gfx_load_data;
        end
        for (int i = 0; i < 4; i++) spr_q[i] <= spr_rom[i][spr_raddr];
    end

    // ---------------- background renderer ----------------
    // Renders one line ahead into bg line buffer (pen[3:0], color[1:0], pri).
    logic [6:0] bg_lbuf [0:1][0:511];
    logic       lbuf_sel;             // buffer being displayed
    logic [6:0] bg_disp_q;

    // bg state machine: for cell 0..31 of next line: read vram w0, w1,
    // bg half0, half1, emit 16 pixels
    typedef enum logic [2:0] {BG_IDLE, BG_VR0, BG_VR1, BG_T0, BG_T1, BG_EMIT} bg_st_e;
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
            BG_IDLE: if (ce_pix && hcnt == H_VIS && !vblank) begin
                bg_next_y <= (vcnt == V_TOTAL-1) ? 9'd0 : vcnt[8:0] + 9'd1;
                bg_cell <= '0;
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
                bg_st <= BG_EMIT;
                bg_px <= '0;
            end
            BG_EMIT: begin
                // wait one cycle for ROM reads issued below, then emit
                bg_px <= bg_px + 1'd1;
                if (bg_px == 4'd15) begin
                    if (bg_cell == 5'd31) bg_st <= BG_IDLE;
                    else begin bg_cell <= bg_cell + 1'd1; bg_st <= BG_VR0; end
                end
            end
            default: bg_st <= BG_IDLE;
        endcase
    end

    // ROM fetch for bg: issue both halves while in T0/T1, data valid in EMIT
    always_ff @(posedge clk) begin
        if (bg_st == BG_T0) begin bg_raddr <= {bg_code[10:0], bg_row}; bg_rhalf <= 1'b0; end
        if (bg_st == BG_T1) bg_rhalf <= 1'b1;
        if (bg_st == BG_EMIT && bg_rhalf) bg_rhalf <= 1'b0;
    end
    // dedicated second read: run half0 in T1, half1 in first EMIT cycle
    // (bg_q0/bg_q1 stable by px>=2; emit starts writing at px>=2 below)

    // Pixel extraction done combinationally from the two ROM words:
    // pixel c (0..7): bits (15-2c, 14-2c) of each half; half1 = hi bits.
    function automatic [3:0] bg_pen(input [15:0] w0, input [15:0] w1, input [2:0] c);
        logic [1:0] lo, hi;
        lo = {w0[15 - {c, 1'b0}], w0[14 - {c, 1'b0}]};
        hi = {w1[15 - {c, 1'b0}], w1[14 - {c, 1'b0}]};
        return {hi, lo};
    endfunction

    always_ff @(posedge clk) begin
        if (bg_st == BG_EMIT && bg_px >= 4'd2)
            bg_lbuf[~lbuf_sel][{bg_cell, bg_px[3:1] ^ {3{bg_flipx}}, bg_px[0]}]
                <= {bg_pri, bg_color, bg_pen(bg_q0, bg_q1, bg_px[3:1] ^ {3{bg_flipx}})};
    end
    // NOTE: write path above emits each logical pixel twice (px[0] doubling).

    // ---------------- sprite renderer ----------------
    // For the next line: scan 128 entries, blend hits into sprite line buffer.
    // Buffer entry: {state[1:0], pri, color[1:0], pen[3:0]}  state:0 empty,
    // 1 normal, 2 masked8
    logic [8:0] sp_lbuf [0:1][0:511];
    logic [8:0] sp_disp_q;

    typedef enum logic [2:0] {SP_IDLE, SP_CLR, SP_RD, SP_LATCH, SP_FETCH, SP_BLEND} sp_st_e;
    sp_st_e sp_st;
    logic [6:0]  sp_idx;      // sprite entry 0..127 (scanned high->low)
    logic [1:0]  sp_word;
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
    // sprite screen y = (241 - Y)*2 .. +63; row within sprite (2x doubled? no:
    // sprites are true 32px but displayed 2x tall? MAME: y=(241-Y)*2 and 32x32
    // gfx drawn 1:1 in the 512x480 space -> occupies 32 lines; our lines are
    // the same 480 space, so row = line - y0, 0..31, no doubling.
    wire [9:0]  sp_y0 = (10'd241 - {2'b0, sp_y}) << 1;
    wire [9:0]  sp_row_idx10 = {1'b0, sp_line} - sp_y0;
    wire        sp_hit = (sp_code != 0) && (sp_row_idx10 < 10'd32);
    wire [4:0]  sp_rowsel = sp_flipy ? ~sp_row_idx10[4:0] : sp_row_idx10[4:0];

    always_ff @(posedge clk) begin
        case (sp_st)
            SP_IDLE: if (ce_pix && hcnt == H_VIS && !vblank) begin
                sp_line <= (vcnt == V_TOTAL-1) ? 9'd0 : vcnt[8:0] + 9'd1;
                sp_clr_addr <= '0;
                sp_st <= SP_CLR;
            end
            SP_CLR: begin
                sp_lbuf[~lbuf_sel][sp_clr_addr] <= '0;
                sp_clr_addr <= sp_clr_addr + 1'd1;
                if (sp_clr_addr == 9'd511) begin
                    sp_idx <= 7'd127;      // highest offs = drawn first (lowest on top later)
                    sp_word <= '0;
                    sp_st <= SP_RD;
                end
            end
            SP_RD: begin
                sprram_raddr <= {sp_idx, sp_word};   // entry*4 + word
                sp_word <= sp_word + 1'd1;
                if (sp_word == 2'd3) sp_st <= SP_LATCH;
            end
            SP_LATCH: begin
                // sprram_rq lags one cycle; capture happens in shift reg below
                if (sp_hit) begin
                    sp_fetch_cnt <= '0;
                    sp_st <= SP_FETCH;
                end else begin
                    sp_word <= '0;
                    if (sp_idx == 0) sp_st <= SP_IDLE;
                    else begin sp_idx <= sp_idx - 1'd1; sp_st <= SP_RD; end
                end
            end
            SP_FETCH: begin
                // 2 sequential word reads shared by all 4 banks (parallel q)
                spr_raddr <= {sp_code[8:0], sp_rowsel, sp_fetch_cnt[0]};
                sp_fetch_cnt <= sp_fetch_cnt + 1'd1;
                if (sp_fetch_cnt >= 3'd1) begin
                    for (int i = 0; i < 4; i++)
                        sp_row[i][sp_fetch_cnt - 1] <= spr_q[i];
                end
                if (sp_fetch_cnt == 3'd2) begin
                    sp_px <= '0;
                    sp_st <= SP_BLEND;
                end
            end
            SP_BLEND: begin
                sp_px <= sp_px + 1'd1;
                if (sp_px == 6'd31) begin
                    sp_word <= '0;
                    if (sp_idx == 0) sp_st <= SP_IDLE;
                    else begin sp_idx <= sp_idx - 1'd1; sp_st <= SP_RD; end
                end
            end
            default: sp_st <= SP_IDLE;
        endcase

        // latch entry bytes as they stream out of sprram (rq lags raddr by 1)
        if (sp_st == SP_RD || sp_st == SP_LATCH) begin
            case (sp_word)  // rq corresponds to word-2 due to pipeline; use shift
                2'd2: sp_y       <= sprram_rq[7:0];
                2'd3: sp_flags   <= sprram_rq[7:0];
                2'd0: sp_code_lo <= sprram_rq[7:0];
                2'd1: sp_x       <= sprram_rq[7:0];
            endcase
        end
    end

    // sprite pixel value from the 4 bank words
    function automatic [3:0] sp_pen(input [5:0] x);
        logic [1:0] bank;
        logic       g;      // x[4:3] = group, but layout: g=x/8 (2 groups per word)
        logic [3:0] nib;
        logic [15:0] w;
        bank = x[2:1];
        w = sp_row[bank][x[4]];       // word = group g>=2
        // within word: group parity x[3] selects byte, x[0] selects nibble
        nib = x[3] ? (x[0] ? w[3:0] : w[7:4])
                   : (x[0] ? w[11:8] : w[15:12]);
        return nib;
    endfunction

    wire [5:0] sp_px_src = sp_flipx ? (6'd31 - sp_px) : sp_px;
    wire [3:0] sp_pval = sp_pen(sp_px_src);
    wire [9:0] sp_xpos = ({2'b0, sp_x} << 1) - 10'd4 + {4'b0, sp_px};
    wire [8:0] sp_cur; // current buffer content at target (read-modify-write)

    always_ff @(posedge clk) begin
        if (sp_st == SP_BLEND && sp_pval != 0 && sp_xpos < 10'd512) begin
            logic [8:0] cur;
            cur = sp_lbuf[~lbuf_sel][sp_xpos[8:0]];
            if (cur[8:7] != 2'd2) begin      // not masked
                if (sp_pval == 4'd8)
                    sp_lbuf[~lbuf_sel][sp_xpos[8:0]] <= {2'd2, sp_pri, sp_color, sp_pval};
                else
                    sp_lbuf[~lbuf_sel][sp_xpos[8:0]] <= {2'd1, sp_pri, sp_color, sp_pval};
            end
        end
    end

    // ---------------- compositor ----------------
    logic [8:0] rgb9;
    always_ff @(posedge clk) if (ce_pix) begin
        if (hcnt == H_TOTAL-1 && vcnt == V_TOTAL-1) lbuf_sel <= ~lbuf_sel;
        else if (hcnt == H_TOTAL-1 && vcnt < V_VIS) lbuf_sel <= ~lbuf_sel;

        bg_disp_q <= bg_lbuf[lbuf_sel][hcnt[8:0]];
        sp_disp_q <= sp_lbuf[lbuf_sel][hcnt[8:0]];

        de <= (hcnt < H_VIS) && (vcnt < V_VIS);
        hs <= (hcnt >= HS_START && hcnt < HS_END);
        vs <= (vcnt >= VS_START && vcnt < VS_END);

        begin
            logic [5:0] idx;
            logic       sp_norm, sp_msk;
            sp_norm = (sp_disp_q[8:7] == 2'd1);
            sp_msk  = (sp_disp_q[8:7] == 2'd2);
            // priority resolve (see header): hi sprites > pri tiles > lo sprites > bg
            if (sp_norm && sp_disp_q[6])                       // hi sprite
                idx = {sp_disp_q[5:4], sp_disp_q[3:0]};
            else if (bg_disp_q[6] && bg_disp_q[3:0] != 0)      // pri tile pen
                idx = {bg_disp_q[5:4], bg_disp_q[3:0]};
            else if (sp_norm)                                  // lo sprite
                idx = {sp_disp_q[5:4], sp_disp_q[3:0]};
            else
                idx = {bg_disp_q[5:4], bg_disp_q[3:0]};
            rgb9 <= palette[idx];
        end
    end

    assign r = {rgb9[8:6], rgb9[8:6], rgb9[8:7]};
    assign b = {rgb9[5:3], rgb9[5:3], rgb9[5:4]};
    assign g = {rgb9[2:0], rgb9[2:0], rgb9[2:1]};

endmodule
