// Conditions the Sounds Good DAC stream for the Pocket's audio output.
//
// Two things are required. The DAC is unsigned and its idle level is not
// midscale, so a slow leaky integrator removes the offset (a plain
// accumulator without the leak term wanders and overflows - which sounds
// like static). And the real board feeds the AD7533 through a three-stage
// LM359 low-pass around 5 kHz; reproducing that both matches the hardware's
// tone and stops the 48 kHz output stage from sampling a much wider band.
//
// Arithmetic is Q16 in 34-bit signed accumulators, so the DC shift has
// plenty of fractional headroom.

module audio_cond (
    input  logic               clk,
    input  logic        [9:0]  dac,     // unsigned DAC code
    output logic signed [15:0] snd      // signed PCM for the mixer
);
    localparam int DCK = 18;   // ~24 Hz DC blocker at 40 MHz
    localparam int LPK = 10;   // ~6 kHz per low-pass stage

    logic signed [33:0] dc_acc = '0;
    logic signed [33:0] lp1 = '0, lp2 = '0, lp3 = '0;

    wire signed [33:0] dac_q = $signed({8'd0, dac, 16'd0});   // Q16
    wire signed [33:0] ac    = dac_q - dc_acc;

    always_ff @(posedge clk) begin
        dc_acc <= dc_acc + ((dac_q - dc_acc) >>> DCK);
        lp1    <= lp1 + ((ac  - lp1) >>> LPK);
        lp2    <= lp2 + ((lp1 - lp2) >>> LPK);
        lp3    <= lp3 + ((lp2 - lp3) >>> LPK);
    end

    // Q16 value spans +/-1023; shift by 11 scales that to +/-32736.
    wire signed [33:0] scaled = lp3 >>> 11;
    assign snd = (scaled >  34'sd32767) ? 16'sh7FFF :
                 (scaled < -34'sd32768) ? 16'sh8000 : scaled[15:0];

endmodule
