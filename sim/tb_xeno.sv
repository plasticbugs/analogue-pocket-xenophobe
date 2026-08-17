// Full-machine bench: main board + video, real ROMs, sound board stubbed
// (snd status toggles so the main program's sound watchdog stays happy).
`timescale 1ns/1ns

module tb_xeno (
    input  logic clk,             // 40 MHz
    input  logic reset,
    input  logic [15:0] in0,      // active-low switches
    input  logic [15:0] in1,
    input  logic [15:0] dsw,
    output logic [7:0] r, g, b,
    output logic hs, vs, de,
    output logic [15:0] ctrl,
    output logic wdt,
    output logic [23:0] dbg_addr,
    output logic dbg_as, dbg_irq493, dbg_ptm_irq, dbg_iack,
    output logic [15:0] dbg_palw, dbg_vramw
);

    // pixel enable 20 MHz
    logic ce_div = 0;
    always_ff @(posedge clk) ce_div <= ~ce_div;
    wire ce_pix = ce_div;

    // main CPU phi enables at 7.7238 MHz via fractional accumulator
    // K = 2*7.7238/40 * 2^16 = 25310
    logic [16:0] acc = 0;
    logic        phi_tog = 0;
    logic        phi1, phi2;
    always_ff @(posedge clk) begin
        {phi1, phi2} <= 2'b00;
        acc <= {1'b0, acc[15:0]} + 17'd25310;
        if (acc[16]) begin
            phi_tog <= ~phi_tog;
            if (phi_tog) phi2 <= 1'b1; else phi1 <= 1'b1;
        end
    end

    // program ROM 128K x 16
    logic [15:0] rom [0:131071];
    initial $readmemh("xeno_main.hex", rom);
    logic [17:1] rom_addr;
    logic        rom_req, rom_ack;
    logic [15:0] rom_q;
    always_ff @(posedge clk) begin
        rom_q   <= rom[rom_addr];
        rom_ack <= rom_req;
    end

    // sound board stub: status toggles at ~2 Hz-ish
    logic [23:0] st_cnt;
    always_ff @(posedge clk) st_cnt <= st_cnt + 1'd1;
    wire snd_status = st_cnt[23];

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
        .clk(clk), .phi1(phi1), .phi2(phi2), .reset(reset),
        .rom_addr(rom_addr), .rom_req(rom_req), .rom_q(rom_q), .rom_ack(rom_ack),
        .in0(in0), .in1(in1), .dsw(dsw), .snd_status(snd_status),
        .ctrl(ctrl),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .hsync_pulse(hsync_pulse), .vsync30(vsync30), .field(video.field),
        .watchdog_expired(wdt)
    );

    assign dbg_addr    = {main_board.cpu_addr, 1'b0};
    assign dbg_as      = ~main_board.as_n;
    assign dbg_irq493  = main_board.irq493;
    assign dbg_ptm_irq = main_board.ptm_irq;
    assign dbg_iack    = main_board.iack;
    always_ff @(posedge clk) begin
        if (reset) begin dbg_palw <= '0; dbg_vramw <= '0; end
        else begin
            if (pal_we) dbg_palw <= dbg_palw + 1'd1;
            if (|vram_we) dbg_vramw <= dbg_vramw + 1'd1;
        end
    end

endmodule
