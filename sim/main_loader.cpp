// Drives the real ROM image through the loader path at APF pace, then reads
// it back through the CPU and sprite-burst ports and checks every value.
#include "Vtb_loader.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>
#include <vector>
#include <string>

static Vtb_loader* tb;
static int64_t tcyc = 0;

static void tick(int n = 1) {
    for (int i = 0; i < n; i++) {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        tcyc++;
    }
}

static std::vector<uint8_t> readfile(const std::string& p) {
    FILE* f = fopen(p.c_str(), "rb");
    if (!f) { printf("MISSING %s\n", p.c_str()); exit(1); }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> v(n);
    if (fread(v.data(), 1, n, f) != (size_t)n) { printf("short read\n"); exit(1); }
    fclose(f);
    return v;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    tb = new Vtb_loader;

    // SDRAM controller power-up sequence
    tb->dl_active = 0; tb->dl_wr = 0; tb->rd0_req = 0; tb->rd1_req = 0; tb->spr_req = 0;
    tick(13000);

    // ---- build the byte stream exactly as core_top maps it ----
    auto main_rom = readfile("../../build/xeno_main.bin");   // 256K
    auto snd_rom  = readfile("../../build/xeno_snd.bin");    // 256K
    std::vector<uint8_t> spr;
    for (const char* n : {"7","8","9","10"}) {
        auto b = readfile(std::string("../../romset/xeno_fg.") + n + "j");
        spr.insert(spr.end(), b.begin(), b.end());
    }

    // stream: CPU region verbatim, sprites at permuted sdram addresses
    struct W { uint32_t addr; uint8_t data; };
    std::vector<W> stream;
    // test a slice of each region (full 832KB at APF pace is needlessly slow)
    for (uint32_t i = 0; i < 0x2000; i++) stream.push_back({i, main_rom[i]});
    for (uint32_t i = 0; i < 0x2000; i++) stream.push_back({0x40000 + i, snd_rom[i]});
    // sprite codes 0..7 (all four banks, all rows) -> permuted destinations
    for (uint32_t bank = 0; bank < 4; bank++)
        for (uint32_t i = 0; i < 8 * 128; i++) {
            uint32_t code = (i >> 7) & 0x1ff, row = (i >> 2) & 0x1f, k = i & 3;
            uint32_t dst = 0x90000 + (code << 9) + (row << 4) + (bank << 2) + k;
            stream.push_back({dst, spr[bank * 0x10000 + i]});
        }

    printf("loading %zu bytes through the APF path...\n", stream.size());
    tb->dl_active = 1;
    for (auto& w : stream) {
        tb->dl_addr = w.addr;
        tb->dl_data = w.data;
        tb->dl_wr = 1;
        tick(4);                 // data_io holds ioctl_wr for DIO_HOLD cycles
        tb->dl_wr = 0;
        tick(36);                // APF pacing: ~one byte per microsecond
    }
    tb->dl_active = 0;
    tick(50);

    int errors = 0, checked = 0;

    auto rd0 = [&](uint32_t byte_addr) -> uint16_t {
        tb->rd0_addr = byte_addr >> 1;
        tb->rd0_req = 1;
        int guard = 0;
        while (!tb->rd0_done && guard++ < 2000) tick();
        uint16_t v = tb->rd0_q;
        tb->rd0_req = 0; tick(2);
        if (guard >= 2000) { printf("TIMEOUT main read @%06x\n", byte_addr); errors++; }
        return v;
    };
    auto rd1 = [&](uint32_t byte_addr) -> uint16_t {
        tb->rd1_addr = byte_addr >> 1;
        tb->rd1_req = 1;
        int guard = 0;
        while (!tb->rd1_done && guard++ < 2000) tick();
        uint16_t v = tb->rd1_q;
        tb->rd1_req = 0; tick(2);
        if (guard >= 2000) { printf("TIMEOUT snd read @%06x\n", byte_addr); errors++; }
        return v;
    };

    // ---- main CPU words (68k big-endian: even byte on D15:8) ----
    for (uint32_t a = 0; a < 0x2000; a += 2) {
        uint16_t exp = (main_rom[a] << 8) | main_rom[a + 1];
        uint16_t got = rd0(a);
        checked++;
        if (got != exp) {
            if (errors < 8) printf("MAIN  @%06x exp %04x got %04x\n", a, exp, got);
            errors++;
        }
    }
    // ---- sound CPU words ----
    for (uint32_t a = 0; a < 0x2000; a += 2) {
        uint16_t exp = (snd_rom[a] << 8) | snd_rom[a + 1];
        uint16_t got = rd1(a);
        checked++;
        if (got != exp) {
            if (errors < 8) printf("SND   @%06x exp %04x got %04x\n", a, exp, got);
            errors++;
        }
    }

    // ---- sprite row bursts: 16 bytes of {code,row} in bank/k order ----
    for (uint32_t code = 0; code < 8; code++) {
        for (uint32_t row = 0; row < 32; row++) {
            tb->spr_addr = (code << 5) | row;
            tb->spr_req = 1;
            int guard = 0;
            while (!tb->spr_done && guard++ < 4000) tick();
            if (guard >= 4000) { printf("TIMEOUT burst code %u row %u\n", code, row); errors++; }
            // spr_data words: word w = {odd byte, even byte}; byte i = bank*4+k
            uint8_t got[16];
            for (int w = 0; w < 8; w++) {
                uint32_t word = (uint32_t)(tb->spr_data[w / 2] >> ((w % 2) * 16)) & 0xffff;
                got[w * 2]     = word & 0xff;
                got[w * 2 + 1] = (word >> 8) & 0xff;
            }
            tb->spr_req = 0; tick(2);
            for (int bank = 0; bank < 4; bank++)
                for (int k = 0; k < 4; k++) {
                    uint8_t exp = spr[bank * 0x10000 + code * 128 + row * 4 + k];
                    checked++;
                    if (got[bank * 4 + k] != exp) {
                        if (errors < 8)
                            printf("SPR   code %u row %u bank %d k %d exp %02x got %02x\n",
                                   code, row, bank, k, exp, got[bank * 4 + k]);
                        errors++;
                    }
                }
        }
    }

    printf("checked %d values, %d errors\n", checked, errors);
    printf(errors ? "LOADER PATH FAILED\n" : "LOADER PATH OK\n");
    delete tb;
    return errors ? 1 : 0;
}
