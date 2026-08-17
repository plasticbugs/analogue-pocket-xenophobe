// Verilator harness for the Sounds Good board smoke test.
#include "Vtb_sounds_good.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* tb = new Vtb_sounds_good;

    uint64_t t = 0;
    auto tick = [&]() {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        t++;
    };

    // reset
    tb->reset = 1; tb->cmd_send = 0; tb->cmd = 0;
    for (int i = 0; i < 64; i++) tick();
    tb->reset = 0;

    // trace the first bus cycles: expect vector fetch @0,4 then code @0x1b4a
    {
        int cycles = 0, last_as = 0;
        for (int64_t i = 0; i < 20000 && cycles < 25; i++) {
            tick();
            if (tb->dbg_as && !last_as) {
                printf("bus[%2d] addr=%06x %c\n", cycles, tb->dbg_addr, tb->dbg_rw ? 'R' : 'W');
                cycles++;
            }
            last_as = tb->dbg_as;
        }
    }

    // run ~5s of emulated time: POST does ROM checksums + RAM test + long
    // delay loops before the synth main loop starts writing the DAC
    uint16_t last_dac = 0xffff; int dac_changes = 0;
    int last_status = -1; int status_changes = 0;
    const int64_t PHASE1 = 160'000'000;
    for (int64_t i = 0; i < PHASE1; i++) {
        tick();
        if (tb->dac != last_dac) {
            if (dac_changes < 8)
                printf("[%9llu] dac=%u\n", (unsigned long long)t, tb->dac);
            last_dac = tb->dac; dac_changes++;
        }
        if ((int)tb->status != last_status) {
            if (status_changes < 8)
                printf("[%9llu] status=%d\n", (unsigned long long)t, tb->status);
            last_status = tb->status; status_changes++;
        }
        if ((i & 0xffffff) == 0xffffff) {
            printf("  ...%llds emulated, %d dac changes\n",
                   (long long)(i / 32'000'000), dac_changes);
            fflush(stdout);
        }
    }
    printf("boot phase: %d dac changes, %d status changes\n", dac_changes, status_changes);

    // send a few command bytes and watch for a response
    for (uint8_t cmd : {0x01, 0x07, 0x12, 0x23}) {
        int before = dac_changes;
        tb->cmd = cmd; tb->cmd_send = 1; tick(); tb->cmd_send = 0;
        while (tb->busy) tick();
        for (int64_t i = 0; i < 8'000'000; i++) {  // ~250ms
            tick();
            if (tb->dac != last_dac) { last_dac = tb->dac; dac_changes++; }
        }
        printf("cmd 0x%02x: %d dac changes in 250ms window\n", cmd, dac_changes - before);
    }

    delete tb;
    return 0;
}
