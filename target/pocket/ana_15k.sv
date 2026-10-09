//------------------------------------------------------------------------------
// 31 kHz -> 15 kHz for the Analogizer: Xenophobe's 512 x 480 progressive
// frame (635 x 525 dots at 20 MHz, 31.5 kHz, 60 Hz) as a progressive 240p
// picture a 15 kHz monitor takes (636 x 262 dots at 10 MHz, 15.72 kHz, the
// same 60 Hz).  The Pocket's own picture does not pass through here.
//
//   * Each output line shows one of the game's line pairs (source lines 2j
//     and 2j+1 on output line j), its 512 dots played out at half the source
//     dot rate, so the picture keeps its shape.  Blend (the default): each
//     dot is the average of the pair's two, per channel, (a + b) >> 1 on the
//     full 8 bits, so nothing one line thin vanishes and nothing flickers.
//     Sharp: the pair's even line, unblended.
//   * Frame-locked: the output frame restarts DELAY clocks after the
//     source's first visible line starts, every frame, and its 262 lines add
//     up to exactly the source's 666,750 clocks, so it never drops, repeats
//     or tears a frame and vsync lands on the same output line every frame.
//     525 source lines are 262.5 output lines; the half line is spread
//     instead of interlaced: every output line is 636 dots of 4 clocks,
//     and 222 of the 262 add one clock to their last dot (deep in the back
//     porch), a Bresenham spread.  Lines are 2544 or 2545 clocks, never
//     anything else: 25 ns of hsync jitter, no odd line at all.
//   * Each pair goes through a one-line buffer (the even line, held while
//     the odd one arrives) into a two-pair buffer the output reads.  With
//     DELAY = 1400 the output reads each dot at least 130 clocks after it
//     was written (sim/run_ana15k.sh measures it; at DELAY = 1200 the bench
//     fails) and, by arithmetic, some 1,700 before pair j+2 overwrites it.
//
// Every output changes at the end of the cycle its enable (o_ce) is high,
// as the core's own video does, so a consumer may sample one clock after.
//------------------------------------------------------------------------------
`default_nettype none

module ana_15k #(
    parameter int SW = 512,                  // source visible dots
    parameter int SH = 480,                  // source visible lines
    parameter int SRC_FRAME = 666_750,       // source clocks a frame (635 * 2 * 525)
    parameter int DOTS  = 636,               // output dots a line
    parameter int LINES = 262,               // output lines a frame
    parameter int HS0 = 527, HS1 = 574,      // output hsync [HS0, HS1): 4.7 us
    parameter int VS0 = 243, VS1 = 246,      // output vsync [VS0, VS1)
    parameter int DELAY = 1400               // source line 0 -> output line 0, clocks
) (
    input  wire         clk,
    input  wire         sharp,               // 1: the even line of each pair (any domain)

    // the core's picture, values changing on src_ce
    input  wire         src_ce,
    input  wire  [23:0] src_rgb,
    input  wire         src_hb,
    input  wire         src_vb,

    // the 15 kHz picture
    output logic        o_ce,
    output logic [23:0] o_rgb,
    output logic        o_hs,
    output logic        o_vs,
    output logic        o_hb,
    output logic        o_vb
);
    localparam int LONG = SRC_FRAME - LINES * DOTS * 4;  // lines with a 5-clock last dot
                                                          // (0..LINES: run_ana15k.sh checks)

    // initial values in initial blocks, and plain always: always_ff may not
    // share them (lint)
    logic [1:0] sharp_s;
    initial sharp_s = 2'b00;
    always @(posedge clk) sharp_s <= {sharp_s[0], sharp};

    // ------------------------------------------------------------ the source
    logic       p_hb, p_vb;
    logic [8:0] sx;
    logic [9:0] sy;
    initial begin p_hb = 1'b1; p_vb = 1'b1; sx = '0; sy = '0; end
    wire        lstart = p_hb && !src_hb;             // a line's first dot
    wire        fstart = lstart && p_vb && !src_vb;   // the frame's first line
    wire  [8:0] x_now = lstart ? 9'd0 : sx;
    wire  [9:0] y_now = !lstart ? sy : fstart ? 10'd0 : sy + 10'd1;
    wire        vis = !src_hb && !src_vb;
    always @(posedge clk) if (src_ce) begin
        p_hb <= src_hb;
        p_vb <= src_vb;
        if (lstart) sy <= y_now;
        if (vis) sx <= x_now + 9'd1;
    end

    // the even line of a pair, held while the odd one comes
    logic [23:0] ebuf [0:SW-1];
    logic [23:0] e_q;
    always_ff @(posedge clk) begin
        if (src_ce && vis && !y_now[0]) ebuf[x_now] <= src_rgb;
        e_q <= ebuf[x_now];
    end

    // ...and with it, one clock later, the pair's dot into the pair buffer
    logic        st_v;
    logic  [9:0] st_a;
    logic [23:0] st_rgb;
    initial st_v = 1'b0;
    always @(posedge clk) begin
        st_v   <= src_ce && vis && y_now[0];
        st_a   <= {y_now[1], x_now};                   // slot = pair index bit 0
        st_rgb <= src_rgb;
    end
    function automatic [7:0] avg(input [7:0] a, input [7:0] b);
        logic [8:0] s;
        s = {1'b0, a} + {1'b0, b};
        return s[8:1];
    endfunction
    wire [23:0] pair = sharp_s[1] ? e_q
                     : {avg(e_q[23:16], st_rgb[23:16]), avg(e_q[15:8], st_rgb[15:8]),
                        avg(e_q[7:0], st_rgb[7:0])};
    logic [23:0] pbuf [0:2*SW-1];
    logic  [9:0] p_ra;
    logic [23:0] p_q;
    always_ff @(posedge clk) begin
        if (st_v) pbuf[st_a] <= pair;
        p_q <= pbuf[p_ra];
    end

    // ------------------------------------------------------------ the output
    // frame start: DELAY clocks after the source's first visible line starts
    logic [11:0] dly;
    logic        dly_on;
    initial begin dly = '0; dly_on = 1'b0; end
    wire         go = dly_on && (dly == 12'd0);
    always @(posedge clk) begin
        if (src_ce && fstart) begin dly <= 12'(DELAY - 1); dly_on <= 1'b1; end
        else if (dly_on) begin
            if (dly == 12'd0) dly_on <= 1'b0;
            else dly <= dly - 12'd1;
        end
    end

    logic [2:0]  cc;                         // clock within the dot
    logic [9:0]  od;                         // dot within the line
    logic [8:0]  ol;                         // line within the frame
    logic [8:0]  acc;                        // Bresenham
    logic        long_l;                     // this line's last dot is 5 clocks
    initial begin cc = '0; od = '0; ol = 9'(LINES - 1); acc = '0; long_l = 1'b0; end
    wire  [2:0]  dot_last = (od == 10'(DOTS - 1) && long_l) ? 3'd4 : 3'd3;
    wire  [9:0]  acc_n = 10'(acc) + 10'(LONG);
    always @(posedge clk) begin
        o_ce <= (cc == 3'd1);
        if (cc == 3'd0)                      // this dot's pixel: address, then data
            p_ra <= {ol[0], od[8:0]};
        if (cc == 3'd2) begin                // and show it
            o_rgb <= (od < 10'(SW) && ol < 9'(SH / 2)) ? p_q : 24'h0;
            o_hb  <= (od >= 10'(SW));
            o_vb  <= (ol >= 9'(SH / 2));
            o_hs  <= (od >= 10'(HS0)) && (od < 10'(HS1));
            o_vs  <= (ol >= 9'(VS0)) && (ol < 9'(VS1));
        end
        if (go) begin                        // frame start (the natural wrap, once locked)
            cc <= '0; od <= '0; ol <= '0;
            long_l <= (10'(LONG) >= 10'(LINES));
            acc <= 9'((10'(LONG) >= 10'(LINES)) ? 10'(LONG) - 10'(LINES) : 10'(LONG));
        end else if (cc == dot_last) begin
            cc <= '0;
            if (od == 10'(DOTS - 1)) begin
                od <= '0;
                ol <= (ol == 9'(LINES - 1)) ? 9'd0 : ol + 9'd1;
                long_l <= (acc_n >= 10'(LINES));
                acc <= 9'((acc_n >= 10'(LINES)) ? acc_n - 10'(LINES) : acc_n);
            end else od <= od + 10'd1;
        end else cc <= cc + 3'd1;
    end
endmodule
