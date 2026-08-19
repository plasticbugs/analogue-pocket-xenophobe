// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_loader.h for the primary calling header

#ifndef VERILATED_VTB_LOADER___024ROOT_H_
#define VERILATED_VTB_LOADER___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_loader__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_loader___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(dl_active,0,0);
        VL_IN8(dl_data,7,0);
        VL_IN8(dl_wr,0,0);
        VL_IN8(rd0_req,0,0);
        VL_OUT8(rd0_done,0,0);
        VL_IN8(rd1_req,0,0);
        VL_OUT8(rd1_done,0,0);
        VL_IN8(spr_req,0,0);
        VL_OUT8(spr_done,0,0);
        CData/*7:0*/ tb_loader__DOT__sd_din;
        CData/*0:0*/ tb_loader__DOT__sd_we;
        CData/*0:0*/ tb_loader__DOT__sd_rd;
        CData/*0:0*/ tb_loader__DOT__sd_ready;
        CData/*0:0*/ tb_loader__DOT__sd_brd;
        CData/*0:0*/ tb_loader__DOT__sd_bready;
        CData/*1:0*/ tb_loader__DOT__srv__DOT__st;
        CData/*0:0*/ tb_loader__DOT__srv__DOT__cur;
        CData/*6:0*/ tb_loader__DOT__srv__DOT__wf_wp;
        CData/*6:0*/ tb_loader__DOT__srv__DOT__wf_rp;
        CData/*0:0*/ tb_loader__DOT__srv__DOT__wf_empty;
        CData/*0:0*/ tb_loader__DOT__srv__DOT__dlwr_q;
        CData/*0:0*/ tb_loader__DOT__srv__DOT__dl_st;
        CData/*3:0*/ tb_loader__DOT__srv__DOT__dl_cnt;
        CData/*0:0*/ tb_loader__DOT__chip__DOT__row_active;
        CData/*0:0*/ tb_loader__DOT__chip__DOT__pipe_v1;
        CData/*0:0*/ tb_loader__DOT__chip__DOT__dq_oe;
        CData/*2:0*/ tb_loader__DOT__sdram16__DOT__command;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_we;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd;
        CData/*3:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
        CData/*2:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
        CData/*2:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
        CData/*2:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
        CData/*7:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_data;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
        CData/*0:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(rd0_q,15,0);
        VL_OUT16(rd1_q,15,0);
        VL_IN16(spr_addr,13,0);
        SData/*15:0*/ tb_loader__DOT__dq;
        SData/*12:0*/ tb_loader__DOT__a;
        SData/*8:0*/ tb_loader__DOT__srv__DOT__wcnt;
        SData/*12:0*/ tb_loader__DOT__chip__DOT__row_open;
        SData/*15:0*/ tb_loader__DOT__chip__DOT__pipe_q1;
        SData/*15:0*/ tb_loader__DOT__chip__DOT__dq_out;
        SData/*13:0*/ tb_loader__DOT__sdram16__DOT__refresh_count;
        SData/*15:0*/ tb_loader__DOT__sdram16__DOT__data;
        SData/*15:0*/ tb_loader__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1;
        VL_IN(dl_addr,24,0);
        VL_IN(rd0_addr,17,1);
        VL_IN(rd1_addr,17,1);
        VL_OUTW(spr_data,127,0,4);
        IData/*24:0*/ tb_loader__DOT__sd_addr;
        IData/*20:0*/ tb_loader__DOT__sd_baddr;
        VlWide<4>/*127:0*/ tb_loader__DOT__sd_bdata;
    };
    struct {
        IData/*21:0*/ tb_loader__DOT__chip__DOT__widx;
        IData/*24:0*/ tb_loader__DOT__sdram16__DOT__save_addr;
        IData/*24:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr;
        IData/*31:0*/ tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*32:0*/, 64> tb_loader__DOT__srv__DOT__wfifo;
        VlUnpacked<SData/*15:0*/, 2097152> tb_loader__DOT__chip__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtb_loader__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_loader___024root(Vtb_loader__Syms* symsp, const char* namep);
    ~Vtb_loader___024root();
    VL_UNCOPYABLE(Vtb_loader___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
