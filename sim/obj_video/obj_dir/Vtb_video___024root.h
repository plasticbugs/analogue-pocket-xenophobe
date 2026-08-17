// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_video.h for the primary calling header

#ifndef VERILATED_VTB_VIDEO___024ROOT_H_
#define VERILATED_VTB_VIDEO___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_video__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_video___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_OUT8(r,7,0);
        VL_OUT8(g,7,0);
        VL_OUT8(b,7,0);
        VL_OUT8(hs,0,0);
        VL_OUT8(vs,0,0);
        VL_OUT8(de,0,0);
        CData/*0:0*/ tb_video__DOT__ce_div;
        CData/*3:0*/ tb_video__DOT__video__DOT____VlemCall_0__bg_pen;
        CData/*0:0*/ tb_video__DOT__video__DOT__field;
        CData/*0:0*/ tb_video__DOT__video__DOT__bg_rhalf;
        CData/*0:0*/ tb_video__DOT__video__DOT__lbuf_sel;
        CData/*0:0*/ tb_video__DOT__video__DOT__bg_wrbuf;
        CData/*0:0*/ tb_video__DOT__video__DOT__sp_wrbuf;
        CData/*6:0*/ tb_video__DOT__video__DOT__bg_disp_q;
        CData/*3:0*/ tb_video__DOT__video__DOT__bg_st;
        CData/*4:0*/ tb_video__DOT__video__DOT__bg_cell;
        CData/*3:0*/ tb_video__DOT__video__DOT__bg_px;
        CData/*3:0*/ tb_video__DOT__video__DOT__sp_st;
        CData/*7:0*/ tb_video__DOT__video__DOT__sp_y;
        CData/*7:0*/ tb_video__DOT__video__DOT__sp_flags;
        CData/*7:0*/ tb_video__DOT__video__DOT__sp_code_lo;
        CData/*7:0*/ tb_video__DOT__video__DOT__sp_x;
        CData/*2:0*/ tb_video__DOT__video__DOT__sp_fetch_cnt;
        CData/*5:0*/ tb_video__DOT__video__DOT__sp_px;
        CData/*0:0*/ tb_video__DOT__video__DOT__yt_hit;
        CData/*3:0*/ tb_video__DOT__video__DOT__sp_pen_v;
        CData/*0:0*/ tb_video__DOT__video__DOT__sp_blend_go;
        CData/*0:0*/ tb_video__DOT__video__DOT__de_d;
        CData/*0:0*/ tb_video__DOT__video__DOT__hs_d;
        CData/*0:0*/ tb_video__DOT__video__DOT__vs_d;
        CData/*5:0*/ tb_video__DOT__video__DOT__unnamedblk2__DOT__idx;
        CData/*7:0*/ tb_video__DOT__video__DOT__unnamedblk2__DOT__lo;
        CData/*7:0*/ tb_video__DOT__video__DOT__unnamedblk2__DOT__hi;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*9:0*/ tb_video__DOT__video__DOT__hcnt;
        SData/*9:0*/ tb_video__DOT__video__DOT__vcnt;
        SData/*15:0*/ tb_video__DOT__video__DOT__vram_rq;
        SData/*10:0*/ tb_video__DOT__video__DOT__vram_raddr;
        SData/*15:0*/ tb_video__DOT__video__DOT__sprram_rq;
        SData/*10:0*/ tb_video__DOT__video__DOT__sprram_raddr;
        SData/*15:0*/ tb_video__DOT__video__DOT__bg_q0;
        SData/*15:0*/ tb_video__DOT__video__DOT__bg_q1;
        SData/*13:0*/ tb_video__DOT__video__DOT__bg_raddr;
        SData/*14:0*/ tb_video__DOT__video__DOT__spr_raddr;
        SData/*15:0*/ tb_video__DOT__video__DOT__bg_d0;
        SData/*15:0*/ tb_video__DOT__video__DOT__bg_d1;
        SData/*8:0*/ tb_video__DOT__video__DOT__bg_next_y;
        SData/*8:0*/ tb_video__DOT__video__DOT__sp_idx;
        SData/*8:0*/ tb_video__DOT__video__DOT__sp_line;
        SData/*10:0*/ tb_video__DOT__video__DOT__sp_code;
        SData/*10:0*/ tb_video__DOT__video__DOT__sp_xs;
        SData/*15:0*/ tb_video__DOT__video__DOT__sp_lbuf_bq;
        SData/*9:0*/ tb_video__DOT__video__DOT__sp_rd_addr_q;
        SData/*8:0*/ tb_video__DOT__video__DOT__rgb9;
        VlWide<16>/*511:0*/ tb_video__DOT__video__DOT__sp_claim_lo;
        VlWide<16>/*511:0*/ tb_video__DOT__video__DOT__sp_claim_hi;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 4096> tb_video__DOT__video__DOT__vram;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 4096> tb_video__DOT__video__DOT__sprram;
        VlUnpacked<SData/*8:0*/, 64> tb_video__DOT__video__DOT__palette;
        VlUnpacked<SData/*15:0*/, 32768> tb_video__DOT__video__DOT__bg_rom;
        VlUnpacked<SData/*15:0*/, 32768> tb_video__DOT__video__DOT__spr_rom0;
        VlUnpacked<SData/*15:0*/, 32768> tb_video__DOT__video__DOT__spr_rom1;
        VlUnpacked<SData/*15:0*/, 32768> tb_video__DOT__video__DOT__spr_rom2;
        VlUnpacked<SData/*15:0*/, 32768> tb_video__DOT__video__DOT__spr_rom3;
        VlUnpacked<SData/*15:0*/, 4> tb_video__DOT__video__DOT__spr_q;
        VlUnpacked<CData/*6:0*/, 1024> tb_video__DOT__video__DOT__bg_lbuf;
        VlUnpacked<SData/*15:0*/, 1024> tb_video__DOT__video__DOT__sp_lbuf;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 4> tb_video__DOT__video__DOT__sp_row;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtb_video__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_video___024root(Vtb_video__Syms* symsp, const char* namep);
    ~Vtb_video___024root();
    VL_UNCOPYABLE(Vtb_video___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
