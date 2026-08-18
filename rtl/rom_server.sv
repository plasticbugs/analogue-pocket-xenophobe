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
    typedef enum logic [1:0] {IDLE, RD_WAIT, BWAIT} st_e;
    st_e  st;
    logic cur;                        // which CPU client
    logic [8:0] wcnt;

    wire [24:0] a_main = {7'b0, rd0_addr, 1'b0};            // 0x00000..0x3FFFE
    wire [24:0] a_snd  = {6'b0, 1'b1, rd1_addr, 1'b0};      // 0x40000..0x7FFFE

    always_ff @(posedge clk) begin
        if (reset) begin
            st <= IDLE; sd_we <= 1'b0; sd_rd <= 1'b0; sd_brd <= 1'b0;
            rd0_done <= 1'b0; rd1_done <= 1'b0; spr_done <= 1'b0;
        end else begin
            if (!rd0_req) rd0_done <= 1'b0;
            if (!rd1_req) rd1_done <= 1'b0;
            if (!spr_req) spr_done <= 1'b0;

            if (dl_active) begin
                // loader owns the port: pass byte writes straight through
                sd_addr <= dl_addr;
                sd_din  <= dl_data;
                sd_we   <= dl_wr;
                sd_rd   <= 1'b0;
                st      <= IDLE;
            end else begin
                case (st)
                    IDLE: begin
                        sd_we <= 1'b0;
                        sd_rd <= 1'b0;
                        sd_brd <= 1'b0;
                        wcnt <= '0;
                        if (spr_req && !spr_done) begin
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
