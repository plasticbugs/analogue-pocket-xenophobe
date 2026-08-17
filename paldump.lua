print("LUA-ALIVE")
local f = io.open("mame_palw.txt", "w")
local tap = manager.machine.devices[":maincpu"].spaces["program"]:install_write_tap(
    0x90000, 0x9007f, "palw",
    function(offset, data, mask)
        f:write(string.format("%05x %04x\n", offset, data))
        f:flush()
    end)
