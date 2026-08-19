//============================================================================
//  Route pads to cabinet stations.
//
//  Xenophobe is a three-station cockpit: each station has its own coin slot,
//  8-way stick and three buttons, and the three stations are the three rows on
//  screen (the game calls them LEFT, CENTER and RIGHT; they display top,
//  middle and bottom). A station only responds once its own slot is credited.
//
//  Pad 1 drives whichever station the player picks; pads 2 and 3 take the
//  remaining stations in order, so docked multiplayer still works. With the
//  default selection this is the identity mapping.
//
//  Bundles are ordered to match in0[14:8] directly:
//      [6]=BTN2  [5]=BTN3  [4]=BTN1  [3]=right [2]=left [1]=down [0]=up
//  All signals are active high here; the caller inverts for the active-low bus.
//============================================================================
`default_nettype none

module player_route
(
    input  wire  [1:0] pos_sel,             // 0=left/top, 1=center/middle, 2=right/bottom
    input  wire  [6:0] pad1, pad2, pad3,
    input  wire        coin1, coin2, coin3, // coin request from each pad
    output logic [6:0] st_l, st_c, st_r,    // per-station controls
    output logic       cn_l, cn_c, cn_r     // per-station coin
);

    always_comb begin
        case (pos_sel)
            2'd1: begin                     // pad1 plays centre
                st_c = pad1; cn_c = coin1;
                st_r = pad2; cn_r = coin2;
                st_l = pad3; cn_l = coin3;
            end
            2'd2: begin                     // pad1 plays right
                st_r = pad1; cn_r = coin1;
                st_l = pad2; cn_l = coin2;
                st_c = pad3; cn_c = coin3;
            end
            default: begin                  // pad1 plays left (default)
                st_l = pad1; cn_l = coin1;
                st_c = pad2; cn_c = coin2;
                st_r = pad3; cn_r = coin3;
            end
        endcase
    end

endmodule

`default_nettype wire
