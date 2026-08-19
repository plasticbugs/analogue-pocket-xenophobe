-- Dump full video state at the busiest gameplay frames found by sprload.lua,
-- so the frozen-state bench exercises the heavy sprite path rather than the
-- ~6-sprites-per-line states captured earlier.
local frames = 0
local dumps = {[1370]=true, [1360]=true, [1345]=true}

local shadow = {}
local tap = manager.machine.devices[":maincpu"].spaces["program"]:install_write_tap(
    0x90000, 0x9007f, "palshadow",
    function(offset, data, mask) shadow[(offset - 0x90000) // 2] = data & 0x1ff end)

local ioport = manager.machine.ioport
local function field(port, mask)
    for _, f in pairs(ioport.ports[port].fields) do
        if f.mask == mask then return f end
    end
end
local coin = field(":IN0", 0x0001)
local btn1 = field(":IN0", 0x1000)

emu.register_frame_done(function()
    frames = frames + 1
    if coin then coin:set_value((frames >= 220 and frames < 226) and 1 or 0) end
    if btn1 then btn1:set_value(((frames >= 240 and frames < 246) or
                                 (frames >= 280 and frames < 286)) and 1 or 0) end
    if dumps[frames] then
        local sp = manager.machine.devices[":maincpu"].spaces["program"]
        local f = io.open(string.format("state_busy%d.txt", frames), "w")
        f:write("VRAM\n")
        for i = 0, 2047 do f:write(string.format("%04x\n", sp:read_u16(0x70000 + i*2))) end
        f:write("SPRRAM\n")
        for i = 0, 2047 do f:write(string.format("%04x\n", sp:read_u16(0x80000 + i*2))) end
        f:write("PAL\n")
        for i = 0, 63 do f:write(string.format("%04x\n", shadow[i] or 0)) end
        f:close()
        manager.machine.video:snapshot()
        print("DUMPED " .. frames)
    end
    if frames >= 1380 then manager.machine:exit() end
end)
