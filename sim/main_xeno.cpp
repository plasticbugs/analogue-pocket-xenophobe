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

    while (frame < frames_to_run) {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        t++;
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
        if (tb->wdt) { printf("WATCHDOG EXPIRED at frame %d\n", frame); break; }
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
            if (frame % 60 == 0) { printf("  ...frame %d\n", frame); fflush(stdout); }
        }
        last_vs = tb->vs; last_de = tb->de;
    }
    delete tb;
    return 0;
}
