// Xenophobe machine top: MCR-68000 main board + video + Sounds Good.
// Program ROM buses are exported so the platform top can serve them from
// SDRAM (hardware) or arrays (simulation). Graphics ROMs load through the
// gfx_load port into internal BRAM.
//
// Clocking: single clk (40 MHz). ce_pix = /2. CPU clock enables generated
// internally by fractional accumulators (main 7.7238 MHz, sound 8.0 MHz).

module xenophobe_core (
    input  logic        clk,           // 40 MHz
    input  logic        reset,

    // inputs, active-low (already mapped by the platform top)
    input  logic [15:0] in0,           // coins/service + P1 (bit 4 overridden by snd status)
    input  logic [15:0] in1,           // P2/P3
    input  logic [15:0] dsw,

    // program ROM buses (served externally; combinational ack allowed)
    output logic [17:1] main_rom_addr,
    output logic        main_rom_req,
    input  logic [15:0] main_rom_q,
    input  logic        main_rom_ack,
    output logic [17:1] snd_rom_addr,
    output logic        snd_rom_req,
    input  logic [15:0] snd_rom_q,
    input  logic        snd_rom_ack,

    // bg tile ROM load (during asset load)
    input  logic [18:0] gfx_load_addr,
    input  logic [7:0]  gfx_load_data,
    input  logic        gfx_load_we,

    // sprite row fetch channel (to rom_server / SDRAM)
    output logic [13:0] spr_fetch_addr,
    output logic        spr_fetch_req,
    input  logic [127:0] spr_fetch_data,
    input  logic        spr_fetch_done,

    // video out (512x480 @ 60 Hz progressive, 20 MHz dot via ce_pix)
    output logic [7:0]  r, g, b,
    output logic        hs, vs, de,

    // audio out: unsigned 10-bit DAC stream at system clock rate
    output logic [9:0]  audio_dac,

    output logic [15:0] control_word,  // coin counters etc. for the platform top
    output logic        watchdog_expired,

    // bring-up diagnostics: {pal_we, vram_we, spr_we, wdt_kick, irq493, ptm_irq}
    output logic [5:0]  dbg_strobes,
    output logic        dbg_halted,
    output logic        dbg_bus_stuck,
    output logic [23:1] dbg_stuck_addr,
    output logic        dbg_unmapped,
    output logic [17:1] dbg_fault_pc,
    output logic        dbg_spr_overrun,
    output logic [8:0]  dbg_spr_overrun_line,
    output logic [7:0]  dbg_spr_overrun_cnt,
    output logic        dbg_spr_wr_active
);

    // ---- pixel enable ----
    logic ce_div = 0;
    always_ff @(posedge clk) ce_div <= ~ce_div;
    wire ce_pix = ce_div;

    // ---- CPU clock enables (fractional accumulators, K = 2*f/40MHz * 2^16) ----
    logic [16:0] acc_m = 0;
    logic tog_m = 0, m_phi1, m_phi2;
    always_ff @(posedge clk) begin
        {m_phi1, m_phi2} <= 2'b00;
        acc_m <= {1'b0, acc_m[15:0]} + 17'd25310;   // 7.7238 MHz
        if (acc_m[16]) begin
            tog_m <= ~tog_m;
            if (tog_m) m_phi2 <= 1'b1; else m_phi1 <= 1'b1;
        end
    end
    logic [16:0] acc_s = 0;
    logic tog_s = 0, s_phi1, s_phi2;
    always_ff @(posedge clk) begin
        {s_phi1, s_phi2} <= 2'b00;
        acc_s <= {1'b0, acc_s[15:0]} + 17'd26214;   // 8.0 MHz
        if (acc_s[16]) begin
            tog_s <= ~tog_s;
            if (tog_s) s_phi2 <= 1'b1; else s_phi1 <= 1'b1;
        end
    end

    // ---- video ----
    logic [11:0] vram_addr;  logic [15:0] vram_din, vram_q;  logic [1:0] vram_we;
    logic [11:0] sprram_addr; logic [15:0] sprram_din, sprram_q; logic [1:0] sprram_we;
    logic [5:0]  pal_addr;   logic [8:0]  pal_din;  logic pal_we;
    logic hsync_pulse, vsync30, vblank, vid_field;
    logic snd_status;

    mcr68_video video (
        .clk(clk), .ce_pix(ce_pix),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .gfx_load_addr(gfx_load_addr), .gfx_load_data(gfx_load_data), .gfx_load_we(gfx_load_we),
        .spr_fetch_addr(spr_fetch_addr), .spr_fetch_req(spr_fetch_req),
        .spr_fetch_data(spr_fetch_data), .spr_fetch_done(spr_fetch_done),
        .r(r), .g(g), .b(b), .hs(hs), .vs(vs), .de(de),
        .vsync30(vsync30), .hsync_pulse(hsync_pulse), .vblank(vblank),
        .field_o(vid_field),
        .dbg_spr_overrun(dbg_spr_overrun),
        .dbg_spr_overrun_line(dbg_spr_overrun_line),
        .dbg_spr_overrun_cnt(dbg_spr_overrun_cnt),
        .dbg_spr_wr_active(dbg_spr_wr_active)
    );

    // ---- main board ----
    mcr68_main main_board (
        .clk(clk), .phi1(m_phi1), .phi2(m_phi2), .reset(reset),
        .rom_addr(main_rom_addr), .rom_req(main_rom_req),
        .rom_q(main_rom_q), .rom_ack(main_rom_ack),
        .in0(in0), .in1(in1), .dsw(dsw), .snd_status(snd_status),
        .ctrl(control_word),
        .vram_addr(vram_addr), .vram_din(vram_din), .vram_we(vram_we), .vram_q(vram_q),
        .sprram_addr(sprram_addr), .sprram_din(sprram_din), .sprram_we(sprram_we), .sprram_q(sprram_q),
        .pal_addr(pal_addr), .pal_din(pal_din), .pal_we(pal_we),
        .hsync_pulse(hsync_pulse), .vsync30(vsync30), .field(vid_field),
        .watchdog_expired(watchdog_expired),
        .dbg_wdt_kick(dbg_wdt_kick), .dbg_irq493(dbg_irq493), .dbg_ptm_irq(dbg_ptm_irq),
        .dbg_halted(dbg_halted), .dbg_bus_stuck(dbg_bus_stuck),
        .dbg_stuck_addr(dbg_stuck_addr),
        .dbg_unmapped(dbg_unmapped), .dbg_fault_pc(dbg_fault_pc)
    );

    logic dbg_wdt_kick, dbg_irq493, dbg_ptm_irq;
    assign dbg_strobes = {pal_we, |vram_we, |sprram_we,
                          dbg_wdt_kick, dbg_irq493, dbg_ptm_irq};

    // ---- Sounds Good ----
    sounds_good snd (
        .clk(clk), .phi1(s_phi1), .phi2(s_phi2),
        .reset(reset | ~control_word[5]),
        .cmd_data(control_word[3:0]), .cmd_strobe(control_word[4]),
        .status(snd_status),
        .rom_addr(snd_rom_addr), .rom_req(snd_rom_req),
        .rom_q(snd_rom_q), .rom_ack(snd_rom_ack),
        .dac(audio_dac)
    );

endmodule
