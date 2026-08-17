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

    // program ROMs
    logic [15:0] mrom [0:131071];
    logic [15:0] srom [0:131071];
    initial begin
        $readmemh("xeno_main.hex", mrom);
        $readmemh("xeno_snd.hex", srom);
    end
    logic [17:1] mrom_addr;  logic mrom_req;
    logic [17:1] srom_addr;  logic srom_req;
    wire  [15:0] mrom_q = mrom[mrom_addr];
    wire  [15:0] srom_q = srom[srom_addr];

    // video <-> main wiring
    logic [11:0] vram_addr;  logic [15:0] vram_din, vram_q;  logic [1:0] vram_we;
    logic [11:0] sprram_addr; logic [15:0] sprram_din, sprram_q; logic [1:0] sprram_we;
    logic [5:0]  pal_addr;   logic [8:0]  pal_din;  logic pal_we;
    logic hsync_pulse, vsync30, vblank;

    mcr68_video video (
        .clk(clk), .ce_pix(ce_pix),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .gfx_load_addr('0), .gfx_load_data('0), .gfx_load_we(1'b0),
        .r(r), .g(g), .b(b), .hs(hs), .vs(vs), .de(de),
        .vsync30(vsync30), .hsync_pulse(hsync_pulse), .vblank(vblank)
    );

    mcr68_main main_board (
        .clk(clk), .phi1(m_phi1), .phi2(m_phi2), .reset(reset),
        .rom_addr(mrom_addr), .rom_req(mrom_req), .rom_q(mrom_q), .rom_ack(mrom_req),
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
    sounds_good snd (
        .clk(clk), .phi1(s_phi1), .phi2(s_phi2),
        .reset(reset | ~ctrl[5]),
        .cmd_data(ctrl[3:0]), .cmd_strobe(ctrl[4]), .status(snd_status),
        .rom_addr(srom_addr), .rom_req(srom_req), .rom_q(srom_q), .rom_ack(srom_req),
        .dac(dac)
    );

endmodule
