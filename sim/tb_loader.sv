// Loader path bench: drives the real APF-style byte stream into
// rom_server -> sdram16 -> sdram_model, then reads back through the same
// client ports the CPUs and sprite engine use. This is the one path the
// other benches skip (they preload memory with $readmemh).
`timescale 1ns/1ns

module tb_loader (
    input  logic        clk,
    // loader stimulus
    input  logic        dl_active,
    input  logic [24:0] dl_addr,
    input  logic [7:0]  dl_data,
    input  logic        dl_wr,
    // CPU read clients
    input  logic [17:1] rd0_addr,
    input  logic        rd0_req,
    output logic [15:0] rd0_q,
    output logic        rd0_done,
    input  logic [17:1] rd1_addr,
    input  logic        rd1_req,
    output logic [15:0] rd1_q,
    output logic        rd1_done,
    // sprite burst client
    input  logic [13:0] spr_addr,
    input  logic        spr_req,
    output logic [127:0] spr_data,
    output logic        spr_done
);
    wire [15:0] dq;
    wire [12:0] a;
    wire [1:0]  ba;
    wire        dqml, dqmh, cs_n, ras_n, cas_n, we_n, cke, sclk;
    wire [24:0] sd_addr;  wire [7:0] sd_din;
    wire        sd_we, sd_rd, sd_ready;
    wire [15:0] sd_dout16;
    wire [24:4] sd_baddr;  wire sd_brd, sd_bready;  wire [127:0] sd_bdata;

    sdram16 sdram16 (
        .init(1'b0), .clk(clk),
        .SDRAM_DQ(dq), .SDRAM_A(a), .SDRAM_DQML(dqml), .SDRAM_DQMH(dqmh),
        .SDRAM_BA(ba), .SDRAM_nCS(cs_n), .SDRAM_nWE(we_n),
        .SDRAM_nRAS(ras_n), .SDRAM_nCAS(cas_n), .SDRAM_CKE(cke), .SDRAM_CLK(sclk),
        .addr(sd_addr), .dout(), .dout16(sd_dout16),
        .baddr(sd_baddr), .brd(sd_brd), .bdata(sd_bdata), .bready(sd_bready),
        .din(sd_din), .we(sd_we), .rd(sd_rd), .ready(sd_ready)
    );

    sdram_model chip (
        .clk(clk), .dq(dq), .a(a), .ba(ba), .dqml(dqml), .dqmh(dqmh),
        .cs_n(cs_n), .ras_n(ras_n), .cas_n(cas_n), .we_n(we_n), .cke(cke)
    );

    rom_server srv (
        .clk(clk), .reset(1'b0),
        .sd_addr(sd_addr), .sd_din(sd_din), .sd_we(sd_we), .sd_rd(sd_rd),
        .sd_dout16(sd_dout16), .sd_ready(sd_ready),
        .dl_active(dl_active), .dl_addr(dl_addr), .dl_data(dl_data), .dl_wr(dl_wr),
        .spr_baddr(21'h9000 + {7'b0, spr_addr}),
        .spr_req(spr_req), .spr_data(spr_data), .spr_done(spr_done),
        .sd_baddr(sd_baddr), .sd_brd(sd_brd), .sd_bdata(sd_bdata), .sd_bready(sd_bready),
        .rd0_addr(rd0_addr), .rd0_req(rd0_req), .rd0_q(rd0_q), .rd0_done(rd0_done),
        .rd1_addr(rd1_addr), .rd1_req(rd1_req), .rd1_q(rd1_q), .rd1_done(rd1_done)
    );
endmodule
