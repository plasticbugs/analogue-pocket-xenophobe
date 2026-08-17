// MC6821 PIA — subset faithful model for the Sounds Good board.
//
// Register select is presented already-decoded (rs[1:0]); the board's
// "alternate ordering" (RS0=A2, RS1=A1) is handled by the address decoder,
// so rs here follows the datasheet: 0=PRA/DDRA, 1=CRA, 2=PRB/DDRB, 3=CRB.
//
// Implemented: ports A/B with DDR, CRA/CRB bit2 (DDR/data select), CA1/CB1
// edge-triggered IRQ flags (bit7) with edge polarity select (bit1), IRQ
// enables (bit0), CA2/CB2 as set/reset outputs (bits 5:4:3 = 11x).
// Not implemented: CA2/CB2 handshake/pulse input modes (unused on this board).

module pia6821 (
    input  logic        clk,
    input  logic        reset,
    input  logic        cs,
    input  logic        we,
    input  logic [1:0]  rs,
    input  logic [7:0]  din,
    output logic [7:0]  dout,

    input  logic [7:0]  pa_in,
    output logic [7:0]  pa_out,
    output logic [7:0]  ddra_o,     // 1 = driven output
    input  logic        ca1,
    output logic        ca2,

    input  logic [7:0]  pb_in,
    output logic [7:0]  pb_out,
    output logic [7:0]  ddrb_o,
    input  logic        cb1,
    output logic        cb2,

    output logic        irqa,
    output logic        irqb
);

    logic [7:0] ora, ddra, orb, ddrb;
    logic [5:0] cra, crb;           // control bits 5:0 (7:6 are the flags)
    logic       irqa1, irqb1;       // flag bits (CRx bit 7)
    logic       ca1_q, cb1_q;
    logic       ca2_r, cb2_r;

    assign pa_out = ora;
    assign pb_out = orb;
    assign ddra_o = ddra;
    assign ddrb_o = ddrb;
    assign ca2    = ca2_r;
    assign cb2    = cb2_r;
    assign irqa   = irqa1 & cra[0];
    assign irqb   = irqb1 & crb[0];

    // active edge: CRx bit1 = 1 -> rising, 0 -> falling
    wire ca1_edge = cra[1] ? (ca1 & ~ca1_q) : (~ca1 & ca1_q);
    wire cb1_edge = crb[1] ? (cb1 & ~cb1_q) : (~cb1 & cb1_q);

    always_comb begin
        case (rs)
            2'd0: dout = cra[2] ? ((pa_in & ~ddra) | (ora & ddra)) : ddra;
            2'd1: dout = {irqa1, 1'b0, cra};
            2'd2: dout = crb[2] ? ((pb_in & ~ddrb) | (orb & ddrb)) : ddrb;
            2'd3: dout = {irqb1, 1'b0, crb};
        endcase
    end

    always_ff @(posedge clk) begin
        ca1_q <= ca1;
        cb1_q <= cb1;

        if (ca1_edge) irqa1 <= 1'b1;
        if (cb1_edge) irqb1 <= 1'b1;

        if (cs) begin
            if (we) begin
                case (rs)
                    2'd0: if (cra[2]) ora <= din; else ddra <= din;
                    2'd1: begin
                        cra <= din[5:0];
                        // CA2 set/reset output mode: bits 5:4 = 11 -> CA2 = bit3
                        if (din[5] & din[4]) ca2_r <= din[3];
                    end
                    2'd2: if (crb[2]) orb <= din; else ddrb <= din;
                    2'd3: begin
                        crb <= din[5:0];
                        if (din[5] & din[4]) cb2_r <= din[3];
                    end
                endcase
            end else begin
                // reading the data port clears the port's IRQ flags
                if (rs == 2'd0 && cra[2]) irqa1 <= 1'b0;
                if (rs == 2'd2 && crb[2]) irqb1 <= 1'b0;
            end
        end

        if (reset) begin
            ora <= '0; ddra <= '0; orb <= '0; ddrb <= '0;
            cra <= '0; crb <= '0;
            irqa1 <= 1'b0; irqb1 <= 1'b0;
            ca2_r <= 1'b0; cb2_r <= 1'b0;
        end
    end

endmodule
