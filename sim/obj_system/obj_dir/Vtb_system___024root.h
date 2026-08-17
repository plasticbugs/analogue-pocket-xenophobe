// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_system.h for the primary calling header

#ifndef VERILATED_VTB_SYSTEM___024ROOT_H_
#define VERILATED_VTB_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
#include "Vtb_system___024unit.h"
class Vtb_system_fx68k;


class Vtb_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_system___024root final {
  public:
    // CELLS
    Vtb_system___024unit* __PVT____024unit;
    Vtb_system_fx68k* __PVT__tb_system__DOT__snd__DOT__cpu;
    Vtb_system_fx68k* __PVT__tb_system__DOT__main_board__DOT__cpu;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(r,7,0);
        VL_OUT8(g,7,0);
        VL_OUT8(b,7,0);
        VL_OUT8(hs,0,0);
        VL_OUT8(vs,0,0);
        VL_OUT8(de,0,0);
        VL_OUT8(wdt,0,0);
        VL_OUT8(snd_status,0,0);
        CData/*0:0*/ tb_system__DOT__ce_div;
        CData/*0:0*/ tb_system__DOT__tog_m;
        CData/*0:0*/ tb_system__DOT__m_phi1;
        CData/*0:0*/ tb_system__DOT__m_phi2;
        CData/*0:0*/ tb_system__DOT__tog_s;
        CData/*0:0*/ tb_system__DOT__s_phi1;
        CData/*0:0*/ tb_system__DOT__s_phi2;
        CData/*1:0*/ tb_system__DOT__vram_we;
        CData/*1:0*/ tb_system__DOT__sprram_we;
        CData/*0:0*/ tb_system__DOT__hsync_pulse;
        CData/*0:0*/ tb_system__DOT__vsync30;
        CData/*0:0*/ tb_system__DOT__snd__DOT__sel_rom;
        CData/*0:0*/ tb_system__DOT__snd__DOT__sel_pia;
        CData/*0:0*/ tb_system__DOT__snd__DOT__sel_ram;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia_cs_q;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia_stb;
        CData/*1:0*/ tb_system__DOT__snd__DOT____Vcellinp__pia__rs;
        CData/*7:0*/ tb_system__DOT__snd__DOT__pia__DOT__ora;
        CData/*7:0*/ tb_system__DOT__snd__DOT__pia__DOT__ddra;
        CData/*7:0*/ tb_system__DOT__snd__DOT__pia__DOT__orb;
        CData/*7:0*/ tb_system__DOT__snd__DOT__pia__DOT__ddrb;
        CData/*5:0*/ tb_system__DOT__snd__DOT__pia__DOT__cra;
        CData/*5:0*/ tb_system__DOT__snd__DOT__pia__DOT__crb;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia__DOT__irqa1;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia__DOT__irqb1;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia__DOT__ca1_q;
        CData/*0:0*/ tb_system__DOT__snd__DOT__pia__DOT__cb1_q;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__vpa_n;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__e_q;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__e_tick;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__bus_cycle;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_rom;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_ram;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_vram;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_spr;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_pal;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_ptm;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_wdt;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_ctl;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_in0;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_in1;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__sel_dsw;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__wr_q;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm_irq;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm_cs_q;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm_stb;
        CData/*7:0*/ tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
        CData/*3:0*/ tb_system__DOT__main_board__DOT__wdt_cnt;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__irq493;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__flag;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__flag_read;
        CData/*7:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__c_q;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre;
    };
    struct {
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__c_in;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__tick;
        CData/*3:0*/ tb_system__DOT__video__DOT____VlemCall_0__bg_pen;
        CData/*0:0*/ tb_system__DOT__video__DOT__field;
        CData/*0:0*/ tb_system__DOT__video__DOT__bg_rhalf;
        CData/*0:0*/ tb_system__DOT__video__DOT__lbuf_sel;
        CData/*0:0*/ tb_system__DOT__video__DOT__bg_wrbuf;
        CData/*0:0*/ tb_system__DOT__video__DOT__sp_wrbuf;
        CData/*6:0*/ tb_system__DOT__video__DOT__bg_disp_q;
        CData/*3:0*/ tb_system__DOT__video__DOT__bg_st;
        CData/*4:0*/ tb_system__DOT__video__DOT__bg_cell;
        CData/*3:0*/ tb_system__DOT__video__DOT__bg_px;
        CData/*3:0*/ tb_system__DOT__video__DOT__sp_st;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_y;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_flags;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_code_lo;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_x;
        CData/*2:0*/ tb_system__DOT__video__DOT__sp_fetch_cnt;
        CData/*5:0*/ tb_system__DOT__video__DOT__sp_px;
        CData/*0:0*/ tb_system__DOT__video__DOT__yt_hit;
        CData/*3:0*/ tb_system__DOT__video__DOT__sp_pval;
        CData/*0:0*/ tb_system__DOT__video__DOT__de_d;
        CData/*0:0*/ tb_system__DOT__video__DOT__hs_d;
        CData/*0:0*/ tb_system__DOT__video__DOT__vs_d;
        CData/*7:0*/ tb_system__DOT__video__DOT__unnamedblk3__DOT__cls;
        CData/*5:0*/ tb_system__DOT__video__DOT__unnamedblk4__DOT__idx;
        CData/*7:0*/ tb_system__DOT__video__DOT__unnamedblk4__DOT__lo;
        CData/*7:0*/ tb_system__DOT__video__DOT__unnamedblk4__DOT__hi;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_6;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_15;
        CData/*0:0*/ __Vdly__tb_system__DOT__ce_div;
        CData/*0:0*/ __Vdly__tb_system__DOT__video__DOT__field;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr_hccf1c68e__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h81300448__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(in0,15,0);
        VL_IN16(in1,15,0);
        VL_IN16(dsw,15,0);
        VL_OUT16(ctrl,15,0);
        VL_OUT16(dac,9,0);
        SData/*15:0*/ tb_system__DOT__vram_q;
        SData/*15:0*/ tb_system__DOT__sprram_q;
        SData/*15:0*/ tb_system__DOT__snd__DOT__cpu_din;
        SData/*15:0*/ tb_system__DOT__snd__DOT__ram_q;
        SData/*15:0*/ tb_system__DOT__main_board__DOT__cpu_din;
        SData/*15:0*/ tb_system__DOT__main_board__DOT__ram_q;
        SData/*10:0*/ tb_system__DOT__main_board__DOT__line_cnt;
        SData/*9:0*/ tb_system__DOT__video__DOT__hcnt;
        SData/*9:0*/ tb_system__DOT__video__DOT__vcnt;
    };
    struct {
        SData/*15:0*/ tb_system__DOT__video__DOT__vram_rq;
        SData/*10:0*/ tb_system__DOT__video__DOT__vram_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__sprram_rq;
        SData/*10:0*/ tb_system__DOT__video__DOT__sprram_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_q0;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_q1;
        SData/*13:0*/ tb_system__DOT__video__DOT__bg_raddr;
        SData/*14:0*/ tb_system__DOT__video__DOT__spr_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_d0;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_d1;
        SData/*8:0*/ tb_system__DOT__video__DOT__bg_next_y;
        SData/*15:0*/ tb_system__DOT__video__DOT__sp_disp_q;
        SData/*8:0*/ tb_system__DOT__video__DOT__sp_idx;
        SData/*8:0*/ tb_system__DOT__video__DOT__sp_line;
        SData/*8:0*/ tb_system__DOT__video__DOT__sp_clr_addr;
        SData/*10:0*/ tb_system__DOT__video__DOT__sp_code;
        SData/*10:0*/ tb_system__DOT__video__DOT__sp_xs;
        SData/*8:0*/ tb_system__DOT__video__DOT__rgb9;
        SData/*15:0*/ tb_system__DOT__video__DOT__unnamedblk3__DOT__cur;
        SData/*10:0*/ __Vdly__tb_system__DOT__main_board__DOT__line_cnt;
        SData/*9:0*/ __Vdly__tb_system__DOT__video__DOT__hcnt;
        SData/*9:0*/ __Vdly__tb_system__DOT__video__DOT__vcnt;
        SData/*15:0*/ __Vtrigprevexpr___TOP__in0__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__in1__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__dsw__0;
        IData/*16:0*/ tb_system__DOT__acc_m;
        IData/*16:0*/ tb_system__DOT__acc_s;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 131072> tb_system__DOT__mrom;
        VlUnpacked<SData/*15:0*/, 131072> tb_system__DOT__srom;
        VlUnpacked<SData/*15:0*/, 2048> tb_system__DOT__snd__DOT__ram;
        VlUnpacked<SData/*15:0*/, 8192> tb_system__DOT__main_board__DOT__ram;
        VlUnpacked<CData/*7:0*/, 3> tb_system__DOT__main_board__DOT__ptm__DOT__cr;
        VlUnpacked<SData/*15:0*/, 3> tb_system__DOT__main_board__DOT__ptm__DOT__latch;
        VlUnpacked<SData/*15:0*/, 3> tb_system__DOT__main_board__DOT__ptm__DOT__cnt;
        VlUnpacked<CData/*7:0*/, 3> tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf;
        VlUnpacked<SData/*15:0*/, 4096> tb_system__DOT__video__DOT__vram;
        VlUnpacked<SData/*15:0*/, 4096> tb_system__DOT__video__DOT__sprram;
        VlUnpacked<SData/*8:0*/, 64> tb_system__DOT__video__DOT__palette;
        VlUnpacked<SData/*15:0*/, 32768> tb_system__DOT__video__DOT__bg_rom;
        VlUnpacked<SData/*15:0*/, 32768> tb_system__DOT__video__DOT__spr_rom0;
        VlUnpacked<SData/*15:0*/, 32768> tb_system__DOT__video__DOT__spr_rom1;
        VlUnpacked<SData/*15:0*/, 32768> tb_system__DOT__video__DOT__spr_rom2;
        VlUnpacked<SData/*15:0*/, 32768> tb_system__DOT__video__DOT__spr_rom3;
        VlUnpacked<SData/*15:0*/, 4> tb_system__DOT__video__DOT__spr_q;
        VlUnpacked<VlUnpacked<CData/*6:0*/, 512>, 2> tb_system__DOT__video__DOT__bg_lbuf;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 512>, 2> tb_system__DOT__video__DOT__sp_lbuf;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 4> tb_system__DOT__video__DOT__sp_row;
        VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    Vtb_system_s_nanod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0;
    Vtb_system_s_irdecod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0;
    Vtb_system_s_nanod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0;
    Vtb_system_s_irdecod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0;
    Vtb_system_s_nanod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1;
    Vtb_system_s_irdecod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1;
    Vtb_system_s_nanod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1;
    Vtb_system_s_irdecod__struct__0 __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1;

    // INTERNAL VARIABLES
    Vtb_system__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_system___024root(Vtb_system__Syms* symsp, const char* namep);
    ~Vtb_system___024root();
    VL_UNCOPYABLE(Vtb_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
