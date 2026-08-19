// Measure the gain of the Pocket's audio filter chain, which sits between the
// core's output and the I2S stage. Its output saturates, and attenuation is
// applied after it, so if it has gain the core's level cannot be turned down
// to escape the distortion.
`default_nettype none

module tb_audio (
    input  logic        clk,
    input  logic        reset,
    input  logic [15:0] core_in,
    output logic [15:0] out_l,
    output logic [15:0] out_r
);
    // same coefficients core_top passes through audio_mixer
    audio_filters dut (
        .clk       ( clk               ),
        .reset     ( reset             ),
        .att       ( 5'd0              ),   // no attenuation: measure raw gain
        .mix       ( 2'd0              ),
        .flt_rate  ( 32'd7056000       ),
        .cx        ( 40'd4258969       ),
        .cx0       ( 8'd3              ),
        .cx1       ( 8'd3              ),
        .cx2       ( 8'd1              ),
        .cy0       ( -24'd6216759      ),
        .cy1       ( 24'd6143386       ),
        .cy2       ( -24'd2023767      ),
        .is_signed ( 1'b1              ),
        .core_l    ( core_in           ),
        .core_r    ( core_in           ),
        .audio_l   ( out_l             ),
        .audio_r   ( out_r             )
    );
endmodule

`default_nettype wire
