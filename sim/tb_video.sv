// Video-only bench: mcr68_video with frozen state preloaded from hex files
// (vram_init.hex, sprram_init.hex, pal_init.hex). No CPU - renders the same
// frame repeatedly; the harness captures one and exits.
`timescale 1ns/1ns

module tb_video (
    input  logic clk,             // 40 MHz
    output logic [7:0] r, g, b,
    output logic hs, vs, de
);
    logic ce_div = 0;
    always_ff @(posedge clk) ce_div <= ~ce_div;

    // SDRAM path for sprite row fetches (real controller + model)
    wire [15:0] sd_dq;
    wire [12:0] sd_a;
    wire [1:0]  sd_ba;
    wire        sd_dqml, sd_dqmh, sd_cs, sd_ras, sd_cas, sd_we_n, sd_cke, sd_clk_o;
    wire [24:4] sd_baddr;  wire sd_brd, sd_bready;  wire [127:0] sd_bdata;
    wire [24:0] sd_addr;   wire [7:0] sd_din;
    wire        sd_we, sd_rd, sd_ready;
    wire [15:0] sd_dout16;
    wire [13:0] spr_fetch_addr;
    wire        spr_fetch_req, spr_fetch_done;
    wire [127:0] spr_fetch_data;

    sdram16 sdram16 (
        .init(1'b0), .clk(clk),
        .SDRAM_DQ(sd_dq), .SDRAM_A(sd_a), .SDRAM_DQML(sd_dqml), .SDRAM_DQMH(sd_dqmh),
        .SDRAM_BA(sd_ba), .SDRAM_nCS(sd_cs), .SDRAM_nWE(sd_we_n),
        .SDRAM_nRAS(sd_ras), .SDRAM_nCAS(sd_cas), .SDRAM_CKE(sd_cke), .SDRAM_CLK(sd_clk_o),
        .addr(sd_addr), .dout(), .dout16(sd_dout16),
        .baddr(sd_baddr), .brd(sd_brd), .bdata(sd_bdata), .bready(sd_bready),
        .din(sd_din), .we(sd_we), .rd(sd_rd), .ready(sd_ready)
    );
    sdram_model sdram_chip (
        .clk(clk), .dq(sd_dq), .a(sd_a), .ba(sd_ba),
        .dqml(sd_dqml), .dqmh(sd_dqmh),
        .cs_n(sd_cs), .ras_n(sd_ras), .cas_n(sd_cas), .we_n(sd_we_n), .cke(sd_cke)
    );
    rom_server rom_server (
        .clk(clk), .reset(1'b0),
        .sd_addr(sd_addr), .sd_din(sd_din), .sd_we(sd_we), .sd_rd(sd_rd),
        .sd_dout16(sd_dout16), .sd_ready(sd_ready),
        .dl_active(1'b0), .dl_addr('0), .dl_data('0), .dl_wr(1'b0),
        .spr_baddr(21'h9000 + {7'b0, spr_fetch_addr}),
        .spr_req(spr_fetch_req), .spr_data(spr_fetch_data), .spr_done(spr_fetch_done),
        .sd_baddr(sd_baddr), .sd_brd(sd_brd), .sd_bdata(sd_bdata), .sd_bready(sd_bready),
        .rd0_addr('0), .rd0_req(1'b0), .rd0_q(), .rd0_done(),
        .rd1_addr('0), .rd1_req(1'b0), .rd1_q(), .rd1_done()
    );

    mcr68_video video (
        .clk(clk), .ce_pix(ce_div),
        .vram_addr('0), .vram_din('0), .vram_we('0), .vram_q(),
        .sprram_addr('0), .sprram_din('0), .sprram_we('0), .sprram_q(),
        .pal_addr('0), .pal_din('0), .pal_we(1'b0),
        .gfx_load_addr('0), .gfx_load_data('0), .gfx_load_we(1'b0),
        .spr_fetch_addr(spr_fetch_addr), .spr_fetch_req(spr_fetch_req),
        .spr_fetch_data(spr_fetch_data), .spr_fetch_done(spr_fetch_done),
        .r(r), .g(g), .b(b), .hs(hs), .vs(vs), .de(de),
        .vsync30(), .hsync_pulse(), .vblank(), .field_o()
    );

    initial begin
        $readmemh("vram_init.hex",   video.vram);
        $readmemh("sprram_init.hex", video.sprram);
        $readmemh("pal_init.hex",    video.palette);
        $readmemh("sdram_init.hex",  sdram_chip.mem);
    end
endmodule
