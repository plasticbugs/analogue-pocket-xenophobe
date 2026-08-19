-- Measure the real per-scanline sprite load during gameplay.
-- For each sampled frame: highest used sprite entry (what the vblank pre-scan
-- reduces the scan to) and the worst sprites-on-one-line count (what the
-- per-line cycle budget must cover).
local frames = 0
local ioport = manager.machine.ioport
local function field(port, mask)
    for _, f in pairs(ioport.ports[port].fields) do
        if f.mask == mask then return f end
    end
end
local coin = field(":IN0", 0x0001)
local btn1 = field(":IN0", 0x1000)

local worst_overall, worst_frame, top_overall = 0, 0, 0
local hist = {}   -- bucketed worst-per-line counts

emu.register_frame_done(function()
    frames = frames + 1
    if coin then coin:set_value((frames >= 220 and frames < 226) and 1 or 0) end
    if btn1 then btn1:set_value(((frames >= 240 and frames < 246) or
                                 (frames >= 280 and frames < 286)) and 1 or 0) end

    if frames >= 300 and frames % 5 == 0 then
        local sp = manager.machine.devices[":maincpu"].spaces["program"]
        local per = {}
        local top = 0
        for i = 0, 511 do
            local base = 0x80000 + i*8
            local flags = sp:read_u16(base + 2) & 0xff
            local code9 = ((flags >> 3) & 1) * 256 + (sp:read_u16(base + 4) & 0xff)
            if code9 ~= 0 then
                top = i
                local y0 = (241 - (sp:read_u16(base) & 0xff)) * 2
                for dy = 0, 31 do
                    local y = y0 + dy
                    if y >= 0 and y < 480 then per[y] = (per[y] or 0) + 1 end
                end
            end
        end
        local worst = 0
        for _, v in pairs(per) do if v > worst then worst = v end end
        hist[worst] = (hist[worst] or 0) + 1
        if worst > worst_overall then worst_overall = worst; worst_frame = frames end
        if top > top_overall then top_overall = top end
    end

    if frames >= 2000 then
        print(string.format("RESULT worst_sprites_per_line=%d at frame %d, highest_entry=%d",
                            worst_overall, worst_frame, top_overall))
        local keys = {}
        for k in pairs(hist) do keys[#keys+1] = k end
        table.sort(keys)
        for _, k in ipairs(keys) do print(string.format("HIST %2d sprites/line : %d frames", k, hist[k])) end
        manager.machine:exit()
    end
end)
