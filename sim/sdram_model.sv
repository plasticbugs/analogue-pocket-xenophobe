// Minimal behavioral SDR SDRAM (MT48LC16M16-ish) for simulation.
// Supports ACTIVE / READ (CL2, single or back-to-back) / WRITE (single,
// byte masks) / PRECHARGE / AUTO-REFRESH / LOAD MODE (ignored beyond CL).
// One bank open at a time is enough for our controller. 2M x 16 backing
// store (covers the 832KB ROM image with room to spare).
`timescale 1ns/1ns

module sdram_model (
    input  logic        clk,
    inout  wire  [15:0] dq,
    input  logic [12:0] a,
    input  logic [1:0]  ba,
    input  logic        dqml, dqmh,
    input  logic        cs_n, ras_n, cas_n, we_n,
    input  logic        cke
);
    logic [15:0] mem [0:2097151] /*verilator public_flat_rw*/;

    logic [12:0] row_open;
    logic [15:0] pipe_q1;
    logic        pipe_v1;

    wire [3:0] cmd = {cs_n, ras_n, cas_n, we_n};
    localparam CMD_ACT = 4'b0011, CMD_READ = 4'b0101, CMD_WRIT = 4'b0100;

    // CL2 read pipe: data driven 2 cycles after READ
    logic [15:0] dq_out;
    logic        dq_oe;
    assign dq = dq_oe ? dq_out : 16'hzzzz;

    wire [20:0] col_addr = {row_open[7:0], a[8:0]};  // see mapping note below

    // address mapping must mirror sdram16: row = addr[22:10], col = addr[9:1]
    // word index = {row, col} (bank ignored: single-bank use)
    wire [21:0] widx = {row_open[11:0], a[8:0]} & 22'h1FFFFF;

    always_ff @(posedge clk) begin
        // CL2: command on bus at N -> data driven during N+2
        dq_out <= pipe_q1;
        dq_oe  <= pipe_v1;
        pipe_v1 <= 1'b0;

        case (cmd)
            CMD_ACT:  row_open <= a;
            CMD_READ: begin
                pipe_q1 <= mem[widx];
                pipe_v1 <= 1'b1;
            end
            CMD_WRIT: begin
                if (!dqml) mem[widx][7:0]  <= dq[7:0];
                if (!dqmh) mem[widx][15:8] <= dq[15:8];
            end
            default: ;
        endcase
    end

endmodule
