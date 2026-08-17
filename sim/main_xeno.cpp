// Full-machine harness: run N frames, dump selected frames as PPM.
#include "Vtb_xeno.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <set>
#include <string>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* tb = new Vtb_xeno;

    int frames_to_run = 240;                 // 60 Hz display frames (4s)
    std::set<int> dump = {600, 900, 1100, 1200, 1300, 1400, 1500, 1650};
    if (argc > 1) frames_to_run = atoi(argv[1]);

    tb->in0 = 0xffff;                        // nothing pressed (active low)
    tb->in1 = 0xffff;
    tb->dsw = 0xff3f;                        // factory defaults, difficulty medium

    tb->reset = 1;
    for (int i = 0; i < 128; i++) { tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval(); }
    tb->reset = 0;

    // clock-rate self-check: phi1 pulses and bus cycles over 4M clks (100ms)
    {
        int nphi = 0, nbus = 0, la2 = 0;
        for (int i = 0; i < 4'000'000; i++) {
            tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval();
            if (tb->dbg_phi1) nphi++;
            if (tb->dbg_as && !la2) nbus++;
            la2 = tb->dbg_as;
        }
        printf("calib: phi1=%.3f MHz, bus=%.0f cyc/s avg %.1f CPU-cycles/bus\n",
               nphi / 100000.0, nbus * 10.0, (double)nphi / (nbus ? nbus : 1));
    }

    static uint8_t fb[480][512][3];
    int frame = 0, x = 0, y = 0, last_vs = 0, last_de = 0;
    uint16_t last_ctrl = 0;
    int64_t t = 0;
    uint32_t ring[64] = {0}; int rpos = 0;
    int last_as = 0, last_493 = 0, n493 = 0, niack = 0;

    while (frame < frames_to_run) {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        t++;
        if (tb->dbg_as && !last_as) {
            ring[rpos] = tb->dbg_addr | (tb->dbg_iack ? 0x80000000u : 0);
            rpos = (rpos + 1) & 63;
            if (tb->dbg_iack) niack++;
        }
        last_as = tb->dbg_as;
        if (tb->dbg_irq493 && !last_493) n493++;
        last_493 = tb->dbg_irq493;
        static int last_kick = 0; static int64_t kick_t[8]; static int kick_n = 0;
        if (tb->dbg_wdt_kick && !last_kick) { kick_t[kick_n++ & 7] = t; }
        last_kick = tb->dbg_wdt_kick;
        if (tb->wdt) {
            printf("  last kicks (ms before death): ");
            for (int k = 0; k < 8; k++)
                printf("%.1f ", (t - kick_t[(kick_n + k) & 7]) / 40000.0);
            printf("\n");
        }
        if (!(t & 1)) continue;              // sample at ce_pix rate
        if (tb->de) {
            if (!last_de) { /* line start */ }
            if (x < 512 && y < 480) {
                fb[y][x][0] = tb->r; fb[y][x][1] = tb->g; fb[y][x][2] = tb->b;
            }
            x++;
        } else if (last_de) { x = 0; y++; }
        if (tb->ctrl != last_ctrl) {
            printf("[f%3d] ctrl=%04x\n", frame, tb->ctrl);
            last_ctrl = tb->ctrl;
        }
        if (tb->wdt) {
            printf("WATCHDOG EXPIRED at frame %d\n", frame);
            printf("  palw=%u vramw=%u irq493=%d ptm=%d n493=%d niack=%d\n",
                   tb->dbg_palw, tb->dbg_vramw, tb->dbg_irq493, tb->dbg_ptm_irq,
                   n493, niack);
            printf("  last 64 bus cycles (oldest first):\n");
            for (int k = 0; k < 64; k++) {
                uint32_t v = ring[(rpos + k) & 63];
                printf("   %06x%s", v & 0xffffff, (v & 0x80000000u) ? "*" : " ");
                if ((k & 7) == 7) printf("\n");
            }
            // trace the next 64 bus cycles to see where the CPU is stuck
            int cyc = 0, la = 0;
            for (int64_t i = 0; i < 100000 && cyc < 64; i++) {
                tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval();
                if (tb->dbg_as && !la) {
                    printf("  stuck[%2d] addr=%06x%s\n", cyc, tb->dbg_addr,
                           tb->dbg_iack ? " IACK" : "");
                    cyc++;
                }
                la = tb->dbg_as;
            }
            break;
        }
        if (tb->vs && !last_vs) {
            // scripted inputs: coin at f440, fire button at f480 to start
            uint16_t in0 = 0xffff;
            if (frame >= 440 && frame < 450) in0 &= ~0x0001;   // COIN1
            if (frame >= 480 && frame < 490) in0 &= ~0x1000;   // P1 BUTTON1
            if (frame >= 560 && frame < 570) in0 &= ~0x1000;   // confirm character
            tb->in0 = in0;
            if (dump.count(frame)) {
                char name[64];
                snprintf(name, sizeof name, "frame_%03d.ppm", frame);
                FILE* f = fopen(name, "wb");
                fprintf(f, "P6\n512 480\n255\n");
                fwrite(fb, 1, sizeof fb, f);
                fclose(f);
                printf("dumped %s\n", name);
            }
            frame++; y = 0; x = 0;
            if (frame % 30 == 0) {
                printf("  ...frame %d n493=%d niack=%d palw=%u vramw=%u ptm=%d\n",
                       frame, n493, niack, tb->dbg_palw, tb->dbg_vramw, tb->dbg_ptm_irq);
                fflush(stdout);
            }
        }
        last_vs = tb->vs; last_de = tb->de;
    }
    delete tb;
    return 0;
}
