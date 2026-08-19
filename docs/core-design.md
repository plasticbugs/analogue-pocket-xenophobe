# Xenophobe Pocket Core — Architecture

Companion to `hardware.md` (the what); this is the how. Structure mirrors
`analogue-pocket-msx2` (proven APF framework + CI build).

## Module hierarchy

```
core_top.sv (APF adapter, from msx2 scaffold)
└── rtl/xenophobe_core.sv          — the machine
    ├── mcr68_main.sv              — main board
    │   ├── fx68k (7.7238 MHz)     — modules/cpu-fx68k
    │   ├── ptm6840.sv             — MC6840, E-clock; C1=VSYNC, C3=HSYNC; IRQ→IPL2
    │   ├── irq493.sv              — IRQ1 gen: assert (256+16)·E before VBLANK, 1 line long
    │   ├── addr_decode            — per hardware.md map (watchdog optional: stub OK)
    │   └── ram 16KB (BRAM)
    ├── mcr68_video.sv
    │   ├── vram 4KB dual-port BRAM (CPU port + render port)
    │   ├── spriteram 2KB dual-port BRAM (+ 2KB vblank snapshot, see below)
    │   ├── palette 64×9bit (xRBG_333: [8:6]=R, [5:3]=B, [2:0]=G)
    │   ├── bg_tiles 64KB BRAM (loaded from data slot)
    │   ├── tilemap renderer       — 32×32 map of 16×16 (8×8 art, 2×2 dot-doubled)
    │   └── sprite renderer        — dual scanline buffers; ROM data in SDRAM
    ├── sounds_good.sv             — sound board
    │   ├── fx68k (8 MHz)
    │   ├── pia6821.sv             — alt reg order (RS0=A2, RS1=A1), D[15:8]
    │   ├── ram 4KB BRAM
    │   └── dac: {PA[7:0],PB[7:6]} → 10-bit PCM → 1st-order ~5kHz LPF → APF i2s
    ├── sdram controller + arbiter — main ROM (256K) / snd ROM (256K) / sprite ROM (256K)
    └── rom_loader                 — APF data slot → SDRAM + BRAM init
```

## Memory placement

Pocket BRAM ≈ 3 Mbit total; ROMs are 832KB so SDRAM is mandatory.
- **BRAM**: bg tile ROM 64KB, all work RAMs (~26KB), palette, line buffers. ~100KB — comfortable.
- **SDRAM**: main CPU ROM, sound CPU ROM, sprite ROM. CPU fetches are trivially
  latency-tolerant (68k bus cycle at 7.7MHz ≈ 520ns; SDRAM ≈ <100ns) — no wait states,
  cycle timing preserved. Sprite fetches: worst case 128 sprites × 16 bytes/line = 2KB/line;
  prefetch into the off-screen line buffer with priority below CPUs.

## Clocking

- PLL: `clk_sys` ≈ 61.7904 MHz (= 8 × 7.7238) and `clk_vid` 20.16 MHz (or divide
  clk_sys; decide during PLL setup), SDRAM clock ~92–123 MHz (reuse msx2 PLL config as base).
- Main 68k: fx68k with phi enables at 7.7238 MHz (clk_sys ÷ 8).
- Sound 68k: 8 MHz enables — derive from a second PLL tap (16 MHz/2) or run at
  7.7238 too (0.35% slow — audible pitch shift; prefer exact 8 MHz tap).
- E clock for PTM = main CPU ÷ 10 = 772.38 kHz (fx68k provides E out).
- Video: 512×480 visible @ 60 Hz progressive out of a 636×524-ish raster (~20 MHz dot).
  Game-side VBLANK/VSYNC pulses (6840 C1, 493 IRQ, watchdog vblank count) fire every
  OTHER display frame → correct 30 Hz game cadence, no framebuffer, zero added lag.

## Video pipeline detail (from hardware.md formats)

Per scanline y (0..479), logical bg row = y[8:4] with fine row y[3:1] (dot-doubled);
sprites use full y resolution.
1. **BG pass** into line buffer: for each of 32 map cells, read 2 vram bytes
   (words' low bytes), decode {code[11:0], color 2b, flipx/flipy, priority(bit15)};
   fetch tile row word pair from bg BRAM, emit 16 dot-doubled pixels: pen = 4bpp,
   palette entry = color×4? — **NB**: bg uses palette entries 0–15 (4 colors × 4 pens
   wait: 4bpp × 4 palettes = colors 0..15 per gfx decode `0, 4` → base 0, 16 total
   entries 0–15... confirm exact mapping when implementing: MAME gfx colors 0-15 bg,
   16-31 sprites... but palette has 64 entries; GFXDECODE says bg colors 0,4 palettes → 
   verify against palette writes in disasm).
   Keep bg priority bit per pixel for the tile-over-sprite pass.
2. **Sprite pass** (during previous line's display, from SDRAM prefetch): iterate
   spriteram back-to-front (offs 2KB→0, step 4 words), per MAME mcr68_update_sprites:
   skip code==0; screen y = (241 − Y)·2, x = X·2 − 4 (xoffset −4, clip 0); pen 0
   transparent; pen 8 = "under tile" mask (covers later sprites but sits behind bg);
   priority bit selects sprite layer vs bg-priority-tiles ordering:
   final pixel = bg (opaque base) → low-pri sprites → bg tiles w/ category-1 (data
   bit15) → high-pri sprites, with the pen-8 mask semantics from mcr68.cpp.
3. Palette lookup 9-bit → 8:8:8 (3→8 bit expansion) → APF RGB.

### Sprite RAM snapshot and pre-scan

The renderer walks sprite RAM as the beam sweeps down, so a CPU edit partway
through a frame would be seen by lines below it but not above — visible as
tearing. On-hardware instrumentation confirmed the game does write sprite RAM
during visible scanlines. MAME (and therefore `tools/render_model.py`, the
verified spec) renders a frame from one consistent state, so the renderer copies
sprite RAM into a shadow BRAM at the start of vblank and renders from that.

The copy runs at `vcnt == V_VIS` and line 0 renders at `vcnt == V_TOTAL-1`, both
inside the same vblank, so this adds no frame of latency.

The same pass records the highest entry with a non-zero 9-bit code, and the
per-line scan starts there instead of always walking all 512 entries. That
matters because the scan is not free: a line is 1270 clocks, a full scan costs
512 of them, and each accepted sprite costs ~75 (38 fetch + 32 blend + ~5 entry
read). Before the pre-scan the engine could finish ~10 sprites per line; frozen
gameplay states contain lines needing up to 14, so the engine ran past the end
of the line, skipped starting the next one, and rendered sprites on alternating
lines — the "interlaced" flicker. With the pre-scan (top entry ~29 in practice)
capacity is ~16 per line.

Note the copy's read alignment: `sprram_raddr` is a register, so the word for
address k appears in `sprram_rq` **two** cycles after the counter holds k, not
one. Getting this wrong shifts every shadow word by one entry.

### Overlapping fetch with blend

Measured cost per sprite was 39 clocks fetching the row from SDRAM, 32 blending
it into the line buffer, and 3 reading attributes — about 76 serial clocks, so
even with the pre-scan a line fit only 16 sprites. Sampling real gameplay in
MAME (`build/sprload.lua`) found a peak of **17 sprites on one line**, and the
frozen state captured at that moment (`build/state_busy1370.txt`) reproduced it:
1270 clocks used, 6 overruns, 0.088% divergence from the reference renderer.

So the blend engine was split from the scan/fetch FSM and given its own copy of
what it consumes (`bl_row`, `bl_flags`, `bl_x`, `bl_px`). Sprite N+1 is scanned
and fetched while sprite N blends, making the per-sprite cost `max(39, 32)`
rather than the sum: ~45 clocks, about 27 sprites per line.

Blends still start one at a time in scan order — `SP_HAND` waits for the
previous blend before loading the next — so first-wins claim semantics are
untouched. Two ordering details matter:

- The blend counter lives in the same `always_ff` as the FSM so `bl_active` has
  a single driver, and a handoff landing on the cycle `bl_px == 31` wins over
  the auto-clear. That leaves no idle cycle between adjacent sprites.
- `SP_DRAIN` holds the FSM until the last blend finishes, because that blend
  outlives the scan and the next line's `SP_CLR` resets the claim bits.

That state also keeps the overrun instrumentation honest: a blend still running
at `hcnt == 0` really does delay the next line's render.

## ROM data slot

Single merged file `xenophobe.rom` built by `tools/make_rom.py`:
| offset | size | content |
|---|---|---|
| 0x00000 | 256K | main 68k (3c/3b/2c/2b interleaved) |
| 0x40000 | 256K | sound 68k (u7/u17/u8/u18 interleaved) |
| 0x80000 | 64K  | bg tiles (12d + 11d) |
| 0x90000 | 256K | sprites (7j + 8j + 9j + 10j) |
DIPs via interact.json (Free Play, Coins/Life-Unit, Life Unit 1000/2000, Demo Sounds,
Difficulty). Inputs: dpad + A(fire=BTN1) + B(jump=BTN2) + X(BTN3?) — Xenophobe uses
BUTTON1/2/3 per player (verify roles in-game), Select=coin, Start=start... NOTE:
no explicit START button in MAME ports — game starts on coin/fire? Verify in attract.

## Verification strategy

1. Verilator bench (`sim/`): load real ROMs, run the whole core headless.
   - Boot check: watchdog kicks appear, PTM init sequence observed, videoram fills.
   - Frame dump: render PPM of tilemap output; compare visually with MAME screenshot.
   - Sound smoke test: send command byte via control latch; expect DAC activity.
2. MAME as reference oracle (`mame xenophob -debug`) for RAM snapshots/timing questions.
3. Then hardware on the Pocket.

## Status / order of work

1. [ ] tools/make_rom.py + data.json slot wiring
2. [ ] pia6821.sv, ptm6840.sv (new, small, unit-simmable)
3. [ ] sounds_good.sv standalone in sim (it's the smaller board; proves fx68k integration)
4. [ ] mcr68_main.sv + video pipeline, boot in sim
5. [ ] SDRAM controller port from msx2 scaffold + arbiter
6. [ ] core_top.sv adaptation, Quartus project, CI build
7. [ ] Pocket bring-up, input/DIP polish, audio filter tuning
