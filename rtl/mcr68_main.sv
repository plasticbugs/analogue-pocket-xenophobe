// MCR-68k main board: 68000 @ 7.7238 MHz, 16KB work RAM, 6840 PTM,
// control latch, input ports, watchdog, and the "493" IRQ1 generator.
//
// Memory map (verified from game code, see docs/hardware.md):
//   000000-03FFFF ROM (external via rom_* handshake)
//   060000-063FFF work RAM
//   070000-070FFF video RAM        (071000-071FFF also RAM per MAME)
//   080000-080FFF sprite RAM
//   090000-09007F palette (write only)
//   0A0000-0A000F 6840 PTM (even bytes)
//   0B0000-0BFFFF watchdog
//   0C0000-0CFFFF control latch: [3:0] snd data, [4] snd strobe, [5] snd /reset
//   0D0000 IN0 / 0E0000 IN1 / 0F0000 DSW
//
// Interrupts: IPL0 = 493 (asserted TIMING_LINES display lines before the
// 30 Hz vblank, held for 2 display lines), IPL1 = PTM IRQ. Autovectored.

module mcr68_main (
    input  logic        clk,
    input  logic        phi1,
    input  logic        phi2,
    input  logic        reset,

    // program ROM
    output logic [17:1] rom_addr,
    output logic        rom_req,
    input  logic [15:0] rom_q,
    input  logic        rom_ack,

    // inputs (active low buttons)
    input  logic [15:0] in0,        // bit 4 replaced by snd_status internally
    input  logic [15:0] in1,
    input  logic [15:0] dsw,
    input  logic        snd_status,

    // control latch -> sound board + coin counters
    output logic [15:0] ctrl,

    // video module ports
    output logic [11:0] vram_addr,
    output logic [15:0] vram_din,
    output logic [1:0]  vram_we,
    input  logic [15:0] vram_q,
    output logic [11:0] sprram_addr,
    output logic [15:0] sprram_din,
    output logic [1:0]  sprram_we,
    input  logic [15:0] sprram_q,
    output logic [5:0]  pal_addr,
    output logic [8:0]  pal_din,
    output logic        pal_we,

    // frame timing from video
    input  logic        hsync_pulse,   // per display line (60 Hz raster)
    input  logic        vsync30,       // pulse at 30 Hz game vblank
    input  logic        field,         // which 60 Hz frame of the 30 Hz pair

    output logic        watchdog_expired,

    // bring-up diagnostics
    output logic        dbg_wdt_kick,
    output logic        dbg_irq493,
    output logic        dbg_ptm_irq,
    output logic        dbg_halted,      // CPU took a double fault
    output logic        dbg_bus_stuck,   // bus cycle without DTACK for ages
    output logic [23:1] dbg_stuck_addr,  // the address it died on
    output logic        dbg_unmapped,    // touched an undecoded address
    output logic [17:1] dbg_fault_pc     // last ROM fetch before that
);

    // ---- CPU ----
    logic [23:1] cpu_addr;
    logic [15:0] cpu_dout, cpu_din;
    logic        as_n, uds_n, lds_n, rw_n, dtack_n, vpa_n;
    logic        fc0, fc1, fc2, e_clk;
    logic        ipl0_n, ipl1_n;

    fx68k cpu (
        .clk(clk), .HALTn(1'b1),
        .extReset(reset), .pwrUp(reset),
        .enPhi1(phi1), .enPhi2(phi2),
        .eRWn(rw_n), .ASn(as_n), .LDSn(lds_n), .UDSn(uds_n),
        .E(e_clk), .VMAn(),
        .FC0(fc0), .FC1(fc1), .FC2(fc2),
        .BGn(), .oRESETn(),
        .DTACKn(dtack_n), .VPAn(vpa_n), .BERRn(1'b1),
        .BRn(1'b1), .BGACKn(1'b1),
        .IPL0n(ipl0_n), .IPL1n(ipl1_n), .IPL2n(1'b1),
        .iEdb(cpu_din), .oEdb(cpu_dout), .eab(cpu_addr),
        .oHALTEDn(cpu_haltedn)
    );
    logic cpu_haltedn;

    // Bus-hang detector: a 68000 that stops fetching is nearly always waiting
    // on DTACK. Latch the offending address the first time a cycle runs long.
    logic [12:0] stuck_cnt;
    always_ff @(posedge clk) begin
        if (reset) begin
            stuck_cnt <= '0; dbg_bus_stuck <= 1'b0; dbg_stuck_addr <= '0;
        end else begin
            if (bus_cycle & dtack_n) stuck_cnt <= stuck_cnt + 1'd1;
            else stuck_cnt <= '0;
            if (stuck_cnt == 13'h1FFE && !dbg_bus_stuck) begin
                dbg_bus_stuck  <= 1'b1;
                dbg_stuck_addr <= cpu_addr;
            end
        end
    end
    assign dbg_halted = ~cpu_haltedn;

    // E tick for the PTM (rising edge of E)
    logic e_q, e_tick;
    always_ff @(posedge clk) begin
        e_q <= e_clk;
        e_tick <= e_clk & ~e_q;
    end

    wire bus_cycle = ~as_n & (~uds_n | ~lds_n);
    wire iack      = fc0 & fc1 & fc2 & ~as_n;
    wire [19:1] a  = cpu_addr[19:1];

    wire sel_rom  = bus_cycle & ~iack & (cpu_addr[23:18] == 6'b000000);
    // NB: the address PAL decodes whole 64K blocks; RAM/VRAM mirror through
    // their block (the 6840-multitask context restore reads past 0x63FFF and
    // relies on the 0x64000 mirror answering).
    wire sel_ram  = bus_cycle & ~iack & (a[19:16] == 4'h6);             // 60000-6FFFF
    wire sel_vram = bus_cycle & ~iack & (a[19:16] == 4'h7);             // 70000-7FFFF
    wire sel_spr  = bus_cycle & ~iack & (a[19:16] == 4'h8);             // 80000-8FFFF
    wire sel_pal  = bus_cycle & ~iack & (a[19:16] == 4'h9);
    wire sel_ptm  = bus_cycle & ~iack & (a[19:16] == 4'hA);
    wire sel_wdt  = bus_cycle & ~iack & (a[19:16] == 4'hB);
    wire sel_ctl  = bus_cycle & ~iack & (a[19:16] == 4'hC);
    wire sel_in0  = bus_cycle & ~iack & (a[19:16] == 4'hD);
    wire sel_in1  = bus_cycle & ~iack & (a[19:16] == 4'hE);
    wire sel_dsw  = bus_cycle & ~iack & (a[19:16] == 4'hF);

    // ---- work RAM 8K x 16 ----
    logic [1:0][7:0] ram [0:8191];
    logic [15:0] ram_q;
    always_ff @(posedge clk) begin
        if (sel_ram & ~rw_n) begin
            if (~uds_n) ram[a[13:1]][1] <= cpu_dout[15:8];
            if (~lds_n) ram[a[13:1]][0] <= cpu_dout[7:0];
        end
        ram_q <= ram[a[13:1]];
    end

    // ---- video ports ----
    assign vram_addr   = a[12:1];
    assign vram_din    = cpu_dout;
    assign vram_we     = {2{sel_vram & ~rw_n & vram_stb}} & {~uds_n, ~lds_n};
    assign sprram_addr = a[12:1];
    assign sprram_din  = cpu_dout;
    assign sprram_we   = {2{sel_spr & ~rw_n & vram_stb}} & {~uds_n, ~lds_n};
    assign pal_addr    = a[6:1];
    assign pal_din     = cpu_dout[8:0];
    assign pal_we      = sel_pal & ~rw_n & vram_stb;

    // single-cycle strobe per bus cycle for write-once semantics
    logic wr_q;
    wire  vram_stb = ~wr_q;
    always_ff @(posedge clk) wr_q <= bus_cycle & ~rw_n;

    // ---- PTM ----
    logic [7:0] ptm_dout;
    logic       ptm_irq, ptm_cs_q;
    wire ptm_stb = sel_ptm & ~ptm_cs_q;
    always_ff @(posedge clk) ptm_cs_q <= sel_ptm;

    ptm6840 ptm (
        .clk(clk), .reset(reset), .e_tick(e_tick),
        .c1(vsync30), .c2(1'b0), .c3(hsync_pulse & field),  // c3 = 30 Hz-rate hsync
        .cs(ptm_stb), .we(~rw_n), .rs(a[3:1]),
        .din(~uds_n ? cpu_dout[15:8] : cpu_dout[7:0]),
        .dout(ptm_dout), .irq(ptm_irq)
    );

    // ---- control latch ----
    always_ff @(posedge clk) begin
        if (reset) ctrl <= 16'h0020;              // sound /reset high (inactive)
        else if (sel_ctl & ~rw_n) ctrl <= cpu_dout;
    end

    // ---- watchdog: 8 game vblanks without a kick ----
    logic [3:0] wdt_cnt;
    always_ff @(posedge clk) begin
        if (reset) begin wdt_cnt <= '0; watchdog_expired <= 1'b0; end
        else begin
            if (sel_wdt & ~rw_n) wdt_cnt <= '0;
            else if (vsync30) begin
                if (wdt_cnt == 4'd8) watchdog_expired <= 1'b1;
                else wdt_cnt <= wdt_cnt + 1'd1;
            end
        end
    end

    // ---- 493 IRQ1 generator ----
    // Assert (256+16) E periods (~352us ~= 11 display lines) before the 30 Hz
    // vblank; deassert one 30 Hz scanline (2 display lines) later. line_cnt
    // counts the full 1050-display-line game frame (reset by vsync30).
    localparam GAME_LINES   = 1050;
    localparam LINES_BEFORE = 11;
    logic [10:0] line_cnt;
    logic        irq493;
    always_ff @(posedge clk) begin
        if (reset) begin line_cnt <= '0; irq493 <= 1'b0; end
        else begin
            if (vsync30) line_cnt <= '0;
            else if (hsync_pulse) line_cnt <= line_cnt + 1'd1;
            if (hsync_pulse) begin
                if (line_cnt == GAME_LINES - LINES_BEFORE - 1) irq493 <= 1'b1;
                if (line_cnt == GAME_LINES - LINES_BEFORE + 1) irq493 <= 1'b0;
            end
        end
    end

    assign dbg_wdt_kick = sel_wdt & ~rw_n;
    assign dbg_irq493   = irq493;
    assign dbg_ptm_irq  = ptm_irq;

    assign ipl0_n = ~irq493;
    assign ipl1_n = ~ptm_irq;

    // ---- ROM ----
    assign rom_addr = cpu_addr[17:1];
    assign rom_req  = sel_rom & rw_n;

    // ---- input ports ----
    wire [15:0] in0_eff = {in0[15:5], snd_status, in0[3:0]};

    // ---- bus routing / DTACK ----
    always_comb begin
        cpu_din = 16'hffff;
        if (sel_rom)       cpu_din = rom_q;
        else if (sel_ram)  cpu_din = ram_q;
        else if (sel_vram) cpu_din = vram_q;
        else if (sel_spr)  cpu_din = sprram_q;
        else if (sel_ptm)  cpu_din = {ptm_dout, ptm_dout};
        else if (sel_in0)  cpu_din = in0_eff;
        else if (sel_in1)  cpu_din = in1;
        else if (sel_dsw)  cpu_din = dsw;
        else if (sel_ctl)  cpu_din = ctrl;
    end

    // zero-wait-state DTACK: decode is stable during the cycle and BRAM data
    // arrives a clk later, well before the CPU's data latch point.
    //
    // The catch-all matters: the decode only covers 0x60000-0xFFFFF plus ROM,
    // so anything else (e.g. the stack running below RAM) previously got NO
    // acknowledge and wedged the CPU forever. Terminate those cycles instead -
    // reads return 0xFFFF, writes go nowhere, and the machine keeps running.
    wire sel_any  = sel_rom | sel_ram | sel_vram | sel_spr | sel_pal | sel_ptm
                  | sel_wdt | sel_ctl | sel_in0  | sel_in1 | sel_dsw;
    wire sel_none = bus_cycle & ~iack & ~sel_any;

    assign dtack_n = ~((sel_rom & rom_ack) | (sel_any & ~sel_rom) | sel_none);

    // Record where the program was when it first went off-map: the last
    // completed ROM fetch is effectively the PC.
    logic [17:1] last_fetch;
    always_ff @(posedge clk) begin
        if (sel_rom & rom_ack) last_fetch <= cpu_addr[17:1];
        if (reset) begin
            dbg_unmapped <= 1'b0;
            dbg_fault_pc <= '0;
        end else if (sel_none && !dbg_unmapped) begin
            dbg_unmapped <= 1'b1;
            dbg_fault_pc <= last_fetch;
        end
    end
    assign vpa_n   = ~iack;

endmodule
