// MC6840 PTM — for the MCR-68k main board.
//
// Wiring on MCR-68k: E clock (CPU/10) as internal timebase, C1 = VSYNC pulse,
// C3 = HSYNC pulse, gates grounded (always enabled). Registers on even bytes;
// rs[2:0] = A[3:1]. IRQ output drives 68k IPL2.
//
// Implemented: 3 down-counters, CR1/CR2/CR3 (reg-0 banking via CR2 bit0),
// internal-E / external-Cx clock select, /8 prescaler on T3, continuous and
// single-shot modes, dual-8-bit mode, IRQ flags with read-status/read-timer
// clear protocol, timer outputs (not used on this board but kept for status).

module ptm6840 (
    input  logic        clk,
    input  logic        reset,
    input  logic        e_tick,      // one-clk pulse at E rate (772.38 kHz)
    input  logic        c1,          // external clock inputs (synchronous pulses ok)
    input  logic        c2,
    input  logic        c3,

    input  logic        cs,
    input  logic        we,
    input  logic [2:0]  rs,
    input  logic [7:0]  din,
    output logic [7:0]  dout,
    output logic        irq
);

    logic [7:0]  cr [3];             // CR1, CR2, CR3
    logic [15:0] latch [3];
    logic [15:0] cnt   [3];
    logic [2:0]  flag;               // per-timer IRQ flags
    logic [2:0]  flag_read;          // status was read while flag set (clear protocol)
    logic [7:0]  msb_buf;            // shared MSB buffer for latch writes
    logic [7:0]  lsb_buf [3];        // per-timer LSB read buffer
    logic [2:0]  c_q;                // edge detect on external clocks
    logic [2:0]  t3_pre;             // T3 /8 prescaler
    logic [2:0]  oneshot_done;

    wire  [2:0] c_in = {c3, c2, c1};
    wire        t1_reset = cr[0][0]; // CR1 bit0 = all-timer reset

    assign irq = |(flag & {cr[2][6], cr[1][6], cr[0][6]});

    // per-timer clock tick
    logic [2:0] tick;
    always_comb begin
        for (int i = 0; i < 3; i++) begin
            logic src;
            src = cr[i][1] ? e_tick : (c_in[i] & ~c_q[i]); // bit1: 1=E, 0=external
            tick[i] = src;
        end
        // T3 /8 prescaler (CR3 bit0)
        if (cr[2][0]) tick[2] = tick[2] & (t3_pre == 3'd7);
    end

    always_comb begin
        case (rs)
            3'd0: dout = 8'h00;
            3'd1: dout = {(|(flag & {cr[2][6], cr[1][6], cr[0][6]})), 4'b0, flag};
            3'd2: dout = cnt[0][15:8];
            3'd3: dout = lsb_buf[0];
            3'd4: dout = cnt[1][15:8];
            3'd5: dout = lsb_buf[1];
            3'd6: dout = cnt[2][15:8];
            3'd7: dout = lsb_buf[2];
        endcase
    end

    always_ff @(posedge clk) begin
        c_q <= c_in;
        if (cr[2][0]) begin
            // prescaler advances on raw T3 source
            if (cr[2][1] ? e_tick : (c_in[2] & ~c_q[2])) t3_pre <= t3_pre + 3'd1;
        end

        // counters
        for (int i = 0; i < 3; i++) begin
            if (t1_reset) begin
                cnt[i] <= latch[i];
                oneshot_done[i] <= 1'b0;
            end else if (tick[i]) begin
                if (cnt[i] == 16'd0) begin
                    cnt[i] <= latch[i];
                    // single-shot (CRx bit5=0,bit4=1): only first timeout counts
                    if (!(cr[i][4] & ~cr[i][5] & oneshot_done[i]))
                        flag[i] <= 1'b1;
                    if (cr[i][4] & ~cr[i][5]) oneshot_done[i] <= 1'b1;
                end else if (cr[i][2]) begin
                    // dual 8-bit mode: LSB counts, borrows into MSB
                    if (cnt[i][7:0] == 8'd0)
                        cnt[i] <= {cnt[i][15:8] - 8'd1, latch[i][7:0]};
                    else
                        cnt[i][7:0] <= cnt[i][7:0] - 8'd1;
                end else
                    cnt[i] <= cnt[i] - 16'd1;
            end
        end

        if (cs) begin
            if (we) begin
                case (rs)
                    3'd0: if (cr[1][0]) cr[0] <= din; else cr[2] <= din;
                    3'd1: cr[1] <= din;
                    3'd2: msb_buf <= din;
                    3'd3: begin
                        latch[0] <= {msb_buf, din};
                        flag[0] <= 1'b0;              // latch write clears T1 flag
                        if (!cr[0][4] || t1_reset) cnt[0] <= {msb_buf, din};
                    end
                    3'd4: msb_buf <= din;
                    3'd5: begin
                        latch[1] <= {msb_buf, din};
                        flag[1] <= 1'b0;
                        if (!cr[1][4] || t1_reset) cnt[1] <= {msb_buf, din};
                    end
                    3'd6: msb_buf <= din;
                    3'd7: begin
                        latch[2] <= {msb_buf, din};
                        flag[2] <= 1'b0;
                        if (!cr[2][4] || t1_reset) cnt[2] <= {msb_buf, din};
                    end
                endcase
                // CR1 reset bit transitions clear all flags and reload
                if (rs == 3'd0 && cr[1][0] && (din[0] ^ cr[0][0])) begin
                    flag <= '0;
                    oneshot_done <= '0;
                    for (int i = 0; i < 3; i++) cnt[i] <= latch[i];
                end
            end else begin
                case (rs)
                    3'd1: flag_read <= flag;      // status read arms the clear
                    3'd2: begin lsb_buf[0] <= cnt[0][7:0]; if (flag_read[0]) begin flag[0] <= 1'b0; flag_read[0] <= 1'b0; end end
                    3'd4: begin lsb_buf[1] <= cnt[1][7:0]; if (flag_read[1]) begin flag[1] <= 1'b0; flag_read[1] <= 1'b0; end end
                    3'd6: begin lsb_buf[2] <= cnt[2][7:0]; if (flag_read[2]) begin flag[2] <= 1'b0; flag_read[2] <= 1'b0; end end
                    default: ;
                endcase
            end
        end

        if (reset) begin
            cr[0] <= 8'h01;  // CR1 resets with bit0 set (timers held)
            cr[1] <= '0;
            cr[2] <= '0;
            flag <= '0; flag_read <= '0;
            t3_pre <= '0; oneshot_done <= '0;
            for (int i = 0; i < 3; i++) begin
                latch[i] <= 16'hffff;
                cnt[i]   <= 16'hffff;
            end
        end
    end

endmodule
