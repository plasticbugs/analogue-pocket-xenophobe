// Bally Midway "Sounds Good" audio board.
//
// MC68000 @ 8 MHz, MC6821 PIA (alt register order: RS0=A2, RS1=A1, data on
// D[15:8]), AD7533 10-bit DAC fed by {PA[7:0], PB[7:6]}. Commands arrive from
// the main board as 4-bit nibbles on PB[3:0] with an (inverted) strobe on CA1;
// PIA IRQA|IRQB drives 68k level 4 (autovectored). PB4 returns board status.
//
// Address map (global mask 0x7FFFF, from PAL@U15 per MAME/board notes):
//   a18=0          : ROM 256KB (served externally via rom_* port)
//   a18:16 = 3'b110: PIA (even bytes)
//   a18:16 = 3'b111: RAM 4KB (mirrored)

module sounds_good (
    input  logic        clk,          // system clock
    input  logic        phi1,         // fx68k phase enables at 2x8MHz pattern
    input  logic        phi2,
    input  logic        reset,        // from main board control latch bit 5 (active high here)

    // command interface from main board control latch
    input  logic [3:0]  cmd_data,     // latch bits 3:0
    input  logic        cmd_strobe,   // latch bit 4
    output logic        status,       // -> main IN0 bit 4

    // program ROM (0x40000 bytes), external (SDRAM or sim memory)
    output logic [17:1] rom_addr,
    output logic        rom_req,
    input  logic [15:0] rom_q,
    input  logic        rom_ack,

    // 10-bit DAC value, unsigned
    output logic [9:0]  dac
);

    // ---- CPU ----
    logic [23:1] cpu_addr;
    logic [15:0] cpu_dout, cpu_din;
    logic        as_n, uds_n, lds_n, rw_n, dtack_n, vpa_n;
    logic        fc0, fc1, fc2;
    logic        ipl2_n;

    fx68k cpu (
        .clk(clk), .HALTn(1'b1),
        .extReset(reset), .pwrUp(reset),
        .enPhi1(phi1), .enPhi2(phi2),
        .eRWn(rw_n), .ASn(as_n), .LDSn(lds_n), .UDSn(uds_n),
        .E(), .VMAn(),
        .FC0(fc0), .FC1(fc1), .FC2(fc2),
        .BGn(), .oRESETn(), .oHALTEDn(),
        .DTACKn(dtack_n), .VPAn(vpa_n), .BERRn(1'b1),
        .BRn(1'b1), .BGACKn(1'b1),
        .IPL0n(1'b1), .IPL1n(1'b1), .IPL2n(ipl2_n),
        .iEdb(cpu_din), .oEdb(cpu_dout), .eab(cpu_addr)
    );

    wire bus_cycle = ~as_n & (~uds_n | ~lds_n);
    wire iack      = fc0 & fc1 & fc2 & ~as_n;          // interrupt acknowledge
    wire [18:1] a  = cpu_addr[18:1];

    wire sel_rom = bus_cycle & ~iack & ~a[18];
    wire sel_pia = bus_cycle & ~iack & (a[18:16] == 3'b110);
    wire sel_ram = bus_cycle & ~iack & (a[18:16] == 3'b111);

    // ---- RAM 4KB (2K x 16) ----
    logic [1:0][7:0] ram [0:2047];
    logic [15:0] ram_q;
    always_ff @(posedge clk) begin
        if (sel_ram & ~rw_n) begin
            if (~uds_n) ram[a[11:1]][1] <= cpu_dout[15:8];
            if (~lds_n) ram[a[11:1]][0] <= cpu_dout[7:0];
        end
        ram_q <= ram[a[11:1]];
    end

    // ---- PIA ----
    logic [7:0] pia_dout, pa_out, pb_out, ddra, ddrb;
    logic       irqa, irqb, pia_cs_q;

    // one write/read strobe per bus cycle
    wire pia_stb = sel_pia & ~uds_n & ~pia_cs_q;
    always_ff @(posedge clk) pia_cs_q <= sel_pia & ~uds_n;

    pia6821 pia (
        .clk(clk), .reset(reset),
        .cs(pia_stb), .we(~rw_n),
        .rs({a[1], a[2]}),                 // alt order: RS1=A1, RS0=A2
        .din(cpu_dout[15:8]), .dout(pia_dout),
        .pa_in(8'hff), .pa_out(pa_out), .ddra_o(ddra), .ca1(~cmd_strobe), .ca2(),
        .pb_in({4'hf, cmd_data}), .pb_out(pb_out), .ddrb_o(ddrb), .cb1(1'b1), .cb2(),
        .irqa(irqa), .irqb(irqb)
    );

    assign ipl2_n = ~(irqa | irqb);        // level 4
    assign dac    = {pa_out, pb_out[7:6]};
    assign status = pb_out[4] & ddrb[4];

    // ---- ROM ----
    assign rom_addr = a[17:1];
    assign rom_req  = sel_rom & rw_n;

    // ---- bus routing / DTACK ----
    always_comb begin
        cpu_din = 16'hffff;
        if (sel_rom)      cpu_din = rom_q;
        else if (sel_ram) cpu_din = ram_q;
        else if (sel_pia) cpu_din = {pia_dout, 8'hff};
    end

    // zero-wait-state DTACK for internal regions; ROM waits for ack
    assign dtack_n = ~((sel_rom & rom_ack) | sel_ram | sel_pia);
    assign vpa_n   = ~iack;                // autovector all interrupts

endmodule
