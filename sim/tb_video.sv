// Video-only bench: mcr68_video with frozen state preloaded from hex files
// (vram_init.hex, sprram_init.hex, pal_init.hex). No CPU - renders the same
// frame repeatedly; the harness captures one and exits.
`timescale 1ns/1ns

module tb_video (
    input  logic clk,             // 40 MHz
    output logic [7:0] r, g, b,
    output logic hs, vs, de
);
    logic ce_div = 0;
    always_ff @(posedge clk) ce_div <= ~ce_div;

    mcr68_video video (
        .clk(clk), .ce_pix(ce_div),
        .vram_addr('0), .vram_din('0), .vram_we('0), .vram_q(),
        .sprram_addr('0), .sprram_din('0), .sprram_we('0), .sprram_q(),
        .pal_addr('0), .pal_din('0), .pal_we(1'b0),
        .gfx_load_addr('0), .gfx_load_data('0), .gfx_load_we(1'b0),
        .r(r), .g(g), .b(b), .hs(hs), .vs(vs), .de(de),
        .vsync30(), .hsync_pulse(), .vblank()
    );

    initial begin
        $readmemh("vram_init.hex",   video.vram);
        $readmemh("sprram_init.hex", video.sprram);
        $readmemh("pal_init.hex",    video.palette);
    end
endmodule
