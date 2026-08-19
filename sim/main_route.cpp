// Exhaustive check of player_route: for every selection, every pad bundle must
// reach exactly the intended station, and each pad's coin must follow it.
#include "Vplayer_route.h"
#include "verilated.h"
#include <cstdio>

int fails = 0;
static void expect(const char* what, int got, int want) {
    if (got != want) { printf("FAIL %s: got %d want %d\n", what, got, want); fails++; }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* t = new Vplayer_route;
    // station order per selection: which pad (1,2,3) drives left, centre, right
    const int expect_pad[3][3] = {
        {1, 2, 3},   // sel 0: pad1 left
        {3, 1, 2},   // sel 1: pad1 centre
        {2, 3, 1},   // sel 2: pad1 right
    };
    for (int sel = 0; sel < 3; sel++) {
        for (int pad = 1; pad <= 3; pad++) {
            // drive a value unique to this pad, zero on the others
            int v = 0x11 * pad;
            t->pos_sel = sel;
            t->pad1 = (pad == 1) ? v : 0;
            t->pad2 = (pad == 2) ? v : 0;
            t->pad3 = (pad == 3) ? v : 0;
            t->coin1 = (pad == 1);
            t->coin2 = (pad == 2);
            t->coin3 = (pad == 3);
            t->eval();
            const int st[3]  = {t->st_l, t->st_c, t->st_r};
            const int cn[3]  = {t->cn_l, t->cn_c, t->cn_r};
            for (int station = 0; station < 3; station++) {
                bool mine = (expect_pad[sel][station] == pad);
                char buf[64];
                snprintf(buf, sizeof buf, "sel%d pad%d station%d ctl", sel, pad, station);
                expect(buf, st[station], mine ? v : 0);
                snprintf(buf, sizeof buf, "sel%d pad%d station%d coin", sel, pad, station);
                expect(buf, cn[station], mine ? 1 : 0);
            }
        }
    }
    // out-of-range selection must behave as the default, not latch
    t->pos_sel = 3; t->pad1 = 0x7F; t->pad2 = 0; t->pad3 = 0; t->eval();
    expect("sel3 falls back to left", t->st_l, 0x7F);

    printf(fails ? "ROUTE TEST FAILED (%d)\n" : "ROUTE TEST PASSED\n", fails);
    delete t;
    return fails ? 1 : 0;
}
