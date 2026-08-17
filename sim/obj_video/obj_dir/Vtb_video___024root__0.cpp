// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video.h for the primary calling header

#include "Vtb_video__pch.h"

bool Vtb_video___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<16>/*511:0*/ Vtb_video__ConstPool__CONST_h93e1b771_0;

void Vtb_video___024root___nba_sequent__TOP__0(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___nba_sequent__TOP__0\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_video__DOT__video__DOT__sp_row_w;
    tb_video__DOT__video__DOT__sp_row_w = 0;
    CData/*5:0*/ tb_video__DOT__video__DOT__sp_px_src;
    tb_video__DOT__video__DOT__sp_px_src = 0;
    SData/*15:0*/ __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w0;
    __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w0 = 0;
    SData/*15:0*/ __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w1;
    __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w1 = 0;
    CData/*2:0*/ __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c;
    __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c = 0;
    CData/*1:0*/ __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__lo;
    __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__lo = 0;
    CData/*1:0*/ __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__hi;
    __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__hi = 0;
    CData/*0:0*/ __Vtask_tb_video__DOT__video__DOT__sp_next__1__from_scan;
    __Vtask_tb_video__DOT__video__DOT__sp_next__1__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_video__DOT__video__DOT__sp_next__2__from_scan;
    __Vtask_tb_video__DOT__video__DOT__sp_next__2__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_video__DOT__video__DOT__sp_next__3__from_scan;
    __Vtask_tb_video__DOT__video__DOT__sp_next__3__from_scan = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__ce_div;
    __Vdly__tb_video__DOT__ce_div = 0;
    SData/*9:0*/ __Vdly__tb_video__DOT__video__DOT__vcnt;
    __Vdly__tb_video__DOT__video__DOT__vcnt = 0;
    SData/*9:0*/ __Vdly__tb_video__DOT__video__DOT__hcnt;
    __Vdly__tb_video__DOT__video__DOT__hcnt = 0;
    CData/*3:0*/ __Vdly__tb_video__DOT__video__DOT__bg_st;
    __Vdly__tb_video__DOT__video__DOT__bg_st = 0;
    CData/*3:0*/ __Vdly__tb_video__DOT__video__DOT__bg_px;
    __Vdly__tb_video__DOT__video__DOT__bg_px = 0;
    CData/*4:0*/ __Vdly__tb_video__DOT__video__DOT__bg_cell;
    __Vdly__tb_video__DOT__video__DOT__bg_cell = 0;
    SData/*10:0*/ __Vdly__tb_video__DOT__video__DOT__vram_raddr;
    __Vdly__tb_video__DOT__video__DOT__vram_raddr = 0;
    CData/*3:0*/ __Vdly__tb_video__DOT__video__DOT__sp_st;
    __Vdly__tb_video__DOT__video__DOT__sp_st = 0;
    CData/*5:0*/ __Vdly__tb_video__DOT__video__DOT__sp_px;
    __Vdly__tb_video__DOT__video__DOT__sp_px = 0;
    SData/*8:0*/ __Vdly__tb_video__DOT__video__DOT__sp_idx;
    __Vdly__tb_video__DOT__video__DOT__sp_idx = 0;
    SData/*10:0*/ __Vdly__tb_video__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_video__DOT__video__DOT__sprram_raddr = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__video__DOT__lbuf_sel;
    __Vdly__tb_video__DOT__video__DOT__lbuf_sel = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__spr_fetch_done;
    __Vdly__tb_video__DOT__spr_fetch_done = 0;
    CData/*2:0*/ __Vdly__tb_video__DOT__rom_server__DOT__st;
    __Vdly__tb_video__DOT__rom_server__DOT__st = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_video__DOT__spr_fetch_data;
    VL_ZERO_W(128, __Vdly__tb_video__DOT__spr_fetch_data);
    SData/*13:0*/ __Vdly__tb_video__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_video__DOT__sdram16__DOT__refresh_count = 0;
    CData/*2:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__sd_ready;
    __Vdly__tb_video__DOT__sd_ready = 0;
    IData/*31:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0;
    CData/*2:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0;
    CData/*2:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_video__DOT__sd_bdata;
    VL_ZERO_W(128, __Vdly__tb_video__DOT__sd_bdata);
    CData/*0:0*/ __Vdly__tb_video__DOT__sd_bready;
    __Vdly__tb_video__DOT__sd_bready = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0;
    IData/*24:0*/ __Vdly__tb_video__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_video__DOT__sdram16__DOT__save_addr = 0;
    CData/*0:0*/ __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0;
    CData/*6:0*/ __VdlyVal__tb_video__DOT__video__DOT__bg_lbuf__v0;
    __VdlyVal__tb_video__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_video__DOT__video__DOT__bg_lbuf__v0;
    __VdlyDim0__tb_video__DOT__video__DOT__bg_lbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__bg_lbuf__v0;
    __VdlySet__tb_video__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v0;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_row__v0;
    __VdlySet__tb_video__DOT__video__DOT__sp_row__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v1;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_row__v1;
    __VdlySet__tb_video__DOT__video__DOT__sp_row__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v2;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v3;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v3 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v4;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v5;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v5 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v6;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v6 = 0;
    SData/*15:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_row__v7;
    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v1;
    __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v1;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v1;
    __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v1;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v0;
    __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v0;
    __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v0;
    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v1;
    __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v1 = 0;
    IData/*20:0*/ __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v1;
    __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v1;
    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v1 = 0;
    // Body
    __Vdly__tb_video__DOT__ce_div = vlSelfRef.tb_video__DOT__ce_div;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v1 = 0U;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v1 = 0U;
    __Vdly__tb_video__DOT__video__DOT__vcnt = vlSelfRef.tb_video__DOT__video__DOT__vcnt;
    __Vdly__tb_video__DOT__video__DOT__hcnt = vlSelfRef.tb_video__DOT__video__DOT__hcnt;
    __Vdly__tb_video__DOT__video__DOT__lbuf_sel = vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 = 0U;
    __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 = 0U;
    __Vdly__tb_video__DOT__video__DOT__bg_st = vlSelfRef.tb_video__DOT__video__DOT__bg_st;
    __Vdly__tb_video__DOT__video__DOT__bg_px = vlSelfRef.tb_video__DOT__video__DOT__bg_px;
    __Vdly__tb_video__DOT__video__DOT__bg_cell = vlSelfRef.tb_video__DOT__video__DOT__bg_cell;
    __Vdly__tb_video__DOT__video__DOT__vram_raddr = vlSelfRef.tb_video__DOT__video__DOT__vram_raddr;
    __Vdly__tb_video__DOT__video__DOT__sp_idx = vlSelfRef.tb_video__DOT__video__DOT__sp_idx;
    __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
        = vlSelfRef.tb_video__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_video__DOT__video__DOT__sp_st = vlSelfRef.tb_video__DOT__video__DOT__sp_st;
    __VdlySet__tb_video__DOT__video__DOT__sp_row__v0 = 0U;
    __VdlySet__tb_video__DOT__video__DOT__sp_row__v1 = 0U;
    __Vdly__tb_video__DOT__video__DOT__sp_px = vlSelfRef.tb_video__DOT__video__DOT__sp_px;
    __VdlySet__tb_video__DOT__video__DOT__bg_lbuf__v0 = 0U;
    __Vdly__tb_video__DOT__spr_fetch_done = vlSelfRef.tb_video__DOT__spr_fetch_done;
    __Vdly__tb_video__DOT__rom_server__DOT__st = vlSelfRef.tb_video__DOT__rom_server__DOT__st;
    __Vdly__tb_video__DOT__spr_fetch_data[0U] = vlSelfRef.tb_video__DOT__spr_fetch_data[0U];
    __Vdly__tb_video__DOT__spr_fetch_data[1U] = vlSelfRef.tb_video__DOT__spr_fetch_data[1U];
    __Vdly__tb_video__DOT__spr_fetch_data[2U] = vlSelfRef.tb_video__DOT__spr_fetch_data[2U];
    __Vdly__tb_video__DOT__spr_fetch_data[3U] = vlSelfRef.tb_video__DOT__spr_fetch_data[3U];
    __Vdly__tb_video__DOT__sdram16__DOT__refresh_count 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_video__DOT__sd_ready = vlSelfRef.tb_video__DOT__sd_ready;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_video__DOT__sd_bdata[0U] = vlSelfRef.tb_video__DOT__sd_bdata[0U];
    __Vdly__tb_video__DOT__sd_bdata[1U] = vlSelfRef.tb_video__DOT__sd_bdata[1U];
    __Vdly__tb_video__DOT__sd_bdata[2U] = vlSelfRef.tb_video__DOT__sd_bdata[2U];
    __Vdly__tb_video__DOT__sd_bdata[3U] = vlSelfRef.tb_video__DOT__sd_bdata[3U];
    __Vdly__tb_video__DOT__sd_bready = vlSelfRef.tb_video__DOT__sd_bready;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_video__DOT__sdram16__DOT__save_addr 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v0 = 0U;
    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_video__DOT__ce_div)))) {
        __Vdly__tb_video__DOT__ce_div = 1U;
        __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v1 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr;
        __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v1 = 1U;
        __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v1 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr;
        __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v1 = 1U;
    } else {
        __Vdly__tb_video__DOT__ce_div = 0U;
    }
    if ((((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_blend_go) 
          & (8U != (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_pen_v))) 
         & (~ ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
               >> 2U)))) {
        __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_wr_data;
        __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_wr_addr;
        __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_blend_go) 
          & (8U != (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_pen_v))) 
         & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
            >> 2U))) {
        __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_wr_data;
        __VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_wr_addr;
        __VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v0 = 1U;
    }
    if ((9U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c 
            = (7U & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_px) 
                      >> 1U) ^ (- (IData)((1U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1) 
                                                 >> 2U))))));
        __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w1 
            = vlSelfRef.tb_video__DOT__video__DOT__bg_q1;
        __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w0 
            = vlSelfRef.tb_video__DOT__video__DOT__bg_q0;
        __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__lo 
            = ((2U & (((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w0) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w0) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c) 
                                                 << 1U))))));
        __Vfunc_tb_video__DOT__video__DOT__bg_pen__0__hi 
            = ((2U & (((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w1) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__w1) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__c) 
                                                 << 1U))))));
        vlSelfRef.tb_video__DOT__video__DOT____VlemCall_0__bg_pen 
            = (((IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__hi) 
                << 2U) | (IData)(__Vfunc_tb_video__DOT__video__DOT__bg_pen__0__lo));
        __VdlyVal__tb_video__DOT__video__DOT__bg_lbuf__v0 
            = ((0x00000040U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1) 
                               >> 1U)) | ((0x00000030U 
                                           & ((~ ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1) 
                                                  >> 4U)) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.tb_video__DOT__video__DOT____VlemCall_0__bg_pen)));
        __VdlyDim0__tb_video__DOT__video__DOT__bg_lbuf__v0 
            = (((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_wrbuf) 
                << 9U) | (((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_cell) 
                           << 4U) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_px)));
        __VdlySet__tb_video__DOT__video__DOT__bg_lbuf__v0 = 1U;
    }
    if ((1U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
        VL_ASSIGN_W(512, vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi, Vtb_video__ConstPool__CONST_h93e1b771_0);
        VL_ASSIGN_W(512, vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo, Vtb_video__ConstPool__CONST_h93e1b771_0);
    } else if (vlSelfRef.tb_video__DOT__video__DOT__sp_blend_go) {
        if ((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))) {
            vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi[(0x0000000fU 
                                                              & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                                                 >> 5U))] 
                = (vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi
                   [(0x0000000fU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                    >> 5U))] | ((IData)(1U) 
                                                << 
                                                (0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs))));
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
                      >> 2U)))) {
            vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo[(0x0000000fU 
                                                              & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                                                 >> 5U))] 
                = (vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo
                   [(0x0000000fU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                    >> 5U))] | ((IData)(1U) 
                                                << 
                                                (0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs))));
        }
    }
    vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_oe 
        = vlSelfRef.tb_video__DOT__sdram_chip__DOT__pipe_v1;
    vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_out 
        = vlSelfRef.tb_video__DOT__sdram_chip__DOT__pipe_q1;
    if ((3U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__command))) {
        vlSelfRef.tb_video__DOT__sdram_chip__DOT__row_open 
            = vlSelfRef.tb_video__DOT__sd_a;
    }
    if (vlSelfRef.tb_video__DOT__ce_div) {
        if ((0x027aU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt))) {
            if ((0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))) {
                vlSelfRef.tb_video__DOT__video__DOT__field 
                    = (1U & (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__field)));
                __Vdly__tb_video__DOT__video__DOT__vcnt = 0U;
            } else {
                __Vdly__tb_video__DOT__video__DOT__vcnt 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)));
            }
            __Vdly__tb_video__DOT__video__DOT__hcnt = 0U;
        } else {
            __Vdly__tb_video__DOT__video__DOT__hcnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)));
        }
        vlSelfRef.tb_video__DOT__video__DOT__sp_bq_lo 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_lo
            [vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr];
    }
    if (__VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v0) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_lo[__VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v0] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_lo__v0;
    }
    if (__VdlySet__tb_video__DOT__video__DOT__sp_lbuf_lo__v1) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_lo[__VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_lo__v1] = 0U;
    }
    if (vlSelfRef.tb_video__DOT__ce_div) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_bq_hi 
            = vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_hi
            [vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr];
    }
    if (__VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v0) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_hi[__VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v0] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_lbuf_hi__v0;
    }
    if (__VdlySet__tb_video__DOT__video__DOT__sp_lbuf_hi__v1) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_hi[__VdlyDim0__tb_video__DOT__video__DOT__sp_lbuf_hi__v1] = 0U;
    }
    if (vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf_q) {
        vlSelfRef.tb_video__DOT__video__DOT__bg_q1 
            = vlSelfRef.tb_video__DOT__video__DOT__bg_rdata;
    } else {
        vlSelfRef.tb_video__DOT__video__DOT__bg_q0 
            = vlSelfRef.tb_video__DOT__video__DOT__bg_rdata;
    }
    if (vlSelfRef.tb_video__DOT__ce_div) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr_q 
            = (((IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel) 
                << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)));
        vlSelfRef.vs = vlSelfRef.tb_video__DOT__video__DOT__vs_d;
        vlSelfRef.hs = vlSelfRef.tb_video__DOT__video__DOT__hs_d;
        vlSelfRef.de = vlSelfRef.tb_video__DOT__video__DOT__de_d;
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__lo 
            = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_bq));
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__hi 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_bq) 
                              >> 8U));
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__idx 
            = (0x0000003fU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_disp_q));
        if ((IData)(((0x40U == (0xc0U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__lo))) 
                     & (~ (((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_disp_q) 
                            >> 6U) & (0U != (0x0000000fU 
                                             & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_disp_q)))))))) {
            vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__idx 
                = (0x0000003fU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__lo));
        }
        if ((1U == (3U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__hi) 
                          >> 6U)))) {
            vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__idx 
                = (0x0000003fU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__hi));
        }
        vlSelfRef.tb_video__DOT__video__DOT__rgb9 = vlSelfRef.tb_video__DOT__video__DOT__palette
            [vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__idx];
    }
    vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_bq 
        = (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bq_hi) 
            << 8U) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bq_lo));
    vlSelfRef.r = ((0x000000e0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                   >> 1U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                  >> 4U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                    >> 7U))));
    vlSelfRef.g = ((0x000000e0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                   << 5U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                  << 2U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                    >> 1U))));
    vlSelfRef.b = ((0x000000e0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                   << 2U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                  >> 1U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__rgb9) 
                                                    >> 4U))));
    vlSelfRef.tb_video__DOT__sdram_chip__DOT__pipe_v1 = 0U;
    if ((3U != (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__command))) {
        if ((5U != (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__command))) {
            if ((4U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__command))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_video__DOT__sd_a) 
                              >> 0x0000000bU)))) {
                    __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__sd_dq));
                    __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v0 
                        = (0x001fffffU & vlSelfRef.tb_video__DOT__sdram_chip__DOT__widx);
                    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_video__DOT__sd_a) 
                              >> 0x0000000cU)))) {
                    __VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v1 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_video__DOT__sd_dq) 
                                          >> 8U));
                    __VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v1 
                        = (0x001fffffU & vlSelfRef.tb_video__DOT__sdram_chip__DOT__widx);
                    __VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v1 = 1U;
                }
            }
        }
        if ((5U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__command))) {
            vlSelfRef.tb_video__DOT__sdram_chip__DOT__pipe_v1 = 1U;
            vlSelfRef.tb_video__DOT__sdram_chip__DOT__pipe_q1 
                = vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem
                [(0x001fffffU & vlSelfRef.tb_video__DOT__sdram_chip__DOT__widx)];
        }
    }
    if (vlSelfRef.tb_video__DOT__ce_div) {
        vlSelfRef.tb_video__DOT__video__DOT__vs_d = 
            ((0x01eaU <= (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)) 
             & (0x01edU > (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)));
        vlSelfRef.tb_video__DOT__video__DOT__hs_d = 
            ((0x0220U <= (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)) 
             & (0x0250U > (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)));
        vlSelfRef.tb_video__DOT__video__DOT__de_d = 
            ((0x0200U > (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)) 
             & (0x01e0U > (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)));
        if (((0x027aU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)) 
             & (0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_video__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel)));
        } else if (((0x027aU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)) 
                    & (0x01e0U > (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_video__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel)));
        }
        vlSelfRef.tb_video__DOT__video__DOT__bg_disp_q 
            = vlSelfRef.tb_video__DOT__video__DOT__bg_lbuf
            [(((IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)))];
    }
    if (__VdlySet__tb_video__DOT__video__DOT__bg_lbuf__v0) {
        vlSelfRef.tb_video__DOT__video__DOT__bg_lbuf[__VdlyDim0__tb_video__DOT__video__DOT__bg_lbuf__v0] 
            = __VdlyVal__tb_video__DOT__video__DOT__bg_lbuf__v0;
    }
    if (__VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v0) {
        vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem[__VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem
                [__VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v0));
    }
    if (__VdlySet__tb_video__DOT__sdram_chip__DOT__mem__v1) {
        vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem[__VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem
                [__VdlyDim0__tb_video__DOT__sdram_chip__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_video__DOT__sdram_chip__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf_q 
        = vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf;
    vlSelfRef.tb_video__DOT__video__DOT__bg_rdata = vlSelfRef.tb_video__DOT__video__DOT__bg_rom
        [(((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf) 
           << 0x0000000eU) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_raddr))];
    vlSelfRef.tb_video__DOT__sdram16__DOT__command = 7U;
    __Vdly__tb_video__DOT__sdram16__DOT__refresh_count 
        = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count)));
    __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = (3U & ((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay) 
                 >> 1U));
    if ((1U & (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay))) {
        __Vdly__tb_video__DOT__sd_ready = 1U;
    }
    if (((((((((0U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state) 
               | (0x0000000aU == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
              | (9U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
             | (8U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
            | (7U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
           | (6U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
          | (5U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
         | (4U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state))) {
        if ((0U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            vlSelfRef.tb_video__DOT__sd_a = 0U;
            if ((0x3fe0U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_video__DOT__sdram16__DOT__command = 2U;
                vlSelfRef.tb_video__DOT__sd_a = (0x00000400U 
                                                 | (IData)(vlSelfRef.tb_video__DOT__sd_a));
            }
            if ((0x3fe8U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_video__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff0U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_video__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff8U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_video__DOT__sdram16__DOT__command = 0U;
                vlSelfRef.tb_video__DOT__sd_a = 0x0220U;
            }
            if ((1U & (~ (0U != (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))))) {
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
                __Vdly__tb_video__DOT__sd_ready = 1U;
                __Vdly__tb_video__DOT__sdram16__DOT__refresh_count = 0U;
            }
        } else if ((0x0000000aU == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 9U;
        } else if ((9U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        } else if ((8U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 7U;
        } else if ((7U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 6U;
        } else if ((6U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else if ((5U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
            if ((0x014fU < (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000aU;
                vlSelfRef.tb_video__DOT__sdram16__DOT__command = 1U;
                __Vdly__tb_video__DOT__sdram16__DOT__refresh_count = 0U;
            }
        }
    } else if ((0x0000000bU == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0U;
        __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0U;
        __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000cU;
    } else if ((0x0000000cU == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((7U >= (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            vlSelfRef.tb_video__DOT__sdram16__DOT__command = 5U;
            vlSelfRef.tb_video__DOT__sd_a = (((7U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                                              << 9U) 
                                             | ((0x000001f8U 
                                                 & (vlSelfRef.tb_video__DOT__sd_baddr 
                                                    << 3U)) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))));
        }
        if ((8U >= (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)));
        }
        __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
            = (((7U >= (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay) 
                                >> 1U)));
        if ((1U & (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay))) {
            VL_ASSIGNSEL_WI(128, 16, (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap) 
                                       << 4U)), __Vdly__tb_video__DOT__sd_bdata, vlSelfRef.tb_video__DOT__sd_dq);
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap)));
            if ((7U == (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap))) {
                __Vdly__tb_video__DOT__sd_bready = 1U;
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
            }
        }
    } else if ((3U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((0x029eU < (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count))) {
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else if (vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd) {
            vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 0U;
            vlSelfRef.tb_video__DOT__sd_a = (0x00001fffU 
                                             & (vlSelfRef.tb_video__DOT__sd_baddr 
                                                >> 6U));
            vlSelfRef.tb_video__DOT__sdram16__DOT__command = 3U;
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000bU;
        } else if (((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd) 
                    | (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_we))) {
            if (vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_we) {
                vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 0U;
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
                __Vdly__tb_video__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr;
                vlSelfRef.tb_video__DOT__sd_a = (0x00001fffU 
                                                 & (vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
                                                    >> 0x0aU));
            } else {
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0U;
                __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0U;
                __Vdly__tb_video__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_video__DOT__sd_addr;
                vlSelfRef.tb_video__DOT__sd_a = (0x00001fffU 
                                                 & (vlSelfRef.tb_video__DOT__sd_addr 
                                                    >> 0x0aU));
            }
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 1U;
            vlSelfRef.tb_video__DOT__sdram16__DOT__command = 3U;
        }
    } else if ((1U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 2U;
    } else if ((2U == vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        vlSelfRef.tb_video__DOT__sd_a = (0x00000400U 
                                         | ((((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                              & (~ vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr)) 
                                             << 0x0000000cU) 
                                            | ((((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                                 & vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr) 
                                                << 0x0000000bU) 
                                               | (0x000001ffU 
                                                  & (vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr 
                                                     >> 1U)))));
        if (vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) {
            vlSelfRef.tb_video__DOT__sdram16__DOT__command = 4U;
            vlSelfRef.tb_video__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 
                = (0x0000ffffU & (((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_data) 
                                   << 8U) | (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_data)));
            __Vdly__tb_video__DOT__sd_ready = (1U & 
                                               (~ (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd)));
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else {
            vlSelfRef.tb_video__DOT__sdram16__DOT__command = 5U;
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
                = (4U | (IData)(__Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay));
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        }
    }
    if (((IData)(vlSelfRef.tb_video__DOT__sd_we) & 
         (~ (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_we)))) {
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 1U;
        __Vdly__tb_video__DOT__sd_ready = 0U;
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_data 
            = vlSelfRef.tb_video__DOT__sd_din;
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
            = vlSelfRef.tb_video__DOT__sd_addr;
    }
    if (((IData)(vlSelfRef.tb_video__DOT__sd_brd) & 
         (~ (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd)))) {
        __Vdly__tb_video__DOT__sd_bready = 0U;
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 1U;
    }
    if (((IData)(vlSelfRef.tb_video__DOT__sd_rd) & 
         (~ (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd)))) {
        if ((((IData)(vlSelfRef.tb_video__DOT__sd_ready) 
              & (~ (IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we))) 
             & ((0x00ffffffU & (vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr 
                                >> 1U)) == (0x00ffffffU 
                                            & (vlSelfRef.tb_video__DOT__sd_addr 
                                               >> 1U))))) {
            __Vdly__tb_video__DOT__sdram16__DOT__save_addr 
                = vlSelfRef.tb_video__DOT__sd_addr;
        } else {
            __Vdly__tb_video__DOT__sd_ready = 0U;
            __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 1U;
        }
    }
    vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count 
        = __Vdly__tb_video__DOT__sdram16__DOT__refresh_count;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    vlSelfRef.tb_video__DOT__sdram16__DOT__save_addr 
        = __Vdly__tb_video__DOT__sdram16__DOT__save_addr;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = __Vdly__tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    if ((5U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf = 0U;
        vlSelfRef.tb_video__DOT__video__DOT__bg_raddr 
            = ((((4U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1) 
                        >> 4U)) | (3U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1))) 
                << 0x0000000bU) | ((0x000007f8U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d0) 
                                                   << 3U)) 
                                   | (7U & ((8U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_d1))
                                             ? (~ ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_next_y) 
                                                   >> 1U))
                                             : ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_next_y) 
                                                >> 1U)))));
    }
    if ((6U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_video__DOT__video__DOT__bg_rhalf = 1U;
    }
    vlSelfRef.tb_video__DOT__sdram_chip__DOT__widx 
        = ((0x001ffe00U & ((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__row_open) 
                           << 9U)) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__sd_a)));
    vlSelfRef.tb_video__DOT__sd_dq = ((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                                      | ((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_out) 
                                         & (- (IData)((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_oe)))));
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_we 
        = vlSelfRef.tb_video__DOT__sd_we;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd 
        = vlSelfRef.tb_video__DOT__sd_brd;
    vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd 
        = vlSelfRef.tb_video__DOT__sd_rd;
    if ((8U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        if ((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            __Vdly__tb_video__DOT__video__DOT__bg_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            __Vdly__tb_video__DOT__video__DOT__bg_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            __Vdly__tb_video__DOT__video__DOT__bg_px 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_px)));
            if ((0x0fU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_px))) {
                if ((0x1fU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_cell))) {
                    __Vdly__tb_video__DOT__video__DOT__bg_st = 0U;
                } else {
                    __Vdly__tb_video__DOT__video__DOT__bg_cell 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_cell)));
                    __Vdly__tb_video__DOT__video__DOT__bg_st = 1U;
                }
            }
        } else {
            __Vdly__tb_video__DOT__video__DOT__bg_st = 9U;
            __Vdly__tb_video__DOT__video__DOT__bg_px = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            __Vdly__tb_video__DOT__video__DOT__bg_st 
                = ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))
                    ? 8U : 7U);
        } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            __Vdly__tb_video__DOT__video__DOT__bg_st = 6U;
        } else {
            vlSelfRef.tb_video__DOT__video__DOT__bg_d1 
                = vlSelfRef.tb_video__DOT__video__DOT__vram_rq;
            __Vdly__tb_video__DOT__video__DOT__bg_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
            vlSelfRef.tb_video__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_video__DOT__video__DOT__vram_rq;
            __Vdly__tb_video__DOT__video__DOT__bg_st = 4U;
        } else {
            __Vdly__tb_video__DOT__video__DOT__vram_raddr 
                = (1U | ((0x000007c0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_next_y) 
                                         << 2U)) | 
                         ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_cell) 
                          << 1U)));
            vlSelfRef.tb_video__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_video__DOT__video__DOT__vram_rq;
            __Vdly__tb_video__DOT__video__DOT__bg_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_st))) {
        __Vdly__tb_video__DOT__video__DOT__vram_raddr 
            = ((0x000007c0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_next_y) 
                               << 2U)) | ((IData)(vlSelfRef.tb_video__DOT__video__DOT__bg_cell) 
                                          << 1U));
        __Vdly__tb_video__DOT__video__DOT__bg_st = 2U;
    } else if ((((IData)(vlSelfRef.tb_video__DOT__ce_div) 
                 & (0x0200U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))))) {
        __Vdly__tb_video__DOT__video__DOT__bg_cell = 0U;
        vlSelfRef.tb_video__DOT__video__DOT__bg_next_y 
            = ((0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))));
        vlSelfRef.tb_video__DOT__video__DOT__bg_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_video__DOT__video__DOT__bg_st = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_video__DOT__spr_fetch_req)))) {
        __Vdly__tb_video__DOT__spr_fetch_done = 0U;
    }
    if ((0U == (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__st))) {
        vlSelfRef.tb_video__DOT__sd_we = 0U;
        if (((IData)(vlSelfRef.tb_video__DOT__spr_fetch_req) 
             & (~ (IData)(vlSelfRef.tb_video__DOT__spr_fetch_done)))) {
            vlSelfRef.tb_video__DOT__sd_baddr = (0x001fffffU 
                                                 & ((IData)(0x00009000U) 
                                                    + (IData)(vlSelfRef.tb_video__DOT__spr_fetch_addr)));
            vlSelfRef.tb_video__DOT__sd_brd = 1U;
            __Vdly__tb_video__DOT__rom_server__DOT__st = 3U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__st))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_video__DOT__sd_ready)))) {
            vlSelfRef.tb_video__DOT__sd_rd = 0U;
            __Vdly__tb_video__DOT__rom_server__DOT__st = 2U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__st))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_video__DOT__sd_bready)))) {
            vlSelfRef.tb_video__DOT__sd_brd = 0U;
            __Vdly__tb_video__DOT__rom_server__DOT__st = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__st))) {
        if (((IData)(vlSelfRef.tb_video__DOT__sd_bready) 
             & (~ (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__bready_q)))) {
            __Vdly__tb_video__DOT__spr_fetch_data[0U] 
                = vlSelfRef.tb_video__DOT__sd_bdata[0U];
            __Vdly__tb_video__DOT__spr_fetch_data[1U] 
                = vlSelfRef.tb_video__DOT__sd_bdata[1U];
            __Vdly__tb_video__DOT__spr_fetch_data[2U] 
                = vlSelfRef.tb_video__DOT__sd_bdata[2U];
            __Vdly__tb_video__DOT__spr_fetch_data[3U] 
                = vlSelfRef.tb_video__DOT__sd_bdata[3U];
            __Vdly__tb_video__DOT__spr_fetch_done = 1U;
            __Vdly__tb_video__DOT__rom_server__DOT__st = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__st))) {
        if (((IData)(vlSelfRef.tb_video__DOT__sd_ready) 
             & (~ (IData)(vlSelfRef.tb_video__DOT__rom_server__DOT__ready_q)))) {
            __Vdly__tb_video__DOT__rom_server__DOT__st = 0U;
        }
    }
    vlSelfRef.tb_video__DOT__video__DOT__bg_px = __Vdly__tb_video__DOT__video__DOT__bg_px;
    vlSelfRef.tb_video__DOT__video__DOT__bg_cell = __Vdly__tb_video__DOT__video__DOT__bg_cell;
    vlSelfRef.tb_video__DOT__video__DOT__bg_st = __Vdly__tb_video__DOT__video__DOT__bg_st;
    vlSelfRef.tb_video__DOT__sd_bdata[0U] = __Vdly__tb_video__DOT__sd_bdata[0U];
    vlSelfRef.tb_video__DOT__sd_bdata[1U] = __Vdly__tb_video__DOT__sd_bdata[1U];
    vlSelfRef.tb_video__DOT__sd_bdata[2U] = __Vdly__tb_video__DOT__sd_bdata[2U];
    vlSelfRef.tb_video__DOT__sd_bdata[3U] = __Vdly__tb_video__DOT__sd_bdata[3U];
    vlSelfRef.tb_video__DOT__rom_server__DOT__st = __Vdly__tb_video__DOT__rom_server__DOT__st;
    vlSelfRef.tb_video__DOT__video__DOT__vram_rq = vlSelfRef.tb_video__DOT__video__DOT__vram
        [vlSelfRef.tb_video__DOT__video__DOT__vram_raddr];
    vlSelfRef.tb_video__DOT__rom_server__DOT__bready_q 
        = vlSelfRef.tb_video__DOT__sd_bready;
    vlSelfRef.tb_video__DOT__rom_server__DOT__ready_q 
        = vlSelfRef.tb_video__DOT__sd_ready;
    if ((8U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
        if ((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
        } else {
            __Vdly__tb_video__DOT__video__DOT__sp_px 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px)));
            if ((0x1fU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px))) {
                __Vtask_tb_video__DOT__video__DOT__sp_next__1__from_scan = 0U;
                if ((0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_video__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    if (__Vtask_tb_video__DOT__video__DOT__sp_next__1__from_scan) {
                        __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                               - (IData)(2U)) 
                                              << 2U));
                        __Vdly__tb_video__DOT__video__DOT__sp_st = 3U;
                    } else {
                        __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                               - (IData)(1U)) 
                                              << 2U));
                        __Vdly__tb_video__DOT__video__DOT__sp_st = 2U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
        if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
                if ((0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_fetch_cnt))) {
                    vlSelfRef.tb_video__DOT__video__DOT__sp_x 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sprram_rq));
                    if ((0U == (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_code)))) {
                        __Vtask_tb_video__DOT__video__DOT__sp_next__2__from_scan = 0U;
                        if ((0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx))) {
                            __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
                        } else {
                            __Vdly__tb_video__DOT__video__DOT__sp_idx 
                                = (0x000001ffU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                                  - (IData)(1U)));
                            __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                                = ((IData)(__Vtask_tb_video__DOT__video__DOT__sp_next__2__from_scan)
                                    ? (0x000007fcU 
                                       & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                           - (IData)(2U)) 
                                          << 2U)) : 
                                   (0x000007fcU & (
                                                   ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                                    - (IData)(1U)) 
                                                   << 2U)));
                            __Vdly__tb_video__DOT__video__DOT__sp_st 
                                = ((IData)(__Vtask_tb_video__DOT__video__DOT__sp_next__2__from_scan)
                                    ? 3U : 2U);
                        }
                    } else {
                        vlSelfRef.tb_video__DOT__spr_fetch_addr 
                            = ((0x00003fe0U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_code) 
                                               << 5U)) 
                               | (0x0000001fU & ((0x00000020U 
                                                  & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                                  : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
                        vlSelfRef.tb_video__DOT__spr_fetch_req = 1U;
                        vlSelfRef.tb_video__DOT__video__DOT__sp_fetch_cnt = 1U;
                    }
                } else if (vlSelfRef.tb_video__DOT__spr_fetch_done) {
                    vlSelfRef.tb_video__DOT__spr_fetch_req = 0U;
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v0 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[0U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_video__DOT__spr_fetch_data[0U] 
                                             >> 8U)));
                    __VdlySet__tb_video__DOT__video__DOT__sp_row__v0 = 1U;
                    vlSelfRef.tb_video__DOT__video__DOT__sp_fetch_cnt = 0U;
                    __Vdly__tb_video__DOT__video__DOT__sp_px = 0U;
                    __Vdly__tb_video__DOT__video__DOT__sp_st = 8U;
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v1 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[0U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_video__DOT__spr_fetch_data[0U] 
                              >> 0x00000018U));
                    __VdlySet__tb_video__DOT__video__DOT__sp_row__v1 = 1U;
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v2 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[1U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_video__DOT__spr_fetch_data[1U] 
                                             >> 8U)));
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v3 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[1U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_video__DOT__spr_fetch_data[1U] 
                              >> 0x00000018U));
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v4 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[2U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_video__DOT__spr_fetch_data[2U] 
                                             >> 8U)));
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v5 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[2U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_video__DOT__spr_fetch_data[2U] 
                              >> 0x00000018U));
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v6 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[3U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_video__DOT__spr_fetch_data[3U] 
                                             >> 8U)));
                    __VdlyVal__tb_video__DOT__video__DOT__sp_row__v7 
                        = ((0x0000ff00U & (vlSelfRef.tb_video__DOT__spr_fetch_data[3U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_video__DOT__spr_fetch_data[3U] 
                              >> 0x00000018U));
                }
            } else {
                vlSelfRef.tb_video__DOT__video__DOT__sp_code_lo 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sprram_rq));
                __Vdly__tb_video__DOT__video__DOT__sp_st = 7U;
                vlSelfRef.tb_video__DOT__video__DOT__sp_fetch_cnt = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            vlSelfRef.tb_video__DOT__video__DOT__sp_flags 
                = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sprram_rq));
            __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                = (3U | ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_video__DOT__video__DOT__sp_st = 6U;
        } else {
            __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                = (2U | ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_video__DOT__video__DOT__sp_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
        if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
            if (vlSelfRef.tb_video__DOT__video__DOT__yt_hit) {
                vlSelfRef.tb_video__DOT__video__DOT__sp_y 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sprram_rq));
                __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                    = (1U | ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                             << 2U));
                __Vdly__tb_video__DOT__video__DOT__sp_st = 4U;
            } else {
                __Vtask_tb_video__DOT__video__DOT__sp_next__3__from_scan = 1U;
                if ((0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_video__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_video__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    if (__Vtask_tb_video__DOT__video__DOT__sp_next__3__from_scan) {
                        __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                               - (IData)(2U)) 
                                              << 2U));
                        __Vdly__tb_video__DOT__video__DOT__sp_st = 3U;
                    } else {
                        __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                               - (IData)(1U)) 
                                              << 2U));
                        __Vdly__tb_video__DOT__video__DOT__sp_st = 2U;
                    }
                }
            }
        } else {
            __Vdly__tb_video__DOT__video__DOT__sprram_raddr 
                = (0x000007fcU & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_idx) 
                                   - (IData)(1U)) << 2U));
            __Vdly__tb_video__DOT__video__DOT__sp_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st))) {
        __Vdly__tb_video__DOT__video__DOT__sp_idx = 0x01ffU;
        __Vdly__tb_video__DOT__video__DOT__sprram_raddr = 0x07fcU;
        __Vdly__tb_video__DOT__video__DOT__sp_st = 2U;
    } else if ((((IData)(vlSelfRef.tb_video__DOT__ce_div) 
                 & (0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))))) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_line 
            = ((0x020cU == (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_video__DOT__video__DOT__vcnt))));
        vlSelfRef.tb_video__DOT__video__DOT__sp_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_video__DOT__video__DOT__sp_st = 1U;
    }
    vlSelfRef.tb_video__DOT__video__DOT__vram_raddr 
        = __Vdly__tb_video__DOT__video__DOT__vram_raddr;
    vlSelfRef.tb_video__DOT__sd_bready = __Vdly__tb_video__DOT__sd_bready;
    vlSelfRef.tb_video__DOT__sd_ready = __Vdly__tb_video__DOT__sd_ready;
    vlSelfRef.tb_video__DOT__spr_fetch_data[0U] = __Vdly__tb_video__DOT__spr_fetch_data[0U];
    vlSelfRef.tb_video__DOT__spr_fetch_data[1U] = __Vdly__tb_video__DOT__spr_fetch_data[1U];
    vlSelfRef.tb_video__DOT__spr_fetch_data[2U] = __Vdly__tb_video__DOT__spr_fetch_data[2U];
    vlSelfRef.tb_video__DOT__spr_fetch_data[3U] = __Vdly__tb_video__DOT__spr_fetch_data[3U];
    vlSelfRef.tb_video__DOT__video__DOT__sp_idx = __Vdly__tb_video__DOT__video__DOT__sp_idx;
    vlSelfRef.tb_video__DOT__spr_fetch_done = __Vdly__tb_video__DOT__spr_fetch_done;
    vlSelfRef.tb_video__DOT__video__DOT__vcnt = __Vdly__tb_video__DOT__video__DOT__vcnt;
    vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel = __Vdly__tb_video__DOT__video__DOT__lbuf_sel;
    vlSelfRef.tb_video__DOT__video__DOT__sp_st = __Vdly__tb_video__DOT__video__DOT__sp_st;
    vlSelfRef.tb_video__DOT__video__DOT__hcnt = __Vdly__tb_video__DOT__video__DOT__hcnt;
    vlSelfRef.tb_video__DOT__ce_div = __Vdly__tb_video__DOT__ce_div;
    vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr 
        = ((IData)(vlSelfRef.tb_video__DOT__ce_div)
            ? (((IData)(vlSelfRef.tb_video__DOT__video__DOT__lbuf_sel) 
                << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__hcnt)))
            : (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_rd_addr_q));
    if (__VdlySet__tb_video__DOT__video__DOT__sp_row__v0) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[0U][0U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v0;
    }
    if (__VdlySet__tb_video__DOT__video__DOT__sp_row__v1) {
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[0U][1U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v1;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[1U][0U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v2;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[1U][1U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v3;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[2U][0U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v4;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[2U][1U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v5;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[3U][0U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v6;
        vlSelfRef.tb_video__DOT__video__DOT__sp_row[3U][1U] 
            = __VdlyVal__tb_video__DOT__video__DOT__sp_row__v7;
    }
    vlSelfRef.tb_video__DOT__video__DOT__sp_px = __Vdly__tb_video__DOT__video__DOT__sp_px;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_line) 
                                                   - 
                                                   (0x000003ffU 
                                                    & (((IData)(0x00f1U) 
                                                        - (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_y)) 
                                                       << 1U))));
    vlSelfRef.tb_video__DOT__video__DOT__sprram_rq 
        = vlSelfRef.tb_video__DOT__video__DOT__sprram
        [vlSelfRef.tb_video__DOT__video__DOT__sprram_raddr];
    vlSelfRef.tb_video__DOT__video__DOT__sp_xs = (0x000007ffU 
                                                  & ((VL_LTS_III(11, 0x01f0U, 
                                                                 (0x000007ffU 
                                                                  & (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_x) 
                                                                      << 1U) 
                                                                     - (IData)(4U))))
                                                       ? 
                                                      ((((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_x) 
                                                         << 1U) 
                                                        - (IData)(4U)) 
                                                       - (IData)(0x0200U))
                                                       : 
                                                      (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_x) 
                                                        << 1U) 
                                                       - (IData)(4U))) 
                                                     + (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px)));
    vlSelfRef.tb_video__DOT__video__DOT__sp_code = 
        ((0x00000600U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
                         << 3U)) | ((0x00000100U & 
                                     ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
                                      << 5U)) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_code_lo)));
    tb_video__DOT__video__DOT__sp_px_src = (0x0000003fU 
                                            & ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))
                                                ? ((IData)(0x1fU) 
                                                   - (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px))
                                                : (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px)));
    vlSelfRef.tb_video__DOT__video__DOT__sprram_raddr 
        = __Vdly__tb_video__DOT__video__DOT__sprram_raddr;
    vlSelfRef.tb_video__DOT__video__DOT__sp_wr_addr 
        = (((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_wrbuf) 
            << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)));
    tb_video__DOT__video__DOT__sp_row_w = ((0x00000010U 
                                            & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                            ? ((4U 
                                                & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                ? (
                                                   (2U 
                                                    & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                    ? vlSelfRef.tb_video__DOT__video__DOT__sp_row[3U][1U]
                                                    : vlSelfRef.tb_video__DOT__video__DOT__sp_row[2U][1U])
                                                : (
                                                   (2U 
                                                    & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                    ? vlSelfRef.tb_video__DOT__video__DOT__sp_row[1U][1U]
                                                    : vlSelfRef.tb_video__DOT__video__DOT__sp_row[0U][1U]))
                                            : ((4U 
                                                & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                ? (
                                                   (2U 
                                                    & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                    ? vlSelfRef.tb_video__DOT__video__DOT__sp_row[3U][0U]
                                                    : vlSelfRef.tb_video__DOT__video__DOT__sp_row[2U][0U])
                                                : (
                                                   (2U 
                                                    & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                    ? vlSelfRef.tb_video__DOT__video__DOT__sp_row[1U][0U]
                                                    : vlSelfRef.tb_video__DOT__video__DOT__sp_row[0U][0U])));
    vlSelfRef.tb_video__DOT__video__DOT__sp_pen_v = 
        (0x0000000fU & ((8U & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                         ? ((1U & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                             ? (IData)(tb_video__DOT__video__DOT__sp_row_w)
                             : ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                >> 4U)) : ((1U & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                            ? ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                               >> 8U)
                                            : ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                               >> 0x0cU))));
    vlSelfRef.tb_video__DOT__video__DOT__yt_hit = (0x0020U 
                                                   > 
                                                   (0x000003ffU 
                                                    & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_line) 
                                                       - 
                                                       (((IData)(0x00f1U) 
                                                         - 
                                                         (0x000000ffU 
                                                          & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sprram_rq))) 
                                                        << 1U))));
    vlSelfRef.tb_video__DOT__video__DOT__sp_wr_data 
        = (0x00000040U | ((0x00000030U & ((~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags)) 
                                          << 4U)) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_pen_v)));
    vlSelfRef.tb_video__DOT__video__DOT__sp_blend_go 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs))) 
           & (VL_GTS_III(11, 0x0200U, (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)) 
              & ((~ (((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))
                       ? (vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                           >> 5U))] 
                          >> (0x0000001fU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)))
                       : (vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                           >> 5U))] 
                          >> (0x0000001fU & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)))) 
                     | (0U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_pen_v)))) 
                 & (8U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st)))));
}

void Vtb_video___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_video___024root___eval_phase__act(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_phase__act\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_video___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_video___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_video___024root___eval_phase__nba(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_phase__nba\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_video___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_video___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtb_video___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_video___024root___eval(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb_video.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_video___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb_video.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_video___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_video___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_video___024root___eval_debug_assertions(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_debug_assertions\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG
