# Xenophobe for Analogue Pocket

An openFPGA core for Xenophobe (Bally/Midway, 1987), reimplementing the
Midway MCR-68000 arcade board: a 68000 main CPU with a 6840 timer, and the
"Sounds Good" audio board with its own 68000 driving a 10-bit DAC.

Video is verified pixel-exact against MAME: every frozen gameplay state in
`tools/regress_video.sh` renders with zero differing pixels.

## Installing

Copy `Cores`, `Platforms`, and `Assets` to the root of your Pocket's SD card,
then add the ROM as described below.

## Adding the ROM

You supply your own ROM. The core reads a single file,
`Assets/xenophobe/common/xenophobe.rom`, built from the MAME **`xenophob`**
romset. There is no way for a core to build this on the Pocket itself: a core
is FPGA gateware, not software, so it cannot unzip a file or run a script.
The ROM has to be assembled on a computer first.

Pick whichever of these you prefer — all three produce the identical, verified
image (md5 `281547af7d6d369adf65dc5452bb2803`).

### Using the included script (nothing to install)

Needs only Python 3, and reads the MAME zip directly:

```
python3 tools/mra_build.py xenophobe.mra xenophob.zip
```

It checks every ROM's CRC as it goes and verifies the finished image against
the checksum recorded in `xenophobe.mra`, so a wrong or corrupted romset is
reported rather than turned into a core that mysteriously fails to boot. Copy
the resulting `xenophobe.rom` to `Assets/xenophobe/common/` on your SD card.

### Using existing MRA tooling

`xenophobe.mra` is a standard MRA description, so if you already use
[pupdate](https://github.com/mattpannella/pupdate) or the `mra` utility to
manage arcade ROMs, point it at that file and your MAME set.

### From an already-extracted romset

If you have the ROMs as loose files rather than a zip:

```
python3 tools/make_rom.py /path/to/romset xenophobe.rom
```

## Controls

The cabinet has an aiming joystick with a trigger plus two thumb buttons, which
the game's own switch test calls TRIGGER and BUTTONS LEFT / RIGHT.

| Pocket | Function |
|---|---|
| B | Fire |
| A | Jump (right button) |
| X | Action (left button) |
| Select | Insert coin |

There is no separate start button — the game starts when you pull the trigger
after inserting a coin, as it did in the arcade ("SQUEEZE TRIGGER TO START
GAME"). All buttons can be reassigned from the Pocket's Controls menu.

If you edit `input.json`, note how the Pocket resolves it, because it is not
what the field names suggest. **List position picks the physical button, in the
order B, A, X** (Game Boy convention, not A first); an entry whose key is
`pad_btn_select` goes to Select. The `key` field does *not* choose the physical
button — it names the `cont1_key` bit the core reads when that button is
pressed. So position 2 declaring `pad_btn_x` is correct and deliberate: A sits
in position 2 and asserts the bit `core_top` routes to the jump switch. Swapping
two entries changes which pad does what; changing a key changes which game
switch it fires.

The Pocket also persists a per-id remap in
`/Settings/<core>/Input/_core/input_persist.json`, binding entry **ids** to
physical buttons. If you reuse an id whose meaning changed, that saved file
silently overrides the default and the buttons rotate. Give entries fresh ids
whenever the layout changes.

## Options

In the Pocket's Interact menu:

- **Free Play**, **Coins per Life Unit**, **Life Unit**, **Demo Sounds**,
  **Difficulty** — the original DIP switches.
- **Debug: Show Overlay** — off by default. Draws four rows of status squares
  across the bottom 32 scanlines (ROM verify, sprite engine overruns, watchdog,
  bus faults). Useful only when reporting a problem.
- **Debug: Sprite Single-Read** — off by default. Forces one SDRAM read at a
  time for sprite data. A diagnostic fallback, not needed in normal use.

## Building

CI compiles the core with Quartus 18.1 on every push (`.github/workflows`).
To build locally you need Docker:

```
./build-local.sh                 # compile + package into release/pocket
sh tools/regress_video.sh        # video regression against the reference renderer
sh tools/fetch_build.sh <run-id> # stage a CI build into an SD-card package
```

`docs/hardware.md` documents the arcade hardware; `docs/core-design.md`
documents how the core implements it.
