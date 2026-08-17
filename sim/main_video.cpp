// Capture the third full frame from the frozen-state video bench.
#include "Vtb_video.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* tb = new Vtb_video;
    static uint8_t fb[480][512][3];
    int frame = 0, x = 0, y = 0, last_vs = 0, last_de = 0;
    int64_t t = 0;
    while (frame < 3) {
        tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval(); t++;
        if (t & 1) continue;
        if (tb->de) {
            if (x < 512 && y < 480) {
                fb[y][x][0] = tb->r; fb[y][x][1] = tb->g; fb[y][x][2] = tb->b;
            }
            x++;
        } else if (last_de) { x = 0; y++; }
        if (tb->vs && !last_vs) { frame++; x = 0; y = 0; }
        last_vs = tb->vs; last_de = tb->de;
    }
    FILE* f = fopen("frozen_frame.ppm", "wb");
    fprintf(f, "P6\n512 480\n255\n");
    fwrite(fb, 1, sizeof fb, f);
    fclose(f);
    printf("wrote frozen_frame.ppm\n");
    delete tb;
    return 0;
}
