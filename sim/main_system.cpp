// Full-system harness: boots the machine, coins up, plays into gameplay.
// Captures frames (PPM) and the DAC audio stream (WAV, 48 kHz).
#include "Vtb_system.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <set>
#include <vector>

static void write_wav(const char* path, const std::vector<int16_t>& pcm, uint32_t rate) {
    FILE* f = fopen(path, "wb");
    uint32_t dlen = pcm.size() * 2, flen = 36 + dlen;
    uint16_t ch = 1, bits = 16, blk = 2, fmt = 1;
    uint32_t brate = rate * blk, fmtlen = 16;
    fwrite("RIFF", 4, 1, f); fwrite(&flen, 4, 1, f); fwrite("WAVE", 4, 1, f);
    fwrite("fmt ", 4, 1, f); fwrite(&fmtlen, 4, 1, f); fwrite(&fmt, 2, 1, f);
    fwrite(&ch, 2, 1, f); fwrite(&rate, 4, 1, f); fwrite(&brate, 4, 1, f);
    fwrite(&blk, 2, 1, f); fwrite(&bits, 2, 1, f);
    fwrite("data", 4, 1, f); fwrite(&dlen, 4, 1, f);
    fwrite(pcm.data(), 2, pcm.size(), f);
    fclose(f);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* tb = new Vtb_system;
    int frames_to_run = (argc > 1) ? atoi(argv[1]) : 900;
    std::set<int> dump = {600, 900, 1200};

    tb->in0 = 0xffff; tb->in1 = 0xffff; tb->dsw = 0xff3f;
    tb->reset = 1;
    for (int i = 0; i < 128; i++) { tb->clk = 0; tb->eval(); tb->clk = 1; tb->eval(); }
    tb->reset = 0;

    static uint8_t fb[480][512][3];
    int frame = 0, x = 0, y = 0, last_vs = 0, last_de = 0;
    uint16_t last_ctrl = 0;
    int64_t t = 0, acc = 0; int accn = 0;
    std::vector<int16_t> pcm;
    long dc_acc = 0; long dc_n = 0;

    while (frame < frames_to_run) {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        t++;
        // audio: average 40MHz DAC samples down to ~48kHz
        accn++;
        if (accn == 833) {                        // 40e6/833 = 48019 Hz
            pcm.push_back((int16_t)tb->pcm);      // already conditioned in RTL
            accn = 0;
        }
        if (!(t & 1)) continue;
        if (tb->de) {
            if (x < 512 && y < 480) {
                fb[y][x][0] = tb->r; fb[y][x][1] = tb->g; fb[y][x][2] = tb->b;
            }
            x++;
        } else if (last_de) { x = 0; y++; }
        if (tb->ctrl != last_ctrl && (tb->ctrl ^ last_ctrl) & 0x3f) {
            // log only sound-latch activity transitions occasionally
            last_ctrl = tb->ctrl;
        }
        if (tb->wdt) { printf("WATCHDOG EXPIRED at frame %d\n", frame); break; }
        if (tb->vs && !last_vs) {
            uint16_t in0 = 0xffff;
            if (frame >= 440 && frame < 450) in0 &= ~0x0001;
            if (frame >= 480 && frame < 490) in0 &= ~0x1000;
            if (frame >= 560 && frame < 570) in0 &= ~0x1000;
            tb->in0 = in0;
            if (dump.count(frame)) {
                char name[64];
                snprintf(name, sizeof name, "sys_frame_%04d.ppm", frame);
                FILE* f = fopen(name, "wb");
                fprintf(f, "P6\n512 480\n255\n");
                fwrite(fb, 1, sizeof fb, f);
                fclose(f);
                printf("dumped %s\n", name);
            }
            frame++; x = 0; y = 0;
            if (frame % 100 == 0) {
                printf("  ...frame %d status=%d pcm=%zu\n", frame, tb->snd_status, pcm.size());
                fflush(stdout);
            }
        }
        last_vs = tb->vs; last_de = tb->de;
    }
    write_wav("system_audio.wav", pcm, 48019);
    printf("wrote system_audio.wav (%zu samples, %.1fs)\n", pcm.size(), pcm.size()/48019.0);
    delete tb;
    return 0;
}
