// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

bool Vtb_system___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);

void Vtb_system___024root___eval_ico(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_ico\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000001cULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din = 0xffffU;
            if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__mrom_q;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ram) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ram_q;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__vram_q;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__sprram_q;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = (0x0000ffffU & ((0x0000ff00U 
                                       & (((8U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                            ? ((4U 
                                                & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                    ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                    : 
                                                   (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                    >> 8U))
                                                : (
                                                   (2U 
                                                    & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                    ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                    : 
                                                   (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                    >> 8U)))
                                            : ((4U 
                                                & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                    ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                    : 
                                                   (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                    >> 8U))
                                                : (
                                                   (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_irq) 
                                                     << 7U) 
                                                    | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                                                    >> 1U))))))) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((8U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                           ? ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                               ? ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                   >> 8U))
                                               : ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                   >> 8U)))
                                           : ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                               ? ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                   >> 8U))
                                               : ((
                                                   ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_irq) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                                                   >> 1U))))))))));
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_in0) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = ((0x0000ffe0U & (IData)(vlSelfRef.in0)) 
                       | (((IData)(vlSelfRef.snd_status) 
                           << 4U) | (0x0000000fU & (IData)(vlSelfRef.in0))));
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_in1) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.in1;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_dsw) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.dsw;
            } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ctl) {
                vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
                    = vlSelfRef.ctrl;
            }
        }
    }
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
        Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_system___024root___eval_phase__ico(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__ico\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.dsw) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dsw__0)) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.in1) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__in1__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.in0) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__in0__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.reset) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clk) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
        vlSelfRef.__Vtrigprevexpr___TOP__in0__0 = vlSelfRef.in0;
        vlSelfRef.__Vtrigprevexpr___TOP__in1__0 = vlSelfRef.in1;
        vlSelfRef.__Vtrigprevexpr___TOP__dsw__0 = vlSelfRef.dsw;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_system___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtb_system___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vtb_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___trigger_anySet__act\n"); );
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

extern const VlWide<16>/*511:0*/ Vtb_system__ConstPool__CONST_h93e1b771_0;

void Vtb_system___024root___nba_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_system__DOT__video__DOT__sp_row_w;
    tb_system__DOT__video__DOT__sp_row_w = 0;
    CData/*3:0*/ tb_system__DOT__video__DOT__sp_pen_v;
    tb_system__DOT__video__DOT__sp_pen_v = 0;
    CData/*5:0*/ tb_system__DOT__video__DOT__sp_px_src;
    tb_system__DOT__video__DOT__sp_px_src = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w0;
    __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w0 = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w1;
    __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w1 = 0;
    CData/*2:0*/ __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c;
    __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c = 0;
    CData/*1:0*/ __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__lo;
    __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__lo = 0;
    CData/*1:0*/ __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__hi;
    __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__hi = 0;
    CData/*0:0*/ __Vtask_tb_system__DOT__video__DOT__sp_next__1__from_scan;
    __Vtask_tb_system__DOT__video__DOT__sp_next__1__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_system__DOT__video__DOT__sp_next__2__from_scan;
    __Vtask_tb_system__DOT__video__DOT__sp_next__2__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_system__DOT__video__DOT__sp_next__3__from_scan;
    __Vtask_tb_system__DOT__video__DOT__sp_next__3__from_scan = 0;
    IData/*16:0*/ __Vdly__tb_system__DOT__acc_m;
    __Vdly__tb_system__DOT__acc_m = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__tog_m;
    __Vdly__tb_system__DOT__tog_m = 0;
    IData/*16:0*/ __Vdly__tb_system__DOT__acc_s;
    __Vdly__tb_system__DOT__acc_s = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__tog_s;
    __Vdly__tb_system__DOT__tog_s = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt;
    __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag;
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read;
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__video__DOT__bg_st;
    __Vdly__tb_system__DOT__video__DOT__bg_st = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__video__DOT__bg_px;
    __Vdly__tb_system__DOT__video__DOT__bg_px = 0;
    CData/*4:0*/ __Vdly__tb_system__DOT__video__DOT__bg_cell;
    __Vdly__tb_system__DOT__video__DOT__bg_cell = 0;
    SData/*10:0*/ __Vdly__tb_system__DOT__video__DOT__vram_raddr;
    __Vdly__tb_system__DOT__video__DOT__vram_raddr = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__video__DOT__sp_st;
    __Vdly__tb_system__DOT__video__DOT__sp_st = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__video__DOT__sp_px;
    __Vdly__tb_system__DOT__video__DOT__sp_px = 0;
    SData/*8:0*/ __Vdly__tb_system__DOT__video__DOT__sp_idx;
    __Vdly__tb_system__DOT__video__DOT__sp_idx = 0;
    SData/*10:0*/ __Vdly__tb_system__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_system__DOT__video__DOT__sprram_raddr = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__video__DOT__lbuf_sel;
    __Vdly__tb_system__DOT__video__DOT__lbuf_sel = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__rom_srv__DOT__st;
    __Vdly__tb_system__DOT__rom_srv__DOT__st = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__spr_fetch_done;
    __Vdly__tb_system__DOT__spr_fetch_done = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__rom_srv__DOT__cur;
    __Vdly__tb_system__DOT__rom_srv__DOT__cur = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_system__DOT__spr_fetch_data;
    VL_ZERO_W(128, __Vdly__tb_system__DOT__spr_fetch_data);
    CData/*0:0*/ __Vdly__tb_system__DOT__sdram_chip__DOT__row_active;
    __Vdly__tb_system__DOT__sdram_chip__DOT__row_active = 0;
    SData/*13:0*/ __Vdly__tb_system__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_system__DOT__sdram16__DOT__refresh_count = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__sd_ready;
    __Vdly__tb_system__DOT__sd_ready = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__sdram16__DOT__data;
    __Vdly__tb_system__DOT__sdram16__DOT__data = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_system__DOT__sd_bdata;
    VL_ZERO_W(128, __Vdly__tb_system__DOT__sd_bdata);
    CData/*0:0*/ __Vdly__tb_system__DOT__sd_bready;
    __Vdly__tb_system__DOT__sd_bready = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0;
    IData/*24:0*/ __Vdly__tb_system__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_system__DOT__sdram16__DOT__save_addr = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__snd__DOT__ram__v0;
    __VdlyVal__tb_system__DOT__snd__DOT__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_system__DOT__snd__DOT__ram__v0;
    __VdlyDim0__tb_system__DOT__snd__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__snd__DOT__ram__v0;
    __VdlySet__tb_system__DOT__snd__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__snd__DOT__ram__v1;
    __VdlyVal__tb_system__DOT__snd__DOT__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_system__DOT__snd__DOT__ram__v1;
    __VdlyDim0__tb_system__DOT__snd__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__snd__DOT__ram__v1;
    __VdlySet__tb_system__DOT__snd__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ram__v0;
    __VdlyVal__tb_system__DOT__main_board__DOT__ram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v0;
    __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ram__v0;
    __VdlySet__tb_system__DOT__main_board__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ram__v1;
    __VdlyVal__tb_system__DOT__main_board__DOT__ram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v1;
    __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ram__v1;
    __VdlySet__tb_system__DOT__main_board__DOT__ram__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v19;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v19 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v20;
    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v3;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v3;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__vram__v0;
    __VdlyVal__tb_system__DOT__video__DOT__vram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_system__DOT__video__DOT__vram__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__vram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__vram__v0;
    __VdlySet__tb_system__DOT__video__DOT__vram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__vram__v1;
    __VdlyVal__tb_system__DOT__video__DOT__vram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb_system__DOT__video__DOT__vram__v1;
    __VdlyDim0__tb_system__DOT__video__DOT__vram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__vram__v1;
    __VdlySet__tb_system__DOT__video__DOT__vram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__sprram__v0;
    __VdlyVal__tb_system__DOT__video__DOT__sprram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_system__DOT__video__DOT__sprram__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__sprram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sprram__v0;
    __VdlySet__tb_system__DOT__video__DOT__sprram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__sprram__v1;
    __VdlyVal__tb_system__DOT__video__DOT__sprram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb_system__DOT__video__DOT__sprram__v1;
    __VdlyDim0__tb_system__DOT__video__DOT__sprram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sprram__v1;
    __VdlySet__tb_system__DOT__video__DOT__sprram__v1 = 0;
    SData/*8:0*/ __VdlyVal__tb_system__DOT__video__DOT__palette__v0;
    __VdlyVal__tb_system__DOT__video__DOT__palette__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_system__DOT__video__DOT__palette__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__palette__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__palette__v0;
    __VdlySet__tb_system__DOT__video__DOT__palette__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_system__DOT__video__DOT__bg_lbuf__v0;
    __VdlyVal__tb_system__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_system__DOT__video__DOT__bg_lbuf__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__bg_lbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__bg_lbuf__v0;
    __VdlySet__tb_system__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v0;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sp_row__v0;
    __VdlySet__tb_system__DOT__video__DOT__sp_row__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v1;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sp_row__v1;
    __VdlySet__tb_system__DOT__video__DOT__sp_row__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v2;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v3;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v3 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v4;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v5;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v5 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v6;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v6 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_row__v7;
    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_lo__v0;
    __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_hi__v0;
    __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v0;
    __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v0;
    __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v0;
    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v1;
    __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v1 = 0;
    IData/*20:0*/ __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v1;
    __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v1;
    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v1 = 0;
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vdly__tb_system__DOT__ce_div = vlSelfRef.tb_system__DOT__ce_div;
    __Vdly__tb_system__DOT__video__DOT__lbuf_sel = vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel;
    __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 = 0U;
    vlSelfRef.__Vdly__tb_system__DOT__video__DOT__hcnt 
        = vlSelfRef.tb_system__DOT__video__DOT__hcnt;
    vlSelfRef.__Vdly__tb_system__DOT__video__DOT__vcnt 
        = vlSelfRef.tb_system__DOT__video__DOT__vcnt;
    __Vdly__tb_system__DOT__acc_m = vlSelfRef.tb_system__DOT__acc_m;
    __Vdly__tb_system__DOT__tog_m = vlSelfRef.tb_system__DOT__tog_m;
    __Vdly__tb_system__DOT__acc_s = vlSelfRef.tb_system__DOT__acc_s;
    __Vdly__tb_system__DOT__tog_s = vlSelfRef.tb_system__DOT__tog_s;
    vlSelfRef.__Vdly__tb_system__DOT__video__DOT__field 
        = vlSelfRef.tb_system__DOT__video__DOT__field;
    __Vdly__tb_system__DOT__video__DOT__bg_st = vlSelfRef.tb_system__DOT__video__DOT__bg_st;
    __Vdly__tb_system__DOT__video__DOT__bg_px = vlSelfRef.tb_system__DOT__video__DOT__bg_px;
    __Vdly__tb_system__DOT__video__DOT__bg_cell = vlSelfRef.tb_system__DOT__video__DOT__bg_cell;
    __Vdly__tb_system__DOT__video__DOT__vram_raddr 
        = vlSelfRef.tb_system__DOT__video__DOT__vram_raddr;
    vlSelfRef.__Vdly__tb_system__DOT__main_board__DOT__line_cnt 
        = vlSelfRef.tb_system__DOT__main_board__DOT__line_cnt;
    __Vdly__tb_system__DOT__video__DOT__sp_idx = vlSelfRef.tb_system__DOT__video__DOT__sp_idx;
    __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
        = vlSelfRef.tb_system__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_system__DOT__video__DOT__sp_st = vlSelfRef.tb_system__DOT__video__DOT__sp_st;
    __VdlySet__tb_system__DOT__video__DOT__sp_row__v0 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__sp_row__v1 = 0U;
    __Vdly__tb_system__DOT__video__DOT__sp_px = vlSelfRef.tb_system__DOT__video__DOT__sp_px;
    __VdlySet__tb_system__DOT__video__DOT__bg_lbuf__v0 = 0U;
    __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt 
        = vlSelfRef.tb_system__DOT__main_board__DOT__wdt_cnt;
    __VdlySet__tb_system__DOT__video__DOT__palette__v0 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__vram__v0 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__vram__v1 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__sprram__v0 = 0U;
    __VdlySet__tb_system__DOT__video__DOT__sprram__v1 = 0U;
    __Vdly__tb_system__DOT__rom_srv__DOT__st = vlSelfRef.tb_system__DOT__rom_srv__DOT__st;
    vlSelfRef.__Vdly__tb_system__DOT__mrom_ack = vlSelfRef.tb_system__DOT__mrom_ack;
    vlSelfRef.__Vdly__tb_system__DOT__srom_ack = vlSelfRef.tb_system__DOT__srom_ack;
    __Vdly__tb_system__DOT__spr_fetch_done = vlSelfRef.tb_system__DOT__spr_fetch_done;
    __Vdly__tb_system__DOT__rom_srv__DOT__cur = vlSelfRef.tb_system__DOT__rom_srv__DOT__cur;
    __Vdly__tb_system__DOT__spr_fetch_data[0U] = vlSelfRef.tb_system__DOT__spr_fetch_data[0U];
    __Vdly__tb_system__DOT__spr_fetch_data[1U] = vlSelfRef.tb_system__DOT__spr_fetch_data[1U];
    __Vdly__tb_system__DOT__spr_fetch_data[2U] = vlSelfRef.tb_system__DOT__spr_fetch_data[2U];
    __Vdly__tb_system__DOT__spr_fetch_data[3U] = vlSelfRef.tb_system__DOT__spr_fetch_data[3U];
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
        = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
        = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag_read;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v3 = 0U;
    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
        = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v3 = 0U;
    __VdlySet__tb_system__DOT__snd__DOT__ram__v0 = 0U;
    __VdlySet__tb_system__DOT__snd__DOT__ram__v1 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ram__v0 = 0U;
    __VdlySet__tb_system__DOT__main_board__DOT__ram__v1 = 0U;
    __Vdly__tb_system__DOT__sdram16__DOT__refresh_count 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    __Vdly__tb_system__DOT__sd_ready = vlSelfRef.tb_system__DOT__sd_ready;
    __Vdly__tb_system__DOT__sdram16__DOT__data = vlSelfRef.tb_system__DOT__sdram16__DOT__data;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    __Vdly__tb_system__DOT__sd_bdata[0U] = vlSelfRef.tb_system__DOT__sd_bdata[0U];
    __Vdly__tb_system__DOT__sd_bdata[1U] = vlSelfRef.tb_system__DOT__sd_bdata[1U];
    __Vdly__tb_system__DOT__sd_bdata[2U] = vlSelfRef.tb_system__DOT__sd_bdata[2U];
    __Vdly__tb_system__DOT__sd_bdata[3U] = vlSelfRef.tb_system__DOT__sd_bdata[3U];
    __Vdly__tb_system__DOT__sd_bready = vlSelfRef.tb_system__DOT__sd_bready;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    __Vdly__tb_system__DOT__sdram16__DOT__save_addr 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr;
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    __Vdly__tb_system__DOT__sdram_chip__DOT__row_active 
        = vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_active;
    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v0 = 0U;
    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v1 = 0U;
    vlSelfRef.__Vdly__tb_system__DOT__ce_div = (1U 
                                                & (~ (IData)(vlSelfRef.tb_system__DOT__ce_div)));
    if (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_blend_go) 
         & (~ ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
               >> 2U)))) {
        __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_wr_data;
        __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_wr_addr;
        __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_lo__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_blend_go) 
         & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
            >> 2U))) {
        __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_wr_data;
        __VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_wr_addr;
        __VdlySet__tb_system__DOT__video__DOT__sp_lbuf_hi__v0 = 1U;
    }
    if ((9U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c 
            = (7U & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_px) 
                      >> 1U) ^ (- (IData)((1U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1) 
                                                 >> 2U))))));
        __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w1 
            = vlSelfRef.tb_system__DOT__video__DOT__bg_q1;
        __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w0 
            = vlSelfRef.tb_system__DOT__video__DOT__bg_q0;
        __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__lo 
            = ((2U & (((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w0) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w0) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c) 
                                                 << 1U))))));
        __Vfunc_tb_system__DOT__video__DOT__bg_pen__0__hi 
            = ((2U & (((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w1) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__w1) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__c) 
                                                 << 1U))))));
        vlSelfRef.tb_system__DOT__video__DOT____VlemCall_0__bg_pen 
            = (((IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__hi) 
                << 2U) | (IData)(__Vfunc_tb_system__DOT__video__DOT__bg_pen__0__lo));
        __VdlyVal__tb_system__DOT__video__DOT__bg_lbuf__v0 
            = ((0x00000040U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1) 
                               >> 1U)) | ((0x00000030U 
                                           & ((~ ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1) 
                                                  >> 4U)) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.tb_system__DOT__video__DOT____VlemCall_0__bg_pen)));
        __VdlyDim0__tb_system__DOT__video__DOT__bg_lbuf__v0 
            = (((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_wrbuf) 
                << 9U) | (((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_cell) 
                           << 4U) | (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_px)));
        __VdlySet__tb_system__DOT__video__DOT__bg_lbuf__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_2) 
         & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_pal))) {
        __VdlyVal__tb_system__DOT__video__DOT__palette__v0 
            = (0x000001ffU & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_system__DOT__video__DOT__palette__v0 
            = (0x0000003fU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_system__DOT__video__DOT__palette__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_system__DOT__vram_we))) {
        __VdlyVal__tb_system__DOT__video__DOT__vram__v0 
            = (0x000000ffU & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_system__DOT__video__DOT__vram__v0 
            = (0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_system__DOT__video__DOT__vram__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_system__DOT__vram_we))) {
        __VdlyVal__tb_system__DOT__video__DOT__vram__v1 
            = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U));
        __VdlyDim0__tb_system__DOT__video__DOT__vram__v1 
            = (0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_system__DOT__video__DOT__vram__v1 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_system__DOT__sprram_we))) {
        __VdlyVal__tb_system__DOT__video__DOT__sprram__v0 
            = (0x000000ffU & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_system__DOT__video__DOT__sprram__v0 
            = (0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_system__DOT__video__DOT__sprram__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_system__DOT__sprram_we))) {
        __VdlyVal__tb_system__DOT__video__DOT__sprram__v1 
            = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U));
        __VdlyDim0__tb_system__DOT__video__DOT__sprram__v1 
            = (0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_system__DOT__video__DOT__sprram__v1 = 1U;
    }
    if ((1U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
        if ((1U & ((2U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U])
                    ? (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__e_tick)
                    : (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in) 
                        >> 2U) & (~ ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_q) 
                                     >> 2U)))))) {
            vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre)));
        }
    }
    if (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset) {
        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0 
            = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U];
        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 1U;
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (6U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5 
            = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U];
        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 1U;
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (5U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10 
            = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U];
        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 1U;
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (3U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
    } else {
        if ((1U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U])) {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U];
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                             >> 5U))) 
                              & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                        = (1U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                            >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                         >> 5U))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (1U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U]))) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2 
                        = ((0x0000ff00U & (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U]));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 1U;
                } else {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3 
                        = (0x000000ffU & (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 1U;
                }
            } else {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U])) {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U];
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                             >> 5U))) 
                              & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done) 
                                 >> 1U))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                        = (2U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                            >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                         >> 5U))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (2U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U]))) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7 
                        = ((0x0000ff00U & (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U]));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 1U;
                } else {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8 
                        = (0x000000ffU & (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 1U;
                }
            } else {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U])) {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U];
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                             >> 5U))) 
                              & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done) 
                                 >> 2U))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                        = (4U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                            >> 4U) & (~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                         >> 5U))))) {
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (4U | (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U]))) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12 
                        = ((0x0000ff00U & (((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U]));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 1U;
                } else {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13 
                        = (0x000000ffU & (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 1U;
                }
            } else {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 1U;
            }
        }
    }
    if (vlSelfRef.tb_system__DOT__main_board__DOT__ptm_stb) {
        if (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn) {
            if ((8U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                    if ((1U & (~ (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                  >> 1U)))) {
                        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 
                            = (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U]);
                        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 1U;
                        if ((4U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                            __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                                = (3U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                            __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
                                = (3U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read));
                        }
                    }
                } else if ((1U & (~ (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                     >> 1U)))) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 
                        = (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U]);
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 1U;
                    if ((2U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
                            = (5U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read));
                        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                            = (5U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                    }
                }
            } else if ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U)))) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 
                        = (0x000000ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U]);
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 1U;
                    if ((1U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
                            = (6U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read));
                        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                            = (6U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                    }
                }
            } else if ((2U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag;
            }
        } else {
            if ((8U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                    if ((2U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0 
                            = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0 = 1U;
                        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                            = (3U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                        if ((1U & ((~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                       >> 4U)) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                            __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15 
                                = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                    << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                            __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 1U;
                        }
                    }
                } else if ((2U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1 
                        = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                            << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1 = 1U;
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                        = (5U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                    if ((1U & ((~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                   >> 4U)) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16 
                            = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 1U;
                    }
                }
            } else if ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((2U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                    __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2 
                        = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                            << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                    __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2 = 1U;
                    __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag 
                        = (6U & (IData)(__Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag));
                    if ((1U & ((~ (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                   >> 4U)) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                        __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17 
                            = (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 1U;
                    }
                }
            } else if ((2U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0 
                    = vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0 = 1U;
            } else if ((1U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U])) {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1 
                    = vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1 = 1U;
            } else {
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2 
                    = vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2 = 1U;
            }
            if ((IData)(((0U == (0x0000000eU & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                         & (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                            & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din) 
                               ^ vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U]))))) {
                __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag = 0U;
                __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0U;
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U];
                __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 1U;
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v19 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U];
                __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v20 
                    = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U];
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
            if ((8U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U)))) {
                    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf 
                        = vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
                }
            } else if ((4U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                              >> 1U)))) {
                    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf 
                        = vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_system__DOT__snd__DOT__sel_ram) 
         & (~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rUDS)))) {
            __VdlyVal__tb_system__DOT__snd__DOT__ram__v0 
                = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                  >> 8U));
            __VdlyDim0__tb_system__DOT__snd__DOT__ram__v0 
                = (0x000007ffU & (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_system__DOT__snd__DOT__ram__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rLDS)))) {
            __VdlyVal__tb_system__DOT__snd__DOT__ram__v1 
                = (0x000000ffU & (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob));
            __VdlyDim0__tb_system__DOT__snd__DOT__ram__v1 
                = (0x000007ffU & (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_system__DOT__snd__DOT__ram__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_ram) 
         & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rUDS)))) {
            __VdlyVal__tb_system__DOT__main_board__DOT__ram__v0 
                = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                  >> 8U));
            __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v0 
                = (0x00001fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_system__DOT__main_board__DOT__ram__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rLDS)))) {
            __VdlyVal__tb_system__DOT__main_board__DOT__ram__v1 
                = (0x000000ffU & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob));
            __VdlyDim0__tb_system__DOT__main_board__DOT__ram__v1 
                = (0x00001fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_system__DOT__main_board__DOT__ram__v1 = 1U;
        }
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm_cs_q 
        = vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm;
    if (vlSelfRef.tb_system__DOT__ce_div) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_bq_lo 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_lo
            [(((IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)))];
        vlSelfRef.tb_system__DOT__video__DOT__sp_bq_hi 
            = vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_hi
            [(((IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)))];
        vlSelfRef.vs = vlSelfRef.tb_system__DOT__video__DOT__vs_d;
        vlSelfRef.hs = vlSelfRef.tb_system__DOT__video__DOT__hs_d;
        vlSelfRef.de = vlSelfRef.tb_system__DOT__video__DOT__de_d;
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__lo 
            = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_bq));
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__hi 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_bq) 
                              >> 8U));
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__idx 
            = (0x0000003fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_disp_q));
        if ((IData)(((0x40U == (0xc0U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__lo))) 
                     & (~ (((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_disp_q) 
                            >> 6U) & (0U != (0x0000000fU 
                                             & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_disp_q)))))))) {
            vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__idx 
                = (0x0000003fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__lo));
        }
        if ((1U == (3U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__hi) 
                          >> 6U)))) {
            vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__idx 
                = (0x0000003fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__hi));
        }
        vlSelfRef.tb_system__DOT__video__DOT__rgb9 
            = vlSelfRef.tb_system__DOT__video__DOT__palette
            [vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__idx];
        if (vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel) {
            vlSelfRef.tb_system__DOT__video__DOT__sp_bv_lo 
                = (1U & (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt) 
                                          >> 5U))] 
                         >> (0x0000001fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))));
            vlSelfRef.tb_system__DOT__video__DOT__sp_bv_hi 
                = (1U & (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt) 
                                          >> 5U))] 
                         >> (0x0000001fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))));
        } else {
            vlSelfRef.tb_system__DOT__video__DOT__sp_bv_lo 
                = (1U & (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt) 
                                          >> 5U))] 
                         >> (0x0000001fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))));
            vlSelfRef.tb_system__DOT__video__DOT__sp_bv_hi 
                = (1U & (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt) 
                                          >> 5U))] 
                         >> (0x0000001fU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))));
        }
        vlSelfRef.tb_system__DOT__video__DOT__vs_d 
            = ((0x01eaU <= (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)) 
               & (0x01edU > (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)));
        vlSelfRef.tb_system__DOT__video__DOT__hs_d 
            = ((0x0220U <= (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)) 
               & (0x0250U > (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)));
        vlSelfRef.tb_system__DOT__video__DOT__de_d 
            = ((0x0200U > (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)) 
               & (0x01e0U > (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)));
        if (((0x027aU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)) 
             & (0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_system__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel)));
        } else if (((0x027aU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)) 
                    & (0x01e0U > (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_system__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel)));
        }
        vlSelfRef.tb_system__DOT__video__DOT__bg_disp_q 
            = vlSelfRef.tb_system__DOT__video__DOT__bg_lbuf
            [(((IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)))];
    }
    vlSelfRef.tb_system__DOT__m_phi1 = 0U;
    vlSelfRef.tb_system__DOT__m_phi2 = 0U;
    __Vdly__tb_system__DOT__acc_m = (0x0001ffffU & 
                                     ((IData)(0x000062deU) 
                                      + (0x0000ffffU 
                                         & vlSelfRef.tb_system__DOT__acc_m)));
    if ((0x00010000U & vlSelfRef.tb_system__DOT__acc_m)) {
        __Vdly__tb_system__DOT__tog_m = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__tog_m)));
        if (vlSelfRef.tb_system__DOT__tog_m) {
            vlSelfRef.tb_system__DOT__m_phi2 = 1U;
        } else {
            vlSelfRef.tb_system__DOT__m_phi1 = 1U;
        }
    }
    vlSelfRef.tb_system__DOT__s_phi1 = 0U;
    vlSelfRef.tb_system__DOT__s_phi2 = 0U;
    __Vdly__tb_system__DOT__acc_s = (0x0001ffffU & 
                                     ((IData)(0x00006666U) 
                                      + (0x0000ffffU 
                                         & vlSelfRef.tb_system__DOT__acc_s)));
    if ((0x00010000U & vlSelfRef.tb_system__DOT__acc_s)) {
        __Vdly__tb_system__DOT__tog_s = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__tog_s)));
        if (vlSelfRef.tb_system__DOT__tog_s) {
            vlSelfRef.tb_system__DOT__s_phi2 = 1U;
        } else {
            vlSelfRef.tb_system__DOT__s_phi1 = 1U;
        }
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__wr_q 
        = ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__bus_cycle) 
           & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn)));
    vlSelfRef.tb_system__DOT__snd__DOT__ram_q = vlSelfRef.tb_system__DOT__snd__DOT__ram
        [(0x000007ffU & (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_system__DOT__main_board__DOT__ram_q 
        = vlSelfRef.tb_system__DOT__main_board__DOT__ram
        [(0x00001fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_system__DOT__vram_q = vlSelfRef.tb_system__DOT__video__DOT__vram
        [(0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_system__DOT__sprram_q = vlSelfRef.tb_system__DOT__video__DOT__sprram
        [(0x00000fffU & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_system__DOT__snd__DOT__pia_cs_q = 
        ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__sel_pia) 
         & (~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rUDS)));
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_out 
        = vlSelfRef.tb_system__DOT__sdram_chip__DOT__pipe_q1;
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_oe 
        = vlSelfRef.tb_system__DOT__sdram_chip__DOT__pipe_v1;
    if (vlSelfRef.reset) {
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read = 0U;
        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v3 = 1U;
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag = 0U;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre = 0U;
        __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0U;
        __VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v3 = 1U;
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done 
        = __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag_read 
        = __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag_read;
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag 
        = __Vdly__tb_system__DOT__main_board__DOT__ptm__DOT__flag;
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v0;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v1;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v2;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v0;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v1;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v2;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cr__v3) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] = 1U;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U]) 
               | (SData)(__VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v3));
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U]) 
               | (SData)(__VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v8));
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U]) 
               | (SData)(__VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v13));
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v18;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v19;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_system__DOT__main_board__DOT__ptm__DOT__cnt__v20;
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ptm__DOT__latch__v3) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[0U] = 0xffffU;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[1U] = 0xffffU;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__latch[2U] = 0xffffU;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] = 0U;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] = 0U;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] = 0xffffU;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] = 0xffffU;
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] = 0xffffU;
    }
    if (__VdlySet__tb_system__DOT__video__DOT__sp_lbuf_lo__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_lo[__VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_lo__v0] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_lo__v0;
    }
    if (__VdlySet__tb_system__DOT__video__DOT__sp_lbuf_hi__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_hi[__VdlyDim0__tb_system__DOT__video__DOT__sp_lbuf_hi__v0] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_lbuf_hi__v0;
    }
    if (__VdlySet__tb_system__DOT__video__DOT__palette__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__palette[__VdlyDim0__tb_system__DOT__video__DOT__palette__v0] 
            = __VdlyVal__tb_system__DOT__video__DOT__palette__v0;
    }
    vlSelfRef.tb_system__DOT__acc_m = __Vdly__tb_system__DOT__acc_m;
    vlSelfRef.tb_system__DOT__tog_m = __Vdly__tb_system__DOT__tog_m;
    vlSelfRef.tb_system__DOT__acc_s = __Vdly__tb_system__DOT__acc_s;
    vlSelfRef.tb_system__DOT__tog_s = __Vdly__tb_system__DOT__tog_s;
    if (vlSelfRef.reset) {
        __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt = 0U;
        vlSelfRef.wdt = 0U;
    } else if (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_wdt) 
                & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
        __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt = 0U;
    } else if (vlSelfRef.tb_system__DOT__vsync30) {
        if ((8U == (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__wdt_cnt))) {
            vlSelfRef.wdt = 1U;
        } else {
            __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__wdt_cnt)));
        }
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__wdt_cnt 
        = __Vdly__tb_system__DOT__main_board__DOT__wdt_cnt;
    if (__VdlySet__tb_system__DOT__snd__DOT__ram__v0) {
        vlSelfRef.tb_system__DOT__snd__DOT__ram[__VdlyDim0__tb_system__DOT__snd__DOT__ram__v0] 
            = ((0x00ffU & vlSelfRef.tb_system__DOT__snd__DOT__ram
                [__VdlyDim0__tb_system__DOT__snd__DOT__ram__v0]) 
               | ((SData)((IData)(__VdlyVal__tb_system__DOT__snd__DOT__ram__v0)) 
                  << 8U));
    }
    if (__VdlySet__tb_system__DOT__snd__DOT__ram__v1) {
        vlSelfRef.tb_system__DOT__snd__DOT__ram[__VdlyDim0__tb_system__DOT__snd__DOT__ram__v1] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__snd__DOT__ram
                [__VdlyDim0__tb_system__DOT__snd__DOT__ram__v1]) 
               | (SData)(__VdlyVal__tb_system__DOT__snd__DOT__ram__v1));
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ram__v0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ram[__VdlyDim0__tb_system__DOT__main_board__DOT__ram__v0] 
            = ((0x00ffU & vlSelfRef.tb_system__DOT__main_board__DOT__ram
                [__VdlyDim0__tb_system__DOT__main_board__DOT__ram__v0]) 
               | ((SData)((IData)(__VdlyVal__tb_system__DOT__main_board__DOT__ram__v0)) 
                  << 8U));
    }
    if (__VdlySet__tb_system__DOT__main_board__DOT__ram__v1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ram[__VdlyDim0__tb_system__DOT__main_board__DOT__ram__v1] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__main_board__DOT__ram
                [__VdlyDim0__tb_system__DOT__main_board__DOT__ram__v1]) 
               | (SData)(__VdlyVal__tb_system__DOT__main_board__DOT__ram__v1));
    }
    if (vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf_q) {
        vlSelfRef.tb_system__DOT__video__DOT__bg_q1 
            = vlSelfRef.tb_system__DOT__video__DOT__bg_rdata;
    } else {
        vlSelfRef.tb_system__DOT__video__DOT__bg_q0 
            = vlSelfRef.tb_system__DOT__video__DOT__bg_rdata;
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_q 
        = vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in;
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset 
        = (1U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U]);
    vlSelfRef.tb_system__DOT__main_board__DOT__e_tick 
        = ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.E) 
           & (~ (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__e_q)));
    vlSelfRef.r = ((0x000000e0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                   >> 1U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                  >> 4U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                    >> 7U))));
    vlSelfRef.g = ((0x000000e0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                   << 5U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                  << 2U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                    >> 1U))));
    vlSelfRef.b = ((0x000000e0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                   << 2U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                  >> 1U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__rgb9) 
                                                    >> 4U))));
    if ((1U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
        if (vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) {
            VL_ASSIGN_W(512, vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1, Vtb_system__ConstPool__CONST_h93e1b771_0);
            VL_ASSIGN_W(512, vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1, Vtb_system__ConstPool__CONST_h93e1b771_0);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf)))) {
            VL_ASSIGN_W(512, vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0, Vtb_system__ConstPool__CONST_h93e1b771_0);
            VL_ASSIGN_W(512, vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0, Vtb_system__ConstPool__CONST_h93e1b771_0);
        }
    } else if (vlSelfRef.tb_system__DOT__video__DOT__sp_blend_go) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
                      >> 2U)))) {
            if (vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) {
                vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[(0x0000000fU 
                                                                    & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                                                       >> 5U))] 
                    = (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1
                       [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                        >> 5U))] | 
                       ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))));
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf)))) {
                vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[(0x0000000fU 
                                                                    & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                                                       >> 5U))] 
                    = (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0
                       [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                        >> 5U))] | 
                       ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))));
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))) {
            if (vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) {
                vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[(0x0000000fU 
                                                                    & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                                                       >> 5U))] 
                    = (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1
                       [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                        >> 5U))] | 
                       ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))));
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf)))) {
                vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[(0x0000000fU 
                                                                    & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                                                       >> 5U))] 
                    = (vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0
                       [(0x0000000fU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                        >> 5U))] | 
                       ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))));
            }
        }
    }
    vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_bq 
        = ((((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bq_hi) 
             & (- (IData)((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bv_hi)))) 
            << 8U) | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bq_lo) 
                      & (- (IData)((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bv_lo)))));
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__pipe_v1 = 0U;
    if ((4U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__command))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__command) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__command))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_active)))))) {
                    VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: READ with no open row\n",0);
                }
                vlSelfRef.tb_system__DOT__sdram_chip__DOT__pipe_q1 
                    = vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem
                    [(0x001fffffU & vlSelfRef.tb_system__DOT__sdram_chip__DOT__widx)];
                vlSelfRef.tb_system__DOT__sdram_chip__DOT__pipe_v1 = 1U;
            } else {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_active)))))) {
                    VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: WRITE with no open row\n",0);
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__sda) 
                              >> 0x0000000bU)))) {
                    __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__sdq));
                    __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v0 
                        = (0x001fffffU & vlSelfRef.tb_system__DOT__sdram_chip__DOT__widx);
                    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__sda) 
                              >> 0x0000000cU)))) {
                    __VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v1 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_system__DOT__sdq) 
                                          >> 8U));
                    __VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v1 
                        = (0x001fffffU & vlSelfRef.tb_system__DOT__sdram_chip__DOT__widx);
                    __VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v1 = 1U;
                }
            }
            if ((0x00000400U & (IData)(vlSelfRef.tb_system__DOT__sda))) {
                __Vdly__tb_system__DOT__sdram_chip__DOT__row_active = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__command))) {
        if ((1U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__command))) {
            if (VL_UNLIKELY((vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_active))) {
                VL_WRITEF_NX("SDRAM-PROTOCOL-ERROR: ACTIVATE row %0d while row %0d still open\n",2
                             , '#',13,vlSelfRef.tb_system__DOT__sda
                             , '#',13,(IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_open));
            }
            vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_open 
                = vlSelfRef.tb_system__DOT__sda;
            __Vdly__tb_system__DOT__sdram_chip__DOT__row_active = 1U;
        } else {
            __Vdly__tb_system__DOT__sdram_chip__DOT__row_active = 0U;
        }
    }
    if (__VdlySet__tb_system__DOT__video__DOT__bg_lbuf__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__bg_lbuf[__VdlyDim0__tb_system__DOT__video__DOT__bg_lbuf__v0] 
            = __VdlyVal__tb_system__DOT__video__DOT__bg_lbuf__v0;
    }
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_active 
        = __Vdly__tb_system__DOT__sdram_chip__DOT__row_active;
    if (__VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v0) {
        vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem[__VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem
                [__VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v0));
    }
    if (__VdlySet__tb_system__DOT__sdram_chip__DOT__mem__v1) {
        vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem[__VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem
                [__VdlyDim0__tb_system__DOT__sdram_chip__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_system__DOT__sdram_chip__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf_q 
        = vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf;
    vlSelfRef.tb_system__DOT__video__DOT__bg_rdata 
        = vlSelfRef.tb_system__DOT__video__DOT__bg_rom
        [(((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf) 
           << 0x0000000eU) | (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_raddr))];
    vlSelfRef.tb_system__DOT__main_board__DOT__e_q 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.E;
    vlSelfRef.tb_system__DOT__sdram16__DOT__command = 7U;
    __Vdly__tb_system__DOT__sdram16__DOT__refresh_count 
        = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count)));
    __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = (3U & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay) 
                 >> 1U));
    if ((1U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay))) {
        __Vdly__tb_system__DOT__sd_ready = 1U;
        __Vdly__tb_system__DOT__sdram16__DOT__data 
            = vlSelfRef.tb_system__DOT__sdq;
    }
    if (((((((((0U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state) 
               | (0x0000000aU == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
              | (9U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
             | (8U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
            | (7U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
           | (6U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
          | (5U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) 
         | (4U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state))) {
        if ((0U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            vlSelfRef.tb_system__DOT__sda = 0U;
            if ((0x3fe0U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_system__DOT__sdram16__DOT__command = 2U;
                vlSelfRef.tb_system__DOT__sda = (0x00000400U 
                                                 | (IData)(vlSelfRef.tb_system__DOT__sda));
            }
            if ((0x3fe8U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_system__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff0U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_system__DOT__sdram16__DOT__command = 1U;
            }
            if ((0x3ff8U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
                vlSelfRef.tb_system__DOT__sdram16__DOT__command = 0U;
                vlSelfRef.tb_system__DOT__sda = 0x0220U;
            }
            if ((1U & (~ (0U != (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))))) {
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
                __Vdly__tb_system__DOT__sd_ready = 1U;
                __Vdly__tb_system__DOT__sdram16__DOT__refresh_count = 0U;
            }
        } else if ((0x0000000aU == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 9U;
        } else if ((9U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        } else if ((8U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 7U;
        } else if ((7U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 6U;
        } else if ((6U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else if ((5U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 3U;
            if ((0x014fU < (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000aU;
                vlSelfRef.tb_system__DOT__sdram16__DOT__command = 1U;
                __Vdly__tb_system__DOT__sdram16__DOT__refresh_count = 0U;
            }
        }
    } else if ((0x0000000bU == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = 0U;
        __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = 0U;
        __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000cU;
    } else if ((0x0000000cU == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((7U >= (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            vlSelfRef.tb_system__DOT__sdram16__DOT__command = 5U;
            vlSelfRef.tb_system__DOT__sda = (((7U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                                              << 0x0000000aU) 
                                             | ((0x000001f8U 
                                                 & (vlSelfRef.tb_system__DOT__sd_baddr 
                                                    << 3U)) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))));
        }
        if ((8U >= (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol))) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)));
        }
        __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
            = (((7U >= (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol)) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay) 
                                >> 1U)));
        if ((1U & (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay))) {
            VL_ASSIGNSEL_WI(128, 16, (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap) 
                                       << 4U)), __Vdly__tb_system__DOT__sd_bdata, vlSelfRef.tb_system__DOT__sdq);
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap)));
            if ((7U == (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap))) {
                __Vdly__tb_system__DOT__sd_bready = 1U;
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
            }
        }
    } else if ((3U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        if ((0x029eU < (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count))) {
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 4U;
        } else if (vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd) {
            vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 0U;
            vlSelfRef.tb_system__DOT__sda = (0x00001fffU 
                                             & (vlSelfRef.tb_system__DOT__sd_baddr 
                                                >> 6U));
            vlSelfRef.tb_system__DOT__sdram16__DOT__command = 3U;
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = 0U;
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0x0000000bU;
        } else if (((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd) 
                    | (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we))) {
            if (vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we) {
                vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 0U;
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
                __Vdly__tb_system__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr;
                vlSelfRef.tb_system__DOT__sda = (0x00001fffU 
                                                 & (vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
                                                    >> 0x0aU));
            } else {
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 0U;
                __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 0U;
                __Vdly__tb_system__DOT__sdram16__DOT__save_addr 
                    = vlSelfRef.tb_system__DOT__sd_addr;
                vlSelfRef.tb_system__DOT__sda = (0x00001fffU 
                                                 & (vlSelfRef.tb_system__DOT__sd_addr 
                                                    >> 0x0aU));
            }
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 1U;
            vlSelfRef.tb_system__DOT__sdram16__DOT__command = 3U;
        }
    } else if ((1U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 2U;
    } else if ((2U == vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state)) {
        vlSelfRef.tb_system__DOT__sda = (0x00000400U 
                                         | ((((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                              & (~ vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr)) 
                                             << 0x0000000cU) 
                                            | ((((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) 
                                                 & vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr) 
                                                << 0x0000000bU) 
                                               | (0x000001ffU 
                                                  & (vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr 
                                                     >> 1U)))));
        if (vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we) {
            vlSelfRef.tb_system__DOT__sdram16__DOT__command = 4U;
            vlSelfRef.tb_system__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 
                = (0x0000ffffU & (((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_data) 
                                   << 8U) | (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_data)));
            __Vdly__tb_system__DOT__sd_ready = (1U 
                                                & (~ (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd)));
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 5U;
        } else {
            vlSelfRef.tb_system__DOT__sdram16__DOT__command = 5U;
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
                = (4U | (IData)(__Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay));
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 8U;
        }
    }
    if (((IData)(vlSelfRef.tb_system__DOT__sd_we) & 
         (~ (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_we)))) {
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = 1U;
        __Vdly__tb_system__DOT__sd_ready = 0U;
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_data 
            = vlSelfRef.tb_system__DOT__sd_din;
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr 
            = vlSelfRef.tb_system__DOT__sd_addr;
    }
    if (((IData)(vlSelfRef.tb_system__DOT__sd_brd) 
         & (~ (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd)))) {
        __Vdly__tb_system__DOT__sd_bready = 0U;
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = 1U;
    }
    if (((IData)(vlSelfRef.tb_system__DOT__sd_rd) & 
         (~ (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd)))) {
        if ((((IData)(vlSelfRef.tb_system__DOT__sd_ready) 
              & (~ (IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we))) 
             & ((0x00ffffffU & (vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr 
                                >> 1U)) == (0x00ffffffU 
                                            & (vlSelfRef.tb_system__DOT__sd_addr 
                                               >> 1U))))) {
            __Vdly__tb_system__DOT__sdram16__DOT__save_addr 
                = vlSelfRef.tb_system__DOT__sd_addr;
        } else {
            __Vdly__tb_system__DOT__sd_ready = 0U;
            __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = 1U;
        }
    }
    vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count 
        = __Vdly__tb_system__DOT__sdram16__DOT__refresh_count;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we;
    vlSelfRef.tb_system__DOT__sdram16__DOT__save_addr 
        = __Vdly__tb_system__DOT__sdram16__DOT__save_addr;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd 
        = __Vdly__tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd;
    if ((5U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf = 0U;
        vlSelfRef.tb_system__DOT__video__DOT__bg_raddr 
            = ((((4U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1) 
                        >> 4U)) | (3U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1))) 
                << 0x0000000bU) | ((0x000007f8U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d0) 
                                                   << 3U)) 
                                   | (7U & ((8U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_d1))
                                             ? (~ ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_next_y) 
                                                   >> 1U))
                                             : ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_next_y) 
                                                >> 1U)))));
    }
    if ((6U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_system__DOT__video__DOT__bg_rhalf = 1U;
    }
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__widx 
        = ((0x001ffe00U & ((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_open) 
                           << 9U)) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__sda)));
    vlSelfRef.tb_system__DOT__sdq = ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                                     | ((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_out) 
                                        & (- (IData)((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_oe)))));
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_we 
        = vlSelfRef.tb_system__DOT__sd_we;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd 
        = vlSelfRef.tb_system__DOT__sd_brd;
    vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd 
        = vlSelfRef.tb_system__DOT__sd_rd;
    if (vlSelfRef.reset) {
        __Vdly__tb_system__DOT__rom_srv__DOT__st = 0U;
        vlSelfRef.tb_system__DOT__sd_we = 0U;
        vlSelfRef.tb_system__DOT__sd_rd = 0U;
        vlSelfRef.tb_system__DOT__sd_brd = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__mrom_ack = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__srom_ack = 0U;
        __Vdly__tb_system__DOT__spr_fetch_done = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__mrom_req)))) {
            vlSelfRef.__Vdly__tb_system__DOT__mrom_ack = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__srom_req)))) {
            vlSelfRef.__Vdly__tb_system__DOT__srom_ack = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__spr_fetch_req)))) {
            __Vdly__tb_system__DOT__spr_fetch_done = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__st))) {
            vlSelfRef.tb_system__DOT__sd_we = 0U;
            if (((IData)(vlSelfRef.tb_system__DOT__spr_fetch_req) 
                 & (~ (IData)(vlSelfRef.tb_system__DOT__spr_fetch_done)))) {
                vlSelfRef.tb_system__DOT__sd_baddr 
                    = (0x001fffffU & ((IData)(0x00009000U) 
                                      + (IData)(vlSelfRef.tb_system__DOT__spr_fetch_addr)));
                vlSelfRef.tb_system__DOT__sd_brd = 1U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 3U;
            } else if (((IData)(vlSelfRef.tb_system__DOT__mrom_req) 
                        & (~ (IData)(vlSelfRef.tb_system__DOT__mrom_ack)))) {
                __Vdly__tb_system__DOT__rom_srv__DOT__cur = 0U;
                vlSelfRef.tb_system__DOT__sd_addr = 
                    (0x0003fffeU & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob);
                vlSelfRef.tb_system__DOT__sd_rd = 1U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 1U;
            } else if (((IData)(vlSelfRef.tb_system__DOT__srom_req) 
                        & (~ (IData)(vlSelfRef.tb_system__DOT__srom_ack)))) {
                __Vdly__tb_system__DOT__rom_srv__DOT__cur = 1U;
                vlSelfRef.tb_system__DOT__sd_addr = 
                    (0x00040000U | (0x0003fffeU & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob));
                vlSelfRef.tb_system__DOT__sd_rd = 1U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__st))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__sd_ready)))) {
                vlSelfRef.tb_system__DOT__sd_rd = 0U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 2U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__st))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__sd_bready)))) {
                vlSelfRef.tb_system__DOT__sd_brd = 0U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__st))) {
            if (((IData)(vlSelfRef.tb_system__DOT__sd_bready) 
                 & (~ (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__bready_q)))) {
                __Vdly__tb_system__DOT__spr_fetch_data[0U] 
                    = vlSelfRef.tb_system__DOT__sd_bdata[0U];
                __Vdly__tb_system__DOT__spr_fetch_data[1U] 
                    = vlSelfRef.tb_system__DOT__sd_bdata[1U];
                __Vdly__tb_system__DOT__spr_fetch_data[2U] 
                    = vlSelfRef.tb_system__DOT__sd_bdata[2U];
                __Vdly__tb_system__DOT__spr_fetch_data[3U] 
                    = vlSelfRef.tb_system__DOT__sd_bdata[3U];
                __Vdly__tb_system__DOT__spr_fetch_done = 1U;
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__st))) {
            if (((IData)(vlSelfRef.tb_system__DOT__sd_ready) 
                 & (~ (IData)(vlSelfRef.tb_system__DOT__rom_srv__DOT__ready_q)))) {
                if (vlSelfRef.tb_system__DOT__rom_srv__DOT__cur) {
                    vlSelfRef.tb_system__DOT__srom_q 
                        = ((0x0000ff00U & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__data) 
                                           << 8U)) 
                           | (0x000000ffU & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__data) 
                                             >> 8U)));
                    vlSelfRef.__Vdly__tb_system__DOT__srom_ack = 1U;
                } else {
                    vlSelfRef.tb_system__DOT__mrom_q 
                        = ((0x0000ff00U & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__data) 
                                           << 8U)) 
                           | (0x000000ffU & ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__data) 
                                             >> 8U)));
                    vlSelfRef.__Vdly__tb_system__DOT__mrom_ack = 1U;
                }
                __Vdly__tb_system__DOT__rom_srv__DOT__st = 0U;
            }
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        if ((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            __Vdly__tb_system__DOT__video__DOT__bg_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            __Vdly__tb_system__DOT__video__DOT__bg_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            __Vdly__tb_system__DOT__video__DOT__bg_px 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_px)));
            if ((0x0fU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_px))) {
                if ((0x1fU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_cell))) {
                    __Vdly__tb_system__DOT__video__DOT__bg_st = 0U;
                } else {
                    __Vdly__tb_system__DOT__video__DOT__bg_cell 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_cell)));
                    __Vdly__tb_system__DOT__video__DOT__bg_st = 1U;
                }
            }
        } else {
            __Vdly__tb_system__DOT__video__DOT__bg_st = 9U;
            __Vdly__tb_system__DOT__video__DOT__bg_px = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            __Vdly__tb_system__DOT__video__DOT__bg_st 
                = ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))
                    ? 8U : 7U);
        } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            __Vdly__tb_system__DOT__video__DOT__bg_st = 6U;
        } else {
            vlSelfRef.tb_system__DOT__video__DOT__bg_d1 
                = vlSelfRef.tb_system__DOT__video__DOT__vram_rq;
            __Vdly__tb_system__DOT__video__DOT__bg_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
            vlSelfRef.tb_system__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_system__DOT__video__DOT__vram_rq;
            __Vdly__tb_system__DOT__video__DOT__bg_st = 4U;
        } else {
            __Vdly__tb_system__DOT__video__DOT__vram_raddr 
                = (1U | ((0x000007c0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_next_y) 
                                         << 2U)) | 
                         ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_cell) 
                          << 1U)));
            vlSelfRef.tb_system__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_system__DOT__video__DOT__vram_rq;
            __Vdly__tb_system__DOT__video__DOT__bg_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_st))) {
        __Vdly__tb_system__DOT__video__DOT__vram_raddr 
            = ((0x000007c0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_next_y) 
                               << 2U)) | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__bg_cell) 
                                          << 1U));
        __Vdly__tb_system__DOT__video__DOT__bg_st = 2U;
    } else if ((((IData)(vlSelfRef.tb_system__DOT__ce_div) 
                 & (0x0200U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))))) {
        __Vdly__tb_system__DOT__video__DOT__bg_cell = 0U;
        vlSelfRef.tb_system__DOT__video__DOT__bg_next_y 
            = ((0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))));
        vlSelfRef.tb_system__DOT__video__DOT__bg_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_system__DOT__video__DOT__bg_st = 1U;
    }
    vlSelfRef.tb_system__DOT__video__DOT__bg_px = __Vdly__tb_system__DOT__video__DOT__bg_px;
    vlSelfRef.tb_system__DOT__video__DOT__bg_cell = __Vdly__tb_system__DOT__video__DOT__bg_cell;
    vlSelfRef.tb_system__DOT__video__DOT__bg_st = __Vdly__tb_system__DOT__video__DOT__bg_st;
    vlSelfRef.tb_system__DOT__sd_bdata[0U] = __Vdly__tb_system__DOT__sd_bdata[0U];
    vlSelfRef.tb_system__DOT__sd_bdata[1U] = __Vdly__tb_system__DOT__sd_bdata[1U];
    vlSelfRef.tb_system__DOT__sd_bdata[2U] = __Vdly__tb_system__DOT__sd_bdata[2U];
    vlSelfRef.tb_system__DOT__sd_bdata[3U] = __Vdly__tb_system__DOT__sd_bdata[3U];
    vlSelfRef.tb_system__DOT__sdram16__DOT__data = __Vdly__tb_system__DOT__sdram16__DOT__data;
    vlSelfRef.tb_system__DOT__rom_srv__DOT__st = __Vdly__tb_system__DOT__rom_srv__DOT__st;
    vlSelfRef.tb_system__DOT__rom_srv__DOT__cur = __Vdly__tb_system__DOT__rom_srv__DOT__cur;
    vlSelfRef.tb_system__DOT__video__DOT__vram_rq = vlSelfRef.tb_system__DOT__video__DOT__vram
        [vlSelfRef.tb_system__DOT__video__DOT__vram_raddr];
    vlSelfRef.tb_system__DOT__rom_srv__DOT__bready_q 
        = vlSelfRef.tb_system__DOT__sd_bready;
    vlSelfRef.tb_system__DOT__rom_srv__DOT__ready_q 
        = vlSelfRef.tb_system__DOT__sd_ready;
    if ((8U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
        if ((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
        } else {
            __Vdly__tb_system__DOT__video__DOT__sp_px 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px)));
            if ((0x1fU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px))) {
                __Vtask_tb_system__DOT__video__DOT__sp_next__1__from_scan = 0U;
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_system__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    if (__Vtask_tb_system__DOT__video__DOT__sp_next__1__from_scan) {
                        __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                               - (IData)(2U)) 
                                              << 2U));
                        __Vdly__tb_system__DOT__video__DOT__sp_st = 3U;
                    } else {
                        __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                               - (IData)(1U)) 
                                              << 2U));
                        __Vdly__tb_system__DOT__video__DOT__sp_st = 2U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
        if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_fetch_cnt))) {
                    vlSelfRef.tb_system__DOT__video__DOT__sp_x 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq));
                    if ((0U == (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_code)))) {
                        __Vtask_tb_system__DOT__video__DOT__sp_next__2__from_scan = 0U;
                        if ((0U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx))) {
                            __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
                        } else {
                            __Vdly__tb_system__DOT__video__DOT__sp_idx 
                                = (0x000001ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                                  - (IData)(1U)));
                            __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                                = ((IData)(__Vtask_tb_system__DOT__video__DOT__sp_next__2__from_scan)
                                    ? (0x000007fcU 
                                       & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                           - (IData)(2U)) 
                                          << 2U)) : 
                                   (0x000007fcU & (
                                                   ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                                    - (IData)(1U)) 
                                                   << 2U)));
                            __Vdly__tb_system__DOT__video__DOT__sp_st 
                                = ((IData)(__Vtask_tb_system__DOT__video__DOT__sp_next__2__from_scan)
                                    ? 3U : 2U);
                        }
                    } else {
                        vlSelfRef.tb_system__DOT__spr_fetch_addr 
                            = ((0x00003fe0U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_code) 
                                               << 5U)) 
                               | (0x0000001fU & ((0x00000020U 
                                                  & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15))
                                                  : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15))));
                        vlSelfRef.tb_system__DOT__spr_fetch_req = 1U;
                        vlSelfRef.tb_system__DOT__video__DOT__sp_fetch_cnt = 1U;
                    }
                } else if (vlSelfRef.tb_system__DOT__spr_fetch_done) {
                    vlSelfRef.tb_system__DOT__spr_fetch_req = 0U;
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v0 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[0U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_system__DOT__spr_fetch_data[0U] 
                                             >> 8U)));
                    __VdlySet__tb_system__DOT__video__DOT__sp_row__v0 = 1U;
                    vlSelfRef.tb_system__DOT__video__DOT__sp_fetch_cnt = 0U;
                    __Vdly__tb_system__DOT__video__DOT__sp_px = 0U;
                    __Vdly__tb_system__DOT__video__DOT__sp_st = 8U;
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v1 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[0U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_system__DOT__spr_fetch_data[0U] 
                              >> 0x00000018U));
                    __VdlySet__tb_system__DOT__video__DOT__sp_row__v1 = 1U;
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v2 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[1U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_system__DOT__spr_fetch_data[1U] 
                                             >> 8U)));
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v3 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[1U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_system__DOT__spr_fetch_data[1U] 
                              >> 0x00000018U));
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v4 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[2U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_system__DOT__spr_fetch_data[2U] 
                                             >> 8U)));
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v5 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[2U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_system__DOT__spr_fetch_data[2U] 
                              >> 0x00000018U));
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v6 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[3U] 
                                           << 8U)) 
                           | (0x000000ffU & (vlSelfRef.tb_system__DOT__spr_fetch_data[3U] 
                                             >> 8U)));
                    __VdlyVal__tb_system__DOT__video__DOT__sp_row__v7 
                        = ((0x0000ff00U & (vlSelfRef.tb_system__DOT__spr_fetch_data[3U] 
                                           >> 8U)) 
                           | (vlSelfRef.tb_system__DOT__spr_fetch_data[3U] 
                              >> 0x00000018U));
                }
            } else {
                vlSelfRef.tb_system__DOT__video__DOT__sp_code_lo 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq));
                __Vdly__tb_system__DOT__video__DOT__sp_st = 7U;
                vlSelfRef.tb_system__DOT__video__DOT__sp_fetch_cnt = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            vlSelfRef.tb_system__DOT__video__DOT__sp_flags 
                = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq));
            __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                = (3U | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_system__DOT__video__DOT__sp_st = 6U;
        } else {
            __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                = (2U | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_system__DOT__video__DOT__sp_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
        if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
            if (vlSelfRef.tb_system__DOT__video__DOT__yt_hit) {
                vlSelfRef.tb_system__DOT__video__DOT__sp_y 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq));
                __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                    = (1U | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                             << 2U));
                __Vdly__tb_system__DOT__video__DOT__sp_st = 4U;
            } else {
                __Vtask_tb_system__DOT__video__DOT__sp_next__3__from_scan = 1U;
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_system__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_system__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    if (__Vtask_tb_system__DOT__video__DOT__sp_next__3__from_scan) {
                        __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                               - (IData)(2U)) 
                                              << 2U));
                        __Vdly__tb_system__DOT__video__DOT__sp_st = 3U;
                    } else {
                        __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                               - (IData)(1U)) 
                                              << 2U));
                        __Vdly__tb_system__DOT__video__DOT__sp_st = 2U;
                    }
                }
            }
        } else {
            __Vdly__tb_system__DOT__video__DOT__sprram_raddr 
                = (0x000007fcU & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_idx) 
                                   - (IData)(1U)) << 2U));
            __Vdly__tb_system__DOT__video__DOT__sp_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st))) {
        __Vdly__tb_system__DOT__video__DOT__sp_idx = 0x01ffU;
        __Vdly__tb_system__DOT__video__DOT__sprram_raddr = 0x07fcU;
        __Vdly__tb_system__DOT__video__DOT__sp_st = 2U;
    } else if ((((IData)(vlSelfRef.tb_system__DOT__ce_div) 
                 & (0U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))))) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_line 
            = ((0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))));
        vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_system__DOT__video__DOT__sp_st = 1U;
    }
    vlSelfRef.tb_system__DOT__video__DOT__vram_raddr 
        = __Vdly__tb_system__DOT__video__DOT__vram_raddr;
    if (__VdlySet__tb_system__DOT__video__DOT__vram__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__vram[__VdlyDim0__tb_system__DOT__video__DOT__vram__v0] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__video__DOT__vram
                [__VdlyDim0__tb_system__DOT__video__DOT__vram__v0]) 
               | (SData)(__VdlyVal__tb_system__DOT__video__DOT__vram__v0));
    }
    if (__VdlySet__tb_system__DOT__video__DOT__vram__v1) {
        vlSelfRef.tb_system__DOT__video__DOT__vram[__VdlyDim0__tb_system__DOT__video__DOT__vram__v1] 
            = ((0x00ffU & vlSelfRef.tb_system__DOT__video__DOT__vram
                [__VdlyDim0__tb_system__DOT__video__DOT__vram__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_system__DOT__video__DOT__vram__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_system__DOT__sd_bready = __Vdly__tb_system__DOT__sd_bready;
    vlSelfRef.tb_system__DOT__sd_ready = __Vdly__tb_system__DOT__sd_ready;
    vlSelfRef.tb_system__DOT__spr_fetch_data[0U] = __Vdly__tb_system__DOT__spr_fetch_data[0U];
    vlSelfRef.tb_system__DOT__spr_fetch_data[1U] = __Vdly__tb_system__DOT__spr_fetch_data[1U];
    vlSelfRef.tb_system__DOT__spr_fetch_data[2U] = __Vdly__tb_system__DOT__spr_fetch_data[2U];
    vlSelfRef.tb_system__DOT__spr_fetch_data[3U] = __Vdly__tb_system__DOT__spr_fetch_data[3U];
    vlSelfRef.tb_system__DOT__video__DOT__sp_idx = __Vdly__tb_system__DOT__video__DOT__sp_idx;
    vlSelfRef.tb_system__DOT__spr_fetch_done = __Vdly__tb_system__DOT__spr_fetch_done;
    vlSelfRef.tb_system__DOT__video__DOT__lbuf_sel 
        = __Vdly__tb_system__DOT__video__DOT__lbuf_sel;
    vlSelfRef.tb_system__DOT__video__DOT__sp_st = __Vdly__tb_system__DOT__video__DOT__sp_st;
    if (__VdlySet__tb_system__DOT__video__DOT__sp_row__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[0U][0U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v0;
    }
    if (__VdlySet__tb_system__DOT__video__DOT__sp_row__v1) {
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[0U][1U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v1;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[1U][0U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v2;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[1U][1U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v3;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[2U][0U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v4;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[2U][1U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v5;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[3U][0U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v6;
        vlSelfRef.tb_system__DOT__video__DOT__sp_row[3U][1U] 
            = __VdlyVal__tb_system__DOT__video__DOT__sp_row__v7;
    }
    vlSelfRef.tb_system__DOT__video__DOT__sp_px = __Vdly__tb_system__DOT__video__DOT__sp_px;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_line) 
                                                    - 
                                                    (0x000003ffU 
                                                     & (((IData)(0x00f1U) 
                                                         - (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_y)) 
                                                        << 1U))));
    vlSelfRef.tb_system__DOT__video__DOT__sprram_rq 
        = vlSelfRef.tb_system__DOT__video__DOT__sprram
        [vlSelfRef.tb_system__DOT__video__DOT__sprram_raddr];
    vlSelfRef.tb_system__DOT__video__DOT__sp_xs = (0x000007ffU 
                                                   & ((VL_LTS_III(11, 0x01f0U, 
                                                                  (0x000007ffU 
                                                                   & (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_x) 
                                                                       << 1U) 
                                                                      - (IData)(4U))))
                                                        ? 
                                                       ((((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_x) 
                                                          << 1U) 
                                                         - (IData)(4U)) 
                                                        - (IData)(0x0200U))
                                                        : 
                                                       (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_x) 
                                                         << 1U) 
                                                        - (IData)(4U))) 
                                                      + (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px)));
    vlSelfRef.tb_system__DOT__video__DOT__sp_code = 
        ((0x00000600U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
                         << 3U)) | ((0x00000100U & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
                                      << 5U)) | (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_code_lo)));
    tb_system__DOT__video__DOT__sp_px_src = (0x0000003fU 
                                             & ((0x00000010U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))
                                                 ? 
                                                ((IData)(0x1fU) 
                                                 - (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px))
                                                 : (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px)));
    vlSelfRef.tb_system__DOT__video__DOT__sprram_raddr 
        = __Vdly__tb_system__DOT__video__DOT__sprram_raddr;
    if (__VdlySet__tb_system__DOT__video__DOT__sprram__v0) {
        vlSelfRef.tb_system__DOT__video__DOT__sprram[__VdlyDim0__tb_system__DOT__video__DOT__sprram__v0] 
            = ((0xff00U & vlSelfRef.tb_system__DOT__video__DOT__sprram
                [__VdlyDim0__tb_system__DOT__video__DOT__sprram__v0]) 
               | (SData)(__VdlyVal__tb_system__DOT__video__DOT__sprram__v0));
    }
    if (__VdlySet__tb_system__DOT__video__DOT__sprram__v1) {
        vlSelfRef.tb_system__DOT__video__DOT__sprram[__VdlyDim0__tb_system__DOT__video__DOT__sprram__v1] 
            = ((0x00ffU & vlSelfRef.tb_system__DOT__video__DOT__sprram
                [__VdlyDim0__tb_system__DOT__video__DOT__sprram__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_system__DOT__video__DOT__sprram__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_system__DOT__video__DOT__sp_wr_addr 
        = (((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) 
            << 9U) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)));
    tb_system__DOT__video__DOT__sp_row_w = ((0x00000010U 
                                             & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                             ? ((4U 
                                                 & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                 ? 
                                                ((2U 
                                                  & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                  ? vlSelfRef.tb_system__DOT__video__DOT__sp_row[3U][1U]
                                                  : vlSelfRef.tb_system__DOT__video__DOT__sp_row[2U][1U])
                                                 : 
                                                ((2U 
                                                  & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                  ? vlSelfRef.tb_system__DOT__video__DOT__sp_row[1U][1U]
                                                  : vlSelfRef.tb_system__DOT__video__DOT__sp_row[0U][1U]))
                                             : ((4U 
                                                 & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                 ? 
                                                ((2U 
                                                  & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                  ? vlSelfRef.tb_system__DOT__video__DOT__sp_row[3U][0U]
                                                  : vlSelfRef.tb_system__DOT__video__DOT__sp_row[2U][0U])
                                                 : 
                                                ((2U 
                                                  & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                  ? vlSelfRef.tb_system__DOT__video__DOT__sp_row[1U][0U]
                                                  : vlSelfRef.tb_system__DOT__video__DOT__sp_row[0U][0U])));
    tb_system__DOT__video__DOT__sp_pen_v = (0x0000000fU 
                                            & ((8U 
                                                & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                ? (
                                                   (1U 
                                                    & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                    ? (IData)(tb_system__DOT__video__DOT__sp_row_w)
                                                    : 
                                                   ((IData)(tb_system__DOT__video__DOT__sp_row_w) 
                                                    >> 4U))
                                                : (
                                                   (1U 
                                                    & (IData)(tb_system__DOT__video__DOT__sp_px_src))
                                                    ? 
                                                   ((IData)(tb_system__DOT__video__DOT__sp_row_w) 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(tb_system__DOT__video__DOT__sp_row_w) 
                                                    >> 0x0cU))));
    vlSelfRef.tb_system__DOT__video__DOT__yt_hit = 
        (0x0020U > (0x000003ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_line) 
                                   - (((IData)(0x00f1U) 
                                       - (0x000000ffU 
                                          & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq))) 
                                      << 1U))));
    vlSelfRef.tb_system__DOT__video__DOT__sp_wr_data 
        = ((((8U == (IData)(tb_system__DOT__video__DOT__sp_pen_v))
              ? 2U : 1U) << 6U) | ((0x00000030U & (
                                                   (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags)) 
                                                   << 4U)) 
                                   | (IData)(tb_system__DOT__video__DOT__sp_pen_v)));
    if (vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) {
        __Vtemp_1[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[3U];
        __Vtemp_1[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[4U];
        __Vtemp_1[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[5U];
        __Vtemp_1[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[6U];
        __Vtemp_1[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[7U];
        __Vtemp_1[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[8U];
        __Vtemp_1[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[9U];
        __Vtemp_1[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[10U];
        __Vtemp_1[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[11U];
        __Vtemp_1[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[12U];
        __Vtemp_1[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[13U];
        __Vtemp_1[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[14U];
        __Vtemp_1[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[15U];
        __Vtemp_2[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[15U];
    } else {
        __Vtemp_1[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[3U];
        __Vtemp_1[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[4U];
        __Vtemp_1[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[5U];
        __Vtemp_1[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[6U];
        __Vtemp_1[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[7U];
        __Vtemp_1[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[8U];
        __Vtemp_1[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[9U];
        __Vtemp_1[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[10U];
        __Vtemp_1[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[11U];
        __Vtemp_1[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[12U];
        __Vtemp_1[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[13U];
        __Vtemp_1[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[14U];
        __Vtemp_1[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[15U];
        __Vtemp_2[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[15U];
    }
    vlSelfRef.tb_system__DOT__video__DOT__sp_blend_go 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))) 
           & (VL_GTS_III(11, 0x0200U, (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)) 
              & ((~ (((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))
                       ? (__Vtemp_1[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)))
                       : (__Vtemp_2[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)))) 
                     | (0U == (IData)(tb_system__DOT__video__DOT__sp_pen_v)))) 
                 & (8U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st)))));
}

void Vtb_system___024root___nba_sequent__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
    tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
    // Body
    vlSelfRef.tb_system__DOT__mrom_ack = vlSelfRef.__Vdly__tb_system__DOT__mrom_ack;
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm_irq 
        = (0U != ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag) 
                  & ((4U & ((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                             >> 6U) << 2U)) | ((2U 
                                                & ((vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                                    >> 6U) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                                     >> 6U))))));
    vlSelfRef.tb_system__DOT__srom_ack = vlSelfRef.__Vdly__tb_system__DOT__srom_ack;
    if ((1U & ((~ (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cb1_q)) 
               & ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb) 
                  >> 1U)))) {
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqb1 = 1U;
    }
    if (vlSelfRef.tb_system__DOT__snd__DOT__pia_stb) {
        if (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn) {
            if (((2U == (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs)) 
                 & ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb) 
                    >> 2U))) {
                vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqb1 = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs)))) {
                if ((4U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb))) {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb 
                        = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                } else {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb 
                        = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                }
            }
        }
    }
    if ((1U & ((2U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra))
                ? (~ ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ca1_q) 
                      | ((IData)(vlSelfRef.ctrl) >> 4U)))
                : ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ca1_q) 
                   & ((IData)(vlSelfRef.ctrl) >> 4U))))) {
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqa1 = 1U;
    }
    if (vlSelfRef.tb_system__DOT__snd__DOT__pia_stb) {
        if (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn) {
            if (((0U == (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs)) 
                 & ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra) 
                    >> 2U))) {
                vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqa1 = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs)))) {
                if ((4U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra))) {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ora 
                        = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                } else {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddra 
                        = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
            if ((2U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs))) {
                if ((1U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs))) {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb 
                        = (0x0000003fU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs))) {
                    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra 
                        = (0x0000003fU & ((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                }
            }
        }
    }
    if (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.extReset) {
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqb1 = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ora = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddra = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqa1 = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb = 0U;
        vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra = 0U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__tb_system__DOT__main_board__DOT__line_cnt = 0U;
        vlSelfRef.tb_system__DOT__main_board__DOT__irq493 = 0U;
    } else {
        if (vlSelfRef.tb_system__DOT__vsync30) {
            vlSelfRef.__Vdly__tb_system__DOT__main_board__DOT__line_cnt = 0U;
        } else if (vlSelfRef.tb_system__DOT__hsync_pulse) {
            vlSelfRef.__Vdly__tb_system__DOT__main_board__DOT__line_cnt 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__line_cnt)));
        }
        if (vlSelfRef.tb_system__DOT__hsync_pulse) {
            if ((0x040eU == (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__line_cnt))) {
                vlSelfRef.tb_system__DOT__main_board__DOT__irq493 = 1U;
            }
            if ((0x0410U == (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__line_cnt))) {
                vlSelfRef.tb_system__DOT__main_board__DOT__irq493 = 0U;
            }
        }
    }
    vlSelfRef.tb_system__DOT__main_board__DOT__line_cnt 
        = vlSelfRef.__Vdly__tb_system__DOT__main_board__DOT__line_cnt;
    vlSelfRef.tb_system__DOT__hsync_pulse = 0U;
    vlSelfRef.tb_system__DOT__vsync30 = 0U;
    if (vlSelfRef.tb_system__DOT__ce_div) {
        if ((0x027aU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt))) {
            vlSelfRef.__Vdly__tb_system__DOT__video__DOT__hcnt = 0U;
            vlSelfRef.tb_system__DOT__hsync_pulse = 1U;
            if ((0x020cU == (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt))) {
                vlSelfRef.__Vdly__tb_system__DOT__video__DOT__field 
                    = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__field)));
                vlSelfRef.__Vdly__tb_system__DOT__video__DOT__vcnt = 0U;
                if (vlSelfRef.tb_system__DOT__video__DOT__field) {
                    vlSelfRef.tb_system__DOT__vsync30 = 1U;
                }
            } else {
                vlSelfRef.__Vdly__tb_system__DOT__video__DOT__vcnt 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__video__DOT__vcnt)));
            }
        } else {
            vlSelfRef.__Vdly__tb_system__DOT__video__DOT__hcnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__video__DOT__hcnt)));
        }
    }
    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cb1_q = 1U;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb) 
                                                & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb));
    vlSelfRef.dac = (((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ora) 
                      << 2U) | (3U & ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb) 
                                      >> 6U)));
    vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ca1_q 
        = (1U & (~ ((IData)(vlSelfRef.ctrl) >> 4U)));
    if (vlSelfRef.reset) {
        vlSelfRef.ctrl = 0x0020U;
    } else if (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_ctl) 
                & (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn)))) {
        vlSelfRef.ctrl = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob;
    }
    vlSelfRef.tb_system__DOT__video__DOT__vcnt = vlSelfRef.__Vdly__tb_system__DOT__video__DOT__vcnt;
    vlSelfRef.tb_system__DOT__video__DOT__hcnt = vlSelfRef.__Vdly__tb_system__DOT__video__DOT__hcnt;
    vlSelfRef.tb_system__DOT__ce_div = vlSelfRef.__Vdly__tb_system__DOT__ce_div;
    vlSelfRef.tb_system__DOT__video__DOT__field = vlSelfRef.__Vdly__tb_system__DOT__video__DOT__field;
    vlSelfRef.snd_status = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                  >> 4U));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in 
        = ((((IData)(vlSelfRef.tb_system__DOT__hsync_pulse) 
             & (IData)(vlSelfRef.tb_system__DOT__video__DOT__field)) 
            << 2U) | (IData)(vlSelfRef.tb_system__DOT__vsync30));
    tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U])
                  ? (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__e_tick)
                  : ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in) 
                     & (~ (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_q)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick 
        = ((6U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick)) 
           | (IData)(tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src));
    tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[1U])
                  ? (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__e_tick)
                  : (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in) 
                      >> 1U) & (~ ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_q) 
                                   >> 1U)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick 
        = ((5U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick)) 
           | ((IData)(tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src) 
              << 1U));
    tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U])
                  ? (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__e_tick)
                  : (((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in) 
                      >> 2U) & (~ ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_q) 
                                   >> 2U)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick 
        = ((3U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick)) 
           | ((IData)(tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src) 
              << 2U));
    if ((1U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
        vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick 
            = ((3U & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick)) 
               | (0xfffffffcU & ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__tick) 
                                 & ((7U == (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre)) 
                                    << 2U))));
    }
}

void Vtb_system___024root___nba_comb__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_comb__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din = 0xffffU;
    if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_system__DOT__mrom_q;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ram) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_system__DOT__main_board__DOT__ram_q;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_system__DOT__vram_q;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_system__DOT__sprram_q;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = (0x0000ffffU & ((0x0000ff00U & (((8U 
                                                & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                ? (
                                                   (4U 
                                                    & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                     : 
                                                    (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                     >> 8U))
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                     : 
                                                    (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                     >> 8U)))
                                                : (
                                                   (4U 
                                                    & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                     : 
                                                    (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                     >> 8U))
                                                    : 
                                                   ((((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_irq) 
                                                      << 7U) 
                                                     | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                                                     >> 1U))))))) 
                                              << 8U)) 
                              | (0x000000ffU & ((8U 
                                                 & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                 ? 
                                                ((4U 
                                                  & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                  ? 
                                                 ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                   >> 8U))
                                                  : 
                                                 ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                   >> 8U)))
                                                 : 
                                                ((4U 
                                                  & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                  ? 
                                                 ((2U 
                                                   & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                   : 
                                                  (vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                   >> 8U))
                                                  : 
                                                 ((((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_irq) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob 
                                                                   >> 1U))))))))));
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_in0) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = ((0x0000ffe0U & (IData)(vlSelfRef.in0)) 
               | (((IData)(vlSelfRef.snd_status) << 4U) 
                  | (0x0000000fU & (IData)(vlSelfRef.in0))));
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_in1) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.in1;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_dsw) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.dsw;
    } else if (vlSelfRef.tb_system__DOT__main_board__DOT__sel_ctl) {
        vlSelfRef.tb_system__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.ctrl;
    }
    vlSelfRef.tb_system__DOT__vram_we = ((- (IData)(
                                                    ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_2) 
                                                     & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram)))) 
                                         & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.tb_system__DOT__sprram_we = ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_9) 
                                           & (- (IData)(
                                                        ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_2) 
                                                         & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr)))));
}

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__3(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__3(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__4(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__5(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__2(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__6(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__4(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__4(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__5(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__6(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__3(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__7(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__6(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__7(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__8(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__10(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__9(Vtb_system_fx68k* vlSelf);

void Vtb_system___024root___eval_nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.tb_system__DOT__main_board__DOT__bus_cycle 
                = (1U & ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rAS)) 
                         & ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rUDS)) 
                            | (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rLDS)))));
            vlSelfRef.tb_system__DOT__main_board__DOT__vpa_n 
                = (1U & (~ ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rAS)) 
                            & (7U == (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__rFC)))));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                = ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__vpa_n) 
                   & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__bus_cycle));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_pal 
                = (IData)(((0x00090000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_wdt 
                = (IData)(((0x000b0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_ram 
                = (IData)(((0x00060000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_in0 
                = (IData)(((0x000d0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_in1 
                = (IData)(((0x000e0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_dsw 
                = (IData)(((0x000f0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom 
                = (IData)(((0U == (0x00fc0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm 
                = (IData)(((0x000a0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram 
                = (IData)(((0x00070000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr 
                = (IData)(((0x00080000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.tb_system__DOT__snd__DOT__sel_ram 
                = ((~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13)) 
                   & (0x00070000U == (0x00070000U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)));
            vlSelfRef.tb_system__DOT__snd__DOT__sel_rom 
                = (1U & (~ ((vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                             >> 0x00000012U) | (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13))));
            vlSelfRef.tb_system__DOT__snd__DOT__sel_pia 
                = ((~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13)) 
                   & (0x00060000U == (0x00070000U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)));
        }
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000280ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__3((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_system__DOT__main_board__DOT__ptm_stb 
                = ((~ (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_cs_q)) 
                   & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm));
        }
    }
    if ((0x0000000000000220ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__3((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__3((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.tb_system__DOT__main_board__DOT__sel_ctl 
                = (IData)(((0x000c0000U == (0x000f0000U 
                                            & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
            vlSelfRef.tb_system__DOT__mrom_req = ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn) 
                                                  & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom));
            vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din 
                = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rUDS)
                                   ? (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob)
                                   : ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                                      >> 8U)));
        }
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__4((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs 
                = ((2U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob) 
                   | (1U & (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                            >> 2U)));
            vlSelfRef.tb_system__DOT__srom_req = ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__sel_rom) 
                                                  & (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn));
        }
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_system__DOT__snd__DOT__pia_stb 
                = ((~ ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia_cs_q) 
                       | (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rUDS))) 
                   & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__sel_pia));
            vlSelfRef.tb_system__DOT__snd__DOT__cpu_din = 0xffffU;
            if (vlSelfRef.tb_system__DOT__snd__DOT__sel_rom) {
                vlSelfRef.tb_system__DOT__snd__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__srom_q;
            } else if (vlSelfRef.tb_system__DOT__snd__DOT__sel_ram) {
                vlSelfRef.tb_system__DOT__snd__DOT__cpu_din 
                    = vlSelfRef.tb_system__DOT__snd__DOT__ram_q;
            } else if (vlSelfRef.tb_system__DOT__snd__DOT__sel_pia) {
                vlSelfRef.tb_system__DOT__snd__DOT__cpu_din 
                    = (0xffU | (0x0000ff00U & (((2U 
                                                 & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                 ? 
                                                ((4U 
                                                  & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                  ? 
                                                 (((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqb1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__crb))
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                                   | ((~ (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb)) 
                                                      & (0x000000f0U 
                                                         | (0x0000000fU 
                                                            & (IData)(vlSelfRef.ctrl)))))
                                                   : (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb)))
                                                 : 
                                                ((4U 
                                                  & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)
                                                  ? 
                                                 (((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__irqa1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__cra))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddra)) 
                                                   | ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ora) 
                                                      & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddra)))
                                                   : (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddra)))) 
                                               << 8U)));
            }
        }
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        Vtb_system___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000088ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__5((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000084ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__5((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000021ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__6((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000184ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__4((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x000000000000008cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__4((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000284ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__5((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000384ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__6((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__6((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000061ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__3((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000023ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__4((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000221ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__5((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000261ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__6((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__7((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__6((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__7((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__7((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__8((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__8((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x0000000000000094ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__10((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((0x0000000000000031ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__9((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
}

void Vtb_system___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf);

bool Vtb_system___024root___eval_phase__act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcd2bfade__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcd2bfade__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h80e5c8f0__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h80e5c8f0__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcd2bfade__0 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Clks
            .__PVT__clk;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h80e5c8f0__0 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Clks
            .__PVT__clk;
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__Vcellinp__nanoRom__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0))) 
                                                          << 8U) 
                                                         | ((((((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h80e5c8f0__0 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h80e5c8f0__1))) 
                                                                << 3U) 
                                                               | (((IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__Vcellinp__nanoRom__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0))) 
                                                                  << 2U)) 
                                                              | (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcd2bfade__0 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hcd2bfade__1))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))) 
                                                             << 4U) 
                                                            | ((((vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1) 
                                                                 << 3U) 
                                                                | ((vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod 
                                                                    != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1) 
                                                                   << 2U)) 
                                                               | (((vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod 
                                                                    != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1) 
                                                                   << 1U) 
                                                                  | (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr_hcd2bfade__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcd2bfade__0;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__Vcellinp__nanoRom__clk;
        vlSelfRef.__Vtrigprevexpr_h80e5c8f0__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h80e5c8f0__0;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__Vcellinp__nanoRom__clk;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_system___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_system___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
            }
            if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
            }
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
            }
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
            }
            if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
            }
            if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
            }
        }
    }
    return (__VactExecute);
}

void Vtb_system___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_system___024root___eval_phase__nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_system___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_system___024root___eval_nba(vlSelf);
        Vtb_system___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_system___024root___eval(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_system___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../tb_system.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_system___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_system___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb_system.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb_system.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_system___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_system___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_system___024root___eval_debug_assertions(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_debug_assertions\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
