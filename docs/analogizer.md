# The Analogizer

[Analogizer](https://github.com/RndMnkIII/Analogizer) is RndMnkIII's adapter
for the Pocket's cartridge slot. It gives analog video out of a VGA connector
(RGBS, RGsB, YPbPr, Y/C, and a scandoubled RGBHV) and takes native controllers
through SNAC adapters. Its wiki is the authority on the adapter itself:
[specifications](https://github.com/RndMnkIII/Analogizer/wiki/Analogizer-Specifications),
[how to configure it](https://github.com/RndMnkIII/Analogizer/wiki/Supported-Cores-and-How-to-Configure-Them).

This core supports it (`USE_ANALOGIZER = 1` in `core_top.sv`), added from
plasticbugs' `pocket-core-template` (its `docs/analogizer-retrofit.md`).
This page is what the player needs to know, how it is wired, and what has
been proven.

**The CRT gets 15 kHz 240p, not the cabinet's 480i.** This core draws
Xenophobe's 512 × 480 as a progressive 31.5 kHz frame for the Pocket's
screen. On a 15 kHz monitor that showed as two side-by-side copies with
the edges cut off (the first build, on a PVM), so the Analogizer now gets it
through a converter (`target/pocket/ana_15k.sv`): **progressive 240p at
15.72 kHz, 60 Hz**, each CRT line one of the game's line pairs, played out
at half the dot rate so the picture keeps its shape. No interlace, so no
flicker on a PVM. A 15 kHz PVM, arcade monitor or TV is the target; the
scandoubler modes turn it back into 31 kHz for a VGA monitor.

**Analogizer Lines** chooses how a pair becomes one line. **Blend** (the
default) averages the two, channel by channel, so nothing one line thin
vanishes and nothing flickers. **Sharp** shows the pair's even line,
unblended: crisper, but a detail drawn on odd lines only is lost.

## For the player

**Settings are in the core's own menu**, under the game's other options,
like RndMnkIII's own "Pocket Menu" Analogizer cores (the wiki's list calls the
other kind, which reads a shared `analogizer.bin`, "Analogizer File"; this core
does not read that file). The Pocket remembers them per
core.

| entry | options |
|---|---|
| Analogizer | Off (the default), On, On, Pocket off (the picture goes to the CRT only) |
| Analogizer Video | RGBS, RGsB, YPbPr, Y/C NTSC, Y/C PAL, Scandoubler, Scandoubler 25% / 50% / 75%, Scandoubler HQ2x |
| Analogizer Lines | Blend (the default), Sharp |
| SNAC Adapter | None, DB15, NES, SNES, PCE 2-button, PCE 6-button, PCE Multitap, DB15 Fast, SNES A,B<->X,Y, PSX Digital, PSX Digital Fast, PSX Analog, PSX Analog Fast |
| SNAC Assignment | the six below |
| Analogizer H Position | -26 to +15 dots (10 MHz dots, 100 ns each); + moves the picture right |
| Analogizer V Position | -16 to +3 lines; + moves the picture down |

With **Analogizer** off the core behaves exactly as it did without Analogizer
support. The adapter itself is set up as its wiki's
[How to use it](https://github.com/RndMnkIII/Analogizer/wiki/How-to-use-it%3F)
says: SNAC switch in position A, 5 V into its USB-C port, the SCART cable's
audio jack in the Pocket's headphone socket.

**Position.** The two sliders move the picture on the CRT, in the core's
own dots and lines, for a set whose picture sits off centre (the first one
tried with Moo Mesa showed it about 10 lines high). They move the syncs,
not the picture, so nothing is cropped and every mode follows; the size is
still the set's to adjust. 0 is the converter's timing, laid out like a
console's 240p (below), which a PVM set up for consoles centres. The
picture moves further up and left than down and right: the raster's
blanking has more room after its syncs than before them, as a console's
does, and a PVM's own H and V position controls cover the rest.

**Video.** 512 × 240 visible, 636 × 262 dots at 10 MHz: 15.72 kHz lines,
59.99 Hz frames (exactly the core's), progressive. Hsync is 47 dots (4.7 µs)
after a 15-dot front porch, with 62 dots of back porch; vsync is lines
243–245, after 3 lines of front porch, with 16 after it. The cabinet's own
monitor ran the same 512 × 480 as 15 kHz interlace at 30 frames a second;
this is that picture's lines in pairs, every pair every frame.

| mode | SOG switch | notes |
|---|---|---|
| RGBS | off | VGA-to-SCART or VGA-to-BNC: a PVM, an arcade monitor, a SCART TV |
| RGsB | on | R2/R3 adapters only |
| YPbPr | on | R2/R3 adapters only |
| Y/C NTSC, Y/C PAL | off | needs an active Y/C adapter on the VGA port |
| SC 0% / 25% / 50% / 75% / HQ2x | off | scandoubled for a VGA monitor: 31.4 kHz, 480 lines (each pair twice) |

"On, Pocket off" turns the Pocket's own picture black while the CRT keeps
it.

**Controllers.** SNAC pads (DB15, NES, SNES, PC Engine 2/6-button and
multitap, PlayStation) replace the Pocket's controls according to the
**SNAC Assignment** chosen in the menu:

| assignment | player 1 | player 2 | player 3 | player 4 |
|---|---|---|---|---|
| SNAC P1 → Pocket P1 | SNAC 1 | the Pocket's own controls | dock 3 | dock 4 |
| SNAC P1 → Pocket P2 | Pocket | SNAC 1 | dock 3 | dock 4 |
| SNAC P1,P2 → P1,P2 | SNAC 1 | SNAC 2 | dock 3 | dock 4 |
| SNAC P1,P2 → P2,P1 | SNAC 2 | SNAC 1 | dock 3 | dock 4 |
| SNAC P1,P2 → P3,P4 | Pocket | dock 2 | SNAC 1 | SNAC 2 |
| SNAC P1-P4 → P1-P4 | SNAC 1 | SNAC 2 | SNAC 3 | SNAC 4 |

A pad's buttons arrive as the Pocket's own (SNAC's A is the Pocket's A, and
so on): B fires, A jumps, X is the action button, Select is a coin. A
PlayStation pad in analog mode steers with its left stick. This core reads
two players: pad 1 goes to the station chosen with **Player Position** and
pad 2 to the next one, as without the adapter. The cabinet's third station
has no pad (it never had one on the Pocket either), so the "P3,P4" and
"P1-P4" assignments put nothing on it.

**Cart power is on for everyone.** `core.json` declares the cartridge adapter,
so the Pocket powers the slot whether or not an Analogizer is in it. Do not
leave a game cartridge in the slot while this core runs.

**Not tried on hardware yet**, with any monitor. What the bench proves is
listed under *What was measured* below. Send problems with the adapter itself
to the Analogizer project.

## Trying it on hardware, in this order

Each step's reading tells the next one where to look.

1. **Analogizer: Off** (the default). The core must play exactly as
   v1.1.3 did, on the Pocket's screen and controls. If not, the cart port
   is not idle: stop there.
2. **Analogizer On, Video RGBS, SNAC None**, into the 15 kHz monitor.
   Expected: one picture, the whole width, upright, steady (no roll, no
   bend at the top), 15.72 kHz / 60 Hz. Compare a still screen with
   **Analogizer Lines** on Blend and on Sharp: Sharp drops every other
   line of detail, Blend keeps a trace of it.
3. **The other modes**: RGsB and YPbPr (SOG switch on), Y/C, and a
   scandoubler mode on a VGA monitor.
4. **SNAC**: one pad, assignment "SNAC P1 -> P1"; the Pocket's own
   controls are then player 2.
5. **The menu's memory**: change Video, quit and reload; the setting and
   "Analogizer: On" should still be there, and changing one entry should
   leave the others alone.
6. **Position**: H and V Position move the picture, + right and down, and
   are kept across a reload. A value the slider shows that differs from
   the one set means the firmware is not reading 0xF7000004/8 back as
   written.

## For the developer

### The pieces

| file | what |
|---|---|
| `target/pocket/analogizer/` | RndMnkIII's `openFPGA_Pocket_Analogizer` and what it instantiates, **verbatim**, as the template carries it (MiraxPocket's copy). Its `analogizer.qip` is ours: only what is used. |
| `target/pocket/pocket_analogizer.sv` | the wrapper: pixel hand-over, sync positioning, Y/C constants, SNAC → controller words. The template's file, plus `SAME_CLK` (below). |
| `target/pocket/ana_15k.sv` | the 31 to 15 kHz converter (below): the core's 480 lines as 240p, Blend or Sharp, frame-locked. Core-specific. |
| `rtl/mcr68_video.sv`, `rtl/xenophobe_core.sv` | two outputs added for it, `hb`/`vb` (the blanks, registered with `de`, `hs` and `vs`) and `pix_ce` (the dot enable they change on). Nothing that draws changed; `tools/regress_video.sh` is pixel-exact before and after. |
| `target/pocket/core_top.sv` | `USE_ANALOGIZER`, the instance after the debug overlay, `key1..key4` into the `gamepad` helper in place of `cont1..4_key`, the bridge read at `0xF7xxxxxx`, the Pocket-screen blank, and the cart pins' idle levels when it is off. |
| `pkg/.../interact.json` | the entries above: ids 70–73, each a masked field of the word at `0xF7000000`; 74–75, signed sliders at `0xF7000004` and `0xF7000008`; and 76, "Analogizer Lines", bit 0 of the core's own modifier word at `0xF2000000` (`mod_sw0[0]`, which writes without resetting the game). 13 entries and 44 options, under the 68 options / 80 options-plus-entries the firmware is seen to load (`tools/check_json.py`). |
| `pkg/.../core.json` | `"cartridge_adapter": 0` (powers the slot; it was -1) |
| `sim/run_analogizer.sh` | the bench (below), at this core's raster at the top of `sim/tb_analogizer.sv` |
| `tools/check_json.py` | fails if an entry writes outside its mask, none sets the enable, a position slider is not signed within ±127, a data slot also writes `0xF7000000`, or the slot is not powered |

### The settings word

One 32-bit word at `0xF7000000`, the layout RndMnkIII's adapter module (1.4)
decodes. Each menu entry is a list with a mask that keeps every bit but its
own field (or fields), so the four entries share the word:

| bits | field | values |
|---|---|---|
| 4:0 | SNAC type | 0 none, 1 DB15, 2 NES, 3 SNES, 4 PCE 2-button, 5 PCE 6-button, 6 PCE multitap, 9 DB15 fast, 0xB SNES A/B↔X/Y, 0xC–0xF PS/2 keyboard (+ pad; not in the menu, the wrapper does not wire the keyboard out), 0x10/0x11 PSX digital (125/250 kHz), 0x12/0x13 PSX analog. 16 and up select the adapter's B wiring. |
| 5 | enable | 0: the port stays idle and nothing else applies |
| 9:6 | SNAC assignment | 0–5 as in the table above |
| 13:10 | video | 0 RGBS, 1 RGsB, 2 YPbPr, 3 Y/C NTSC, 4 Y/C PAL, 5–9 scandoubler 0/25/50/75%/HQ2x |
| 14 | blank the Pocket screen | |
| 15 | OSD on the Analogizer output | not used by this core; no menu entry |

**Read-back.** The word is written as a number (the adapter module is told
`bridge_endian_little = 1`, so it does not byte-swap it as it would a file),
and `pocket_analogizer` keeps its own copy to read back, combinationally.
The Pocket's bridge (`io_bridge_peripheral.sv`) samples read data four clocks
after it presents the address and pulses `bridge_rd` only afterwards; the
adapter module updates its read-back on that pulse, so it would hand back
the *previous* read's value. The firmware merges a masked entry by
reading the word back (Analogue's interact.json docs: every entry not
`writeonly` is read back every frame), so that stale value would wipe the
other fields: in the bench, choosing a video mode turned the Analogizer off. RndMnkIII's menu
cores (Gauntlet) read the word back the same way, from a register.

**Picture position.** Two more words, each a whole signed slider value
(no mask): `0xF7000004` horizontal in dots, + right, and `0xF7000008`
vertical in lines, + down. `pocket_analogizer` reads the low 8 bits and
reads both words back. The adapter module stores them in a table it never
reads (`config_mem`). They move the syncs, not the picture: hsync n dots
earlier puts the picture n dots right, vsync n lines earlier puts it n
lines down. Earlier is built as a line (or frame) less n later: each sync
is re-made from the source's own rising edge after a delay counted in
dots, as wide as the source's, with the line and frame measured from the
source's syncs; the vsync's delay is whole lines, so its edges keep their
place in the line. RGB and blanking go through one clock later with them,
and at 0 each sync passes straight through.

A re-made sync starts only once it has been off at least as long as it is
on. The adapter module's `sync_fix` decides each sync's polarity afresh
every period, by whether the signal was high longer than low. A jump
between settings in one write (one "large" slider step, or a value loaded
at start) can put the next pulse just after the last one ends, and that
period reads as active-low: csync turned inside out for a frame (a line,
for hsync). With the rule such a jump skips one pulse instead.

**The range is the converter's blanking.** Hsync is dots 527–573 of 636,
after a picture of 0–511: it can come 15 dots earlier before it meets the
picture. Later, the Y/C colour burst sets the limit: it ends 142 clocks
(35.5 dots) after hsync does, and at 26 dots later 144 clocks are left.
Vsync is lines 243–245 of 262, after a picture of 0–239: 3 lines earlier,
16 later. `sim/run_analogizer.sh` tries both ends of the range in
`interact.json` and fails if csync is low while a dot is drawn or the
picture starts inside the colour burst; one step further at each end, each
tried on its own (H +16, H -27, V +4, V -17), fails it.

### The 31 to 15 kHz converter

`target/pocket/ana_15k.sv`, between the core's picture and
`pocket_analogizer`, on `clk_sys`. The Pocket's own picture does not go
through it.

- **Pairs.** Output line j shows source lines 2j and 2j+1: the even line is
  held in a one-line buffer while the odd one arrives, and each dot of the
  pair goes into a two-pair buffer as `(a + b) >> 1` per 8-bit channel
  (Blend) or as the even line's (Sharp). The output reads it at 10 MHz, a
  dot every four clocks, half the source's rate.
- **Frame lock.** The output frame restarts 1,400 clocks after the source's
  first visible line starts, every frame. 525 source lines are 262.5 output
  lines; instead of interlacing the half line it is spread: every output
  line is 636 dots of four clocks, and 222 of the 262 add a fifth clock to
  their last dot, deep in the back porch (a Bresenham spread), so the 262
  lines add up to the source's 666,750 clocks exactly. Every line is 2544
  or 2545 clocks -- 25 ns of jitter, no odd line anywhere, the frame
  boundary included -- and each frame restart lands on the natural end of
  line 261, so no frame is dropped, repeated or torn, and vsync is on line
  243 every frame.
- **Timing margin.** At 1,400 clocks the output reads each dot at least
  130 clocks after it was written (measured; at 1,200 the bench fails),
  and by arithmetic some 1,700 before the pair two later overwrites it.
- **Cost.** One 512-dot line and two 512-dot pairs of 24 bits, in block
  RAM, and a few counters.

**The file scheme, not used here.** The adapter module 1.4 was written for
`analogizer.bin`, a file Pupdate and AnalogizerConfigurator write to
`/Assets/analogizer/common/`, loaded through a data slot at the same address.
It needs a data slot naming the file, a second platform id `analogizer`
that the slot's parameters point at, and the file on the card before the
adapter does anything. A player who has never heard of the file has an
Analogizer that stays dark, so this core uses the menu. A data slot at
`0xF7000000` would load the file over the menu's word; `tools/check_json.py`
refuses one.

### Clocks

`openFPGA_Pocket_Analogizer` runs its logic on `i_clk`, puts `video_clk` on the
cartridge pin that clocks the ADV7123, and assumes that is `i_clk` too. The
shipped Analogizer cores use 42.95–48 MHz.

The converter's dot is 10 MHz, four 40 MHz `clk_sys` clocks (five for one
back-porch dot on 222 lines a frame). The Analogizer runs on `clk_sys`
itself (40 MHz, the DAC clock on the cartridge pin too, at the scandoubler's
minimum of four clocks a dot), so the wrapper's `SAME_CLK` takes each pixel
directly, `PIX_LAG` = 1 clock after the dot enable: every output of
`ana_15k` is a register that changes on the enable, so one clock later is
inside the dot. `LINE_LEN` is 636. No PLL output or SDC change was needed.
(`SAME_CLK` was added for this core's first, 31 kHz build, whose 20 MHz
dot was too fast for the template's toggle hand-over to a 48 MHz clock.)

The Y/C encoder's subcarrier step and colour-burst window are computed in
integers from `CLK_HZ`. The reals used elsewhere lose the bits past 32 in some
tools, and MSX2's hand-typed NTSC step is a few counts off.

### Using SNAC in the game's inputs

`pocket_analogizer` outputs `key1..key4`, the Pocket's controller words with
SNAC pads put in place by the assignment. SNAC's bit order is the Pocket's
(0 up, 1 down, 2 left, 3 right, 4 A, 5 B, 6 X, 7 Y, 8 L1, 9 R1, … 14 select,
15 start). They feed the `gamepad` helper and the direct player-3/4 reads in
place of `cont1..4_key`. **Wherever a core reads `cont*_key` directly**
(players 3 and 4 often are), read `key*` instead, or SNAC will not reach it.

### What was measured

- `sim/run_ana15k.sh`: the converter on its own, fed the core's raster
  with a colour every dot and line can be told apart by, over six frames
  (Blend, Sharp, Blend again):
  - every output line j shows pair j's 512 dots in order, each exactly
    `(a + b) >> 1` per channel of lines 2j and 2j+1 (Blend) or exactly line
    2j (Sharp); 240 such lines a frame, 0 dots differing;
  - every hsync period 2544 or 2545 clocks, none other, frame boundary
    included, exactly 222 long ones a frame; hsync 188 clocks;
  - vsync rises once a frame, always on line 243, every period 666,750
    clocks, the source's; after the first, all 13 frame restarts land on
    the natural end of line 261;
  - a dot is read at least 130 clocks after it is written.
  With the restart 1,200 clocks after the source (too soon) the bench
  fails on 834 dots; without the fifth clock on long lines it fails on the
  line periods, the line count and the picture.
- `sim/run_analogizer.sh`: the core's raster through `ana_15k` into the
  wrapper and the vendored module (`SAME_CLK`, four clocks a dot), read at
  the cartridge pins as the DAC reads them.
  - With the menu at its defaults, every pin sits as on a core without the
    adapter, and the controller words pass through.
  - Every option of every Analogizer entry at 0xF7000000 in the package's
    `interact.json` (32), set as the firmware sets a masked entry, read
    back the word as the bridge samples it, merged and written: the word,
    the adapter's copy and the enable each followed.
  - RGBS: all 122,880 visible dots of a frame (512 × 240) reach the DAC
    pins, in raster order, as their top six bits per channel of the
    pair's blend, with 0 differing. Csync is one 47-dot pulse a line (259
    a frame outside vsync).
  - Scandoubler: 524 lines per frame (twice 262), frame 666,750 clocks, at
    half the line (1272 or 1273 clocks: a 2545-clock line doubles to both).
  - YPbPr and Y/C NTSC/PAL: no unknown on any pin for a frame.
  - All six SNAC assignments, the analog stick, and type "none" map as
    tabled.
  - Position, at both ends of the shipped sliders: read back as written,
    the settings word untouched; csync moves by exactly the dots and lines
    asked (+15,+3: csync to picture 496 clocks against 436, 22 lines
    against 19; -26,-16: 332 clocks, 3 lines), is never low while a dot is
    drawn, and leaves 144 clocks for the 142-clock colour burst; the
    scandoubler's lines and frame are unchanged; back at 0, csync is where
    it started. Jumps written just after a pulse (V +3 to -1, H +15 to
    -26, and V +3 / H +15 to 0) leave csync out of the picture for three
    frames. One step past each end, each on its own, fails it.
  - The blank bit, and enable off again returning the port to idle.
- Lint (Verilator -Wall, as the template's `sim/lint.sh` runs it): the
  wrapper and `ana_15k` are clean. The vendored files' warnings are
  dropped by path; their errors are not.
- `tools/regress_video.sh`: the seven frozen states (four captures and
  the three heaviest sprite lines) pixel-exact with the two new outputs in
  `mcr68_video.sv` (the converter changed nothing in `rtl/`, nor the
  Pocket's picture).
- Quartus: in the commits that added this and the converter.

**Not proven:** anything on hardware with the converter (the 31 kHz build
before it was seen on a PVM: two copies side by side, as expected of
31 kHz on a 15 kHz set); whether a PVM's horizontal hold minds the 25 ns
line jitter (it should not); and the SNAC serial protocols,
which are
the adapter module's and are forced at its outputs in the bench rather than
driven over the pins. The Y/C and YPbPr encodings have no reference to compare
against, only a run without unknowns.

### Turning it off

Set `USE_ANALOGIZER = 0` in `core_top.sv`, and take the six menu entries
out of `interact.json` and `cartridge_adapter` back to -1 in `core.json`.
Nothing in the PLL or SDC belongs to it.
