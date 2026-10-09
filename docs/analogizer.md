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

**Read this first: the signal is 31 kHz, not 15 kHz.** This core does not
make the cabinet's own 15 kHz interlaced picture. It draws Xenophobe's
512 × 480 as a progressive VGA-rate frame (31.5 kHz lines, 60 Hz), and that
is what the Analogizer sends. It needs a monitor that takes 31 kHz: a VGA or
multisync CRT (RGBS or RGsB, with composite sync), or a set that takes 480p
component (YPbPr). A 15 kHz TV, a 15 kHz arcade monitor or a 15 kHz-only PVM
will not sync to it. The Y/C and scandoubler modes are in the menu, like
every Analogizer core's, but give nothing useful here: Y/C at 31 kHz is
nothing a TV takes, and the scandoubler doubles 31 kHz to 63 kHz.

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
| SNAC Adapter | None, DB15, NES, SNES, PCE 2-button, PCE 6-button, PCE Multitap, DB15 Fast, SNES A,B<->X,Y, PSX Digital, PSX Digital Fast, PSX Analog, PSX Analog Fast |
| SNAC Assignment | the six below |
| Analogizer H Position | -43 to +32 dots (20 MHz dots, 50 ns each); + moves the picture right |
| Analogizer V Position | -32 to +10 lines; + moves the picture down |

With **Analogizer** off the core behaves exactly as it did without Analogizer
support. The adapter itself is set up as its wiki's
[How to use it](https://github.com/RndMnkIII/Analogizer/wiki/How-to-use-it%3F)
says: SNAC switch in position A, 5 V into its USB-C port, the SCART cable's
audio jack in the Pocket's headphone socket.

**Position.** The two sliders move the picture on the CRT, in the core's
own dots and lines, for a set whose picture sits off centre (the first one
tried with Moo Mesa showed it about 10 lines high). They move the syncs,
not the picture, so nothing is cropped and every mode follows; the size is
still the set's to adjust. 0 is the core's own timing. The picture can move
further up and left than down and right because the core's blanking has
more room after its syncs (43 dots, 32 lines) than before them (32 dots,
10 lines).

**Video.** 512 × 480 visible, 635 × 525 dots at 20 MHz: 31.50 kHz lines,
60.0 Hz frames, progressive, sync on hsync and vsync active high (the
adapter fixes polarity itself). The arcade board drew the same 512 × 480 as
15 kHz interlace at 30 frames a second; this core renders every line every
60 Hz frame instead, and the Analogizer gets that.

| mode | SOG switch | notes |
|---|---|---|
| RGBS | off | a 31 kHz monitor that takes composite sync on its H input (many VGA CRTs and multisync monitors) |
| RGsB | on | R2/R3 adapters only; a 31 kHz monitor that takes sync on green |
| YPbPr | on | R2/R3 adapters only; 480p component (an EDTV/HDTV set or a component scaler) |
| Y/C NTSC, Y/C PAL | off | not usable: no TV takes S-video at 31 kHz |
| SC 0% / 25% / 50% / 75% / HQ2x | off | not usable: doubles 31.5 kHz to 63 kHz |

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
2. **Analogizer On, Video RGBS, SNAC None**, into a 31 kHz monitor that
   takes composite sync. Expected: the same picture on the Pocket and the
   monitor, 31.5 kHz / 60 Hz. No picture: say whether the monitor reports a
   signal or "out of range" (out of range on a 15 kHz-only set is
   expected, not a fault).
3. **RGsB and YPbPr** (SOG switch on), on monitors that take them.
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
| `rtl/mcr68_video.sv`, `rtl/xenophobe_core.sv` | two outputs added for it, `hb`/`vb` (the blanks, registered with `de`, `hs` and `vs`) and `pix_ce` (the dot enable they change on). Nothing that draws changed; `tools/regress_video.sh` is pixel-exact before and after. |
| `target/pocket/core_top.sv` | `USE_ANALOGIZER`, the instance after the debug overlay, `key1..key4` into the `gamepad` helper in place of `cont1..4_key`, the bridge read at `0xF7xxxxxx`, the Pocket-screen blank, and the cart pins' idle levels when it is off. |
| `pkg/.../interact.json` | the entries above: ids 70–73, each a masked field of the word at `0xF7000000`, and 74–75, signed sliders at `0xF7000004` and `0xF7000008`. 12 entries in all. |
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

**The range is the core's blanking.** Hsync is dots 544–591 of 635, after
a picture of 0–511: it can come 32 dots earlier before it meets the picture
and 43 later before it runs into the next line's. Vsync is lines 490–492 of
525, after a picture of 0–479: 10 lines earlier, 32 later. The Y/C colour
burst, which other cores keep clear of the picture, does not fit in this
raster's 43-dot back porch even at 0, and Y/C is unusable at 31 kHz anyway,
so it does not limit the range here. `sim/run_analogizer.sh` tries both ends
of the range in `interact.json` and fails if csync is low while a dot is
drawn; one step further each way (-44/+33 dots, -33/+11 lines) fails it.

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

This core's dot is 20 MHz, one every other 40 MHz `clk_sys`. The template's
hand-over (a toggle taken across to a 48 MHz Analogizer clock two or three
of its clocks later) needs at least four Analogizer clocks a dot; at 2.4 the
next pixel would arrive before the last one was taken. So the Analogizer
runs on `clk_sys` itself (40 MHz, the DAC clock on the cartridge pin too)
and the wrapper's `SAME_CLK` takes each pixel directly, `PIX_LAG` = 1 clock
after the dot enable: every output of `mcr68_video` is a register that
changes on the enable, so one clock later is mid-dot. No PLL output or SDC
change was needed. The bench runs at exactly this: 2 clocks a dot.

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

- `sim/run_analogizer.sh`: the wrapper and the vendored module at this
  core's raster (635 × 525, 2 clocks of 40 MHz a dot, `SAME_CLK`), read at
  the cartridge pins as the DAC reads them. Its lines are numbered from the
  start of vblank so that a frame begins in blanking, as the checks expect.
  - With the menu at its defaults, every pin sits as on a core without the
    adapter, and the controller words pass through.
  - Every option of every Analogizer entry in the package's `interact.json`
    (32), set as the firmware sets a masked entry, read back the word as the
    bridge samples it, merged and written: the word, the adapter's copy and
    the enable each followed. With the adapter's own read-back in place of
    the wrapper's, the same run fails at the second entry.
  - RGBS: all 245,760 visible dots of a frame reach the DAC pins, in raster
    order, as their top six bits per channel, with 0 differing. Csync is one
    hsync-long (48-dot) pulse a line.
  - Scandoubler: 1050 lines per frame (twice 525) at 635 clocks, half the
    core's line -- correct, and useless at this line rate.
  - YPbPr and Y/C NTSC/PAL: no unknown on any pin for a frame.
  - All six SNAC assignments, the analog stick, and type "none" map as
    tabled.
  - Position, at both ends of the shipped sliders: read back as written,
    the settings word untouched; at the pins csync moves by exactly the
    dots (in clocks) and lines asked, the picture is still every dot with
    0 differing, csync is never low while a dot is drawn, and the
    scandoubler's lines and period are unchanged; back at 0, csync is
    where it started (+32,+10: csync to picture 246 clocks against 182,
    45 lines against 35; -43,-32: 96 clocks, 3 lines). A jump written just
    after a pulse that puts the next right after it (V +10 to +6, H +32 to
    -17) leaves csync out of the picture for three frames.
  - The blank bit, and enable off again returning the port to idle.
- Lint (Verilator, as the template's `sim/lint.sh` runs it): the wrapper is
  clean with `SAME_CLK`. The vendored files' warnings are dropped by path;
  their errors are not.
- `tools/regress_video.sh`: the seven frozen states (four captures and
  the three heaviest sprite lines) pixel-exact with the two new outputs in
  `mcr68_video.sv`.
- Quartus: in the commit that added this.

**Not proven:** anything on hardware with this core, including whether a
given 31 kHz monitor takes the RGBS csync; and the SNAC serial protocols,
which are
the adapter module's and are forced at its outputs in the bench rather than
driven over the pins. The Y/C and YPbPr encodings have no reference to compare
against, only a run without unknowns.

### Turning it off

Set `USE_ANALOGIZER = 0` in `core_top.sv`, and take the six menu entries
out of `interact.json` and `cartridge_adapter` back to -1 in `core.json`.
Nothing in the PLL or SDC belongs to it.
