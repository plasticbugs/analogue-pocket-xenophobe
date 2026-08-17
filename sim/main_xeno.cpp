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
    std::set<int> dump = {60, 120, 180, 240, 300, 360, 420, 479};
    if (argc > 1) frames_to_run = atoi(argv[1]);

    tb->in0 = 0xffff;                        // nothing pressed (active low)
    tb->in1 = 0xffff;
    tb->dsw = 0xff3f;                        // factory defaults, difficulty medium

    tb->reset = 1;
    for (int i = 0; i < 128; i++) { tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval(); }
    tb->reset = 0;

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
