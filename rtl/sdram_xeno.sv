// Minimal SDR SDRAM controller for the Xenophobe core.
//
// Single clock (40 MHz, same domain as the machine - no CDC). CL2, burst 1,
// bank 0 only (the two 256KB CPU ROMs need 512KB total). Two read clients
// (main CPU, sound CPU) with level req / latched done handshake matching the
// 68k bus (done holds until req drops), plus a byte-wide write port for the
// APF loader. Fixed priority: refresh > loader > main > sound.
//
// A read takes 7 cycles; both 68000s' bus cycles are ~500ns+ so latency is
// invisible to the machine.

module sdram_xeno (
    input  logic        clk,           // 40 MHz
    input  logic        reset,

    // chip pins
    inout  wire  [15:0] dq,
    output logic [12:0] a,
    output logic [1:0]  ba,
    output logic        dqml, dqmh,
    output logic        cs_n, ras_n, cas_n, we_n,
    output logic        cke,

    // client 0: main CPU ROM (word address, 128K words at base 0)
    input  logic [17:1] rd0_addr,
    input  logic        rd0_req,       // level; hold until done
    output logic [15:0] rd0_q,
    output logic        rd0_done,      // holds high while req remains

    // client 1: sound CPU ROM (word address, 128K words at base 0x40000 bytes)
    input  logic [17:1] rd1_addr,
    input  logic        rd1_req,
    output logic [15:0] rd1_q,
    output logic        rd1_done,

    // loader write port (byte address into the 512KB CPU ROM region)
    input  logic [18:0] wr_addr,
    input  logic [7:0]  wr_data,
    input  logic        wr_req,        // one-clk pulse per byte
    output logic        ready          // init complete
);

    // commands {cs,ras,cas,we}
    localparam CMD_NOP  = 4'b0111, CMD_ACT = 4'b0011, CMD_READ = 4'b0101,
               CMD_WRIT = 4'b0100, CMD_PRE = 4'b0010, CMD_REF  = 4'b0001,
               CMD_MODE = 4'b0000;
    logic [3:0] cmd;
    assign {cs_n, ras_n, cas_n, we_n} = cmd;
    assign cke = 1'b1;
    assign ba  = 2'b00;

    // dq tristate
    logic [15:0] dq_out;
    logic        dq_oe;
    assign dq = dq_oe ? dq_out : 16'hzzzz;

    // loader write FIFO (bytes arrive at APF pace; a small FIFO decouples)
    logic [26:0] wfifo [0:15];         // {addr[18:0], data[7:0]}
    logic [3:0]  wf_wp, wf_rp;
    wire         wf_empty = (wf_wp == wf_rp);
    always_ff @(posedge clk) begin
        if (reset) wf_wp <= '0;
        else if (wr_req) begin
            wfifo[wf_wp] <= {wr_addr, wr_data};
            wf_wp <= wf_wp + 1'd1;
        end
    end

    // refresh cadence: 8192 refreshes / 64 ms -> every 312 cycles at 40 MHz
    logic [8:0] ref_cnt;
    logic       ref_due;

    typedef enum logic [3:0] {INIT_WAIT, INIT_PRE, INIT_REF1, INIT_REF2,
                              INIT_MODE, IDLE, ACT, RD, WAIT1, WAIT2, CAP,
                              WR, REFRESH, GAP} st_e;
    st_e st;
    logic [13:0] init_cnt;
    logic [2:0]  gapn;
    logic [1:0]  cur;                  // 0=rd0 1=rd1 2=write
    logic [23:0] cur_addr;             // word address into chip
    logic [7:0]  cur_wdata;
    logic        cur_wlane;            // 0 = high byte (even 68k byte)
    st_e         after_gap;

    // per-client done latches
    logic r0_pend, r1_pend;
    always_ff @(posedge clk) begin
        if (reset) begin
            st <= INIT_WAIT; init_cnt <= '0; ready <= 1'b0;
            rd0_done <= 1'b0; rd1_done <= 1'b0;
            wf_rp <= '0; ref_cnt <= '0; ref_due <= 1'b0;
            cmd <= CMD_NOP; dq_oe <= 1'b0;
        end else begin
            cmd <= CMD_NOP;
            dq_oe <= 1'b0;

            // refresh timer
            ref_cnt <= ref_cnt + 1'd1;
            if (ref_cnt == 9'd311) begin ref_cnt <= '0; ref_due <= 1'b1; end

            // done latches clear when req drops
            if (!rd0_req) rd0_done <= 1'b0;
            if (!rd1_req) rd1_done <= 1'b0;

            case (st)
                INIT_WAIT: begin
                    init_cnt <= init_cnt + 1'd1;
                    if (init_cnt == 14'd8100) st <= INIT_PRE;
                end
                INIT_PRE: begin
                    cmd <= CMD_PRE; a[10] <= 1'b1;
                    gapn <= 3'd2; after_gap <= INIT_REF1; st <= GAP;
                end
                INIT_REF1: begin
                    cmd <= CMD_REF;
                    gapn <= 3'd7; after_gap <= INIT_REF2; st <= GAP;
                end
                INIT_REF2: begin
                    cmd <= CMD_REF;
                    gapn <= 3'd7; after_gap <= INIT_MODE; st <= GAP;
                end
                INIT_MODE: begin
                    cmd <= CMD_MODE;
                    a <= 13'b000_0_00_010_0_000;   // CL2, burst 1, sequential
                    gapn <= 3'd2; after_gap <= IDLE; st <= GAP;
                    ready <= 1'b1;
                end
                IDLE: begin
                    if (ref_due) begin
                        cmd <= CMD_REF; ref_due <= 1'b0;
                        gapn <= 3'd7; after_gap <= IDLE; st <= GAP;
                    end else if (!wf_empty) begin
                        cur <= 2'd2;
                        cur_addr  <= {5'b0, wfifo[wf_rp][26:9]};      // byte addr -> word
                        cur_wdata <= wfifo[wf_rp][7:0];
                        cur_wlane <= wfifo[wf_rp][8];                 // addr bit 0
                        wf_rp <= wf_rp + 1'd1;
                        st <= ACT;
                    end else if (rd0_req && !rd0_done) begin
                        cur <= 2'd0;
                        cur_addr <= {7'b0, rd0_addr};                 // 0x00000 words
                        st <= ACT;
                    end else if (rd1_req && !rd1_done) begin
                        cur <= 2'd1;
                        cur_addr <= {7'b0, 1'b1, rd1_addr};           // +0x20000 words
                        st <= ACT;
                    end
                end
                ACT: begin
                    cmd <= CMD_ACT;
                    a <= cur_addr[22:10];
                    st <= (cur == 2'd2) ? WR : RD;
                end
                RD: begin                     // tRCD >= 1 cycle satisfied
                    cmd <= CMD_READ;
                    a <= {3'b001, cur_addr[9:0]};                     // A10 = auto-precharge
                    dqml <= 1'b0; dqmh <= 1'b0;
                    st <= WAIT1;
                end
                WAIT1: st <= WAIT2;           // CL2
                WAIT2: st <= CAP;
                CAP: begin
                    if (cur == 2'd0) begin rd0_q <= dq; rd0_done <= 1'b1; end
                    else             begin rd1_q <= dq; rd1_done <= 1'b1; end
                    gapn <= 3'd1; after_gap <= IDLE; st <= GAP;       // tRP after auto-pre
                end
                WR: begin
                    cmd <= CMD_WRIT;
                    a <= {3'b001, cur_addr[9:0]};
                    dq_oe <= 1'b1;
                    dq_out <= {cur_wdata, cur_wdata};
                    // 68k convention: even byte (lane 0) = D15:8
                    dqmh <= cur_wlane;        // mask high when writing odd byte
                    dqml <= ~cur_wlane;
                    gapn <= 3'd3; after_gap <= IDLE; st <= GAP;       // tWR + tRP
                end
                GAP: begin
                    dqml <= 1'b1; dqmh <= 1'b1;
                    if (gapn == 0) st <= after_gap;
                    else gapn <= gapn - 1'd1;
                end
                default: st <= IDLE;
            endcase
        end
    end

endmodule
