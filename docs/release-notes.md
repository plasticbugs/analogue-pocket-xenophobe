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

**Choose your station.** The cabinet is a three-station cockpit and the stations
are the three rows on screen, each with its own coin slot. The new **Player
Position** option (Left/Top, Center/Middle, Right/Bottom) sends your stick,
buttons and coin to the station you pick. Choose before inserting a coin, since
a credit belongs to the station it went into. With a second pad connected, it
takes the next station along, so docked two-player still works.

**Music runs at the right speed.** The Sounds Good board has no timer, so the
sound CPU's execution rate *is* the DAC output rate: bandwidth it loses becomes
pitch and tempo error. On the real board its ROM answers with no wait states,
while here the fetch crosses SDRAM, which measured about 20% fewer DAC updates
per second. The sound CPU now fetches through a cache -- the ROM is read-only,
so entries can never go stale -- restoring 99.6% to 99.9% of hardware rate.

**Clean audio.** Samples are now handed to the Pocket's mixer across the clock
boundary with a proper synchroniser. The two run on different PLLs, and the
16-bit bus was crossing between them unsynchronised, so the audio side could
latch a mix of old and new bits -- a torn sample throws one value across the
range, heard as clicks and static. Most cores never hit this because their
audio only changes at the sound chip's sample rate; this one carries a filtered
value that moves every 40 MHz cycle, so the bus was never still. Output level
is also corrected, and now matches MAME within 3% on the same material.

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
