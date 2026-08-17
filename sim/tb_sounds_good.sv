// Sounds Good board smoke-test bench (Verilator).
// Boots the real sound ROM, releases reset, sends a command byte using the
// main-board nibble protocol, and reports DAC/status activity.
`timescale 1ns/1ns

module tb_sounds_good (
    input  logic clk,             // 32 MHz from C++ harness
    input  logic reset,
    input  logic [7:0] cmd,       // command byte to send
    input  logic cmd_send,        // pulse: transmit cmd via nibble protocol
    output logic [9:0] dac,
    output logic status,
    output logic busy,
    output logic [23:0] dbg_addr,
    output logic dbg_as,
    output logic dbg_rw
);

    // phi enables: 32 MHz / 4 -> 8 MHz CPU
    logic [1:0] phase = 0;
    always_ff @(posedge clk) phase <= phase + 2'd1;
    wire phi1 = (phase == 2'd0);
    wire phi2 = (phase == 2'd2);

    // ROM: 128K x 16
    logic [15:0] rom [0:131071];
    initial $readmemh("xeno_snd.hex", rom);
    logic [17:1] rom_addr;
    logic        rom_req, rom_ack;
    logic [15:0] rom_q;
    always_ff @(posedge clk) begin
        rom_q   <= rom[rom_addr];
        rom_ack <= rom_req;
    end

    // command transmitter replicating main-board timing (FUN_0000a476):
    // low nibble -> strobe high -> high nibble -> strobe low
    logic [3:0]  cmd_data;
    logic        cmd_strobe;
    logic [7:0]  send_byte;
    logic [15:0] tx_timer;
    logic [2:0]  tx_state;
    assign busy = (tx_state != 0);
    always_ff @(posedge clk) begin
        if (reset) begin
            tx_state <= 0; cmd_strobe <= 0; cmd_data <= 0;
        end else begin
            if (tx_timer != 0) tx_timer <= tx_timer - 1;
            case (tx_state)
                0: if (cmd_send) begin send_byte <= cmd; tx_state <= 1; end
                1: begin cmd_data <= send_byte[3:0]; tx_timer <= 200; tx_state <= 2; end
                2: if (tx_timer == 0) begin cmd_strobe <= 1; tx_timer <= 1600; tx_state <= 3; end
                3: if (tx_timer == 0) begin cmd_data <= send_byte[7:4]; tx_timer <= 200; tx_state <= 4; end
                4: if (tx_timer == 0) begin cmd_strobe <= 0; tx_state <= 0; end
            endcase
        end
    end

    sounds_good dut (
        .clk(clk), .phi1(phi1), .phi2(phi2), .reset(reset),
        .cmd_data(cmd_data), .cmd_strobe(cmd_strobe), .status(status),
        .rom_addr(rom_addr), .rom_req(rom_req), .rom_q(rom_q), .rom_ack(rom_ack),
        .dac(dac)
    );

    assign dbg_addr = {dut.cpu_addr, 1'b0};
    assign dbg_as   = ~dut.as_n;
    assign dbg_rw   = dut.rw_n;

endmodule
