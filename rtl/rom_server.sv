// Serves the two CPUs' program ROM reads (16-bit words) and the loader's
// byte writes through the single-user-port sdram16 controller.
//
// sdram16 semantics: rd/we are edge-detected; ready drops while busy and
// rises with dout valid. Reads are issued with addr[0]=0 and the full word
// taken from dout16. The controller stores bytes little-endian within the
// word (byte addr 0 -> bits 7:0); the 68k wants the even byte on D15:8,
// so words are swapped here.
//
// Client handshake matches the machine: req is level, done latches high
// until req drops.

module rom_server (
    input  logic        clk,
    input  logic        reset,

    // to sdram16 user port
    output logic [24:0] sd_addr,
    output logic [7:0]  sd_din,
    output logic        sd_we,
    output logic        sd_rd,
    input  logic [15:0] sd_dout16,
    input  logic        sd_ready,

    // loader (during download only)
    input  logic        dl_active,
    input  logic [24:0] dl_addr,       // sdram byte address (CPU + permuted sprites)
    input  logic [7:0]  dl_data,
    input  logic        dl_wr,         // pulse (held a few clks by data_io)

    // Debug: fetch sprite rows with eight ordinary single reads instead of a
    // burst. Single reads are proven correct (the whole-ROM verify uses them),
    // so this isolates the burst engine on hardware.
    input  logic        spr_single,

    // sprite row burst client (highest priority; 16-byte blocks)
    input  logic [24:4] spr_baddr,
    input  logic        spr_req,       // level; hold until done
    output logic [127:0] spr_data,
    output logic        spr_done,

    // sdram burst port passthrough
    output logic [24:4] sd_baddr,
    output logic        sd_brd,
    input  logic [127:0] sd_bdata,
    input  logic        sd_bready,

    // CPU clients
    input  logic [17:1] rd0_addr,      // main: bytes 0x00000-0x3FFFF
    input  logic        rd0_req,
    output logic [15:0] rd0_q,
    output logic        rd0_done,
    input  logic [17:1] rd1_addr,      // sound: bytes 0x40000-0x7FFFF
    input  logic        rd1_req,
    output logic [15:0] rd1_q,
    output logic        rd1_done
);

    // Handshake note: sdram16 has a same-address read cache - re-reading the
    // previously read word leaves `ready` HIGH and starts no bus cycle. Any
    // handshake that waits for a ready edge deadlocks there (and both CPUs
    // stall forever on DTACK). So this is level-based: pulse the request,
    // then accept data once ready is high and enough cycles have passed for
    // a real access to have cleared it. A timeout re-issues rather than hangs.
    typedef enum logic [1:0] {IDLE, RD_WAIT, BWAIT, SWAIT} st_e;
    st_e  st;
    logic cur;                        // which CPU client
    logic [8:0] wcnt;
    logic [2:0] sw_idx;          // word counter for the single-read fallback

    wire [24:0] a_main = {7'b0, rd0_addr, 1'b0};            // 0x00000..0x3FFFE
    wire [24:0] a_snd  = {6'b0, 1'b1, rd1_addr, 1'b0};      // 0x40000..0x7FFFE

    // Download writes arrive on a fixed cadence with no back-pressure, while
    // the controller's service time varies (a refresh can delay it). Passing
    // them straight through lets a pending write be overwritten in flight and
    // silently lost, so buffer them and issue only when the controller is
    // ready. 64 entries covers the worst refresh stall at the APF byte rate.
    logic [32:0] wfifo [0:63];
    logic [6:0]  wf_wp, wf_rp;
    wire         wf_empty = (wf_wp == wf_rp);
    logic        dlwr_q;
    logic        dl_st;
    logic [3:0]  dl_cnt;

    always_ff @(posedge clk) begin
        if (reset) begin
            st <= IDLE; sd_we <= 1'b0; sd_rd <= 1'b0; sd_brd <= 1'b0;
            rd0_done <= 1'b0; rd1_done <= 1'b0; spr_done <= 1'b0;
            wf_wp <= '0; wf_rp <= '0; dl_st <= 1'b0;
        end else begin
            if (!rd0_req) rd0_done <= 1'b0;
            if (!rd1_req) rd1_done <= 1'b0;
            if (!spr_req) spr_done <= 1'b0;

            dlwr_q <= dl_wr;
            if (dl_wr && !dlwr_q) begin
                wfifo[wf_wp[5:0]] <= {dl_addr, dl_data};
                wf_wp <= wf_wp + 1'd1;
            end

            if (dl_active || !wf_empty) begin
                // drain buffered download writes at the controller's pace
                sd_rd <= 1'b0;
                st    <= IDLE;
                if (dl_st == 1'b0) begin
                    sd_we <= 1'b0;
                    if (!wf_empty && sd_ready) begin
                        sd_addr <= wfifo[wf_rp[5:0]][32:8];
                        sd_din  <= wfifo[wf_rp[5:0]][7:0];
                        sd_we   <= 1'b1;
                        wf_rp   <= wf_rp + 1'd1;
                        dl_cnt  <= '0;
                        dl_st   <= 1'b1;
                    end
                end else begin
                    sd_we  <= 1'b0;
                    dl_cnt <= dl_cnt + 1'd1;
                    if (dl_cnt >= 4'd2 && sd_ready) dl_st <= 1'b0;
                end
            end else begin
                case (st)
                    IDLE: begin
                        sd_we <= 1'b0;
                        sd_rd <= 1'b0;
                        sd_brd <= 1'b0;
                        wcnt <= '0;
                        if (spr_req && !spr_done && spr_single) begin
                            // eight ordinary reads, word 0 first
                            sw_idx  <= '0;
                            sd_addr <= {spr_baddr, 4'd0};
                            sd_rd   <= 1'b1;
                            cur     <= 1'b0;
                            st      <= SWAIT;
                        end else if (spr_req && !spr_done) begin
                            sd_baddr <= spr_baddr;
                            sd_brd <= 1'b1;
                            st <= BWAIT;
                        end else if (rd0_req && !rd0_done) begin
                            cur <= 1'b0;
                            sd_addr <= a_main;
                            sd_rd <= 1'b1;
                            st <= RD_WAIT;
                        end else if (rd1_req && !rd1_done) begin
                            cur <= 1'b1;
                            sd_addr <= a_snd;
                            sd_rd <= 1'b1;
                            st <= RD_WAIT;
                        end
                    end

                    RD_WAIT: begin
                        sd_rd <= 1'b0;             // single-cycle request pulse
                        wcnt  <= wcnt + 1'd1;
                        if (wcnt >= 9'd2 && sd_ready) begin
                            // 68k byte order: even byte (sdram bits 7:0) -> D15:8
                            if (!cur) begin
                                rd0_q <= {sd_dout16[7:0], sd_dout16[15:8]};
                                rd0_done <= 1'b1;
                            end else begin
                                rd1_q <= {sd_dout16[7:0], sd_dout16[15:8]};
                                rd1_done <= 1'b1;
                            end
                            st <= IDLE;
                        end else if (wcnt == 9'd400) begin
                            sd_rd <= 1'b1;         // recovery: re-issue
                            wcnt  <= '0;
                        end
                    end

                    SWAIT: begin
                        sd_rd <= 1'b0;
                        wcnt  <= wcnt + 1'd1;
                        if (wcnt >= 9'd2 && sd_ready) begin
                            case (sw_idx)
                                3'd0: spr_data[ 15:  0] <= sd_dout16;
                                3'd1: spr_data[ 31: 16] <= sd_dout16;
                                3'd2: spr_data[ 47: 32] <= sd_dout16;
                                3'd3: spr_data[ 63: 48] <= sd_dout16;
                                3'd4: spr_data[ 79: 64] <= sd_dout16;
                                3'd5: spr_data[ 95: 80] <= sd_dout16;
                                3'd6: spr_data[111: 96] <= sd_dout16;
                                3'd7: spr_data[127:112] <= sd_dout16;
                            endcase
                            if (sw_idx == 3'd7) begin
                                spr_done <= 1'b1;
                                st <= IDLE;
                            end else begin
                                sw_idx  <= sw_idx + 1'd1;
                                sd_addr <= {spr_baddr, 4'd0} + {sw_idx + 3'd1, 1'b0};
                                sd_rd   <= 1'b1;
                                wcnt    <= '0;
                            end
                        end else if (wcnt == 9'd400) begin
                            sd_rd <= 1'b1;
                            wcnt  <= '0;
                        end
                    end

                    BWAIT: begin
                        sd_brd <= 1'b0;
                        wcnt   <= wcnt + 1'd1;
                        if (wcnt >= 9'd2 && sd_bready) begin
                            spr_data <= sd_bdata;
                            spr_done <= 1'b1;
                            st <= IDLE;
                        end else if (wcnt == 9'd400) begin
                            sd_brd <= 1'b1;
                            wcnt   <= '0;
                        end
                    end
                                endcase
            end
        end
    end

endmodule
