// Drive a sine of known amplitude through the Pocket's filter chain and report
// the gain, so we can tell whether the core's output level is being amplified
// into the saturating output stage.
#include "Vtb_audio.h"
#include "verilated.h"
#include <cstdio>
#include <cmath>
#include <cstdint>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* tb = new Vtb_audio;
    const double FCLK = 50000000.0;      // audio_mclk domain
    const double FSIG = 1000.0;          // 1 kHz test tone
    tb->reset = 1; tb->core_in = 0;
    for (int i = 0; i < 100; i++) { tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval(); }
    tb->reset = 0;

    for (double amp : {1000.0, 3000.0, 7000.0, 16000.0}) {
        int32_t peak = 0;
        // settle, then measure
        const long TOTAL = 4000000;
        for (long i = 0; i < TOTAL; i++) {
            double t = i / FCLK;
            int16_t s = (int16_t)lround(amp * sin(2.0 * M_PI * FSIG * t));
            tb->core_in = (uint16_t)s;
            tb->clk = 0; tb->eval();
            tb->clk = 1; tb->eval();
            if (i > TOTAL / 2) {
                int16_t o = (int16_t)tb->out_l;
                if (abs(o) > peak) peak = abs(o);
            }
        }
        printf("in peak %6.0f -> out peak %6d   gain %.2fx%s\n",
               amp, peak, peak / amp, peak >= 32700 ? "   <-- SATURATED" : "");
        fflush(stdout);
    }
    delete tb;
    return 0;
}
