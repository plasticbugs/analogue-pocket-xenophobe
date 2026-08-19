Arcade Xenophobe (Bally/Midway, 1987) on the Analogue Pocket, reimplementing the
Midway MCR-68000 board and the Sounds Good audio board.

**Install:** unzip onto the SD card root, overwriting previous files.

**ROMs are not included.** The core reads one file, built from your own MAME
`xenophob` romset, at `Assets/xenophobe/common/xenophobe.rom`. A core is FPGA
gateware and cannot build that itself, so assemble it on a computer first:

```
python3 mra_build.py xenophobe.mra xenophob.zip
```

That needs only Python 3 and reads the MAME zip directly. It checks every ROM's
CRC as it goes and verifies the finished image against a known checksum, so a
wrong or corrupted romset is reported rather than silently built into a core
that mysteriously fails to boot. `xenophobe.mra` is a standard MRA description,
so existing arcade tooling such as pupdate works with it too.

**Controls**

| Pocket | Function |
|---|---|
| B | Fire (trigger) |
| A | Jump (right thumb button) |
| X | Action (left thumb button) |
| Select | Insert coin |

There is no start button, exactly as on the cabinet: insert a coin, then pull
the trigger. Every button can be reassigned from the Pocket's Controls menu.

**Accuracy.** Video is verified pixel-exact against MAME across seven frozen
gameplay states, including the heaviest sprite load sampled from real play
(17 sprites on a single scanline). The sprite engine renders from a snapshot of
sprite RAM taken during vblank, and overlaps each sprite's ROM fetch with the
previous sprite's blend, so it completes the worst observed line with room to
spare rather than dropping to alternating lines.

Both 68000s run on the cycle-accurate fx68k core, with the 6840 timer, the
Sounds Good board's 6821 PIA, and its 10-bit DAC.
