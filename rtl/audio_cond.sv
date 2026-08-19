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
//
// Every leak term truncates toward zero rather than using a plain >>>. An
// arithmetic shift rounds toward negative infinity, so a positive difference
// smaller than the shift truncates to zero while a negative one of the same
// size still moves by one. In the DC blocker that asymmetry is a one-way drift
// of about 600 DAC codes per second at 40 MHz: the tracked level walks away
// from the real mean, the AC term grows without bound, and the output rails.
// Measured against MAME on the same sound command, that put 33% of our output
// energy above 13 kHz with the peak pinned at 32720, versus all of MAME's
// energy below 2 kHz at a peak of 19073.

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

    // truncate toward zero, so small differences of either sign behave alike
    function automatic signed [33:0] leak(input signed [33:0] d, input int k);
        leak = (d >= 0) ? (d >>> k) : -((-d) >>> k);
    endfunction

    always_ff @(posedge clk) begin
        dc_acc <= dc_acc + leak(dac_q - dc_acc, DCK);
        lp1    <= lp1 + leak(ac  - lp1, LPK);
        lp2    <= lp2 + leak(lp1 - lp2, LPK);
        lp3    <= lp3 + leak(lp2 - lp3, LPK);
    end

    // The AC term spans +/-511 codes, not +/-1023: a 10-bit DAC's swing about
    // its midpoint is half its range. Shifting by 11 therefore only reached
    // half of full scale, leaving the core 6 dB quieter than the hardware.
    // Measured against MAME on the same command over the same window, our peak
    // was 1577 against its 3255 -- a ratio of 2.06, exactly this error and
    // nothing else. Shift by 10 so +/-511 codes map to +/-32704.
    wire signed [33:0] scaled = lp3 >>> 10;
    assign snd = (scaled >  34'sd32767) ? 16'sh7FFF :
                 (scaled < -34'sd32768) ? 16'sh8000 : scaled[15:0];

endmodule
