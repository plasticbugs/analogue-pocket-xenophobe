// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_loader.h for the primary calling header

#include "Vtb_loader__pch.h"

bool Vtb_loader___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___trigger_anySet__act\n"); );
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

void Vtb_loader___024root___nba_sequent__TOP__0(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___nba_sequent__TOP__0\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__rd0_done;
    __Vdly__rd0_done = 0;
    CData/*0:0*/ __Vdly__rd1_done;
    __Vdly__rd1_done = 0;
    CData/*0:0*/ __Vdly__spr_done;
    __Vdly__spr_done = 0;
    CData/*2:0*/ __Vdly__tb_loader__DOT__srv__DOT__st;
    __Vdly__tb_loader__DOT__srv__DOT__st = 0;
    CData/*0:0*/ __Vdly__tb_loader__DOT__srv__DOT__cur;
    __Vdly__tb_loader__DOT__srv__DOT__cur = 0;
    CData/*0:0*/ __Vdly__tb_loader__DOT__chip__DOT__row_active;
    __Vdly__tb_loader__DOT__chip__DOT__row_active = 0;
    SData/*13:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count = 0;
    CData/*2:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = 0;
    CData/*0:0*/ __Vdly__tb_loader__DOT__sd_ready;
    __Vdly__tb_loader__DOT__sd_ready = 0;
    SData/*15:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__data;
    __Vdly__tb_loader__DOT__sdram16__DOT__data = 0;
    IData/*31:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0;
    CData/*2:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0;
    CData/*2:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_loader__DOT__sd_bdata;
    VL_ZERO_W(128, __Vdly__tb_loader__DOT__sd_bdata);
    CData/*0:0*/ __Vdly__tb_loader__DOT__sd_bready;
    __Vdly__tb_loader__DOT__sd_bready = 0;
    CData/*0:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0;
    IData/*24:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_loader__DOT__sdram16__DOT__save_addr = 0;
    CData/*0:0*/ __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0;
    CData/*7:0*/ __VdlyVal__tb_loader__DOT__chip__DOT__mem__v0;
    __VdlyVal__tb_loader__DOT__chip__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v0;
    __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_loader__DOT__chip__DOT__mem__v0;
    __VdlySet__tb_loader__DOT__chip__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_loader__DOT__chip__DOT__mem__v1;
    __VdlyVal__tb_loader__DOT__chip__DOT__mem__v1 = 0;
    IData/*20:0*/ __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v1;
    __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_loader__DOT__chip__DOT__mem__v1;
    __VdlySet__tb_loader__DOT__chip__DOT__mem__v1 = 0;
    // Body
    __Vdly__rd0_done = vlSelfRef.rd0_done;
    __Vdly__rd1_done = vlSelfRef.rd1_done;
    __Vdly__spr_done = vlSelfRef.spr_done;
    __Vdly__tb_loader__DOT__srv__DOT__st = vlSelfRef.tb_loader__DOT__srv__DOT__st;
    __Vdly__tb_loader__DOT__srv__DOT__cur = vlSelfRef.tb_loader__DOT__srv__DOT__cur;
    __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_loader__DOT__sd_ready = vlSelfRef.tb_loader__DOT__sd_ready;
    __Vdly__tb_loader__DOT__sdram16__DOT__data = vlSelfRef.tb_loader__DOT__sdram16__DOT__data;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_loader__DOT__sd_bdata[0U] = vlSelfRef.tb_loader__DOT__sd_bdata[0U];
    __Vdly__tb_loader__DOT__sd_bdata[1U] = vlSelfRef.tb_loader__DOT__sd_bdata[1U];
    __Vdly__tb_loader__DOT__sd_bdata[2U] = vlSelfRef.tb_loader__DOT__sd_bdata[2U];
    __Vdly__tb_loader__DOT__sd_bdata[3U] = vlSelfRef.tb_loader__DOT__sd_bdata[3U];
    __Vdly__tb_loader__DOT__sd_bready = vlSelfRef.tb_loader__DOT__sd_bready;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_loader__DOT__sdram16__DOT__save_addr 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __Vdly__tb_loader__DOT__chip__DOT__row_active = vlSelfRef.tb_loader__DOT__chip__DOT__row_active;
    __VdlySet__tb_loader__DOT__chip__DOT__mem__v0 = 0U;
    __VdlySet__tb_loader__DOT__chip__DOT__mem__v1 = 0U;
    vlSelfRef.tb_loader__DOT__chip__DOT__dq_out = vlSelfRef.tb_loader__DOT__chip__DOT__pipe_q1;
    vlSelfRef.tb_loader__DOT__chip__DOT__dq_oe = vlSelfRef.tb_loader__DOT__chip__DOT__pipe_v1;
    vlSelfRef.tb_loader__DOT__chip__DOT__pipe_v1 = 0U;
    if ((4U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__command))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__command) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__command))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_loader__DOT__chip__DOT__row_active)))))) {
                    VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: READ with no open row\n",0);
                }
                vlSelfRef.tb_loader__DOT__chip__DOT__pipe_q1 
                    = vlSelfRef.tb_loader__DOT__chip__DOT__mem
                    [(0x001fffffU & vlSelfRef.tb_loader__DOT__chip__DOT__widx)];
                vlSelfRef.tb_loader__DOT__chip__DOT__pipe_v1 = 1U;
            } else {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_loader__DOT__chip__DOT__row_active)))))) {
                    VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: WRITE with no open row\n",0);
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_loader__DOT__a) 
                              >> 0x0000000bU)))) {
                    __VdlyVal__tb_loader__DOT__chip__DOT__mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_loader__DOT__dq));
                    __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v0 
                        = (0x001fffffU & vlSelfRef.tb_loader__DOT__chip__DOT__widx);
                    __VdlySet__tb_loader__DOT__chip__DOT__mem__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_loader__DOT__a) 
                              >> 0x0000000cU)))) {
                    __VdlyVal__tb_loader__DOT__chip__DOT__mem__v1 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_loader__DOT__dq) 
                                          >> 8U));
                    __VdlyDim0__tb_loader__DOT__chip__DOT__mem__v1 
                        = (0x001fffffU & vlSelfRef.tb_loader__DOT__chip__DOT__widx);
                    __VdlySet__tb_loader__DOT__chip__DOT__mem__v1 = 1U;
                }
            }
            if ((0x00000400U & (IData)(vlSelfRef.tb_loader__DOT__a))) {
                __Vdly__tb_loader__DOT__chip__DOT__row_active = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__command))) {
        if ((1U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__command))) {
            if (VL_UNLIKELY((vlSelfRef.tb_loader__DOT__chip__DOT__row_active))) {
                VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: ACTIVATE row %0d while row %0d still open\n",2
                             , '#',13,vlSelfRef.tb_loader__DOT__a
                             , '#',13,(IData)(vlSelfRef.tb_loader__DOT__chip__DOT__row_open));
            }
            vlSelfRef.tb_loader__DOT__chip__DOT__row_open 
                = vlSelfRef.tb_loader__DOT__a;
            __Vdly__tb_loader__DOT__chip__DOT__row_active = 1U;
        } else {
            __Vdly__tb_loader__DOT__chip__DOT__row_active = 0U;
        }
    }
    vlSelfRef.tb_loader__DOT__chip__DOT__row_active 
        = __Vdly__tb_loader__DOT__chip__DOT__row_active;
    if (__VdlySet__tb_loader__DOT__chip__DOT__mem__v0) {
        vlSelfRef.tb_loader__DOT__chip__DOT__mem[__VdlyDim0__tb_loader__DOT__chip__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_loader__DOT__chip__DOT__mem
                [__VdlyDim0__tb_loader__DOT__chip__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_loader__DOT__chip__DOT__mem__v0));
    }
    if (__VdlySet__tb_loader__DOT__chip__DOT__mem__v1) {
        vlSelfRef.tb_loader__DOT__chip__DOT__mem[__VdlyDim0__tb_loader__DOT__chip__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_loader__DOT__chip__DOT__mem
                [__VdlyDim0__tb_loader__DOT__chip__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_loader__DOT__chip__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 7U;
    __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count 
        = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count)));
    __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = (3U & ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay) 
                 >> 1U));
    if ((1U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay))) {
        __Vdly__tb_loader__DOT__sd_ready = 1U;
        __Vdly__tb_loader__DOT__sdram16__DOT__data 
            = vlSelfRef.tb_loader__DOT__dq;
    }
    if (((((((((0U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state) 
               | (0x0000000aU == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
              | (9U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
             | (8U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
            | (7U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
           | (6U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
          | (5U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
         | (4U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state))) {
        if ((0U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            vlSelfRef.tb_loader__DOT__a = 0U;
            if ((0x3fe0U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 2U;
                vlSelfRef.tb_loader__DOT__a = (0x00000400U 
                                               | (IData)(vlSelfRef.tb_loader__DOT__a));
            }
            if ((0x3fe8U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff0U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff8U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 0U;
                vlSelfRef.tb_loader__DOT__a = 0x0220U;
            }
            if ((1U & (~ (0U != (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))))) {
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
                __Vdly__tb_loader__DOT__sd_ready = 1U;
                __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count = 0U;
            }
        } else if ((0x0000000aU == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 9U;
        } else if ((9U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        } else if ((8U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 7U;
        } else if ((7U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 6U;
        } else if ((6U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else if ((5U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
            if ((0x014fU < (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000aU;
                vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 1U;
                __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count = 0U;
            }
        }
    } else if ((0x0000000bU == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0U;
        __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0U;
        __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000cU;
    } else if ((0x0000000cU == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((7U >= (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 5U;
            vlSelfRef.tb_loader__DOT__a = (((7U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                                            << 0x0000000aU) 
                                           | ((0x000001f8U 
                                               & (vlSelfRef.tb_loader__DOT__sd_baddr 
                                                  << 3U)) 
                                              | (7U 
                                                 & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))));
        }
        if ((8U >= (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)));
        }
        __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
            = (((7U >= (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay) 
                                >> 1U)));
        if ((1U & (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay))) {
            VL_ASSIGNSEL_WI(128, 16, (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap) 
                                       << 4U)), __Vdly__tb_loader__DOT__sd_bdata, vlSelfRef.tb_loader__DOT__dq);
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap)));
            if ((7U == (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap))) {
                __Vdly__tb_loader__DOT__sd_bready = 1U;
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
            }
        }
    } else if ((3U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((0x029eU < (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count))) {
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else if (vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd) {
            vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 0U;
            vlSelfRef.tb_loader__DOT__a = (0x00001fffU 
                                           & (vlSelfRef.tb_loader__DOT__sd_baddr 
                                              >> 6U));
            vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 3U;
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000bU;
        } else if (((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd) 
                    | (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we))) {
            if (vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we) {
                vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 0U;
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
                __Vdly__tb_loader__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr;
                vlSelfRef.tb_loader__DOT__a = (0x00001fffU 
                                               & (vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
                                                  >> 0x0aU));
            } else {
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0U;
                __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0U;
                __Vdly__tb_loader__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_loader__DOT__sd_addr;
                vlSelfRef.tb_loader__DOT__a = (0x00001fffU 
                                               & (vlSelfRef.tb_loader__DOT__sd_addr 
                                                  >> 0x0aU));
            }
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 1U;
            vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 3U;
        }
    } else if ((1U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 2U;
    } else if ((2U == vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        vlSelfRef.tb_loader__DOT__a = (0x00000400U 
                                       | ((((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                            & (~ vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr)) 
                                           << 0x0000000cU) 
                                          | ((((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                               & vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr) 
                                              << 0x0000000bU) 
                                             | (0x000001ffU 
                                                & (vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr 
                                                   >> 1U)))));
        if (vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) {
            vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 4U;
            vlSelfRef.tb_loader__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 
                = (0x0000ffffU & (((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_data) 
                                   << 8U) | (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_data)));
            __Vdly__tb_loader__DOT__sd_ready = (1U 
                                                & (~ (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd)));
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else {
            vlSelfRef.tb_loader__DOT__sdram16__DOT__command = 5U;
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
                = (4U | (IData)(__Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay));
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        }
    }
    if (((IData)(vlSelfRef.tb_loader__DOT__sd_we) & 
         (~ (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_we)))) {
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 1U;
        __Vdly__tb_loader__DOT__sd_ready = 0U;
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_data 
            = vlSelfRef.tb_loader__DOT__sd_din;
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
            = vlSelfRef.tb_loader__DOT__sd_addr;
    }
    if (((IData)(vlSelfRef.tb_loader__DOT__sd_brd) 
         & (~ (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd)))) {
        __Vdly__tb_loader__DOT__sd_bready = 0U;
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 1U;
    }
    if (((IData)(vlSelfRef.tb_loader__DOT__sd_rd) & 
         (~ (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd)))) {
        if ((((IData)(vlSelfRef.tb_loader__DOT__sd_ready) 
              & (~ (IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we))) 
             & ((0x00ffffffU & (vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr 
                                >> 1U)) == (0x00ffffffU 
                                            & (vlSelfRef.tb_loader__DOT__sd_addr 
                                               >> 1U))))) {
            __Vdly__tb_loader__DOT__sdram16__DOT__save_addr 
                = vlSelfRef.tb_loader__DOT__sd_addr;
        } else {
            __Vdly__tb_loader__DOT__sd_ready = 0U;
            __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 1U;
        }
    }
    vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count 
        = __Vdly__tb_loader__DOT__sdram16__DOT__refresh_count;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__save_addr 
        = __Vdly__tb_loader__DOT__sdram16__DOT__save_addr;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = __Vdly__tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    vlSelfRef.tb_loader__DOT__chip__DOT__widx = ((0x001ffe00U 
                                                  & ((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__row_open) 
                                                     << 9U)) 
                                                 | (0x000001ffU 
                                                    & (IData)(vlSelfRef.tb_loader__DOT__a)));
    vlSelfRef.tb_loader__DOT__dq = ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                                    | ((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__dq_out) 
                                       & (- (IData)((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__dq_oe)))));
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_we 
        = vlSelfRef.tb_loader__DOT__sd_we;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd 
        = vlSelfRef.tb_loader__DOT__sd_brd;
    vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd 
        = vlSelfRef.tb_loader__DOT__sd_rd;
    if ((1U & (~ (IData)(vlSelfRef.rd0_req)))) {
        __Vdly__rd0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rd1_req)))) {
        __Vdly__rd1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.spr_req)))) {
        __Vdly__spr_done = 0U;
    }
    if (vlSelfRef.dl_active) {
        vlSelfRef.tb_loader__DOT__sd_din = vlSelfRef.dl_data;
        vlSelfRef.tb_loader__DOT__sd_addr = vlSelfRef.dl_addr;
        vlSelfRef.tb_loader__DOT__sd_we = vlSelfRef.dl_wr;
        vlSelfRef.tb_loader__DOT__sd_rd = 0U;
        __Vdly__tb_loader__DOT__srv__DOT__st = 0U;
    } else if ((0U == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__st))) {
        vlSelfRef.tb_loader__DOT__sd_we = 0U;
        if (((IData)(vlSelfRef.spr_req) & (~ (IData)(vlSelfRef.spr_done)))) {
            vlSelfRef.tb_loader__DOT__sd_baddr = (0x001fffffU 
                                                  & ((IData)(0x00009000U) 
                                                     + (IData)(vlSelfRef.spr_addr)));
            vlSelfRef.tb_loader__DOT__sd_brd = 1U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 3U;
        } else if (((IData)(vlSelfRef.rd0_req) & (~ (IData)(vlSelfRef.rd0_done)))) {
            __Vdly__tb_loader__DOT__srv__DOT__cur = 0U;
            vlSelfRef.tb_loader__DOT__sd_addr = (vlSelfRef.rd0_addr 
                                                 << 1U);
            vlSelfRef.tb_loader__DOT__sd_rd = 1U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 1U;
        } else if (((IData)(vlSelfRef.rd1_req) & (~ (IData)(vlSelfRef.rd1_done)))) {
            __Vdly__tb_loader__DOT__srv__DOT__cur = 1U;
            vlSelfRef.tb_loader__DOT__sd_addr = (0x00040000U 
                                                 | (vlSelfRef.rd1_addr 
                                                    << 1U));
            vlSelfRef.tb_loader__DOT__sd_rd = 1U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__st))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_loader__DOT__sd_ready)))) {
            vlSelfRef.tb_loader__DOT__sd_rd = 0U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 2U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__st))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_loader__DOT__sd_bready)))) {
            vlSelfRef.tb_loader__DOT__sd_brd = 0U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__st))) {
        if (((IData)(vlSelfRef.tb_loader__DOT__sd_bready) 
             & (~ (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__bready_q)))) {
            vlSelfRef.spr_data[0U] = vlSelfRef.tb_loader__DOT__sd_bdata[0U];
            vlSelfRef.spr_data[1U] = vlSelfRef.tb_loader__DOT__sd_bdata[1U];
            vlSelfRef.spr_data[2U] = vlSelfRef.tb_loader__DOT__sd_bdata[2U];
            vlSelfRef.spr_data[3U] = vlSelfRef.tb_loader__DOT__sd_bdata[3U];
            __Vdly__spr_done = 1U;
            __Vdly__tb_loader__DOT__srv__DOT__st = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__st))) {
        if (((IData)(vlSelfRef.tb_loader__DOT__sd_ready) 
             & (~ (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__ready_q)))) {
            if (vlSelfRef.tb_loader__DOT__srv__DOT__cur) {
                vlSelfRef.rd1_q = ((0x0000ff00U & ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__data) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__data) 
                                       >> 8U)));
                __Vdly__rd1_done = 1U;
            } else {
                vlSelfRef.rd0_q = ((0x0000ff00U & ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__data) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__data) 
                                       >> 8U)));
                __Vdly__rd0_done = 1U;
            }
            __Vdly__tb_loader__DOT__srv__DOT__st = 0U;
        }
    }
    vlSelfRef.tb_loader__DOT__sd_bdata[0U] = __Vdly__tb_loader__DOT__sd_bdata[0U];
    vlSelfRef.tb_loader__DOT__sd_bdata[1U] = __Vdly__tb_loader__DOT__sd_bdata[1U];
    vlSelfRef.tb_loader__DOT__sd_bdata[2U] = __Vdly__tb_loader__DOT__sd_bdata[2U];
    vlSelfRef.tb_loader__DOT__sd_bdata[3U] = __Vdly__tb_loader__DOT__sd_bdata[3U];
    vlSelfRef.tb_loader__DOT__sdram16__DOT__data = __Vdly__tb_loader__DOT__sdram16__DOT__data;
    vlSelfRef.rd0_done = __Vdly__rd0_done;
    vlSelfRef.rd1_done = __Vdly__rd1_done;
    vlSelfRef.spr_done = __Vdly__spr_done;
    vlSelfRef.tb_loader__DOT__srv__DOT__st = __Vdly__tb_loader__DOT__srv__DOT__st;
    vlSelfRef.tb_loader__DOT__srv__DOT__cur = __Vdly__tb_loader__DOT__srv__DOT__cur;
    vlSelfRef.tb_loader__DOT__srv__DOT__bready_q = vlSelfRef.tb_loader__DOT__sd_bready;
    vlSelfRef.tb_loader__DOT__srv__DOT__ready_q = vlSelfRef.tb_loader__DOT__sd_ready;
    vlSelfRef.tb_loader__DOT__sd_bready = __Vdly__tb_loader__DOT__sd_bready;
    vlSelfRef.tb_loader__DOT__sd_ready = __Vdly__tb_loader__DOT__sd_ready;
}

void Vtb_loader___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_loader___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_loader___024root___eval_phase__act(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_phase__act\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_loader___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_loader___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_loader___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_loader___024root___eval_phase__nba(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_phase__nba\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_loader___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_loader___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtb_loader___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_loader___024root___eval(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_loader___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb_loader.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_loader___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb_loader.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_loader___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_loader___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_loader___024root___eval_debug_assertions(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_debug_assertions\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_active & 0xfeU)))) {
        Verilated::overWidthError("dl_active");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_addr & 0xfe000000U)))) {
        Verilated::overWidthError("dl_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_wr & 0xfeU)))) {
        Verilated::overWidthError("dl_wr");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd0_addr & 0xfffe0000U)))) {
        Verilated::overWidthError("rd0_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd0_req & 0xfeU)))) {
        Verilated::overWidthError("rd0_req");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd1_addr & 0xfffe0000U)))) {
        Verilated::overWidthError("rd1_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd1_req & 0xfeU)))) {
        Verilated::overWidthError("rd1_req");
    }
    if (VL_UNLIKELY(((vlSelfRef.spr_addr & 0xc000U)))) {
        Verilated::overWidthError("spr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.spr_req & 0xfeU)))) {
        Verilated::overWidthError("spr_req");
    }
}
#endif  // VL_DEBUG
