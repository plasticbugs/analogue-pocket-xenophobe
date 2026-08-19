// Full-system bench: main board + video + Sounds Good, wired exactly like
// the real interconnect. Command nibbles and the status wire both live.
`timescale 1ns/1ns

module tb_system (
    input  logic clk,             // 40 MHz
    input  logic reset,
    input  logic [15:0] in0,
    input  logic [15:0] in1,
    input  logic [15:0] dsw,
    output logic [7:0] r, g, b,
    output logic hs, vs, de,
    output logic [15:0] ctrl,
    output logic wdt,
    output logic [9:0] dac,
    output logic signed [15:0] pcm,
    output logic snd_status
);
    logic ce_div = 0;
    always_ff @(posedge clk) ce_div <= ~ce_div;
    wire ce_pix = ce_div;

    // main CPU: 7.7238 MHz phi enables (fractional from 40 MHz)
    logic [16:0] acc_m = 0;
    logic tog_m = 0, m_phi1, m_phi2;
    always_ff @(posedge clk) begin
        {m_phi1, m_phi2} <= 2'b00;
        acc_m <= {1'b0, acc_m[15:0]} + 17'd25310;
        if (acc_m[16]) begin
            tog_m <= ~tog_m;
            if (tog_m) m_phi2 <= 1'b1; else m_phi1 <= 1'b1;
        end
    end

    // sound CPU: 8.0 MHz phi enables (fractional from 40 MHz)
    logic [16:0] acc_s = 0;
    logic tog_s = 0, s_phi1, s_phi2;
    always_ff @(posedge clk) begin
        {s_phi1, s_phi2} <= 2'b00;
        acc_s <= {1'b0, acc_s[15:0]} + 17'd26214;
        if (acc_s[16]) begin
            tog_s <= ~tog_s;
            if (tog_s) s_phi2 <= 1'b1; else s_phi1 <= 1'b1;
        end
    end

    // Program ROMs are served from the REAL controller path (sdram16 +
    // behavioral chip), so CPU fetches see true latency and the actual
    // handshake - the instant-ack arrays this bench used before could not
    // expose controller-level bugs.
    logic [17:1] mrom_addr;  logic mrom_req;  logic [15:0] mrom_q;  logic mrom_ack;
    logic [17:1] srom_addr;  logic srom_req;  logic [15:0] srom_q;  logic srom_ack;

    // video <-> main wiring
    logic [11:0] vram_addr;  logic [15:0] vram_din, vram_q;  logic [1:0] vram_we;
    logic [11:0] sprram_addr; logic [15:0] sprram_din, sprram_q; logic [1:0] sprram_we;
    logic [5:0]  pal_addr;   logic [8:0]  pal_din;  logic pal_we;
    logic hsync_pulse, vsync30, vblank;

    // SDRAM path for sprite fetches
    wire [15:0] sdq;
    wire [12:0] sda;
    wire [1:0]  sdba;
    wire        sdml, sdmh, sdcs, sdras, sdcas, sdwen, sdcke, sdclko;
    wire [24:4] sd_baddr;  wire sd_brd, sd_bready;  wire [127:0] sd_bdata;
    wire [24:0] sd_addr;   wire [7:0] sd_din;
    wire        sd_we, sd_rd, sd_ready;
    wire [15:0] sd_dout16;
    wire [13:0] spr_fetch_addr;
    wire        spr_fetch_req, spr_fetch_done;
    wire [127:0] spr_fetch_data;

    sdram16 sdram16 (
        .init(1'b0), .clk(clk),
        .SDRAM_DQ(sdq), .SDRAM_A(sda), .SDRAM_DQML(sdml), .SDRAM_DQMH(sdmh),
        .SDRAM_BA(sdba), .SDRAM_nCS(sdcs), .SDRAM_nWE(sdwen),
        .SDRAM_nRAS(sdras), .SDRAM_nCAS(sdcas), .SDRAM_CKE(sdcke), .SDRAM_CLK(sdclko),
        .addr(sd_addr), .dout(), .dout16(sd_dout16),
        .baddr(sd_baddr), .brd(sd_brd), .bdata(sd_bdata), .bready(sd_bready),
        .din(sd_din), .we(sd_we), .rd(sd_rd), .ready(sd_ready)
    );
    sdram_model sdram_chip (
        .clk(clk), .dq(sdq), .a(sda), .ba(sdba), .dqml(sdml), .dqmh(sdmh),
        .cs_n(sdcs), .ras_n(sdras), .cas_n(sdcas), .we_n(sdwen), .cke(sdcke)
    );
    rom_server rom_srv (
        .clk(clk), .reset(reset),
        .sd_addr(sd_addr), .sd_din(sd_din), .sd_we(sd_we), .sd_rd(sd_rd),
        .sd_dout16(sd_dout16), .sd_ready(sd_ready),
        .dl_active(1'b0), .dl_addr('0), .dl_data('0), .dl_wr(1'b0),
        .spr_baddr(21'h9000 + {7'b0, spr_fetch_addr}),
        .spr_req(spr_fetch_req), .spr_data(spr_fetch_data), .spr_done(spr_fetch_done),
        .sd_baddr(sd_baddr), .sd_brd(sd_brd), .sd_bdata(sd_bdata), .sd_bready(sd_bready),
        .rd0_addr(mrom_addr), .rd0_req(mrom_req), .rd0_q(mrom_q), .rd0_done(mrom_ack),
        .rd1_addr(srom_addr), .rd1_req(srom_req), .rd1_q(srom_q), .rd1_done(srom_ack)
    );
    initial $readmemh("sdram_init.hex", sdram_chip.mem);

    mcr68_video video (
        .clk(clk), .ce_pix(ce_pix),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .gfx_load_addr('0), .gfx_load_data('0), .gfx_load_we(1'b0),
        .spr_fetch_addr(spr_fetch_addr), .spr_fetch_req(spr_fetch_req),
        .spr_fetch_data(spr_fetch_data), .spr_fetch_done(spr_fetch_done),
        .r(r), .g(g), .b(b), .hs(hs), .vs(vs), .de(de),
        .vsync30(vsync30), .hsync_pulse(hsync_pulse), .vblank(vblank), .field_o()
    );

    mcr68_main main_board (
        .clk(clk), .phi1(m_phi1), .phi2(m_phi2), .reset(reset),
        .rom_addr(mrom_addr), .rom_req(mrom_req), .rom_q(mrom_q), .rom_ack(mrom_ack),
        .in0(in0), .in1(in1), .dsw(dsw), .snd_status(snd_status),
        .ctrl(ctrl),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .hsync_pulse(hsync_pulse), .vsync30(vsync30), .field(video.field),
        .watchdog_expired(wdt)
    );

    // Sounds Good, wired to the control latch like the real PCB:
    // bits 3:0 data, bit 4 strobe, bit 5 = /RESET (low = hold in reset)
    audio_cond audio_cond (.clk(clk), .dac(dac), .snd(pcm));

    sounds_good snd (
        .clk(clk), .phi1(s_phi1), .phi2(s_phi2),
        .reset(reset | ~ctrl[5]),
        .cmd_data(ctrl[3:0]), .cmd_strobe(ctrl[4]), .status(snd_status),
        .rom_addr(srom_addr), .rom_req(srom_req), .rom_q(srom_q), .rom_ack(srom_ack),
        .dac(dac)
    );

endmodule
