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
        CData/*0:0*/ tb_system__DOT__mrom_req;
        CData/*0:0*/ tb_system__DOT__mrom_ack;
        CData/*0:0*/ tb_system__DOT__srom_req;
        CData/*0:0*/ tb_system__DOT__srom_ack;
        CData/*1:0*/ tb_system__DOT__vram_we;
        CData/*1:0*/ tb_system__DOT__sprram_we;
        CData/*0:0*/ tb_system__DOT__hsync_pulse;
        CData/*0:0*/ tb_system__DOT__vsync30;
        CData/*0:0*/ tb_system__DOT__sd_brd;
        CData/*0:0*/ tb_system__DOT__sd_bready;
        CData/*7:0*/ tb_system__DOT__sd_din;
        CData/*0:0*/ tb_system__DOT__sd_we;
        CData/*0:0*/ tb_system__DOT__sd_rd;
        CData/*0:0*/ tb_system__DOT__sd_ready;
        CData/*0:0*/ tb_system__DOT__spr_fetch_req;
        CData/*0:0*/ tb_system__DOT__spr_fetch_done;
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
    };
    struct {
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
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__c_in;
        CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset;
        CData/*2:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__tick;
        CData/*3:0*/ tb_system__DOT__video__DOT____VlemCall_0__bg_pen;
        CData/*0:0*/ tb_system__DOT__video__DOT__field;
        CData/*0:0*/ tb_system__DOT__video__DOT__bg_rhalf;
        CData/*0:0*/ tb_system__DOT__video__DOT__bg_rhalf_q;
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
        CData/*0:0*/ tb_system__DOT__video__DOT__sp_blend_go;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_wr_data;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_bq_lo;
        CData/*7:0*/ tb_system__DOT__video__DOT__sp_bq_hi;
        CData/*0:0*/ tb_system__DOT__video__DOT__sp_bv_lo;
        CData/*0:0*/ tb_system__DOT__video__DOT__sp_bv_hi;
        CData/*0:0*/ tb_system__DOT__video__DOT__de_d;
        CData/*0:0*/ tb_system__DOT__video__DOT__hs_d;
        CData/*0:0*/ tb_system__DOT__video__DOT__vs_d;
        CData/*5:0*/ tb_system__DOT__video__DOT__unnamedblk3__DOT__idx;
        CData/*7:0*/ tb_system__DOT__video__DOT__unnamedblk3__DOT__lo;
        CData/*7:0*/ tb_system__DOT__video__DOT__unnamedblk3__DOT__hi;
        CData/*1:0*/ tb_system__DOT__rom_srv__DOT__st;
        CData/*0:0*/ tb_system__DOT__rom_srv__DOT__cur;
        CData/*0:0*/ tb_system__DOT__sdram_chip__DOT__row_active;
        CData/*0:0*/ tb_system__DOT__sdram_chip__DOT__pipe_v1;
        CData/*0:0*/ tb_system__DOT__sdram_chip__DOT__dq_oe;
        CData/*2:0*/ tb_system__DOT__sdram16__DOT__command;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_we;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd;
        CData/*3:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
        CData/*2:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
        CData/*2:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
        CData/*2:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
        CData/*7:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_data;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we;
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    };
    struct {
        CData/*0:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_6;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_15;
        CData/*0:0*/ __Vdly__tb_system__DOT__ce_div;
        CData/*0:0*/ __Vdly__tb_system__DOT__video__DOT__field;
        CData/*0:0*/ __Vdly__tb_system__DOT__mrom_ack;
        CData/*0:0*/ __Vdly__tb_system__DOT__srom_ack;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr_hcd2bfade__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h80e5c8f0__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(in0,15,0);
        VL_IN16(in1,15,0);
        VL_IN16(dsw,15,0);
        VL_OUT16(ctrl,15,0);
        VL_OUT16(dac,9,0);
        SData/*15:0*/ tb_system__DOT__mrom_q;
        SData/*15:0*/ tb_system__DOT__srom_q;
        SData/*15:0*/ tb_system__DOT__vram_q;
        SData/*15:0*/ tb_system__DOT__sprram_q;
        SData/*15:0*/ tb_system__DOT__sdq;
        SData/*12:0*/ tb_system__DOT__sda;
        SData/*13:0*/ tb_system__DOT__spr_fetch_addr;
        SData/*15:0*/ tb_system__DOT__snd__DOT__cpu_din;
        SData/*15:0*/ tb_system__DOT__snd__DOT__ram_q;
        SData/*15:0*/ tb_system__DOT__main_board__DOT__cpu_din;
        SData/*15:0*/ tb_system__DOT__main_board__DOT__ram_q;
        SData/*10:0*/ tb_system__DOT__main_board__DOT__line_cnt;
        SData/*9:0*/ tb_system__DOT__video__DOT__hcnt;
        SData/*9:0*/ tb_system__DOT__video__DOT__vcnt;
        SData/*15:0*/ tb_system__DOT__video__DOT__vram_rq;
        SData/*10:0*/ tb_system__DOT__video__DOT__vram_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__sprram_rq;
        SData/*10:0*/ tb_system__DOT__video__DOT__sprram_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_q0;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_q1;
        SData/*13:0*/ tb_system__DOT__video__DOT__bg_raddr;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_rdata;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_d0;
        SData/*15:0*/ tb_system__DOT__video__DOT__bg_d1;
        SData/*8:0*/ tb_system__DOT__video__DOT__bg_next_y;
        SData/*8:0*/ tb_system__DOT__video__DOT__sp_idx;
        SData/*8:0*/ tb_system__DOT__video__DOT__sp_line;
        SData/*10:0*/ tb_system__DOT__video__DOT__sp_code;
        SData/*10:0*/ tb_system__DOT__video__DOT__sp_xs;
        SData/*9:0*/ tb_system__DOT__video__DOT__sp_wr_addr;
        SData/*15:0*/ tb_system__DOT__video__DOT__sp_lbuf_bq;
        SData/*8:0*/ tb_system__DOT__video__DOT__rgb9;
        SData/*8:0*/ tb_system__DOT__rom_srv__DOT__wcnt;
        SData/*12:0*/ tb_system__DOT__sdram_chip__DOT__row_open;
        SData/*15:0*/ tb_system__DOT__sdram_chip__DOT__pipe_q1;
        SData/*15:0*/ tb_system__DOT__sdram_chip__DOT__dq_out;
    };
    struct {
        SData/*13:0*/ tb_system__DOT__sdram16__DOT__refresh_count;
        SData/*15:0*/ tb_system__DOT__sdram16__DOT__data;
        SData/*15:0*/ tb_system__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1;
        SData/*10:0*/ __Vdly__tb_system__DOT__main_board__DOT__line_cnt;
        SData/*9:0*/ __Vdly__tb_system__DOT__video__DOT__hcnt;
        SData/*9:0*/ __Vdly__tb_system__DOT__video__DOT__vcnt;
        SData/*15:0*/ __Vtrigprevexpr___TOP__in0__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__in1__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__dsw__0;
        IData/*16:0*/ tb_system__DOT__acc_m;
        IData/*16:0*/ tb_system__DOT__acc_s;
        IData/*20:0*/ tb_system__DOT__sd_baddr;
        VlWide<4>/*127:0*/ tb_system__DOT__sd_bdata;
        IData/*24:0*/ tb_system__DOT__sd_addr;
        VlWide<4>/*127:0*/ tb_system__DOT__spr_fetch_data;
        VlWide<16>/*511:0*/ tb_system__DOT__video__DOT__sp_claim_lo0;
        VlWide<16>/*511:0*/ tb_system__DOT__video__DOT__sp_claim_lo1;
        VlWide<16>/*511:0*/ tb_system__DOT__video__DOT__sp_claim_hi0;
        VlWide<16>/*511:0*/ tb_system__DOT__video__DOT__sp_claim_hi1;
        IData/*21:0*/ tb_system__DOT__sdram_chip__DOT__widx;
        IData/*24:0*/ tb_system__DOT__sdram16__DOT__save_addr;
        IData/*24:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr;
        IData/*31:0*/ tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state;
        IData/*31:0*/ __VactIterCount;
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
        VlUnpacked<CData/*6:0*/, 1024> tb_system__DOT__video__DOT__bg_lbuf;
        VlUnpacked<CData/*7:0*/, 1024> tb_system__DOT__video__DOT__sp_lbuf_lo;
        VlUnpacked<CData/*7:0*/, 1024> tb_system__DOT__video__DOT__sp_lbuf_hi;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 4> tb_system__DOT__video__DOT__sp_row;
        VlUnpacked<SData/*15:0*/, 2097152> tb_system__DOT__sdram_chip__DOT__mem;
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
