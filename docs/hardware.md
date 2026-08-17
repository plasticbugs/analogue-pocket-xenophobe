# Xenophobe (Bally Midway, 1987) — Hardware Notes

Target: full disassembly + Analogue Pocket (openFPGA) core.
Platform: Bally Midway **MCR-68000** ("MCR68") + **Sounds Good** audio board.
ROM set verified against MAME `xenophob` parent set (all CRC32s match).

## Board overview

| | Main board | Sounds Good board |
|---|---|---|
| CPU | MC68000 @ 7.7234 MHz (15.4468 MHz XTAL / 2) | MC68000 @ 8 MHz (16 MHz / 2) |
| Timer | MC6840 PTM, clocked by 68k E clock (CPU/10 = 772.34 kHz) | — |
| I/O | 3 input ports + control latch | MC6821 PIA (alt register order) |
| Audio | — | AD7533 10-bit multiplying DAC off PIA A/B |
| Video | 512×480 (16×16 effective tiles ×2 scale), 30 Hz interlaced | — |

## Main CPU memory map (verified from code)

| Range | What | Evidence |
|---|---|---|
| 000000–03FFFF | Program ROM (3c/3b + 2c/2b, byte-interleaved, even=3c/2c) | reset vectors |
| 060000–063FFF | Work RAM 16KB; SSP init 0x64000, USP 0x63800; IRQ stack 0x63800↓ | RAM test at 0xA19A |
| 070000–070FFF | Video RAM, 1024 word entries (32×30 visible of 32×32?) — cleared as 0x400 longs | clear loop 0xA160 |
| 080000–0807FF | Sprite RAM, cleared as 0x200 longs (2KB) | clear loop 0xA180 |
| 090000–09007F | Palette, 64 entries, write-only | writes from 0x268A etc. |
| 0A0000–0A000F | MC6840 PTM, registers on even bytes, `movep` access | init at 0xA1FC |
| 0B0000 | Watchdog (write 0xFF byte) | kicks throughout reset |
| 0C0000 | Control latch (word write, shadow at RAM 0x60012):<br>bits 3:0 = sound data nibble, bit 4 = sound strobe, bit 5 = sound /RESET (pulse low), higher bits = coin meters etc. | 0xA476 (send), 0x9520 (snd reset) |
| 0D0000 | IN0 (byte at 0xD0001): bit 4 = Sounds Good status/ack input | 0xA498 |
| 0E0000 | IN1: player controls | frame scan 0xA7EE |
| 0F0000 | DSW dip switches | diag module 0x2C00s |

### Interrupts (main) — CONFIRMED (MAME mcr68.cpp + disasm)
- Vector table: RESET SP=0x64000 PC=0xA154; IRQ1=0xA5F0 (frame int — masks to 0x2700, runs per-frame tick 0xA7D6); IRQ2=0xA67A (6840 PTM IRQ output); IRQ3–6=0xA678; IRQ7=0xA5CC; everything else = 0xA154.
- **IRQ1 = "493" signal**: asserted a fixed interval before VBLANK, deasserted one scanline later. MAME uses (256+16)×E-clock periods (E = CPU/10 = 772.38 kHz → ~352 µs) borrowed from Blasted, noting Xenophobe is not timing-sensitive on this value.
- **IRQ2 = 6840 PTM IRQ**. PTM clocked at E (772.38 kHz); external clock inputs: C1 = VSYNC pulse (once per 30 Hz frame), C3 = HSYNC pulse (per scanline). Games use PTM counter 1 to time six steps per frame (MAME header notes; timing "crucial" for some games, less so for Xenophobe).
- Watchdog: resets machine after 8 missed VBLANKs (write 0xFF byte to 0xB0000 to kick).

### Sound command path (main → Sounds Good)
Ring buffer 0x6001A–0x60059, head ptr 0x60130, tail 0x60134, current byte 0x6005A.
Transmit (0xA476): put low nibble on latch bits 3:0 → raise bit 4 (strobe) → put high nibble → drop bit 4. Sound board ACKs via IN0 bit 4; a watchdog re-pulses sound /RESET (bit 5, routine 0x9520) if the status line stops toggling.

## Sounds Good board (verified from code)

| Range | What |
|---|---|
| 000000–03FFFF | Program ROM (u7/u17 + u8/u18 interleaved, even=u7/u8) |
| 060000–060007 | MC6821 PIA, **alternate order**: 0x60000=PRA, 0x60002=PRB, 0x60004=CRA, 0x60006=CRB (even bytes) |
| 070000–0707FF | RAM 2KB; SP init 0x70800 |

- RESET PC = 0x1B4A. IRQ4 = 0x438 = command receive; IRQ3 = 0x1A96.
- Receive (0x438): read PRB low nibble (first = LOW nibble of cmd), poll CRA bit 7 for second strobe edge, read second nibble (HIGH), assemble byte, push into 7-deep queue at 0x700C0–0x700C6.

CONFIRMED from MAME midway_sound.cpp (bally/):
- Address map: global mask 0x7FFFF; ROM 0–0x3FFFF; PIA 0x60000–7 mirror 0xFFF0, **read_alt/write_alt** (RS0=A2, RS1=A1), data on D15–8 (even bytes); RAM 0x70000–0x70FFF mirror 0xF000.
- Main→sound wiring: control latch bits 3:0 → **PB3:0**; latch bit 4 → **CA1 (inverted)**. PIA IRQA|IRQB → 68k **IRQ4**.
- Sound→main: **PB4 → status bit** read by main on IN0 bit 4 (PB5 = status bit 1, unused by Xenophobe). Gated by DDRB (only driven pins count).
- DAC: AD7533 10-bit; **PA7–0 = DAC bits 9–2, PB7–6 = DAC bits 1–0**.
- Output filter: 3-stage LM359 MFB low-pass chain, fc ≈ 4.9k/5.3k/5.4k Hz (Qs 0.707/1.61/0.63) — for the core, a ~5 kHz LPF on the PCM stream is a faithful approximation.
- Main control latch bit 5 → 68k RESET line (active low on the wire; game pulses it low then high).

## Graphics formats (pixel-verified)

### Background tiles ("gfx1": xeno_bg.12d then 11d, 64KB region)
MAME `mcr68_bg_layout`: 8×8 logical, 4bpp, drawn 2×2 → 16×16 screen pixels.
- 16 bytes/tile per ROM half; row = big-endian word per half.
- Pixel x (0..7) = bits (15−2x, 14−2x) of each half's word.
- 11d (upper half of region) = pixel bits 3:2, 12d = bits 1:0.
- 2048 tiles. Verified: font + UI text renders readable ("CROUCH TAKE THROW…").
- Video RAM word per cell: low 10 bits tile index + attribute bits (palette, flip) — exact attribute bits TBD from mcr68 video code + disasm.

### Sprites ("gfx2": xeno_fg.7j, 8j, 9j, 10j, 256KB region)
MAME `mcr68_sprite_layout`: 32×32, 4bpp, 512 sprites, 128 bytes/sprite/ROM.
- Pixel (x,y) of sprite s: g=x/8, p=(x%8)/2, h=x%2; bit offset = s·1024 + y·32 + g·8 + h·4 in ROM p (7j=p0, 8j=p1, 9j=p2, 10j=p3); value = high nibble if offset%8==0 else low nibble (MSB-first).
- Verified: player heads/torsos/limbs render cleanly (`artifacts/spr_mame.png`).

## Files

- `build/xeno_main.bin`, `build/xeno_snd.bin` — interleaved CPU images (Ghidra project `/xenophobe/`)
- `tools/gfxdecode.py` — graphics decoder / PNG sheet renderer
- `artifacts/` — rendered output (bg_sheet.png, spr_mame.png …)
- `ref/mame/` — MAME MCR sources for reference (mcr68.cpp, mcr_m.cpp, mcr_v.cpp …)

## Open questions / next steps

1. Confirm 6840→IRQ wiring & the six-step frame timing scheme from mcr68.cpp + disasm (IRQ1 vs IRQ2 sources).
2. Palette write format (mcr68: xRRRRRGGGGGBBBBB? verify — MCR68 uses 9-bit RGB via low bits? check mcr_v.cpp paletteram_w).
3. Sprite RAM entry format (mcr68 video: 4 words/sprite — Y, tile, attr/X…) from mcr_v.cpp `mcr_draw_sprites` + game code.
4. Video RAM attribute bits (flip/palette) for bg.
5. Sounds Good: confirm DAC bit packing & status line polarity; find the sample/waveform synthesis main loop.
6. Full code coverage: chase jump tables (only ~5K instructions parsed of 256KB main ROM; much is data — font strings visible in bg region are actually in tile ROM, but main ROM has big data tables).
7. Core: openFPGA scaffold, fx68k ×2, 6840, 6821, tilemap+sprite pipeline, DAC→I2S, DIP/controls mapping, ROM loader (.rom concatenation order).
