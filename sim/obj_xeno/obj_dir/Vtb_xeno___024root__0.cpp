// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xeno.h for the primary calling header

#include "Vtb_xeno__pch.h"

bool Vtb_xeno___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___trigger_anySet__ico\n"); );
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

void Vtb_xeno___024root___ico_comb__TOP__0(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___ico_comb__TOP__0\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din = 0xffffU;
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_rom) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_xeno__DOT__rom[(0x0001ffffU 
                                           & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                              >> 1U))];
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ram) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__ram_q;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_xeno__DOT__vram_q;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_xeno__DOT__sprram_q;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = (0x0000ffffU & ((0x0000ff00U & (((8U 
                                                & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                ? (
                                                   (4U 
                                                    & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                     : 
                                                    (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                     >> 8U))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                     : 
                                                    (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                     >> 8U)))
                                                : (
                                                   (4U 
                                                    & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                     ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                     : 
                                                    (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                     >> 8U))
                                                    : 
                                                   ((((IData)(vlSelfRef.dbg_ptm_irq) 
                                                      << 7U) 
                                                     | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                                                     >> 1U))))))) 
                                              << 8U)) 
                              | (0x000000ffU & ((8U 
                                                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                 ? 
                                                ((4U 
                                                  & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U]
                                                   : 
                                                  (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                                   >> 8U))
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U]
                                                   : 
                                                  (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                                   >> 8U)))
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)
                                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U]
                                                   : 
                                                  (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                                   >> 8U))
                                                  : 
                                                 ((((IData)(vlSelfRef.dbg_ptm_irq) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                                                   >> 1U))))))))));
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = ((0x0000ffe0U & (IData)(vlSelfRef.in0)) 
               | ((0x00000010U & (vlSelfRef.tb_xeno__DOT__st_cnt 
                                  >> 0x00000013U)) 
                  | (0x0000000fU & (IData)(vlSelfRef.in0))));
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.in1;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_dsw) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.dsw;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ctl) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.ctrl;
    }
}

void Vtb_xeno___024root___eval_ico(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_ico\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000001cULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_xeno___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__clk 
                = vlSelfRef.clk;
        }
    }
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__1
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__extReset 
                = vlSelfRef.reset;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__pwrUp 
                = vlSelfRef.reset;
        }
    }
    if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            IData/*31:0*/ __Vinline_0__ico_comb__TOP__1___VdfgRegularize_hebeb780c_0_6;
            __Vinline_0__ico_comb__TOP__1___VdfgRegularize_hebeb780c_0_6 = 0;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__clk;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2 & (1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1 & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2 & ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState) 
                                     | (3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rstUrom 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1 
                = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                    .__PVT__enPhi1 & (4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) 
                   & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__extReset | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__addrOeDelay) 
                                        & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI) 
                                              | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeiDelay)))) 
                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai)));
            __Vinline_0__ico_comb__TOP__1___VdfgRegularize_hebeb780c_0_6 
                = (((((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                      & ((IData)(vlSelfRef.dbg_as) 
                         & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg))) 
                     | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi) 
                        & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI) 
                           & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__rGranted)) 
                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Halti))))) 
                    & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset)) 
                       & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                          .__PVT__permStart | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend))))
                    ? 2U : 1U);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next 
                = ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                    ? 1U : ((6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                             ? 1U : ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                      ? 3U : ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                               ? 4U
                                               : ((4U 
                                                   == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rDtack)) 
                                                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iStop)))
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((5U 
                                                    == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                    ? 
                                                   (((5U 
                                                      == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset) 
                                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg)))
                                                     ? 6U
                                                     : __Vinline_0__ico_comb__TOP__1___VdfgRegularize_hebeb780c_0_6)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __Vinline_0__ico_comb__TOP__1___VdfgRegularize_hebeb780c_0_6
                                                     : 1U)))))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding 
                = ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next) 
                   | (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next));
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_xeno___024root___eval_phase__ico(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_phase__ico\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_xeno___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_xeno___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtb_xeno___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vtb_xeno___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<SData/*15:0*/, 16> Vtb_xeno__ConstPool__TABLE_he204aa36_0;

void Vtb_xeno___024root___act_sequent__TOP__0(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___act_sequent__TOP__0\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_4;
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__movemPreDecr 
        = (IData)(((0x0020U == (0x0038U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                   .__PVT__rxIsMovem));
    __Vtemp_2 = (1U & ((((1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))] 
                                >> 1U)) || (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                  [
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 0x0000000cU))] 
                                                  >> 2U))) 
                        || (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                  [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 0x0000000cU))] 
                                  >> 3U))) ? (0U != 
                                              (7U & 
                                               ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 6U)))
                        : ((0x00000010U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 0x0000000cU))])
                            ? (7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 6U)))
                            : ((0x00000100U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))])
                                ? (IData)((0x0108U 
                                           == (0x01b8U 
                                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))
                                : ((0x00001000U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                    [(0x0000000fU & 
                                      ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))])
                                    ? (IData)((0x0108U 
                                               == (0x01b8U 
                                                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))
                                    : ((((1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                [(0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 0x0000000cU))] 
                                                >> 9U)) 
                                         || (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                   [
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 0x0000000cU))] 
                                                   >> 0x0bU))) 
                                        || (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                  [
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 0x0000000cU))] 
                                                  >> 0x0dU)))
                                        ? ((IData)(
                                                   (0x00c0U 
                                                    == 
                                                    (0x00c0U 
                                                     & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird)))) 
                                           | (IData)(
                                                     ((0x0108U 
                                                       == 
                                                       (0x0138U 
                                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                                      & (3U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                             >> 6U))))))
                                        : vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                       .__PVT__implicitSp))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsAreg 
        = __Vtemp_2;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsMovem 
        = (1U & (((Vtb_xeno__ConstPool__TABLE_he204aa36_0
                   [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                    >> 0x0000000cU))] 
                   >> 4U) & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                >> 8U))) & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                            .__PVT__implicitSp)));
    __Vtemp_4 = ((1U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                  [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                   >> 0x0000000cU))])
                  ? ((((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                         >> 8U) & (0U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 4U)))) 
                       | (IData)(((0x0800U == (0x0f00U 
                                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                  & (0U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 4U)))))) 
                      | (IData)((0x0108U == (0x01b8U 
                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))) 
                     | (IData)(((0U == (0x01c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                & (~ (IData)((0x0800U 
                                              == (0x0f30U 
                                                  & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))))))
                  : ((1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 0x0000000cU))] 
                            >> 1U)) || ((0x00000010U 
                                         & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                         [(0x0000000fU 
                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                              >> 0x0000000cU))])
                                         ? ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 6U))) 
                                            | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                            .__PVT__isTas)
                                         : ((0x00000020U 
                                             & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                             [(0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 0x0000000cU))])
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 6U))) 
                                                | (IData)(
                                                          ((0x00c0U 
                                                            == 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                                           & (1U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                  >> 3U))))))
                                             : ((((
                                                   (((1U 
                                                      & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                         [
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                             >> 0x0000000cU))] 
                                                         >> 8U)) 
                                                     || (1U 
                                                         & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                            [
                                                            (0x0000000fU 
                                                             & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                >> 0x0000000cU))] 
                                                            >> 9U))) 
                                                    || (1U 
                                                        & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                           [
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                               >> 0x0000000cU))] 
                                                           >> 0x0bU))) 
                                                   || (1U 
                                                       & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                          [
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                              >> 0x0000000cU))] 
                                                          >> 0x0cU))) 
                                                  || (1U 
                                                      & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                         [
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                             >> 0x0000000cU))] 
                                                         >> 0x0dU))) 
                                                 || (1U 
                                                     & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                        [
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                            >> 0x0000000cU))] 
                                                        >> 0x0eU))) 
                                                && (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                        >> 6U))))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isByte 
        = __Vtemp_4;
}

extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_xeno__ConstPool__TABLE_ha56e5a24_0;

void Vtb_xeno___024root___act_comb__TOP__0(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___act_comb__TOP__0\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
    IData/*31:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata = 0;
    SData/*15:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa = 0;
    SData/*15:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
        .__PVT__pcldbl;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
        .__PVT__pchdbh;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
        .__PVT__pclabl;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
        .__PVT__pchabh;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)))) {
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__rxh2abh))) {
            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__ryh2abh))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__au2Ab))) {
                    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                               .__PVT__aob2Ab))) {
                        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__ath2Abh))) {
                            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhIdle = 0U;
    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
               .__PVT__rxh2dbh))) {
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__ryh2dbh))) {
            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__au2Db))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__ath2Dbh))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)))) {
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhIdle = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0U;
    if ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
         .__PVT__aluColumn)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
               .__PVT__aluFinish ? ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                     ? 0x0fU : 0x0cU)
                : ((0U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 0x0000000dU))) ? 4U
                    : 0x0fU));
    } else {
        if ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__aluColumn)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 5U;
        } else if ((1U & ((0U != (0x039eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) 
                          | ((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                    >> 5U)) || (1U 
                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                   >> 6U)))))) {
            if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if (((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn) || 
                            (6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x15U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0bU;
                } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0eU;
                }
            } else if ((8U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                        = ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluDctrl) ? 0x00000016U
                            : 4U);
                } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0dU;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                    = ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) ? 0x0000000fU
                        : 1U);
            } else if (((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                               >> 5U)) || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                 >> 6U)))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x10U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 5U;
                } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 1U;
                } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 6U;
            } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x11U;
            }
        } else if ((0x00000400U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
            } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x12U;
            }
        } else if ((0x00000800U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x13U;
            }
        } else if ((0x00001000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
        } else if ((0x00002000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 9U;
        } else if ((0x00004000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                = ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? 9U : 8U);
        } else if ((0x00008000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                = ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? 4U : 8U);
        }
        if (((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
              .__PVT__aluColumn) || (3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn))) {
            if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                               >> 3U)) || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                 >> 9U)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
                    = ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) ? 0x1bU : 0x1fU);
            } else if (((((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 2U)) || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                   >> 5U))) 
                         || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0aU))) || (1U 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0cU)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x1fU;
            } else if ((((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                >> 6U)) || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                  >> 7U))) 
                        || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                  >> 0x0bU)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 4U)) || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                   >> 8U))) 
                         || (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0dU))) || (1U 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0eU)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if ((0x00008000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(16, (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row), Vtb_xeno__ConstPool__CONST_h1b96ab98_0);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
                = ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? Vtb_xeno__ConstPool__TABLE_ha56e5a24_0
                   [__Vtemp_1] : ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__aluColumn)
                                   ? ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                       ? 0x0fU : 0U)
                                   : 0U));
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput 
        = ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd)
            : ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd)
                : ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                    : 0U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhMux 
        = (0x0000ffffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                          .__PVT__rxh2dbh ? ((0x11U 
                                              >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                              ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                             [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                              : 0U)
                           : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__ryh2dbh ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                               : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                  .__PVT__au2Db ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                   >> 0x10U)
                                   : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                      .__PVT__ath2Dbh
                                       ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath)
                                       : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)
                                           ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH)
                                           : 0U))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auInpMux 
        = ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__auCntrl) ? ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                 .__PVT__auCntrl) ? 
                                ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                  .__PVT__auCntrl) ? 
                                 (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign) 
                                   | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__noSpAlign)
                                   ? 0xffffffffU : 0xfffffffeU)
                                  : 0xfffffffeU) : 
                                ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                  .__PVT__auCntrl) ? 4U
                                  : 2U)) : ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                             .__PVT__auCntrl)
                                             ? ((1U 
                                                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__auCntrl)
                                                 ? 
                                                (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl))
                                                 : 0xfffffffcU)
                                             : ((1U 
                                                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__auCntrl)
                                                 ? 
                                                (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign) 
                                                  | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__noSpAlign)
                                                  ? 1U
                                                  : 2U)
                                                 : 0U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)
                           ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH)
                           : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__rxh2abh ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                                  : 0U)
                               : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                  .__PVT__ryh2abh ? 
                                  ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                    ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                   [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                    : 0U) : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                             .__PVT__au2Ab
                                              ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                 >> 0x10U)
                                              : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__aob2Ab
                                                  ? 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__ath2Abh
                                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                   : 0U)))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abd 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__ryl2ab & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg)) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abd 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__rxl2ab & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg)) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__ryl2db & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg)) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__rxl2db & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg)) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__ryl2db & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__rxl2db & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    __VdfgRegularize_hebeb780c_0_6 = (((((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                         & ((IData)(vlSelfRef.dbg_as) 
                                            & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg))) 
                                        | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi) 
                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI) 
                                              & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__rGranted)) 
                                                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Halti))))) 
                                       & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset)) 
                                          & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                             .__PVT__permStart 
                                             | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend))))
                                       ? 2U : 1U);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abl 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__ryl2ab & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abl 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__rxl2ab & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg) 
                             | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand 
        = (0x0000ffffU & ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__aluDctrl) ? (- (IData)(
                                                          (1U 
                                                           & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                           .__PVT__aluDctrl)))
                           : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd) 
                              & (- (IData)((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__aluDctrl)))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
           .__PVT__aluActrl ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alub)
            : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd));
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
        .__PVT__ssp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x10U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__rxIsUsp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x0fU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                .__PVT__rxIsDt & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                  .__PVT__implicitSp))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x11U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__implicitSp ? 0x0fU : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                             .__PVT__rxIsMovem
                                              ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__movemRx)
                                              : ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                                  .__PVT__rxIsAreg 
                                                  << 3U) 
                                                 | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                                 .__PVT__rx)));
        if ((0x0000000fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux 
                = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS)
                    ? 0x00000010U : 0x0000000fU);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        } else {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 0U;
        }
    }
    if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
         .__PVT__ryIsDt & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__rz))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryMux = 0x11U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryReg = 0U;
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryReg 
            = (0x0000000fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__rz ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc) 
                                            >> 0x0cU)
                               : ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                   .__PVT__ryIsAreg 
                                   << 3U) | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                  .__PVT__ry)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp 
            = (0x0000000fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryReg));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryMux 
            = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp) 
                & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS))
                ? 0x10U : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryReg));
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aulow 
        = (0x0001ffffU & ((0x0000ffffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auInpMux) 
                          + (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abd)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abd)))) {
            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__dbin2Abd))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__alu2Abd))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIdle = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdMux 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abd)
            ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
               [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                : 0U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abd)
                          ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                              ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                             [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                              : 0U) : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                       .__PVT__dbin2Abd
                                        ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin)
                                        : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                           .__PVT__alu2Abd
                                            ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                            : 0U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd)))) {
            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__alue2Dbd))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__dbin2Dbd))) {
                    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                               .__PVT__alu2Dbd))) {
                        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__dcr2Dbd))) {
                            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdMux 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)
            ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
               [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                : 0U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd)
                          ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                              ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                             [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                              : 0U) : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                       .__PVT__alue2Dbd
                                        ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue)
                                        : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                           .__PVT__dbin2Dbd
                                            ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin)
                                            : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                               .__PVT__alu2Dbd
                                                ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                                : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                   .__PVT__dcr2Dbd
                                                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dcrOutput)
                                                    : 0U))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)))) {
            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__ftu2Dbl))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__au2Db))) {
                    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                               .__PVT__atl2Dbl))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)))) {
                            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)
                           ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                               ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                              [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                               : 0U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)
                                         ? ((0x11U 
                                             >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                             ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                            [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                             : 0U) : 
                                        (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                         .__PVT__ftu2Dbl
                                          ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu)
                                          : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                             .__PVT__au2Db
                                              ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg
                                              : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__atl2Dbl
                                                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)
                                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL)
                                                   : 0U)))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next 
        = ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
            ? 1U : ((6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                     ? 1U : ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                              ? 3U : ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                       ? 4U : ((4U 
                                                == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                ? (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rDtack)) 
                                                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iStop)))
                                                    ? 5U
                                                    : 4U)
                                                : (
                                                   (5U 
                                                    == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                    ? 
                                                   (((5U 
                                                      == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset) 
                                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg)))
                                                     ? 6U
                                                     : __VdfgRegularize_hebeb780c_0_6)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __VdfgRegularize_hebeb780c_0_6
                                                     : 1U)))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)))) {
                if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__ftu2Abl))) {
                    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                               .__PVT__au2Ab))) {
                        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__aob2Ab))) {
                            if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                       .__PVT__atl2Abl))) {
                                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)
                           ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL)
                           : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)
                               ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                  [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                   : 0U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)
                                             ? ((0x11U 
                                                 >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                 ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                                [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                 : 0U)
                                             : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                .__PVT__ftu2Abl
                                                 ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu)
                                                 : 
                                                (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__au2Ab
                                                  ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg
                                                  : 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__aob2Ab
                                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob
                                                   : 
                                                  (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                   .__PVT__atl2Abl
                                                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                    : 0U))))))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb 
        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)
                  ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue) 
                     >> 0x0000000fU) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                                         ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                            >> 7U) : 
                                        ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                         >> 0x0000000fU))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding 
        = ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next) 
           | (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin 
        = (1U & ((~ ((0x10U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | ((0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))))) 
                 & (((0x11U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | (0x0eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                     ? (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb)
                     : ((0x12U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                         ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)
                         : (((0x13U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                             | (0x14U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                             ? ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                 ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rIrd8)
                                     ? (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                         >> 3U) ^ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                   >> 1U))
                                     : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))
                                 : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                    >> 4U)) : ((0x15U 
                                                == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__aluColumn 
                                                  >> 1U)))))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand));
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte) 
         & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))) {
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffffeffU & tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                  << 8U));
    } else if (((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)) 
                & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))) {
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffeffffU & tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                  << 0x00000010U));
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult 
        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords) 
            & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))
            ? ((((0x00008000U & (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                 << 0x0000000fU)) | 
                 (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                  >> 0x00000011U)) << 0x00000010U) 
               | (((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                   << 0x0000000fU) | (0x00007fffU & 
                                      (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                       >> 1U)))) : 
           ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords)
             ? ((((0x0000fffeU & (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                  >> 0x0000000fU)) 
                  | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin)) 
                 << 0x00000010U) | ((0x0000fffeU & 
                                     (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                      << 1U)) | (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                 >> 0x0000001fU)))
             : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight)
                 ? (((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                     << 0x0000001fU) | (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                        >> 1U)) : (
                                                   (tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                    << 1U) 
                                                   | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin)))));
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd 
        = (((4U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
            | (0x0bU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
           | (0x0cU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)));
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin 
        = (1U & ((~ ((4U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | (2U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
                 & ((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    | (((0x0bU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0aU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                        ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore)
                        : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                            >> 4U) & ((0x0cU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                      | (3U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))))))));
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand;
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand;
    if (__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                               ? (((0x000000ffU & (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                                   + (0x000000ffU & (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa))) 
                                  + (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))
                               : (((0x000000ffU & (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                                   - (0x000000ffU & (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa))) 
                                  - (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))));
        vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result 
            = ((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                                                 >> 7U)))) 
                               << 8U)) | (0x000000ffU 
                                          & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp));
        vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 8U));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 7U));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                     >> 7U));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                     >> 7U));
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                               ? (((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                                   + (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa)) 
                                  + (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))
                               : (((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                                   - (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa)) 
                                  - (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))));
        vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result 
            = (0x0000ffffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp);
        vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x10U));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x0fU));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                     >> 0x0fU));
        tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                     >> 0x0fU));
    }
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm 
        = (1U & ((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                  ? (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm)
                  : (~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm))));
    __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov 
        = ((((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm) 
             & (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm)) 
            & (~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm))) 
           | (((~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm)) 
               & (~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm))) 
              & (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subHcarry 
        = (1U & ((((IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                   ^ (IData)(__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                  ^ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp) 
                 >> 4U));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult 
        = vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout 
        = vlSelfRef.__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv 
        = __Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                           ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                           : ((8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                               ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                  | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                               : ((9U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                                   ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                      ^ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                                   : ((5U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                                       ? ((0x0000ff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)))
                                       : ((((((((((0x15U 
                                                   == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                  || (0x0dU 
                                                      == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0eU 
                                                     == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                || (0x0fU 
                                                    == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                               || (0x10U 
                                                   == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                              || (0x11U 
                                                  == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                             || (0x12U 
                                                 == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                            || (0x13U 
                                                == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                           || (0x14U 
                                               == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                           ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult
                                           : ((((((
                                                   ((4U 
                                                     == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                    || (0x0bU 
                                                        == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                   || (0x0cU 
                                                       == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                  || (2U 
                                                      == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0aU 
                                                     == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                || (7U 
                                                    == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                               || (3U 
                                                   == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                               ? (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult)
                                               : ((
                                                   (0x16U 
                                                    == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                   || (6U 
                                                       == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdLatch)
                                                   : 0U))))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = (0x1cU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x1bU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (4U & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                      ? (~ (0U != (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result))))
                      : (~ (0U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result)))) 
                    << 2U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x17U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (8U & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                      ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result) 
                         >> 7U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result) 
                                   >> 0x0fU)) << 3U)));
    if (((((((((5U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
               | (((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                   || (8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                  || (9U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
              | (1U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
             | (0x15U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
            | ((0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
               || (0x13U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
           | ((0x10U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
              || (0x14U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
          | (0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
         | (0x0eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        if ((5U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            if ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                    = (0x0000000aU | (0x11U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)));
            }
        } else if ((((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     || (8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                    || (9U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1cU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((1U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0900U 
                                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))))) 
                      & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                         >> 4U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x15U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                            >> 0x0fU)));
        } else if (((0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x13U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if (((0x10U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x14U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                >> 7U)) & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1dU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)) 
                            | (((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                                ^ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)
                                    ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue) 
                                       >> 0x0eU) : 
                                   ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                                     ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                        >> 6U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                                  >> 0x0eU)))) 
                               << 1U))));
        } else {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1cU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)));
        }
    } else if ((0x11U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
    } else if ((0x12U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)));
    } else if (((((((4U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x0bU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                   || (0x0cU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                  || (2U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                 || (0x0aU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                || (3U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout) 
                  << 4U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1dU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv) 
                  << 1U));
    } else if (((0x16U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                || (6U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry) 
                  << 4U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1cU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdOverf) 
                   << 1U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry)));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp) 
                                                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                | ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)));
}

void Vtb_xeno___024root___nba_sequent__TOP__0(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__0\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w0;
    __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w0 = 0;
    SData/*15:0*/ __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w1;
    __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w1 = 0;
    CData/*2:0*/ __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c;
    __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c = 0;
    CData/*1:0*/ __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__lo;
    __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__lo = 0;
    CData/*1:0*/ __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__hi;
    __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__hi = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__video__DOT__sp_next__6__from_scan;
    __Vtask_tb_xeno__DOT__video__DOT__sp_next__6__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__video__DOT__sp_next__7__from_scan;
    __Vtask_tb_xeno__DOT__video__DOT__sp_next__7__from_scan = 0;
    CData/*0:0*/ __Vtask_tb_xeno__DOT__video__DOT__sp_next__8__from_scan;
    __Vtask_tb_xeno__DOT__video__DOT__sp_next__8__from_scan = 0;
    CData/*3:0*/ __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__Vfuncout;
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x;
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x = 0;
    CData/*1:0*/ __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__bank;
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__bank = 0;
    CData/*3:0*/ __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__nib;
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__nib = 0;
    SData/*15:0*/ __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w;
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w = 0;
    SData/*15:0*/ __Vdly__dbg_sphit;
    __Vdly__dbg_sphit = 0;
    SData/*15:0*/ __Vdly__dbg_sprw;
    __Vdly__dbg_sprw = 0;
    SData/*15:0*/ __Vdly__dbg_spblend;
    __Vdly__dbg_spblend = 0;
    IData/*16:0*/ __Vdly__tb_xeno__DOT__acc;
    __Vdly__tb_xeno__DOT__acc = 0;
    CData/*0:0*/ __Vdly__tb_xeno__DOT__phi_tog;
    __Vdly__tb_xeno__DOT__phi_tog = 0;
    SData/*15:0*/ __Vdly__dbg_vramw;
    __Vdly__dbg_vramw = 0;
    SData/*15:0*/ __Vdly__dbg_palw;
    __Vdly__dbg_palw = 0;
    CData/*3:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt;
    __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt = 0;
    CData/*2:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0;
    CData/*2:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag = 0;
    CData/*2:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read = 0;
    CData/*3:0*/ __Vdly__tb_xeno__DOT__video__DOT__bg_st;
    __Vdly__tb_xeno__DOT__video__DOT__bg_st = 0;
    CData/*3:0*/ __Vdly__tb_xeno__DOT__video__DOT__bg_px;
    __Vdly__tb_xeno__DOT__video__DOT__bg_px = 0;
    CData/*4:0*/ __Vdly__tb_xeno__DOT__video__DOT__bg_cell;
    __Vdly__tb_xeno__DOT__video__DOT__bg_cell = 0;
    SData/*10:0*/ __Vdly__tb_xeno__DOT__video__DOT__vram_raddr;
    __Vdly__tb_xeno__DOT__video__DOT__vram_raddr = 0;
    CData/*3:0*/ __Vdly__tb_xeno__DOT__video__DOT__sp_st;
    __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0;
    CData/*5:0*/ __Vdly__tb_xeno__DOT__video__DOT__sp_px;
    __Vdly__tb_xeno__DOT__video__DOT__sp_px = 0;
    SData/*8:0*/ __Vdly__tb_xeno__DOT__video__DOT__sp_idx;
    __Vdly__tb_xeno__DOT__video__DOT__sp_idx = 0;
    SData/*10:0*/ __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr = 0;
    CData/*2:0*/ __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt;
    __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt = 0;
    SData/*8:0*/ __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr;
    __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr = 0;
    CData/*0:0*/ __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel;
    __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v0;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v0;
    __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v0;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v1;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v1;
    __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v1;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v19;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v19 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v20;
    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v3;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v3;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__vram__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__vram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__vram__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__vram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__vram__v1;
    __VdlyVal__tb_xeno__DOT__video__DOT__vram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v1;
    __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__vram__v1;
    __VdlySet__tb_xeno__DOT__video__DOT__vram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__sprram__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__sprram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v1;
    __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v1;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__sprram__v1;
    __VdlySet__tb_xeno__DOT__video__DOT__sprram__v1 = 0;
    SData/*8:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__palette__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__palette__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__palette__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__palette__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__palette__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__palette__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v1;
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v2;
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v3;
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v3 = 0;
    CData/*6:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__bg_lbuf__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__bg_lbuf__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 0;
    CData/*0:0*/ __VdlyDim1__tb_xeno__DOT__video__DOT__bg_lbuf__v0;
    __VdlyDim1__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__bg_lbuf__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v0;
    __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__sp_row__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_row__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v1;
    __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v1;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v2;
    __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v2;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v3;
    __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v3 = 0;
    CData/*0:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v3;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v3 = 0;
    SData/*8:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v0;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v0 = 0;
    CData/*0:0*/ __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v0;
    __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v0;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v0 = 0;
    SData/*8:0*/ __VdlyVal__tb_xeno__DOT__video__DOT__sp_lbuf__v1;
    __VdlyVal__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 0;
    SData/*8:0*/ __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v1;
    __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 0;
    CData/*0:0*/ __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v1;
    __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v1;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 0;
    // Body
    vlSelfRef.__Vdly__tb_xeno__DOT__ce_div = vlSelfRef.tb_xeno__DOT__ce_div;
    __Vdly__dbg_palw = vlSelfRef.dbg_palw;
    __Vdly__dbg_vramw = vlSelfRef.dbg_vramw;
    __Vdly__dbg_sphit = vlSelfRef.dbg_sphit;
    __Vdly__dbg_spblend = vlSelfRef.dbg_spblend;
    __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel = vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 0U;
    vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__hcnt 
        = vlSelfRef.tb_xeno__DOT__video__DOT__hcnt;
    vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__vcnt 
        = vlSelfRef.tb_xeno__DOT__video__DOT__vcnt;
    vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__field 
        = vlSelfRef.tb_xeno__DOT__video__DOT__field;
    __Vdly__tb_xeno__DOT__acc = vlSelfRef.tb_xeno__DOT__acc;
    __Vdly__tb_xeno__DOT__phi_tog = vlSelfRef.tb_xeno__DOT__phi_tog;
    __Vdly__tb_xeno__DOT__video__DOT__bg_st = vlSelfRef.tb_xeno__DOT__video__DOT__bg_st;
    __Vdly__tb_xeno__DOT__video__DOT__bg_px = vlSelfRef.tb_xeno__DOT__video__DOT__bg_px;
    __Vdly__tb_xeno__DOT__video__DOT__bg_cell = vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell;
    __Vdly__tb_xeno__DOT__video__DOT__vram_raddr = vlSelfRef.tb_xeno__DOT__video__DOT__vram_raddr;
    vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__line_cnt;
    __VdlySet__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 0U;
    __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__wdt_cnt;
    __VdlySet__tb_xeno__DOT__video__DOT__palette__v0 = 0U;
    __Vdly__tb_xeno__DOT__video__DOT__sp_st = vlSelfRef.tb_xeno__DOT__video__DOT__sp_st;
    __Vdly__tb_xeno__DOT__video__DOT__sp_idx = vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx;
    __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
        = vlSelfRef.tb_xeno__DOT__video__DOT__sprram_raddr;
    __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt 
        = vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt;
    __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr = vlSelfRef.tb_xeno__DOT__video__DOT__sp_clr_addr;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v0 = 0U;
    __Vdly__tb_xeno__DOT__video__DOT__sp_px = vlSelfRef.tb_xeno__DOT__video__DOT__sp_px;
    __VdlySet__tb_xeno__DOT__video__DOT__sp_row__v0 = 0U;
    __Vdly__dbg_sprw = vlSelfRef.dbg_sprw;
    __VdlySet__tb_xeno__DOT__video__DOT__vram__v0 = 0U;
    __VdlySet__tb_xeno__DOT__video__DOT__vram__v1 = 0U;
    __VdlySet__tb_xeno__DOT__video__DOT__sprram__v0 = 0U;
    __VdlySet__tb_xeno__DOT__video__DOT__sprram__v1 = 0U;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v3 = 0U;
    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v3 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v0 = 0U;
    __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v1 = 0U;
    vlSelfRef.__Vdly__tb_xeno__DOT__ce_div = (1U & 
                                              (~ (IData)(vlSelfRef.tb_xeno__DOT__ce_div)));
    vlSelfRef.tb_xeno__DOT__st_cnt = (0x00ffffffU & 
                                      ((IData)(1U) 
                                       + vlSelfRef.tb_xeno__DOT__st_cnt));
    if ((((8U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st)) 
          & (0U != (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval))) 
         & (0x0200U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos)))) {
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk2__DOT__cur 
            = vlSelfRef.tb_xeno__DOT__video__DOT__sp_lbuf
            [vlSelfRef.tb_xeno__DOT__video__DOT__sp_wrbuf]
            [(0x000001ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos))];
        if ((2U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk2__DOT__cur) 
                          >> 7U)))) {
            __VdlyVal__tb_xeno__DOT__video__DOT__sp_lbuf__v1 
                = ((8U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval))
                    ? (0x00000100U | ((0x00000040U 
                                       & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                          << 4U)) | 
                                      ((0x00000030U 
                                        & ((~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags)) 
                                           << 4U)) 
                                       | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval))))
                    : (0x00000080U | ((0x00000040U 
                                       & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                          << 4U)) | 
                                      ((0x00000030U 
                                        & ((~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags)) 
                                           << 4U)) 
                                       | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval)))));
            __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v1 
                = (0x000001ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos));
            __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v1 
                = vlSelfRef.tb_xeno__DOT__video__DOT__sp_wrbuf;
            __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v1 = 1U;
        }
    }
    if ((8U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c 
            = (7U & (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_px) 
                      >> 1U) ^ (- (IData)((1U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1) 
                                                 >> 2U))))));
        __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w1 
            = vlSelfRef.tb_xeno__DOT__video__DOT__bg_q1;
        __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w0 
            = vlSelfRef.tb_xeno__DOT__video__DOT__bg_q0;
        __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__lo 
            = ((2U & (((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w0) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w0) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c) 
                                                 << 1U))))));
        __Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__hi 
            = ((2U & (((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w1) 
                       >> (0x0000000fU & ((IData)(0x0fU) 
                                          - ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c) 
                                             << 1U)))) 
                      << 1U)) | (1U & ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__w1) 
                                       >> (0x0000000fU 
                                           & ((IData)(0x0eU) 
                                              - ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__c) 
                                                 << 1U))))));
        vlSelfRef.tb_xeno__DOT__video__DOT____VlemCall_0__bg_pen 
            = (((IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__hi) 
                << 2U) | (IData)(__Vfunc_tb_xeno__DOT__video__DOT__bg_pen__5__lo));
        __VdlyVal__tb_xeno__DOT__video__DOT__bg_lbuf__v0 
            = ((0x00000040U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1) 
                               >> 1U)) | ((0x00000030U 
                                           & ((~ ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1) 
                                                  >> 4U)) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT____VlemCall_0__bg_pen)));
        __VdlyDim0__tb_xeno__DOT__video__DOT__bg_lbuf__v0 
            = (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell) 
                << 4U) | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_px));
        __VdlyDim1__tb_xeno__DOT__video__DOT__bg_lbuf__v0 
            = vlSelfRef.tb_xeno__DOT__video__DOT__bg_wrbuf;
        __VdlySet__tb_xeno__DOT__video__DOT__bg_lbuf__v0 = 1U;
    }
    if (vlSelfRef.dbg_pal_we) {
        __VdlyVal__tb_xeno__DOT__video__DOT__palette__v0 
            = (0x000001ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_xeno__DOT__video__DOT__palette__v0 
            = vlSelfRef.dbg_pal_addr;
        __VdlySet__tb_xeno__DOT__video__DOT__palette__v0 = 1U;
    }
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v0 
        = vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom0
        [vlSelfRef.tb_xeno__DOT__video__DOT__spr_raddr];
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v1 
        = vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom1
        [vlSelfRef.tb_xeno__DOT__video__DOT__spr_raddr];
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v2 
        = vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom2
        [vlSelfRef.tb_xeno__DOT__video__DOT__spr_raddr];
    __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v3 
        = vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom3
        [vlSelfRef.tb_xeno__DOT__video__DOT__spr_raddr];
    if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__vram_we))) {
        __VdlyVal__tb_xeno__DOT__video__DOT__vram__v0 
            = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v0 
            = (0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_xeno__DOT__video__DOT__vram__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__vram_we))) {
        __VdlyVal__tb_xeno__DOT__video__DOT__vram__v1 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U));
        __VdlyDim0__tb_xeno__DOT__video__DOT__vram__v1 
            = (0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_xeno__DOT__video__DOT__vram__v1 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__sprram_we))) {
        __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v0 
            = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob));
        __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v0 
            = (0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_xeno__DOT__video__DOT__sprram__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__sprram_we))) {
        __VdlyVal__tb_xeno__DOT__video__DOT__sprram__v1 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U));
        __VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v1 
            = (0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U));
        __VdlySet__tb_xeno__DOT__video__DOT__sprram__v1 = 1U;
    }
    if ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
        if ((1U & ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U])
                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_tick)
                    : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in) 
                        >> 2U) & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q) 
                                     >> 2U)))))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t3_pre 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t3_pre)));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset) {
        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U];
        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0 = 1U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (6U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U];
        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5 = 1U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (5U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U];
        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10 = 1U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
            = (3U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
    } else {
        if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U])) {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U];
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                             >> 5U))) 
                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                        = (1U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                            >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                         >> 5U))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (1U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U]))) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2 
                        = ((0x0000ff00U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U]));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2 = 1U;
                } else {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3 
                        = (0x000000ffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3 = 1U;
                }
            } else {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4 = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U])) {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U];
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                             >> 5U))) 
                              & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done) 
                                 >> 1U))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                        = (2U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                            >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                         >> 5U))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (2U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U]))) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7 
                        = ((0x0000ff00U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U]));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7 = 1U;
                } else {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8 
                        = (0x000000ffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8 = 1U;
                }
            } else {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9 = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick))) {
            if ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U])) {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U];
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11 = 1U;
                if ((1U & (~ (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                             >> 5U))) 
                              & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done) 
                                 >> 2U))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                        = (4U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                }
                if ((1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                            >> 4U) & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                         >> 5U))))) {
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
                        = (4U | (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done));
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
                if ((0U == (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U]))) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12 
                        = ((0x0000ff00U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                             >> 8U) 
                                            - (IData)(1U)) 
                                           << 8U)) 
                           | (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U]));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12 = 1U;
                } else {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13 
                        = (0x000000ffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
                                          - (IData)(1U)));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13 = 1U;
                }
            } else {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14 = 1U;
            }
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_stb) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn) {
            if ((8U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                    if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                  >> 1U)))) {
                        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 
                            = (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U]);
                        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0 = 1U;
                        if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                            __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                                = (3U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                            __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
                                = (3U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                     >> 1U)))) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 
                        = (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U]);
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1 = 1U;
                    if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
                            = (5U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read));
                        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                            = (5U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                    }
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U)))) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 
                        = (0x000000ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U]);
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2 = 1U;
                    if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read))) {
                        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
                            = (6U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read));
                        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                            = (6U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                    }
                }
            } else if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag;
            }
        } else {
            if ((8U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                    if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0 
                            = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0 = 1U;
                        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                            = (3U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                        if ((1U & ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                       >> 4U)) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                            __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15 
                                = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                    << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                            __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1 
                        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                            << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1 = 1U;
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                        = (5U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                    if ((1U & ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                   >> 4U)) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16 
                            = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16 = 1U;
                    }
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                    __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2 
                        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                            << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                    __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2 = 1U;
                    __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
                        = (6U & (IData)(__Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag));
                    if ((1U & ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                   >> 4U)) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset)))) {
                        __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17 
                            = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf) 
                                << 8U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din));
                        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17 = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0 = 1U;
            } else if ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U])) {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1 = 1U;
            } else {
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din;
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2 = 1U;
            }
            if ((IData)(((0U == (0x0000000eU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                         & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                            & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din) 
                               ^ vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U]))))) {
                __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag = 0U;
                __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0U;
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U];
                __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18 = 1U;
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v19 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U];
                __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v20 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U];
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)))) {
            if ((8U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U)))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din;
                }
            } else if ((4U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) {
                if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                              >> 1U)))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din;
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__dbg_palw = 0U;
        __Vdly__dbg_vramw = 0U;
        __Vdly__dbg_sphit = 0U;
        __Vdly__dbg_spblend = 0U;
        __Vdly__dbg_sprw = 0U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read = 0U;
        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v3 = 1U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t3_pre = 0U;
        __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done = 0U;
        __VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v3 = 1U;
        __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt = 0U;
        vlSelfRef.wdt = 0U;
        vlSelfRef.ctrl = 0x0020U;
    } else {
        if (vlSelfRef.dbg_pal_we) {
            __Vdly__dbg_palw = (0x0000ffffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.dbg_palw)));
        }
        if ((0U != (IData)(vlSelfRef.tb_xeno__DOT__vram_we))) {
            __Vdly__dbg_vramw = (0x0000ffffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.dbg_vramw)));
        }
        if ((4U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            __Vdly__dbg_sphit = (0x0000ffffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.dbg_sphit)));
        }
        if ((((8U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st)) 
              & (0U != (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval))) 
             & (0x0200U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos)))) {
            __Vdly__dbg_spblend = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.dbg_spblend)));
        }
        if ((((0U != (IData)(vlSelfRef.tb_xeno__DOT__sprram_we)) 
              & (0x0800U > (0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                           >> 1U)))) 
             & (0U != (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob))))) {
            __Vdly__dbg_sprw = (0x0000ffffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.dbg_sprw)));
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_wdt) 
             & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)))) {
            __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt = 0U;
        } else if (vlSelfRef.tb_xeno__DOT__vsync30) {
            if ((8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__wdt_cnt))) {
                vlSelfRef.wdt = 1U;
            } else {
                __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__wdt_cnt)));
            }
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ctl) 
             & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)))) {
            vlSelfRef.ctrl = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob;
        }
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ram) 
         & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)))) {
            __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v0 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                                  >> 8U));
            __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v0 
                = (0x00001fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS)))) {
            __VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v1 
                = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob));
            __VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v1 
                = (0x00001fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                  >> 1U));
            __VdlySet__tb_xeno__DOT__main_board__DOT__ram__v1 = 1U;
        }
    }
    if (vlSelfRef.tb_xeno__DOT__ce_div) {
        vlSelfRef.vs = ((0x01eaU <= (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)) 
                        & (0x01edU > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)));
        vlSelfRef.hs = ((0x0220U <= (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)) 
                        & (0x0250U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)));
        vlSelfRef.de = ((0x0200U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)) 
                        & (0x01e0U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)));
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__sp_norm 
            = (1U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_disp_q) 
                            >> 7U)));
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__idx 
            = (0x0000003fU & (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__sp_norm) 
                               & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_disp_q) 
                                  >> 6U)) ? (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_disp_q)
                               : ((((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_disp_q) 
                                    >> 6U) & (0U != 
                                              (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_disp_q))))
                                   ? (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_disp_q)
                                   : ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__sp_norm)
                                       ? (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_disp_q)
                                       : (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_disp_q)))));
        vlSelfRef.tb_xeno__DOT__video__DOT__rgb9 = vlSelfRef.tb_xeno__DOT__video__DOT__palette
            [vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__idx];
        if (((0x027aU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)) 
             & (0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel)));
        } else if (((0x027aU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)) 
                    & (0x01e0U > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)))) {
            __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel 
                = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel)));
        }
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_disp_q 
            = vlSelfRef.tb_xeno__DOT__video__DOT__bg_lbuf
            [vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel]
            [(0x000001ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt))];
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_disp_q 
            = vlSelfRef.tb_xeno__DOT__video__DOT__sp_lbuf
            [vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel]
            [(0x000001ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt))];
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_cs_q 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm;
    vlSelfRef.tb_xeno__DOT__phi1 = 0U;
    vlSelfRef.tb_xeno__DOT__phi2 = 0U;
    __Vdly__tb_xeno__DOT__acc = (0x0001ffffU & ((IData)(0x000062deU) 
                                                + (0x0000ffffU 
                                                   & vlSelfRef.tb_xeno__DOT__acc)));
    if ((0x00010000U & vlSelfRef.tb_xeno__DOT__acc)) {
        __Vdly__tb_xeno__DOT__phi_tog = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__phi_tog)));
        if (vlSelfRef.tb_xeno__DOT__phi_tog) {
            vlSelfRef.tb_xeno__DOT__phi2 = 1U;
        } else {
            vlSelfRef.tb_xeno__DOT__phi1 = 1U;
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__wr_q = 
        ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__bus_cycle) 
         & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ram_q 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__ram
        [(0x00001fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_xeno__DOT__vram_q = vlSelfRef.tb_xeno__DOT__video__DOT__vram
        [(0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.dbg_palw = __Vdly__dbg_palw;
    vlSelfRef.dbg_vramw = __Vdly__dbg_vramw;
    vlSelfRef.dbg_sphit = __Vdly__dbg_sphit;
    vlSelfRef.dbg_spblend = __Vdly__dbg_spblend;
    vlSelfRef.dbg_sprw = __Vdly__dbg_sprw;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done 
        = __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read 
        = __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read;
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v0;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v1;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf__v2;
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag 
        = __Vdly__tb_xeno__DOT__main_board__DOT__ptm__DOT__flag;
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v0;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v1;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v2;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v0;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v1;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v2;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cr__v3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] = 1U;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v0;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v1;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v2;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v3));
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v4;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v5;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v6;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v7;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v8));
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v9;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v10;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v11;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v12;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v13));
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v14;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v15;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v16;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v17;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v18;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v19;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] 
            = __VdlyVal__tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt__v20;
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ptm__DOT__latch__v3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[0U] = 0xffffU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[1U] = 0xffffU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[2U] = 0xffffU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[0U] = 0xffffU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[1U] = 0xffffU;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[2U] = 0xffffU;
    }
    vlSelfRef.tb_xeno__DOT__acc = __Vdly__tb_xeno__DOT__acc;
    vlSelfRef.tb_xeno__DOT__phi_tog = __Vdly__tb_xeno__DOT__phi_tog;
    if (__VdlySet__tb_xeno__DOT__video__DOT__palette__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__palette[__VdlyDim0__tb_xeno__DOT__video__DOT__palette__v0] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__palette__v0;
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__wdt_cnt 
        = __Vdly__tb_xeno__DOT__main_board__DOT__wdt_cnt;
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ram__v0) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ram[__VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v0] 
            = ((0x00ffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__ram
                [__VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v0]) 
               | ((SData)((IData)(__VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v0)) 
                  << 8U));
    }
    if (__VdlySet__tb_xeno__DOT__main_board__DOT__ram__v1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ram[__VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v1] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ram
                [__VdlyDim0__tb_xeno__DOT__main_board__DOT__ram__v1]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__main_board__DOT__ram__v1));
    }
    if (vlSelfRef.tb_xeno__DOT__video__DOT__bg_rhalf) {
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_q1 = vlSelfRef.tb_xeno__DOT__video__DOT__bg_rom
            [(0x00004000U | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_raddr))];
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_rhalf)))) {
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_q0 = vlSelfRef.tb_xeno__DOT__video__DOT__bg_rom
            [vlSelfRef.tb_xeno__DOT__video__DOT__bg_raddr];
    }
    if ((8U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
        if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
        } else {
            __Vdly__tb_xeno__DOT__video__DOT__sp_px 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px)));
            if ((0x1fU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px))) {
                __Vtask_tb_xeno__DOT__video__DOT__sp_next__6__from_scan = 0U;
                if ((0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_xeno__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                        = (0x000007fcU & (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                           - (IData)(1U)) 
                                          << 2U));
                    __Vdly__tb_xeno__DOT__video__DOT__sp_st 
                        = ((IData)(__Vtask_tb_xeno__DOT__video__DOT__sp_next__6__from_scan)
                            ? 3U : 2U);
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
        if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
                if ((0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt))) {
                    vlSelfRef.tb_xeno__DOT__video__DOT__sp_x 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq));
                }
                if (((0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt)) 
                     & (0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_code)))) {
                    __Vtask_tb_xeno__DOT__video__DOT__sp_next__7__from_scan = 0U;
                    if ((0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx))) {
                        __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
                    } else {
                        __Vdly__tb_xeno__DOT__video__DOT__sp_idx 
                            = (0x000001ffU & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                              - (IData)(1U)));
                        __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                            = (0x000007fcU & (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                               - (IData)(1U)) 
                                              << 2U));
                        __Vdly__tb_xeno__DOT__video__DOT__sp_st 
                            = ((IData)(__Vtask_tb_xeno__DOT__video__DOT__sp_next__7__from_scan)
                                ? 3U : 2U);
                    }
                } else {
                    vlSelfRef.tb_xeno__DOT__video__DOT__spr_raddr 
                        = ((0x00007fc0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_code) 
                                           << 6U)) 
                           | ((0x0000003eU & (((0x00000020U 
                                                & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags))
                                                ? (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14))
                                                : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14)) 
                                              << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt))));
                    __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt)));
                    if ((1U <= (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt))) {
                        __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v0 
                            = vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[0U];
                        __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v0 
                            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt) 
                                     - (IData)(1U)));
                        __VdlySet__tb_xeno__DOT__video__DOT__sp_row__v0 = 1U;
                        __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v1 
                            = vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[1U];
                        __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v1 
                            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt) 
                                     - (IData)(1U)));
                        __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v2 
                            = vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[2U];
                        __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v2 
                            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt) 
                                     - (IData)(1U)));
                        __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v3 
                            = vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[3U];
                        __VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v3 
                            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt) 
                                     - (IData)(1U)));
                    }
                    if ((2U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt))) {
                        __Vdly__tb_xeno__DOT__video__DOT__sp_px = 0U;
                        __Vdly__tb_xeno__DOT__video__DOT__sp_st = 8U;
                    }
                }
            } else {
                vlSelfRef.tb_xeno__DOT__video__DOT__sp_code_lo 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq));
                __Vdly__tb_xeno__DOT__video__DOT__sp_st = 7U;
                __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags 
                = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq));
            __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                = (3U | ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 6U;
        } else {
            __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                = (2U | ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                         << 2U));
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
        if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
            if (vlSelfRef.tb_xeno__DOT__video__DOT__yt_hit) {
                vlSelfRef.tb_xeno__DOT__video__DOT__sp_y 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq));
                __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                    = (1U | ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                             << 2U));
                __Vdly__tb_xeno__DOT__video__DOT__sp_st = 4U;
            } else {
                __Vtask_tb_xeno__DOT__video__DOT__sp_next__8__from_scan = 1U;
                if ((0U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx))) {
                    __Vdly__tb_xeno__DOT__video__DOT__sp_st = 0U;
                } else {
                    __Vdly__tb_xeno__DOT__video__DOT__sp_idx 
                        = (0x000001ffU & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                          - (IData)(1U)));
                    __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr 
                        = (0x000007fcU & (((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx) 
                                           - (IData)(1U)) 
                                          << 2U));
                    __Vdly__tb_xeno__DOT__video__DOT__sp_st 
                        = ((IData)(__Vtask_tb_xeno__DOT__video__DOT__sp_next__8__from_scan)
                            ? 3U : 2U);
                }
            }
        } else {
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_st))) {
        __VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v0 
            = vlSelfRef.tb_xeno__DOT__video__DOT__sp_clr_addr;
        __VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v0 
            = vlSelfRef.tb_xeno__DOT__video__DOT__sp_wrbuf;
        __VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v0 = 1U;
        __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr 
            = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_clr_addr)));
        if ((0x01ffU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_clr_addr))) {
            __Vdly__tb_xeno__DOT__video__DOT__sp_idx = 0x01ffU;
            __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr = 0x07fcU;
            __Vdly__tb_xeno__DOT__video__DOT__sp_st = 2U;
        }
    } else if ((((IData)(vlSelfRef.tb_xeno__DOT__ce_div) 
                 & (0x0200U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))))) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_line 
            = ((0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))));
        __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr = 0U;
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_xeno__DOT__video__DOT__sp_st = 1U;
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset 
        = (1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U]);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__e_tick 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_clk) 
           & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_q)));
    vlSelfRef.dbg_phi1 = vlSelfRef.tb_xeno__DOT__phi1;
    vlSelfRef.r = ((0x000000e0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                   >> 1U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                  >> 4U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                    >> 7U))));
    vlSelfRef.g = ((0x000000e0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                   << 5U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                  << 2U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                    >> 1U))));
    vlSelfRef.b = ((0x000000e0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                   << 2U)) | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                  >> 1U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__rgb9) 
                                                    >> 4U))));
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_idx = __Vdly__tb_xeno__DOT__video__DOT__sp_idx;
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_fetch_cnt 
        = __Vdly__tb_xeno__DOT__video__DOT__sp_fetch_cnt;
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_clr_addr 
        = __Vdly__tb_xeno__DOT__video__DOT__sp_clr_addr;
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_st = __Vdly__tb_xeno__DOT__video__DOT__sp_st;
    vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[0U] = __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v0;
    vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[1U] = __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v1;
    vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[2U] = __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v2;
    vlSelfRef.tb_xeno__DOT__video__DOT__spr_q[3U] = __VdlyVal__tb_xeno__DOT__video__DOT__spr_q__v3;
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_px = __Vdly__tb_xeno__DOT__video__DOT__sp_px;
    if (__VdlySet__tb_xeno__DOT__video__DOT__sp_row__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_row[0U][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v0] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v0;
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_row[1U][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v1] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v1;
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_row[2U][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v2] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v2;
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_row[3U][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_row__v3] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__sp_row__v3;
    }
    if (__VdlySet__tb_xeno__DOT__video__DOT__bg_lbuf__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_lbuf[__VdlyDim1__tb_xeno__DOT__video__DOT__bg_lbuf__v0][__VdlyDim0__tb_xeno__DOT__video__DOT__bg_lbuf__v0] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__bg_lbuf__v0;
    }
    if (__VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_lbuf[__VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v0][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v0] = 0U;
    }
    if (__VdlySet__tb_xeno__DOT__video__DOT__sp_lbuf__v1) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sp_lbuf[__VdlyDim1__tb_xeno__DOT__video__DOT__sp_lbuf__v1][__VdlyDim0__tb_xeno__DOT__video__DOT__sp_lbuf__v1] 
            = __VdlyVal__tb_xeno__DOT__video__DOT__sp_lbuf__v1;
    }
    if ((5U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_rhalf = 0U;
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_raddr 
            = ((((4U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1) 
                        >> 4U)) | (3U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1))) 
                << 0x0000000bU) | ((0x000007f8U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d0) 
                                                   << 3U)) 
                                   | (7U & ((8U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1))
                                             ? (~ ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_next_y) 
                                                   >> 1U))
                                             : ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_next_y) 
                                                >> 1U)))));
    }
    if ((6U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_rhalf = 1U;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_line) 
                                                    - 
                                                    (0x000003ffU 
                                                     & (((IData)(0x00f1U) 
                                                         - (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_y)) 
                                                        << 1U))));
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos = (0x000003ffU 
                                                   & ((((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_x) 
                                                        << 1U) 
                                                       - (IData)(4U)) 
                                                      + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px)));
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_code = (
                                                   (0x00000600U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                                       << 3U)) 
                                                   | ((0x00000100U 
                                                       & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                                          << 5U)) 
                                                      | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_code_lo)));
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x 
        = (0x0000003fU & ((0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags))
                           ? ((IData)(0x1fU) - (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px))
                           : (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px)));
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__bank 
        = (3U & ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x) 
                 >> 1U));
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w 
        = vlSelfRef.tb_xeno__DOT__video__DOT__sp_row
        [__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__bank]
        [(1U & ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x) 
                >> 4U))];
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__nib 
        = (0x0000000fU & ((8U & (IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x))
                           ? ((1U & (IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x))
                               ? (IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w)
                               : ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w) 
                                  >> 4U)) : ((1U & (IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__x))
                                              ? ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w) 
                                                 >> 8U)
                                              : ((IData)(__Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__w) 
                                                 >> 0x0cU))));
    __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__Vfuncout 
        = __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__nib;
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_pval = __Vfunc_tb_xeno__DOT__video__DOT__sp_pen__9__Vfuncout;
    vlSelfRef.tb_xeno__DOT__sprram_q = vlSelfRef.tb_xeno__DOT__video__DOT__sprram
        [(0x00000fffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                         >> 1U))];
    vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq = vlSelfRef.tb_xeno__DOT__video__DOT__sprram
        [vlSelfRef.tb_xeno__DOT__video__DOT__sprram_raddr];
    vlSelfRef.tb_xeno__DOT__main_board__DOT__e_q = vlSelfRef.tb_xeno__DOT__main_board__DOT__e_clk;
    vlSelfRef.tb_xeno__DOT__video__DOT__sprram_raddr 
        = __Vdly__tb_xeno__DOT__video__DOT__sprram_raddr;
    if (__VdlySet__tb_xeno__DOT__video__DOT__sprram__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sprram[__VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v0] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__video__DOT__sprram
                [__VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v0]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__video__DOT__sprram__v0));
    }
    if (__VdlySet__tb_xeno__DOT__video__DOT__sprram__v1) {
        vlSelfRef.tb_xeno__DOT__video__DOT__sprram[__VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v1] 
            = ((0x00ffU & vlSelfRef.tb_xeno__DOT__video__DOT__sprram
                [__VdlyDim0__tb_xeno__DOT__video__DOT__sprram__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_xeno__DOT__video__DOT__sprram__v1)) 
                  << 8U));
    }
    if ((8U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 0U;
        } else {
            __Vdly__tb_xeno__DOT__video__DOT__bg_px 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_px)));
            if ((0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_px))) {
                if ((0x1fU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell))) {
                    __Vdly__tb_xeno__DOT__video__DOT__bg_st = 0U;
                } else {
                    __Vdly__tb_xeno__DOT__video__DOT__bg_cell 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell)));
                    __Vdly__tb_xeno__DOT__video__DOT__bg_st = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
                __Vdly__tb_xeno__DOT__video__DOT__bg_st = 8U;
                __Vdly__tb_xeno__DOT__video__DOT__bg_px = 0U;
            } else {
                __Vdly__tb_xeno__DOT__video__DOT__bg_st = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 6U;
        } else {
            vlSelfRef.tb_xeno__DOT__video__DOT__bg_d1 
                = vlSelfRef.tb_xeno__DOT__video__DOT__vram_rq;
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
            vlSelfRef.tb_xeno__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_xeno__DOT__video__DOT__vram_rq;
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 4U;
        } else {
            __Vdly__tb_xeno__DOT__video__DOT__vram_raddr 
                = (1U | ((0x000007c0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_next_y) 
                                         << 2U)) | 
                         ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell) 
                          << 1U)));
            vlSelfRef.tb_xeno__DOT__video__DOT__bg_d0 
                = vlSelfRef.tb_xeno__DOT__video__DOT__vram_rq;
            __Vdly__tb_xeno__DOT__video__DOT__bg_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_st))) {
        __Vdly__tb_xeno__DOT__video__DOT__vram_raddr 
            = ((0x000007c0U & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_next_y) 
                               << 2U)) | ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell) 
                                          << 1U));
        __Vdly__tb_xeno__DOT__video__DOT__bg_st = 2U;
    } else if ((((IData)(vlSelfRef.tb_xeno__DOT__ce_div) 
                 & (0x0200U == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt))) 
                & ((0x01dfU > (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)) 
                   | (0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))))) {
        __Vdly__tb_xeno__DOT__video__DOT__bg_cell = 0U;
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_next_y 
            = ((0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))));
        vlSelfRef.tb_xeno__DOT__video__DOT__bg_wrbuf 
            = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel)));
        __Vdly__tb_xeno__DOT__video__DOT__bg_st = 1U;
    }
    vlSelfRef.tb_xeno__DOT__video__DOT__yt_hit = (0x0020U 
                                                  > 
                                                  (0x000003ffU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_line) 
                                                      - 
                                                      (((IData)(0x00f1U) 
                                                        - 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sprram_rq))) 
                                                       << 1U))));
    vlSelfRef.tb_xeno__DOT__video__DOT__bg_px = __Vdly__tb_xeno__DOT__video__DOT__bg_px;
    vlSelfRef.tb_xeno__DOT__video__DOT__bg_cell = __Vdly__tb_xeno__DOT__video__DOT__bg_cell;
    vlSelfRef.tb_xeno__DOT__video__DOT__lbuf_sel = __Vdly__tb_xeno__DOT__video__DOT__lbuf_sel;
    vlSelfRef.tb_xeno__DOT__video__DOT__bg_st = __Vdly__tb_xeno__DOT__video__DOT__bg_st;
    vlSelfRef.tb_xeno__DOT__video__DOT__vram_rq = vlSelfRef.tb_xeno__DOT__video__DOT__vram
        [vlSelfRef.tb_xeno__DOT__video__DOT__vram_raddr];
    vlSelfRef.tb_xeno__DOT__video__DOT__vram_raddr 
        = __Vdly__tb_xeno__DOT__video__DOT__vram_raddr;
    if (__VdlySet__tb_xeno__DOT__video__DOT__vram__v0) {
        vlSelfRef.tb_xeno__DOT__video__DOT__vram[__VdlyDim0__tb_xeno__DOT__video__DOT__vram__v0] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__video__DOT__vram
                [__VdlyDim0__tb_xeno__DOT__video__DOT__vram__v0]) 
               | (SData)(__VdlyVal__tb_xeno__DOT__video__DOT__vram__v0));
    }
    if (__VdlySet__tb_xeno__DOT__video__DOT__vram__v1) {
        vlSelfRef.tb_xeno__DOT__video__DOT__vram[__VdlyDim0__tb_xeno__DOT__video__DOT__vram__v1] 
            = ((0x00ffU & vlSelfRef.tb_xeno__DOT__video__DOT__vram
                [__VdlyDim0__tb_xeno__DOT__video__DOT__vram__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_xeno__DOT__video__DOT__vram__v1)) 
                  << 8U));
    }
}

extern const VlWide<10>/*319:0*/ Vtb_xeno__ConstPool__CONST_hf138cbd0_0;
extern const VlUnpacked<CData/*0:0*/, 5> Vtb_xeno__ConstPool__TABLE_haf575794_0;

void Vtb_xeno___024root___nba_sequent__TOP__1(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__1\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    IData/*31:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState;
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 0;
    CData/*3:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr;
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState;
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr;
    vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu;
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn) 
         & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineF 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineF;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineA 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineA;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rTrace 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Tpend;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rPriv 
            = (((1U == Vtb_xeno__ConstPool__TABLE_he204aa36_0
                 [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                  >> 0x0000000cU))])
                 ? (0x007cU == (0xf5ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)))
                 : ((0x0010U == Vtb_xeno__ConstPool__TABLE_he204aa36_0
                     [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 0x0000000cU))]) 
                    & ((0x46c0U == (0xffc0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) 
                       | ((0x4e60U == (0xfff0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) 
                          | ((0x4e70U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)) 
                             | ((0x4e73U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)) 
                                | (0x4e72U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)))))))) 
               & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                     >> 0x0dU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rIllegal 
            = (((0U != ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll) 
                        & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                        [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 0x0000000cU))])) 
                & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineA))) 
               & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineF)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rInterrupt 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__intPend;
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn) 
         & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excRst;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rAutovec 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Avia;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rSpurious 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Spuria;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA;
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
                  & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                  .__PVT__abl2Pren)))) {
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__updPren)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__movemRx 
                = (0x0000000fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                  .__PVT__movemPreDecr
                                   ? (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit))
                                   : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit)));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__enPhi1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__addrOeDelay 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe;
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
         & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
         .__PVT__au2Pc)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
               >> 0x10U);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL 
            = (0x0000ffffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg);
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbh2Pch) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abh2Pch) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbl2Pcl) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abl2Pcl) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl;
        }
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
         & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
         .__PVT__abl2Pren)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin;
    } else if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
                & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__updPren)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit))) 
               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch));
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
         & (0U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__dobCtrl))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob 
            = ((0xff00U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob)) 
               | (0x000000ffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                 .__PVT__noLowByte ? 
                                 ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput) 
                                  >> 8U) : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob 
            = ((0x00ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob)) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteCycle) 
                                   | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                   .__PVT__noHighByte)
                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput)
                                   : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput) 
                                      >> 8U)) << 8U)));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__dbh2rxh | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abh2rxh)) {
            if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))) {
                vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 
                    = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__dbh2rxh ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh)
                        : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh));
                vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx;
                vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 1U;
            }
        }
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__dbh2ryh | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abh2ryh)) {
            if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))) {
                vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 
                    = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__dbh2ryh ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh)
                        : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh));
                vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy;
                vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 1U;
            }
        }
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__dbl2rxl | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abl2rxl)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 
                        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__dbl2rxl ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl)
                            : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl));
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 1U;
                }
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__dbl2rxl) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd;
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 1U;
                }
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIsByte) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd));
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 1U;
                }
            } else if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))) {
                vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd;
                vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx;
                vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 1U;
            }
        }
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__dbl2ryl | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abl2ryl)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 
                        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__dbl2ryl ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl)
                            : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl));
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 1U;
                }
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__dbl2ryl) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd;
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 1U;
                }
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIsByte) {
                if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd));
                    vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 1U;
                }
            } else if ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))) {
                vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd;
                vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy;
                vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 1U;
            }
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState 
            = __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState;
        vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu = 0U;
    } else {
        if ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi2) {
                __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 4U;
            }
        } else if ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi2) {
                __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 2U;
            }
        } else if ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1) {
                __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 3U;
            }
        } else if ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi2) {
                __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 4U;
            }
        } else if ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1) {
                __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState 
                    = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk)
                        ? 0U : 1U);
            }
        }
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState 
            = __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__tState;
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__tvn2Ftu) {
                vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
                    = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inExcept01)
                        ? ((0x0cU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch))
                            ? 0x0060U : ((0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch))
                                          ? (0x00000060U 
                                             | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI) 
                                                << 2U))
                                          : ((0x0fU 
                                              == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch))
                                              ? (0x000003fcU 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                    << 2U))
                                              : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch) 
                                                 << 2U))))
                        : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                           .__PVT__macroTvn << 2U));
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__sr2Ftu) {
                vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
                    = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS) 
                                            << 0x0000000dU) 
                                           | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))));
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__ird2Ftu) {
                vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird;
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__ssw2Ftu) {
                vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
                    = ((0xffe0U & (IData)(vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu)) 
                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ssw));
            } else {
                vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
                    = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__pswIToFtu ? (0x0000fff0U 
                                            | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI) 
                                               << 1U))
                        : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__const2Ftu ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                           .__PVT__ftuConst : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                               .__PVT__abl2Pren
                                                ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl)
                                                : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu))));
            }
        }
    }
    if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
         .__PVT__updSsw & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ssw 
            = ((0x00000010U & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg)) 
                               << 4U)) | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inExcept01) 
                                           << 3U) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Err6591 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__rGranted = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__a0Rst = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iStop = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iBusErr = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS = 1U;
    } else {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi2) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__next;
            __Vtemp_1 = VL_MATCHMASKED_I(32, vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__next, Vtb_xeno__ConstPool__CONST_hf138cbd0_0);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__rGranted 
                = Vtb_xeno__ConstPool__TABLE_haf575794_0
                [__Vtemp_1];
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi1) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Err6591 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk;
            if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr) 
                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr = 0U;
            }
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iBusErr 
                = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA) 
                    & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI))) 
                   & (7U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)));
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__a0Rst = 0U;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err = 0U;
        } else if (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                     .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk)) 
                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr) 
                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err = 1U;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__reg2dbh & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pchdbh);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__reg2abh & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pchabh);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__reg2dbl & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pcldbl);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__reg2abl & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pclabl);
        }
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
             .__PVT__enPhi1 & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS = 0U;
            if ((1U & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg)) 
                       & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr))))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                                | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                                | (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob))));
            }
        } else {
            if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                 .__PVT__enPhi2 & (6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS = 1U;
            } else if ((0U != (0xfffffff9U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                                              .__PVT__enPhi2 
                                              & (5U 
                                                 == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg)))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS = 1U;
                }
            }
            if ((((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg)) 
                  & (3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)) 
                 & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                                | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                                | (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob))));
            } else if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                        .__PVT__enPhi2 & (5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS = 1U;
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS = 1U;
            }
        }
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi2) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iStop 
                    = (((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rVma)) 
                        & (8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr))) 
                       | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai) 
                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr) 
                             | (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rBerr)))));
            }
        }
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
         & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
         .__PVT__Ir2Ird)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvn;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inExcept01 
            = (1U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvn));
    }
    vlSelfRef.dbg_as = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS)));
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__e_clk = 0U;
        __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rVma = 1U;
    } else {
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
             .__PVT__enPhi2 & ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                               | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg = 0U;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend = 0U;
        } else {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__waitBusFinish;
            }
            if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__permStart)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend = 1U;
            }
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abd2Dcr)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4 
                = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd) 
                         >> 4U));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__enPhi2) {
        if ((9U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__e_clk = 0U;
            __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr = 0U;
        } else {
            if ((5U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__e_clk = 1U;
            }
            __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr)));
        }
    }
    if ((((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
           .__PVT__enPhi2 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe)) 
          & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai))) 
         & (3U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rVma = 0U;
    } else if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1 & (0U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rVma = 1U;
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0 
            = (1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000013U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1 
            = (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x00000010U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2 
            = (3U == (3U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U]));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x0000000cU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x0000000dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 0x0000001cU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                     >> 2U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 3U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x0000000eU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 2U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x0000000fU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11 
            = (2U == (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                      >> 0x0000001dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12 
            = (3U == (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                      >> 0x0000001dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13 
            = (4U == (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                      >> 0x0000001dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14 
            = (5U == (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                      >> 0x0000001dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15 
            = (5U == (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                            >> 9U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16 
            = ((1U == (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                             >> 9U))) | (5U == (7U 
                                                & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                                                   >> 9U))));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17 
            = (4U == (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                            >> 9U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18 
            = (6U == (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                            >> 9U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19 
            = (3U == (7U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                            >> 9U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 0x0000000cU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 0x0000000dU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22 
            = (3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                            >> 0x00000019U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23 
            = (3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                            >> 0x0000001aU)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24 
            = (2U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                            >> 0x0000001aU)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25 
            = (1U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                            >> 0x00000019U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 0x00000011U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27 
            = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 0x00000010U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2dbl & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 8U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2abl & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 8U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__dbl2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 8U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__abl2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 8U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2dbh & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2abh & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x00000016U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__dbh2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__abh2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x00000016U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__dbh2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x00000016U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__abh2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__dbl2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 8U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__abl2reg & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 8U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2dbl & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                     >> 8U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2abl & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 8U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2dbh & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial))) 
               & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                     >> 0x00000016U)));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__reg2abh & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial))) 
               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44 = 1U;
        vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__isTas & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                >> 0x0000000aU));
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45 = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__isByte & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                    .__PVT__rxlDbl ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp)
                                     : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl 
            = ((((2U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000018U)) | (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                                                  >> 0x0000001aU))) 
                << 2U) | ((2U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                                 >> 0x0000001aU)) | 
                          (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                                 >> 0x0000001cU))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg 
            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp) 
                     | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux) 
                        >> 3U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg 
            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp) 
                     | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryMux) 
                        >> 3U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Avia 
            = ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai)) 
               & (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Spuria 
            = ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeiDelay)) 
               & (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excRst = 1U;
    } else if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2) 
                & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__permStart)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excRst = 0U;
    }
    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
               .__PVT__pwrUp))) {
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Halti = 1U;
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI = 1U;
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi = 1U;
            }
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi2) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rDtack 
                = (1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ram) 
                            | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram) 
                               | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr) 
                                  | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm) 
                                     | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in0) 
                                        | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in1) 
                                           | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_dsw) 
                                              | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_pal) 
                                                 | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_wdt) 
                                                    | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn) 
                                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_rom)) 
                                                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ctl)))))))))))));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn = 1U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__intPend = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbh2Pch = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abh2Pch = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbl2Pcl = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abl2Pcl = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__prevNmi = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe = 0U;
    } else {
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
             .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn = 1U;
        } else if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                    .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg))) {
            if (((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn = 0U;
            }
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi2) {
            if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplStable) 
                 & (((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl)) 
                     & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__prevNmi))) 
                    | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplComp)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__intPend = 1U;
            } else if ((((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inl)) 
                         & (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC))) 
                        | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplStable) 
                            & (7U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl))) 
                           & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplComp))))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__intPend = 0U;
            }
            if ((((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI)) 
                  & (7U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC))) 
                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA = 1U;
            } else if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI) 
                        & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA = 0U;
            }
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__prevNmi 
                = (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl));
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rstUrom) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] = 0U;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] = 0U;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] = 0U;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[0U];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[1U];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[2U];
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbh2Pch 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__dbh2reg & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pchdbh);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abh2Pch 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__abh2reg & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pchabh);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbl2Pcl 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__dbl2reg & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pcldbl);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abl2Pcl 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__abl2reg & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__pclabl);
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__permStart)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC 
                = ((3U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)) 
                   | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS) 
                      << 2U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC 
                = ((5U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)) 
                   | (2U & ((0x0001fffeU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                            >> 0x0000000fU)) 
                            | (((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                    >> 0x0fU)) & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                .__PVT__isPcRel) << 1U))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC 
                = ((6U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)) 
                   | (1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                             >> 0x0fU) | ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                              >> 0x10U)) 
                                          & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                             .__PVT__isPcRel)))));
        }
        if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
             .__PVT__enPhi2 & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe = 1U;
        } else if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                    .__PVT__enPhi1 & (6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe = 0U;
        } else if (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                     .__PVT__enPhi1 & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg))) 
                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe = 0U;
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Tpend = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4)))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
                if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__updTpend) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Tpend 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT;
                } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__clrTpend) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Tpend = 0U;
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                      .__PVT__enPhi2 & ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                        | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset)))))) {
            if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__permStart)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isByteT4;
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                    .__PVT__isWrite;
            }
        }
    }
    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
               .__PVT__pwrUp))) {
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__abd2Dcr)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dcrOutput 
                = Vtb_xeno__ConstPool__TABLE_he204aa36_0
                [((8U & (((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIsByte)) 
                          << 3U) & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd))) 
                  | (7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd)))];
        }
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai 
                    = (1U & (~ (IData)(vlSelfRef.dbg_iack)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeiDelay 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI;
            }
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI = 0U;
    } else {
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__enPhi1) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rBerr;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4)))) {
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
                if ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                     .__PVT__ftu2Sr & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__irdToCcr_t4)))) {
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT 
                        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu) 
                                 >> 0x0fU));
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS 
                        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu) 
                                 >> 0x0dU));
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI 
                        = (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu) 
                                 >> 8U));
                } else {
                    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__initST) {
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS = 1U;
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT = 0U;
                    }
                    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__inl2psw) {
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI 
                            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inl;
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inl = 7U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4)))) {
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__updIll))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__inl 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl;
        }
    }
    if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
               .__PVT__pwrUp))) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi2) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rIpl;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rIpl 
                = (7U & (~ (4U | ((2U & ((~ (IData)(vlSelfRef.dbg_ptm_irq)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__irq493)))))));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg = 0U;
    } else if ((1U & (~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                         .__PVT__enPhi2 & ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                           | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset)))))) {
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__permStart)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__isRmc & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                    .__PVT__isWrite));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__updIll = 0U;
    } else {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi1) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__updIll 
                = (1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch);
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1Nma = 0x01c0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                      | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rSpurious) 
                          | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rAutovec))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rTrace)))) {
                    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rInterrupt) {
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1Nma = 0x01c4U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__abh2Ath) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__dbh2Ath) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__dbl2Atl) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__abl2Atl) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__dbd2Alub) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alub 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd;
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__abd2Alub) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alub 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd;
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh 
            = (0x0000ffffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__extAbh ? (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle)
                                                               ? 
                                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd) 
                                                               >> 0x0fU)
                                                               : 
                                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl) 
                                                               >> 0x0fU)))))
                               : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhIdle)
                                   ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle)
                                       ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd)
                                       : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl))
                                   : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl 
            = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle)
                ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__ablAbh ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh)
                    : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd))
                : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd 
            = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIdle)
                ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle)
                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh)
                    : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl))
                : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd));
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0fU;
    }
    if ((0x00004000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0eU;
    }
    if ((0x00002000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0dU;
    }
    if ((0x00001000U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0cU;
    }
    if ((0x00000800U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0bU;
    }
    if ((0x00000400U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0aU;
    }
    if ((0x00000200U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 9U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 8U;
    }
    if ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 7U;
    }
    if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 6U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 5U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 4U;
    }
    if ((8U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 3U;
    }
    if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 2U;
    }
    if ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = 0U;
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToDbin) 
         & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
         .__PVT__enPhi2)) {
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin 
                = ((0xff00U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin)) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteMux)
                                      ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din) 
                                         >> 8U) : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din))));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin 
                = ((0x00ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin)) 
                   | (0x0000ff00U & ((((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteMux)) 
                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow))
                                       ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din)
                                       : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din) 
                                          >> 8U)) << 8U)));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__noLowByte;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__noHighByte;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteMux 
            = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__busByte & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__isByte_T4)) 
               & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIsByte 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
               .__PVT__abdIsByte & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__isByte);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteCycle 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
               .__PVT__busByte & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
               .__PVT__isByte);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isByteT4 
            = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
               .__PVT__busByte & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                  .__PVT__isByte | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                                  .__PVT__isMovep));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__isByte_T4 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
            .__PVT__isByte;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((2U 
                                                 & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS))));
    vlSelfRef.dbg_pal_data = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob;
    vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)
                           ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob)
                           : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__bus_cycle 
        = ((IData)(vlSelfRef.dbg_as) & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)) 
                                        | (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr 
        = __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl 
        = ((2U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 0x00000017U)) | (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                            >> 0x00000015U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tvn 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst)
            ? 0U : (0x0000000fU & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                                    | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))
                                    ? (2U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))
                                    : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rSpurious) 
                                        | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rAutovec))
                                        ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rSpurious)
                                            ? 0x0000000cU
                                            : 0x0000000dU)
                                        : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rTrace)
                                            ? 9U : 
                                           ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rInterrupt)
                                             ? 0x0fU
                                             : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rIllegal)
                                                 ? 4U
                                                 : 
                                                ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rPriv)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineA)
                                                   ? 0x0aU
                                                   : 
                                                  ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineF)
                                                    ? 0x0bU
                                                    : 1U))))))))));
    vlSelfRef.dbg_iack = ((IData)(vlSelfRef.dbg_as) 
                          & (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe) 
           & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr));
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) 
         & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__au2Aob | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__au2Db & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__db2Aob)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__db2Aob) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh) 
                    << 0x00000010U) | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle)
                                        ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd)
                                        : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl)));
        } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__ab2Aob) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh) 
                    << 0x00000010U) | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle)
                                        ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd)
                                        : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl)));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rBerr = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__irdToCcr_t4 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg = 0U;
    } else {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi2) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rBerr = 1U;
        }
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__irdToCcr_t4 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                .__PVT__toCcr;
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__auClkEn)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
                = ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh) 
                     + ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auInpMux 
                         >> 0x00000010U) + (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aulow 
                                                  >> 0x00000010U)))) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aulow));
        }
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToDbin = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablMux;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToDbin 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__todbin;
    }
    __VdfgRegularize_hebeb780c_0_0 = ((~ (IData)(vlSelfRef.dbg_iack)) 
                                      & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__bus_cycle));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iBusErr) 
           | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr));
    vlSelfRef.dbg_addr = (0x00fffffeU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob);
    vlSelfRef.dbg_pal_addr = (0x0000003fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                             >> 1U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr 
        = (1U & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_wdt 
        = (IData)(((0x000b0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_pal 
        = (IData)(((0x00090000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_rom 
        = (IData)(((0U == (0x00fc0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ram 
        = (IData)(((0x00060000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ctl 
        = (IData)(((0x000c0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in0 
        = (IData)(((0x000d0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in1 
        = (IData)(((0x000e0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_dsw 
        = (IData)(((0x000f0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm 
        = (IData)(((0x000a0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram 
        = (IData)(((0x00070000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr 
        = (IData)(((0x00080000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.dbg_wdt_kick = ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn)) 
                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_wdt));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock 
        = ((6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
           | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS) 
              & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk 
        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr) 
                 | (((5U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                     & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg)) 
                    | ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI)) 
                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Err6591)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__next 
        = ((0U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
            ? 1U : ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                     ? ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock)
                         ? 1U : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI)
                                  ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi)
                                      ? 1U : 2U) : 4U))
                     : ((4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                         ? (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi) 
                             | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock))
                             ? (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI) 
                                 | (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock))
                                 ? 1U : 4U) : 6U) : 
                        ((2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                          ? 3U : ((3U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                   ? (((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi)) 
                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI))
                                       ? 3U : 4U) : 
                                  ((6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                    ? 5U : ((5U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                             ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI)
                                                 ? 
                                                ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi)
                                                  ? 1U
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi)
                                                  ? 7U
                                                  : 5U))
                                             : ((7U 
                                                 == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                                 ? 4U
                                                 : 1U))))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplComp 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl) 
           > (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplStable 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl) 
           == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rIpl));
}

extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h79f0020d_0;
extern const VlUnpacked<CData/*0:0*/, 10> Vtb_xeno__ConstPool__TABLE_h163a3758_0;

void Vtb_xeno___024root___nba_sequent__TOP__2(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__2\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    CData/*4:0*/ __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr;
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr;
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr = 0U;
    } else if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
                & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                .__PVT__ftu2Ccr)) {
        __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr 
            = (0x0000001fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu));
    } else if ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
                 & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__noCcrEn))) 
                & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__aluFinish | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__aluInit))) {
        __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr 
            = ((0x00000018U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
               | ((4U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                           .__PVT__aluFinish | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isArX))
                           ? (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                              >> 2U) : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                                        >> 2U)) << 2U)) 
                  | (3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdLatch 
            = ((0x000000f0U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
                               << 4U)) | (0x0000000fU 
                                          & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry 
            = (1U & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                      | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib)) 
                     >> 4U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdOverf 
            = (1U & ((6U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                      ? ((~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                             >> 7U)) & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                                        >> 3U)) : (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                                                      >> 7U))));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong 
            = (1U & (IData)(((0U != (0x0082U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) 
                             | (0x0080U == (0x00c0U 
                                            & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp;
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
            .__PVT__isByte;
        if ((0U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__aluColumn)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__coreH 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subHcarry;
            if ((0U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp;
            }
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result;
        }
        if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) 
             & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
             .__PVT__dbd2Alue)) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd;
        } else if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift) 
                    & (0U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                       .__PVT__aluColumn))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue 
                = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult 
                   >> 0x10U);
        }
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rIrd8 
            = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                     >> 8U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__noCcrEn 
            = ((IData)((0x90c0U == (0xb0c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird)))) 
               | ((IData)((0x2040U == (0xe1c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird)))) 
                  | (IData)((0x5008U == (0xf038U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isArX 
            = ((IData)((0U != (0x1400U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow)))) 
               & ((4U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0000000cU))) 
                  | ((9U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 0x0000000cU))) 
                     | (0x0dU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow;
    }
    if ((0x014fU >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[0U] 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoRom__DOT__nRam
            [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr][0U];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[1U] 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoRom__DOT__nRam
            [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr][1U];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[2U] 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoRom__DOT__nRam
            [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr][2U];
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[0U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[1U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput[2U] = 0U;
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr 
        = __Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = 0U;
    if ((1U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        if ((8U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            if ((9U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
                if ((5U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
                    if ((((((((((0x15U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                || (0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                               || (0x0eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                              || (0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                             || (0x10U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                            || (0x11U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                           || (0x12U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                          || (0x13U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                         || (0x14U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
                        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = 1U;
                    }
                }
            }
        }
    }
    __Vtemp_1 = VL_MATCHMASKED_I(32, (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper), Vtb_xeno__ConstPool__CONST_h79f0020d_0);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight 
        = Vtb_xeno__ConstPool__TABLE_h163a3758_0[__Vtemp_1];
    __VdfgRegularize_hebeb780c_0_12 = (6U & (- (IData)(
                                                       ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__coreH) 
                                                        | ((6U 
                                                            != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                           & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                                                               >> 3U) 
                                                              & (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                                                                     >> 1U)))))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords 
        = (IData)((0U != (0x0082U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))));
    __VdfgRegularize_hebeb780c_0_7 = (0x000001ffU & 
                                      ((0x000000ffU 
                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)) 
                                       - (IData)(__VdfgRegularize_hebeb780c_0_12)));
    __VdfgRegularize_hebeb780c_0_13 = (0x000001ffU 
                                       & ((IData)(__VdfgRegularize_hebeb780c_0_12) 
                                          + (0x000000ffU 
                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp 
        = ((6U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(__VdfgRegularize_hebeb780c_0_13)
            : (IData)(__VdfgRegularize_hebeb780c_0_7));
    __VdfgRegularize_hebeb780c_0_11 = (6U & (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                            >> 4U) 
                                                           | ((6U 
                                                               != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                              & (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                  >> 8U) 
                                                                 | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                           >> 5U)))))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x0000001fU 
                                                & (((IData)(__VdfgRegularize_hebeb780c_0_7) 
                                                    >> 4U) 
                                                   - (IData)(__VdfgRegularize_hebeb780c_0_11)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (0x0000001fU 
                                                 & (((IData)(__VdfgRegularize_hebeb780c_0_13) 
                                                     >> 4U) 
                                                    + (IData)(__VdfgRegularize_hebeb780c_0_11)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib 
        = ((6U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
}

void Vtb_xeno___024root___nba_sequent__TOP__3(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__3\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v0) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v0 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v1) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v1 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v2) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v2 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v3) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v3 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v4) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v4 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v5) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v5 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v6) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v6 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v7) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v7 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v8) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v8 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v9) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v9 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v10) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v10 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[10U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v11) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v11 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v12) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v12 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[12U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v13) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v13 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[13U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v14) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v14 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[14U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v15) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v15 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v16) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v16 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[16U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v17) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v17 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[17U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v0) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v0 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v1) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v1 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v2) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v2 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v3) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v3 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v4) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v4 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v5) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v5 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v6) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v6 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v7) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v7 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v8) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v8 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v9) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v9 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v10) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v10 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[10U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v11) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v11 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v12) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v12 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[12U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v13) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v13 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[13U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v14) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v14 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[14U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v15) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v15 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v16) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v16 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[16U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v17) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v17 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[17U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                [vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20));
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24] 
            = ((0xff00U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                [vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24));
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[vlSelfRef.__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25] 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25;
    }
}

void Vtb_xeno___024root___nba_sequent__TOP__4(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__4\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
    tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
    // Body
    vlSelfRef.dbg_ptm_irq = (0U != ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag) 
                                    & ((4U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                                               >> 6U) 
                                              << 2U)) 
                                       | ((2U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                                  >> 6U) 
                                                 << 1U)) 
                                          | (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                                   >> 6U))))));
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__irq493 = 0U;
    } else {
        if (vlSelfRef.tb_xeno__DOT__vsync30) {
            vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt = 0U;
        } else if (vlSelfRef.tb_xeno__DOT__hsync_pulse) {
            vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__line_cnt)));
        }
        if (vlSelfRef.tb_xeno__DOT__hsync_pulse) {
            if ((0x040eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__line_cnt))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__irq493 = 1U;
            }
            if ((0x0410U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__line_cnt))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__irq493 = 0U;
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__line_cnt 
        = vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt;
    vlSelfRef.dbg_irq493 = vlSelfRef.tb_xeno__DOT__main_board__DOT__irq493;
    vlSelfRef.tb_xeno__DOT__hsync_pulse = 0U;
    vlSelfRef.tb_xeno__DOT__vsync30 = 0U;
    if (vlSelfRef.tb_xeno__DOT__ce_div) {
        if ((0x027aU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt))) {
            vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__hcnt = 0U;
            vlSelfRef.tb_xeno__DOT__hsync_pulse = 1U;
            if ((0x020cU == (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt))) {
                vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__field 
                    = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__field)));
                vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__vcnt = 0U;
                if (vlSelfRef.tb_xeno__DOT__video__DOT__field) {
                    vlSelfRef.tb_xeno__DOT__vsync30 = 1U;
                }
            } else {
                vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__vcnt 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__vcnt)));
            }
        } else {
            vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__hcnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__hcnt)));
        }
    }
    vlSelfRef.tb_xeno__DOT__video__DOT__hcnt = vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__hcnt;
    vlSelfRef.tb_xeno__DOT__video__DOT__vcnt = vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__vcnt;
    vlSelfRef.tb_xeno__DOT__ce_div = vlSelfRef.__Vdly__tb_xeno__DOT__ce_div;
    vlSelfRef.tb_xeno__DOT__video__DOT__field = vlSelfRef.__Vdly__tb_xeno__DOT__video__DOT__field;
    vlSelfRef.dbg_vsync30 = vlSelfRef.tb_xeno__DOT__vsync30;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in 
        = ((((IData)(vlSelfRef.tb_xeno__DOT__hsync_pulse) 
             & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__field)) 
            << 2U) | (IData)(vlSelfRef.tb_xeno__DOT__vsync30));
    tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U])
                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_tick)
                  : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in) 
                     & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick 
        = ((6U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick)) 
           | (IData)(tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src));
    tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U])
                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_tick)
                  : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in) 
                      >> 1U) & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q) 
                                   >> 1U)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick 
        = ((5U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick)) 
           | ((IData)(tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src) 
              << 1U));
    tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src 
        = (1U & ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U])
                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__e_tick)
                  : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in) 
                      >> 2U) & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q) 
                                   >> 2U)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick 
        = ((3U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick)) 
           | ((IData)(tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src) 
              << 2U));
    if ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U])) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick 
            = ((3U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick)) 
               | (0xfffffffcU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__tick) 
                                 & ((7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t3_pre)) 
                                    << 2U))));
    }
}

extern const VlWide<274>/*8767:0*/ Vtb_xeno__ConstPool__CONST_h1528ed39_0;
extern const VlUnpacked<CData/*6:0*/, 137> Vtb_xeno__ConstPool__TABLE_h292666c2_0;
extern const VlWide<16>/*511:0*/ Vtb_xeno__ConstPool__CONST_he0dc4311_0;
extern const VlUnpacked<SData/*10:0*/, 8> Vtb_xeno__ConstPool__TABLE_h911422d5_0;
extern const VlWide<26>/*831:0*/ Vtb_xeno__ConstPool__CONST_he4e93662_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h7dd77d9e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hbae207b6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h68e348e7_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h9e077beb_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h9856367f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h32fa7448_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h43eeafa8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hac4b9c1a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hb2f687d9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hbe127729_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h7b3264b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h6d6f8a73_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hd082d1c8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h0f86901e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hfef82f04_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h2697a45d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_h8df97df5_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_h0088877f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_hcd9cce84_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_h38dd4db7_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_he5a4ad0d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_he13c6a00_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_h7e3d08c6_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_ha137bec4_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_hacf0eeca_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_haf34f21f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_ha4b3081e_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_xeno__ConstPool__TABLE_hccb66154_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h9cd354aa_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h3e2181b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hd2959be6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h13aa4342_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h89c98bd1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h8c87e397_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h076b5ef1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h5fe6edae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h057bcb4f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hdb878943_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hb9b985c2_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hc118f1ba_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hbc774d6a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h9f4d8f37_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hc90e0332_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h6c6b9226_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h4d8af2d8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hc2184f42_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h512d5c40_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h68d6d722_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hb4efbd7e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hcad3a1c4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h48910ea9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h2334f8f1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h6feb013a_0;
extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h0c7e2d64_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_xeno__ConstPool__TABLE_h6c931bbf_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h3327f4a6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_haf48ddb4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_he9046c6e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h6d5e945a_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_xeno__ConstPool__TABLE_hea13bce5_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hdb962c9f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h4df1601b_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hd7dd2a27_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h4fe821f2_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_xeno__ConstPool__TABLE_h17c67228_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h1bf8d03a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hfb8ce208_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hb29b6323_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h8b5ab276_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_xeno__ConstPool__TABLE_h139a610e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h4474e570_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h1e53f1ae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hadebe4a9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hb343e8cc_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h5679d896_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hed5970b0_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_heae1ca30_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_h4971b97e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_xeno__ConstPool__TABLE_hdc124375_0;

void Vtb_xeno___024root___nba_sequent__TOP__5(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_sequent__TOP__5\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol = 0;
    CData/*3:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0;
    SData/*9:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_12;
    IData/*31:0*/ __Vtemp_13;
    IData/*31:0*/ __Vtemp_14;
    IData/*31:0*/ __Vtemp_15;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_17;
    IData/*31:0*/ __Vtemp_18;
    IData/*31:0*/ __Vtemp_19;
    IData/*31:0*/ __Vtemp_20;
    IData/*31:0*/ __Vtemp_21;
    IData/*31:0*/ __Vtemp_22;
    IData/*31:0*/ __Vtemp_23;
    IData/*31:0*/ __Vtemp_24;
    IData/*31:0*/ __Vtemp_25;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_27;
    IData/*31:0*/ __Vtemp_28;
    IData/*31:0*/ __Vtemp_29;
    IData/*31:0*/ __Vtemp_30;
    IData/*31:0*/ __Vtemp_31;
    IData/*31:0*/ __Vtemp_32;
    IData/*31:0*/ __Vtemp_33;
    IData/*31:0*/ __Vtemp_34;
    IData/*31:0*/ __Vtemp_35;
    IData/*31:0*/ __Vtemp_36;
    IData/*31:0*/ __Vtemp_37;
    IData/*31:0*/ __Vtemp_38;
    IData/*31:0*/ __Vtemp_39;
    IData/*31:0*/ __Vtemp_40;
    IData/*31:0*/ __Vtemp_41;
    IData/*31:0*/ __Vtemp_42;
    IData/*31:0*/ __Vtemp_43;
    IData/*31:0*/ __Vtemp_44;
    IData/*31:0*/ __Vtemp_45;
    IData/*31:0*/ __Vtemp_46;
    IData/*31:0*/ __Vtemp_47;
    IData/*31:0*/ __Vtemp_48;
    IData/*31:0*/ __Vtemp_49;
    IData/*31:0*/ __Vtemp_50;
    IData/*31:0*/ __Vtemp_51;
    IData/*31:0*/ __Vtemp_52;
    IData/*31:0*/ __Vtemp_53;
    IData/*31:0*/ __Vtemp_54;
    IData/*31:0*/ __Vtemp_55;
    IData/*31:0*/ __Vtemp_56;
    IData/*31:0*/ __Vtemp_57;
    IData/*31:0*/ __Vtemp_58;
    IData/*31:0*/ __Vtemp_59;
    IData/*31:0*/ __Vtemp_60;
    IData/*31:0*/ __Vtemp_61;
    IData/*31:0*/ __Vtemp_62;
    IData/*31:0*/ __Vtemp_63;
    IData/*31:0*/ __Vtemp_64;
    IData/*31:0*/ __Vtemp_65;
    IData/*31:0*/ __Vtemp_66;
    IData/*31:0*/ __Vtemp_67;
    IData/*31:0*/ __Vtemp_68;
    IData/*31:0*/ __Vtemp_69;
    IData/*31:0*/ __Vtemp_70;
    IData/*31:0*/ __Vtemp_71;
    IData/*31:0*/ __Vtemp_72;
    IData/*31:0*/ __Vtemp_73;
    IData/*31:0*/ __Vtemp_74;
    IData/*31:0*/ __Vtemp_75;
    IData/*31:0*/ __Vtemp_76;
    IData/*31:0*/ __Vtemp_77;
    IData/*31:0*/ __Vtemp_78;
    IData/*31:0*/ __Vtemp_79;
    IData/*31:0*/ __Vtemp_80;
    IData/*31:0*/ __Vtemp_81;
    IData/*31:0*/ __Vtemp_82;
    IData/*31:0*/ __Vtemp_83;
    IData/*31:0*/ __Vtemp_84;
    IData/*31:0*/ __Vtemp_85;
    IData/*31:0*/ __Vtemp_86;
    IData/*31:0*/ __Vtemp_87;
    IData/*31:0*/ __Vtemp_88;
    IData/*31:0*/ __Vtemp_89;
    IData/*31:0*/ __Vtemp_90;
    IData/*31:0*/ __Vtemp_91;
    IData/*31:0*/ __Vtemp_92;
    IData/*31:0*/ __Vtemp_93;
    IData/*31:0*/ __Vtemp_94;
    IData/*31:0*/ __Vtemp_95;
    IData/*31:0*/ __Vtemp_96;
    IData/*31:0*/ __Vtemp_97;
    IData/*31:0*/ __Vtemp_98;
    IData/*31:0*/ __Vtemp_99;
    IData/*31:0*/ __Vtemp_100;
    IData/*31:0*/ __Vtemp_101;
    IData/*31:0*/ __Vtemp_102;
    IData/*31:0*/ __Vtemp_103;
    IData/*31:0*/ __Vtemp_104;
    IData/*31:0*/ __Vtemp_105;
    IData/*31:0*/ __Vtemp_106;
    IData/*31:0*/ __Vtemp_107;
    IData/*31:0*/ __Vtemp_108;
    IData/*31:0*/ __Vtemp_109;
    IData/*31:0*/ __Vtemp_110;
    IData/*31:0*/ __Vtemp_111;
    IData/*31:0*/ __Vtemp_112;
    IData/*31:0*/ __Vtemp_113;
    IData/*31:0*/ __Vtemp_114;
    IData/*31:0*/ __Vtemp_115;
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu 
        = vlSelfRef.__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu;
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh 
            = (0x0000ffffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                              .__PVT__extDbh ? (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle)
                                                               ? 
                                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd) 
                                                               >> 0x0fU)
                                                               : 
                                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl) 
                                                               >> 0x0fU)))))
                               : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhIdle)
                                   ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle)
                                       ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd)
                                       : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl))
                                   : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh))));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl 
            = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle)
                ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__dblDbh ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh)
                    : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd))
                : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd 
            = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdIdle)
                ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle)
                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh)
                    : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl))
                : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__pwrUp) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr = 2U;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        __Vtemp_1 = VL_MATCHMASKED_I(32, (0x000000ffU 
                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nma) 
                                             >> 2U)), Vtb_xeno__ConstPool__CONST_h1528ed39_0);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr 
            = (((IData)(Vtb_xeno__ConstPool__TABLE_h292666c2_0
                        [__Vtemp_1]) << 2U) | (3U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nma)));
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__Ir2Ird) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir;
        }
    }
    if (((((((((4U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU))) | 
               (0U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU)))) 
              | (((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU))) 
                  || (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 0x0cU)))) 
                 || (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 0x0cU))))) 
             | (5U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU)))) 
            | (6U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                     >> 0x0cU)))) | 
           (7U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                  >> 0x0cU)))) | (8U 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 0x0cU)))) 
         | (9U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                  >> 0x0cU))))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((4U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU))) ? 
               ((0x00000100U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                 ? 0x0040U : ((0U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 9U)))
                               ? 0x0400U : ((1U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 9U)))
                                             ? 0x0010U
                                             : ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 9U)))
                                                 ? 0x0020U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 9U)))
                                                  ? 0x0800U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                                                    ? 0x0100U
                                                    : 0x0200U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                        >> 9U)))
                                                    ? 0x8000U
                                                    : 0U)))))))
                : ((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 0x0cU)))
                    ? ((0x00000100U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                        ? ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                            ? 0x4000U : 0x2000U) : 
                       ((0U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 9U))) ? 0x4000U
                         : ((1U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 9U))) ? 0x0010U
                             : ((2U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                              >> 9U)))
                                 ? 0x0020U : ((3U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 9U)))
                                               ? 4U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                                                    ? 0x4000U
                                                    : 0x2000U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                        >> 9U)))
                                                    ? 0x2000U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                         >> 9U)))
                                                     ? 0x0040U
                                                     : 0U))))))))
                    : ((((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 0x0cU))) 
                         || (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 0x0cU)))) 
                        || (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 0x0cU))))
                        ? 4U : ((5U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 0x0cU)))
                                 ? ((3U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 6U)))
                                     ? 0x8000U : ((0x00000100U 
                                                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                                                   ? 0x0020U
                                                   : 4U))
                                 : ((6U == (0x0000000fU 
                                            & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 0x0cU)))
                                     ? 0U : ((7U == 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 0x0cU)))
                                              ? 4U : 
                                             ((8U == 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 0x0cU)))
                                               ? ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 6U)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))
                                                    ? 0x0200U
                                                    : 0x4000U))
                                               : ((IData)(
                                                          ((0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                                           & (~ 
                                                              (3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                   >> 6U))))))
                                                   ? 0x0400U
                                                   : 0x0020U))))))));
    } else if ((0x0bU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = (((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                  >> 8U) & (~ (3U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 6U))))) 
                & (1U != (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                >> 3U)))) ? 0x2000U
                : 0x0040U);
    } else if ((0x0cU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((3U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                             >> 6U))) ? 0x0080U : ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))
                                                    ? 8U
                                                    : 0x0010U));
    } else if ((0x0dU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((IData)(((0x0100U == (0x0130U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                        & (~ (3U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 6U))))))
                ? 0x1000U : 4U);
    } else if ((0x0eU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype 
            = (3U & ((3U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                   >> 6U))) ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 9U)
                      : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                         >> 3U)));
        if (((((((((0U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 8U)))) 
                   | (1U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                              << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                              >> 8U))))) 
                  | (2U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                             << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 8U))))) 
                 | (3U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 8U))))) 
                | (4U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                           << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 8U))))) 
               | (5U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                          << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 8U))))) 
              | (6U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                         << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                         >> 8U))))) 
             | (7U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                        << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                        >> 8U)))))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
                = ((0U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 8U))))
                    ? 4U : ((1U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 8U))))
                             ? 8U : ((2U == (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 8U))))
                                      ? 0x0020U : (
                                                   (3U 
                                                    == 
                                                    (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                           >> 8U))))
                                                    ? 0x0010U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                            >> 8U))))
                                                     ? 0x0100U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                             >> 8U))))
                                                      ? 0x0800U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                              >> 8U))))
                                                       ? 0x0400U
                                                       : 0x0200U)))))));
        }
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow = 0U;
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl 
        = ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                  >> 5U)) | (1U & (~ (0U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch)))));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                            [(0x0000000fU 
                                              & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))] 
                                            >> 0x0000000eU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rx 
        = (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                 >> 9U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ry 
        = (7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isTas 
        = (IData)(((0x0ac0U == (0x0fc0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsDt 
        = (1U & ((Vtb_xeno__ConstPool__TABLE_he204aa36_0
                  [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                   >> 0x0000000cU))] 
                  >> 5U) | (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 0x0000000cU))] 
                            & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                  >> 8U)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsUsp 
        = (IData)(((0x0e60U == (0x0ff0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isMovep 
        = (IData)(((0x0108U == (0x0138U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                   [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                    >> 0x0000000cU))]));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__implicitSp 
        = ((0x00000040U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? (1U 
                                                   == 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 8U)))
            : ((1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)) && ((0x0eU == (0x0000000fU 
                                             & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 8U))) 
                                  | (0x21U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 6U))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__toCcr 
        = (((Vtb_xeno__ConstPool__TABLE_he204aa36_0
             [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                              >> 0x0000000cU))] >> 4U) 
            & ((0x0e77U == (0x00000fffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
               | (0x13U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 6U))))) 
           | (IData)(((0U == (0x01c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                      & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))])));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__macroTvn 
        = ((0x00000010U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? (
                                                   (0x00000040U 
                                                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                                                    ? 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))
                                                     ? 7U
                                                     : 
                                                    (0x00000020U 
                                                     | (0x0000000fU 
                                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))))
                                                    : 6U)
            : 5U);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__inhibitCcr 
        = (((IData)(((0x00c0U == (0x00c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                     & ((Vtb_xeno__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 9U) | (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                   [(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 0x0000000cU))] 
                                   >> 0x0dU)))) | (IData)(
                                                          ((8U 
                                                            == 
                                                            (0x0038U 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                                                           & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                              [
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                  >> 0x0000000cU))] 
                                                              >> 5U)))) 
           | (IData)(((0x0040U == (0x01c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                      & ((Vtb_xeno__ConstPool__TABLE_he204aa36_0
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 0x0000000cU))] 
                          >> 2U) | (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                    [(0x0000000fU & 
                                      ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                                    >> 3U)))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift 
        = ((IData)(__VdfgRegularize_hebeb780c_0_9) 
           & (3U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                           >> 6U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ftuConst 
        = ((0U != (3U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 6U))) ? ((0x0000ff00U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 7U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird)))
            : ((1U & ((IData)(__VdfgRegularize_hebeb780c_0_9) 
                      | (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 5U))) ? ((0U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                   >> 9U)))
                                      ? 8U : (7U & 
                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 9U)))
                : ((1U & ((Vtb_xeno__ConstPool__TABLE_he204aa36_0
                           [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 0x0000000cU))] 
                           >> 8U) | (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                                     >> 0x0000000cU)))
                    ? 0x000fU : (0x0080U & (- (IData)(
                                                      (1U 
                                                       & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                          [
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                              >> 0x0000000cU))] 
                                                          >> 4U))))))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isPcRel 
        = (IData)(((0x003aU == (0x003eU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & (~ (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                          >> 5U) & (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ryIsDt 
        = (IData)(((0x0038U == (0x003aU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird))) 
                   & (~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg 
        = ((0U != (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                         >> 3U))) & (7U != (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 3U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ryIsAreg 
        = ((0x00000020U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg) 
                                                   & (0x19U 
                                                      != 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                          >> 3U))))
            : ((1U & (~ ((1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))] 
                                >> 6U)) || (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                                  [
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 0x0000000cU))] 
                                                  >> 7U))))) 
               && (1U & ((0x00004000U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                           >> 0x0000000cU))])
                          ? (~ (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift))
                          : (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg)))));
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdMux;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblMux;
        if ((1U & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                   .__PVT__Ir2Ird))) {
            if ((1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc;
            }
        }
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineA 
        = (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                 [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                  >> 0x0000000cU))] 
                 >> 0x0000000aU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineF 
        = (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                 [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                  >> 0x0000000cU))] 
                 >> 0x0000000fU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = ((0xff3fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
           | (0x00000080U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 1U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00000400U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00008000U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[6U] 
        = (0x000003ffU & ((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                                 >> 8U)))
                           ? ((0U != (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)))
                               ? 0x00000089U : 0x000000a9U)
                           : ((0U != (0x000000ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)))
                               ? 0x00000308U : 0x00000068U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[7U] = 0x023bU;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[10U] = 0U;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[15U] = 0U;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
            if ((8U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
                tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0U;
            } else if ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir)))) {
                        tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                    }
                }
                tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                        ? ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                            ? 0x012aU : 0x006dU) : 
                       ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                         ? 0x0126U : 0U));
            } else {
                tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                        ? ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                            ? 0x012aU : 0x03a2U) : 
                       ((1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                         ? 0x0363U : 0x03a6U));
            }
        } else {
            tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                = ((8U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                    ? 0x0230U : 0x02f5U);
        }
    } else {
        tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
            = ((0x00000010U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                ? ((8U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                    ? 0x0119U : 0x030bU) : 0x01d0U);
    }
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa 
        = (0x0000000fU & ((7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                        >> 6U))) ? 
                          (0xcccba987U >> (0x0000001cU 
                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                              >> 7U)))
                           : (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                    >> 6U))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol 
        = (0x0000000fU & ((7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                        >> 3U))) ? 
                          (0xcccba987U >> (0x0000001cU 
                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                              << 2U)))
                           : (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                    >> 3U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[14U] 
        = ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))))
            ? 0x03c7U : 0U);
    if ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))))) {
        __Vtemp_2 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he0dc4311_0);
        vlSelfRef.__VcaseDecoderOut0 = Vtb_xeno__ConstPool__TABLE_h911422d5_0
            [__Vtemp_2];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xbfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00004000U & ((IData)(vlSelfRef.__VcaseDecoderOut0) 
                                 << 0x0000000eU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = (0x000003ffU & ((IData)(vlSelfRef.__VcaseDecoderOut0) 
                              >> 1U));
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00004000U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] = 0U;
        } else {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0xbfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
                = ((0x00000020U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                    ? 0x00000386U : 0x00000385U);
        }
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (0xbfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = ((0x00000020U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))
                ? 0x00000382U : 0x00000381U);
    }
    if (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToIrc) 
         & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
         .__PVT__enPhi2)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din;
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToIrc = 0U;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToIrc 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
            .__PVT__toIrc;
    }
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__extReset) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch = 0U;
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rstUrom) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
            = (0x00007fffU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
            = (0x0001fffeU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch);
    } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microOutput;
    }
    if ((0U == (0x00000027U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                               >> 6U)))) {
        __Vtemp_3 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut21 = Vtb_xeno__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_3];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut21 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut21 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut21 
                              >> 0x0000000bU));
    } else if ((1U == (0x00000027U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_4 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut22 = Vtb_xeno__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_4];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut22 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut22 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut22 
                              >> 0x0000000bU));
    } else if ((2U == (0x00000027U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_5 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut23 = Vtb_xeno__ConstPool__TABLE_hbae207b6_0
            [__Vtemp_5];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut23 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut23 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut23 
                              >> 0x0000000bU));
    } else if ((3U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_6 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut24 = Vtb_xeno__ConstPool__TABLE_h68e348e7_0
            [__Vtemp_6];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut24 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut24 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut24 
                              >> 0x0000000bU));
    } else if ((0x13U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_7 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut25 = Vtb_xeno__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_7];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut25 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut25 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut25 
                              >> 0x0000000bU));
    } else if ((0x1bU == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_8 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut26 = Vtb_xeno__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_8];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut26 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut26 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut26 
                              >> 0x0000000bU));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_9 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut27 = Vtb_xeno__ConstPool__TABLE_h9856367f_0
            [__Vtemp_9];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut27 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut27 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut27 
                              >> 0x0000000bU));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_10 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut28 = Vtb_xeno__ConstPool__TABLE_h32fa7448_0
            [__Vtemp_10];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut28 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut28 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut28 
                              >> 0x0000000bU));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_11 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut29 = Vtb_xeno__ConstPool__TABLE_h43eeafa8_0
            [__Vtemp_11];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut29 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut29 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut29 
                              >> 0x0000000bU));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_12 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut30 = Vtb_xeno__ConstPool__TABLE_hac4b9c1a_0
            [__Vtemp_12];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut30 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut30 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut30 
                              >> 0x0000000bU));
    } else if ((0x28U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_13 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut31 = Vtb_xeno__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_13];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut31 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut31 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut31 
                              >> 0x0000000bU));
    } else if ((0x29U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_14 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut32 = Vtb_xeno__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_14];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut32 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut32 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut32 
                              >> 0x0000000bU));
    } else if ((0x2aU == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_15 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut33 = Vtb_xeno__ConstPool__TABLE_hbe127729_0
            [__Vtemp_15];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut33 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut33 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut33 
                              >> 0x0000000bU));
    } else if ((0x2bU == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_16 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut34 = Vtb_xeno__ConstPool__TABLE_h7b3264b8_0
            [__Vtemp_16];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut34 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut34 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut34 
                              >> 0x0000000bU));
    } else if ((0x00000032U == (0x0000003eU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_17 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut35 = Vtb_xeno__ConstPool__TABLE_h6d6f8a73_0
            [__Vtemp_17];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut35 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut35 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut35 
                              >> 0x0000000bU));
    } else if ((6U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_18 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut36 = Vtb_xeno__ConstPool__TABLE_hd082d1c8_0
            [__Vtemp_18];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut36 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut36 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut36 
                              >> 0x0000000bU));
    } else if ((7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_19 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut37 = Vtb_xeno__ConstPool__TABLE_h0f86901e_0
            [__Vtemp_19];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut37 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut37 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut37 
                              >> 0x0000000bU));
    } else if ((0x3aU == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_20 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut38 = Vtb_xeno__ConstPool__TABLE_hfef82f04_0
            [__Vtemp_20];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut38 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut38 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut38 
                              >> 0x0000000bU));
    } else if ((0x3bU == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_21 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut39 = Vtb_xeno__ConstPool__TABLE_h2697a45d_0
            [__Vtemp_21];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut39 
                                 << 4U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut39 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut39 
                              >> 0x0000000bU));
    } else {
        if ((0x39U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffefU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | ((IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc) 
                      << 4U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
                = tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
        } else {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00000010U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] = 0U;
        }
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] = 0U;
    }
    if ((8U == (0x0000001fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                               >> 6U)))) {
        __Vtemp_22 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut1 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_22];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut1));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 0x00000015U));
    } else if ((0U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_23 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut2 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_23];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut2));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 0x00000015U));
    } else if ((9U == (0x0000001fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_24 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut3 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_24];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut3));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 0x00000015U));
    } else if ((1U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_25 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut4 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_25];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut4));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 0x00000015U));
    } else if ((0x0000000aU == (0x0000001fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_26 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut5 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_26];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut5));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 0x00000015U));
    } else if ((2U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_27 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut6 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_27];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut6));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 0x00000015U));
    } else if ((0x00000010U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_28 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut7 = Vtb_xeno__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_28];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut7));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 0x00000015U));
    } else if ((0x00000011U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_29 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut8 = Vtb_xeno__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_29];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut8));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 0x00000015U));
    } else if ((0x00000012U == (0x00000037U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_30 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut9 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_30];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut9));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 0x00000015U));
    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_31 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut10 = Vtb_xeno__ConstPool__TABLE_h38dd4db7_0
            [__Vtemp_31];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut10));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 0x00000015U));
    } else if ((5U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_32 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut11 = Vtb_xeno__ConstPool__TABLE_he5a4ad0d_0
            [__Vtemp_32];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut11));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 0x00000015U));
    } else if ((7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_33 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut12 = Vtb_xeno__ConstPool__TABLE_he13c6a00_0
            [__Vtemp_33];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut12));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 0x00000015U));
    } else if ((6U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_34 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut13 = Vtb_xeno__ConstPool__TABLE_h7e3d08c6_0
            [__Vtemp_34];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut13));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 0x00000015U));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_35 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut14 = Vtb_xeno__ConstPool__TABLE_ha137bec4_0
            [__Vtemp_35];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut14));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 0x00000015U));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_36 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut15 = Vtb_xeno__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_36];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut15));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 0x00000015U));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_37 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut16 = Vtb_xeno__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_37];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut16));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 0x00000015U));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_38 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut17 = Vtb_xeno__ConstPool__TABLE_haf34f21f_0
            [__Vtemp_38];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut17));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 0x00000015U));
    } else if ((0x30U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_39 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut18 = Vtb_xeno__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_39];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut18));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 0x00000015U));
    } else if ((0x31U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_40 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut19 = Vtb_xeno__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_40];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut19));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 0x00000015U));
    } else if ((0x32U == (0x0000003fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_41 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut20 = Vtb_xeno__ConstPool__TABLE_hccb66154_0
            [__Vtemp_41];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut20));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 0x0000000bU));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 0x00000015U));
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (1U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 = 0U;
    }
    if (((((((((0U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa)) 
               | (2U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
              | (3U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
             | (4U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
            | (5U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
           | (6U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
          | (7U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
         | (8U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_42 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut40 = Vtb_xeno__ConstPool__TABLE_h9cd354aa_0
                [__Vtemp_42];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut40 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut40 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut40 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_43 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut41 = Vtb_xeno__ConstPool__TABLE_h3e2181b8_0
                [__Vtemp_43];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut41 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut41 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut41 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_44 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut42 = Vtb_xeno__ConstPool__TABLE_hd2959be6_0
                [__Vtemp_44];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut42 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut42 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut42 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_45 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut43 = Vtb_xeno__ConstPool__TABLE_h13aa4342_0
                [__Vtemp_45];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut43 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut43 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut43 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_46 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut44 = Vtb_xeno__ConstPool__TABLE_h89c98bd1_0
                [__Vtemp_46];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut44 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut44 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut44 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_47 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut45 = Vtb_xeno__ConstPool__TABLE_h8c87e397_0
                [__Vtemp_47];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut45 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut45 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut45 
                                  >> 0x0000000bU));
        } else if ((7U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_48 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut46 = Vtb_xeno__ConstPool__TABLE_h076b5ef1_0
                [__Vtemp_48];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut46 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut46 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut46 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_49 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut47 = Vtb_xeno__ConstPool__TABLE_h5fe6edae_0
                [__Vtemp_49];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut47 
                            << 1U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut47 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut47 
                                  >> 0x0000000bU));
        }
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (2U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] = 0U;
    }
    if (((((((((0U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa)) 
               | (1U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
              | (2U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
             | (3U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
            | (4U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
           | (5U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
          | (6U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
         | (7U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_50 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut48 = Vtb_xeno__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_50];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut48 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut48 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut48 
                                  >> 0x0000000bU));
            __Vtemp_59 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut57 = Vtb_xeno__ConstPool__TABLE_hdb878943_0
                [__Vtemp_59];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut57 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut57 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut57 
                                  >> 0x0000000bU));
        } else if ((1U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_51 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut49 = Vtb_xeno__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_51];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut49 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut49 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut49 
                                  >> 0x0000000bU));
            __Vtemp_60 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut58 = Vtb_xeno__ConstPool__TABLE_hb9b985c2_0
                [__Vtemp_60];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut58 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut58 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut58 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_52 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut50 = Vtb_xeno__ConstPool__TABLE_hc118f1ba_0
                [__Vtemp_52];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut50 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut50 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut50 
                                  >> 0x0000000bU));
            __Vtemp_61 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut59 = Vtb_xeno__ConstPool__TABLE_hbc774d6a_0
                [__Vtemp_61];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut59 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut59 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut59 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_53 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut51 = Vtb_xeno__ConstPool__TABLE_h9f4d8f37_0
                [__Vtemp_53];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut51 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut51 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut51 
                                  >> 0x0000000bU));
            __Vtemp_62 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut60 = Vtb_xeno__ConstPool__TABLE_hc90e0332_0
                [__Vtemp_62];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut60 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut60 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut60 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_54 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut52 = Vtb_xeno__ConstPool__TABLE_h6c6b9226_0
                [__Vtemp_54];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut52 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut52 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut52 
                                  >> 0x0000000bU));
            __Vtemp_63 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut61 = Vtb_xeno__ConstPool__TABLE_h4d8af2d8_0
                [__Vtemp_63];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut61 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut61 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut61 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_55 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut53 = Vtb_xeno__ConstPool__TABLE_hc2184f42_0
                [__Vtemp_55];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut53 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut53 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut53 
                                  >> 0x0000000bU));
            __Vtemp_64 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut62 = Vtb_xeno__ConstPool__TABLE_h512d5c40_0
                [__Vtemp_64];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut62 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut62 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut62 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_56 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut54 = Vtb_xeno__ConstPool__TABLE_h68d6d722_0
                [__Vtemp_56];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut54 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut54 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut54 
                                  >> 0x0000000bU));
            __Vtemp_65 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut63 = Vtb_xeno__ConstPool__TABLE_hb4efbd7e_0
                [__Vtemp_65];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut63 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut63 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut63 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_57 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut55 = Vtb_xeno__ConstPool__TABLE_hcad3a1c4_0
                [__Vtemp_57];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut55 
                            << 2U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut55 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut55 
                                  >> 0x0000000bU));
            __Vtemp_66 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut64 = Vtb_xeno__ConstPool__TABLE_h48910ea9_0
                [__Vtemp_66];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut64 
                            << 3U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut64 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut64 
                                  >> 0x0000000bU));
        }
    } else if ((8U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
        __Vtemp_58 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut56 = Vtb_xeno__ConstPool__TABLE_h2334f8f1_0
            [__Vtemp_58];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffbU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (4U & (vlSelfRef.__VcaseDecoderOut56 
                        << 2U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut56 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut56 
                              >> 0x0000000bU));
        __Vtemp_67 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut65 = Vtb_xeno__ConstPool__TABLE_h6feb013a_0
            [__Vtemp_67];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfff7U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (8U & (vlSelfRef.__VcaseDecoderOut65 
                        << 3U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut65 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut65 
                              >> 0x0000000bU));
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (4U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (8U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] = 0U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
        if ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
            if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
                __Vtemp_68 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut73 = Vtb_xeno__ConstPool__TABLE_h6c931bbf_0
                    [__Vtemp_68];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut73 
                                         << 5U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut73 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut73 
                                      >> 0x0000000bU));
                __Vtemp_76 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut81 = Vtb_xeno__ConstPool__TABLE_h3327f4a6_0
                    [__Vtemp_76];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut81 
                                         << 8U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut81 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut81 
                                      >> 0x0000000bU));
                __Vtemp_84 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut89 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_84];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut89 
                                         << 9U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut89 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut89 
                                      >> 0x0000000bU));
                __Vtemp_92 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut97 = Vtb_xeno__ConstPool__TABLE_he9046c6e_0
                    [__Vtemp_92];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut97 
                                         << 0x0000000bU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut97 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut97 
                                      >> 0x0000000bU));
                __Vtemp_100 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut105 = Vtb_xeno__ConstPool__TABLE_h6d5e945a_0
                    [__Vtemp_100];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut105 
                                         << 0x0000000cU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut105 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut105 
                                      >> 0x0000000bU));
                __Vtemp_108 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut113 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_108];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut113 
                                         << 0x0000000dU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut113 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut113 
                                      >> 0x0000000bU));
            } else {
                __Vtemp_69 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut72 = Vtb_xeno__ConstPool__TABLE_hea13bce5_0
                    [__Vtemp_69];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut72 
                                         << 5U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut72 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut72 
                                      >> 0x0000000bU));
                __Vtemp_77 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut80 = Vtb_xeno__ConstPool__TABLE_hdb962c9f_0
                    [__Vtemp_77];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut80 
                                         << 8U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut80 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut80 
                                      >> 0x0000000bU));
                __Vtemp_85 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut88 = Vtb_xeno__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_85];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut88 
                                         << 9U)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut88 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut88 
                                      >> 0x0000000bU));
                __Vtemp_93 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut96 = Vtb_xeno__ConstPool__TABLE_hd7dd2a27_0
                    [__Vtemp_93];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut96 
                                         << 0x0000000bU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut96 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut96 
                                      >> 0x0000000bU));
                __Vtemp_101 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut104 = Vtb_xeno__ConstPool__TABLE_h4fe821f2_0
                    [__Vtemp_101];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut104 
                                         << 0x0000000cU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut104 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut104 
                                      >> 0x0000000bU));
                __Vtemp_109 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut112 = Vtb_xeno__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_109];
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut112 
                                         << 0x0000000dU)));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut112 
                                      >> 1U));
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut112 
                                      >> 0x0000000bU));
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
            __Vtemp_70 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut71 = Vtb_xeno__ConstPool__TABLE_h17c67228_0
                [__Vtemp_70];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut71 
                                     << 5U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut71 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut71 
                                  >> 0x0000000bU));
            __Vtemp_78 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut79 = Vtb_xeno__ConstPool__TABLE_h1bf8d03a_0
                [__Vtemp_78];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut79 
                                     << 8U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut79 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut79 
                                  >> 0x0000000bU));
            __Vtemp_86 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut87 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_86];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut87 
                                     << 9U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut87 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut87 
                                  >> 0x0000000bU));
            __Vtemp_94 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut95 = Vtb_xeno__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_94];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut95 
                                     << 0x0000000bU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut95 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut95 
                                  >> 0x0000000bU));
            __Vtemp_102 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut103 = Vtb_xeno__ConstPool__TABLE_h8b5ab276_0
                [__Vtemp_102];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut103 
                                     << 0x0000000cU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut103 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut103 
                                  >> 0x0000000bU));
            __Vtemp_110 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut111 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_110];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut111 
                                     << 0x0000000dU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut111 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut111 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_71 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut70 = Vtb_xeno__ConstPool__TABLE_h139a610e_0
                [__Vtemp_71];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut70 
                                     << 5U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut70 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut70 
                                  >> 0x0000000bU));
            __Vtemp_79 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut78 = Vtb_xeno__ConstPool__TABLE_h4474e570_0
                [__Vtemp_79];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut78 
                                     << 8U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut78 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut78 
                                  >> 0x0000000bU));
            __Vtemp_87 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut86 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_87];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut86 
                                     << 9U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut86 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut86 
                                  >> 0x0000000bU));
            __Vtemp_95 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut94 = Vtb_xeno__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_95];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut94 
                                     << 0x0000000bU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut94 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut94 
                                  >> 0x0000000bU));
            __Vtemp_103 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut102 = Vtb_xeno__ConstPool__TABLE_h4474e570_0
                [__Vtemp_103];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut102 
                                     << 0x0000000cU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut102 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut102 
                                  >> 0x0000000bU));
            __Vtemp_111 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut110 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_111];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut110 
                                     << 0x0000000dU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut110 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut110 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
            __Vtemp_72 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut69 = Vtb_xeno__ConstPool__TABLE_h6c931bbf_0
                [__Vtemp_72];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut69 
                                     << 5U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut69 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut69 
                                  >> 0x0000000bU));
            __Vtemp_80 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut77 = Vtb_xeno__ConstPool__TABLE_h1e53f1ae_0
                [__Vtemp_80];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut77 
                                     << 8U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut77 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut77 
                                  >> 0x0000000bU));
            __Vtemp_88 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut85 = Vtb_xeno__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_88];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut85 
                                     << 9U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut85 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut85 
                                  >> 0x0000000bU));
            __Vtemp_96 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut93 = Vtb_xeno__ConstPool__TABLE_hb343e8cc_0
                [__Vtemp_96];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut93 
                                     << 0x0000000bU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut93 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut93 
                                  >> 0x0000000bU));
            __Vtemp_104 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut101 = Vtb_xeno__ConstPool__TABLE_h6d5e945a_0
                [__Vtemp_104];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut101 
                                     << 0x0000000cU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut101 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut101 
                                  >> 0x0000000bU));
            __Vtemp_112 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut109 = Vtb_xeno__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_112];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut109 
                                     << 0x0000000dU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut109 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut109 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_73 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut68 = Vtb_xeno__ConstPool__TABLE_hea13bce5_0
                [__Vtemp_73];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut68 
                                     << 5U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut68 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut68 
                                  >> 0x0000000bU));
            __Vtemp_81 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut76 = Vtb_xeno__ConstPool__TABLE_h5679d896_0
                [__Vtemp_81];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut76 
                                     << 8U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut76 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut76 
                                  >> 0x0000000bU));
            __Vtemp_89 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut84 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_89];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut84 
                                     << 9U)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut84 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut84 
                                  >> 0x0000000bU));
            __Vtemp_97 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut92 = Vtb_xeno__ConstPool__TABLE_he9046c6e_0
                [__Vtemp_97];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut92 
                                     << 0x0000000bU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut92 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut92 
                                  >> 0x0000000bU));
            __Vtemp_105 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut100 = Vtb_xeno__ConstPool__TABLE_h5679d896_0
                [__Vtemp_105];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut100 
                                     << 0x0000000cU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut100 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut100 
                                  >> 0x0000000bU));
            __Vtemp_113 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut108 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_113];
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut108 
                                     << 0x0000000dU)));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut108 
                                  >> 1U));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut108 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir))) {
        __Vtemp_74 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut67 = Vtb_xeno__ConstPool__TABLE_h17c67228_0
            [__Vtemp_74];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut67 
                                 << 5U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut67 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut67 
                              >> 0x0000000bU));
        __Vtemp_82 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut75 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_82];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut75 
                                 << 8U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut75 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut75 
                              >> 0x0000000bU));
        __Vtemp_90 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut83 = Vtb_xeno__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_90];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut83 
                                 << 9U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut83 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut83 
                              >> 0x0000000bU));
        __Vtemp_98 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut91 = Vtb_xeno__ConstPool__TABLE_h4971b97e_0
            [__Vtemp_98];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut91 
                                 << 0x0000000bU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut91 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut91 
                              >> 0x0000000bU));
        __Vtemp_106 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut99 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_106];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut99 
                                 << 0x0000000cU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut99 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut99 
                              >> 0x0000000bU));
        __Vtemp_114 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut107 = Vtb_xeno__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_114];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut107 
                                 << 0x0000000dU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut107 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut107 
                              >> 0x0000000bU));
    } else {
        __Vtemp_75 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut66 = Vtb_xeno__ConstPool__TABLE_h139a610e_0
            [__Vtemp_75];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut66 
                                 << 5U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut66 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut66 
                              >> 0x0000000bU));
        __Vtemp_83 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut74 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_83];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut74 
                                 << 8U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut74 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut74 
                              >> 0x0000000bU));
        __Vtemp_91 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut82 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_91];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut82 
                                 << 9U)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut82 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut82 
                              >> 0x0000000bU));
        __Vtemp_99 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut90 = Vtb_xeno__ConstPool__TABLE_hdc124375_0
            [__Vtemp_99];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut90 
                                 << 0x0000000bU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut90 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut90 
                              >> 0x0000000bU));
        __Vtemp_107 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut98 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_107];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut98 
                                 << 0x0000000cU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut98 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut98 
                              >> 0x0000000bU));
        __Vtemp_115 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut106 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_115];
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut106 
                                 << 0x0000000dU)));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut106 
                              >> 1U));
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut106 
                              >> 0x0000000bU));
    }
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
           & (0x00000010U != (0x00000012U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn 
        = (IData)((0x00000010U == (0x00000012U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updTpend 
        = (1U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__clrTpend 
        = (0x0eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__tvn2Ftu 
        = (0x0dU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__const2Ftu 
        = (1U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Dbl 
        = ((4U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)) 
           | (6U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Abl 
        = (8U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__inl2psw 
        = (6U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pswIToFtu 
        = (5U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Sr 
        = (2U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__sr2Ftu 
        = (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ird2Ftu 
        = (9U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ssw2Ftu 
        = (0x0bU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__initST 
        = (((6U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)) 
            | (0x0eU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl))) 
           | (0x0fU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2Pren 
        = (0x0cU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updPren 
        = (0x0aU == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__Ir2Ird 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                 >> 3U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluDctrl 
        = (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000013U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluActrl 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000012U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluColumn 
        = ((4U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 0x0000001dU)) | ((2U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                                               >> 1U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluFinish 
        = (2U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluInit 
        = (1U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Ccr 
        = (3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abdIsByte 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 6U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Db 
        = (1U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Ab 
        = (2U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Pc 
        = (3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__db2Aob 
        = (2U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ab2Aob 
        = (1U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Aob 
        = (3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbin2Abd 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000eU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbin2Dbd 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000fU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__permStart 
        = (0U != (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__isWrite 
        = (0U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__busByte 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noLowByte 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000017U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noHighByte 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000016U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2reg 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 4U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2reg 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 7U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2reg 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 1U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2reg 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 5U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2dbl 
        = (1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U]);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2dbh 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 6U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2abl 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 5U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2abh 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 8U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ssp 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 0x00000018U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rz 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000bU));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxlDbl 
        = (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 8U));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pcldbl 
        = (1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 7U) | ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                >> 8U)) & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pchdbh 
        = ((1U == (3U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U])) 
           | ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U)) & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pclabl 
        = (1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 9U) | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel) 
                            & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                               >> 8U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pchabh 
        = ((2U == (3U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U])) 
           | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel) 
              & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 0x00000016U)));
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__auClkEn 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__auCntrl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noSpAlign 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__extDbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__extAbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__todbin 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__toIrc 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ablAbd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ablAbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dblDbd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dblDbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2Atl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__atl2Dbl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2Atl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__atl2Abl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aob2Ab 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2Ath 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2Ath 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ath2Dbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ath2Abh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alu2Dbd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alu2Abd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abd2Dcr 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dcr2Dbd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbd2Alue 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alue2Dbd 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbd2Alub 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abd2Alub 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dobCtrl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxl2db 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxl2ab 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2rxl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2rxl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxh2dbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxh2abh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2rxh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2rxh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2ryh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2ryh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2ryl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2ryl 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryl2db 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryl2ab 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryh2dbh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryh2abh 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44;
    }
    if (vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45) {
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45 = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__isRmc 
            = vlSelfRef.__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45;
    }
}
