-- Identify which MAME button (BUTTON1/2/3) is fire / jump / action, by holding
-- each in isolation during gameplay and watching what the player sprite does.
-- Jumping moves the player vertically, which shows up as a changing Y byte in
-- sprite RAM; firing spawns extra sprite entries.
local frames = 0
local ioport = manager.machine.ioport
local function field(port, mask)
    for _, f in pairs(ioport.ports[port].fields) do
        if f.mask == mask then return f end
    end
end
local coin = field(":IN0", 0x0001)
local btn1 = field(":IN0", 0x1000)   -- IPT_BUTTON1
local btn3 = field(":IN0", 0x2000)   -- IPT_BUTTON3
local btn2 = field(":IN0", 0x4000)   -- IPT_BUTTON2

-- window -> which button is held ("none" measures the resting baseline)
local tests = {
    {name = "none",    from = 700,  to = 760},
    {name = "BUTTON1", from = 800,  to = 860, btn = btn1},
    {name = "BUTTON2", from = 900,  to = 960, btn = btn2},
    {name = "BUTTON3", from = 1000, to = 1060, btn = btn3},
}
local stats = {}

emu.register_frame_done(function()
    frames = frames + 1
    if coin then coin:set_value((frames >= 220 and frames < 226) and 1 or 0) end
    if btn1 then btn1:set_value(((frames >= 240 and frames < 246) or
                                 (frames >= 280 and frames < 286)) and 1 or 0) end

    for _, t in ipairs(tests) do
        if t.btn then
            t.btn:set_value((frames >= t.from and frames < t.to) and 1 or 0)
        end
        if frames >= t.from and frames < t.to then
            local sp = manager.machine.devices[":maincpu"].spaces["program"]
            local s = stats[t.name]
            if not s then s = {ymin = {}, ymax = {}, maxcount = 0}; stats[t.name] = s end
            local live = 0
            for i = 0, 31 do
                local base = 0x80000 + i*8
                local flags = sp:read_u16(base + 2) & 0xff
                local code9 = ((flags >> 3) & 1) * 256 + (sp:read_u16(base + 4) & 0xff)
                if code9 ~= 0 then
                    live = live + 1
                    local y = sp:read_u16(base) & 0xff
                    if not s.ymin[i] or y < s.ymin[i] then s.ymin[i] = y end
                    if not s.ymax[i] or y > s.ymax[i] then s.ymax[i] = y end
                end
            end
            if live > s.maxcount then s.maxcount = live end
        end
    end

    if frames >= 1070 then
        for _, t in ipairs(tests) do
            local s = stats[t.name]
            if s then
                local moved, biggest = 0, 0
                for i, mn in pairs(s.ymin) do
                    local d = s.ymax[i] - mn
                    if d > 0 then moved = moved + 1 end
                    if d > biggest then biggest = d end
                end
                print(string.format("BTNTEST %-8s entries_moving_vertically=%d max_dY=%d peak_sprites=%d",
                                    t.name, moved, biggest, s.maxcount))
            end
        end
        manager.machine:exit()
    end
end)
