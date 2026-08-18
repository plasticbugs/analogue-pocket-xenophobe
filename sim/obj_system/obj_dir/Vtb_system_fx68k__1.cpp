// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__5(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__excUnit__DOT__dbhMux = (0x0000ffffU 
                                             & (vlSelfRef.__PVT__Nanod
                                                .__PVT__rxh2dbh
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.__PVT__Nanod
                                                 .__PVT__ryh2dbh
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__au2Db
                                                   ? 
                                                  (vlSelfRef.__PVT__excUnit__DOT__auReg 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__ath2Dbh
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Ath)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Dbh)
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcH)
                                                     : 0U))))));
    vlSelfRef.__PVT__excUnit__DOT__abhMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Abh)
                                                 ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcH)
                                                 : 
                                                (vlSelfRef.__PVT__Nanod
                                                 .__PVT__rxh2abh
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__ryh2abh
                                                   ? 
                                                  ((0x11U 
                                                    >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                    ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                   [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                    : 0U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__au2Ab
                                                    ? 
                                                   (vlSelfRef.__PVT__excUnit__DOT__auReg 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__aob2Ab
                                                     ? 
                                                    (vlSelfRef.__PVT__excUnit__DOT__aob 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__ath2Abh
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Ath)
                                                      : 0U)))))));
    vlSelfRef.__PVT__excUnit__DOT__dblMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbl)
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbl)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__ftu2Dbl
                                                   ? (IData)(vlSelfRef.__PVT__ftu)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__au2Db
                                                    ? vlSelfRef.__PVT__excUnit__DOT__auReg
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__atl2Dbl
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Atl)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Dbl)
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcL)
                                                      : 0U)))))));
    vlSelfRef.__PVT__excUnit__DOT__ablMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Abl)
                                                 ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcL)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abl)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abl)
                                                   ? 
                                                  ((0x11U 
                                                    >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                    ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                   [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                    : 0U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__ftu2Abl
                                                    ? (IData)(vlSelfRef.__PVT__ftu)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__au2Ab
                                                     ? vlSelfRef.__PVT__excUnit__DOT__auReg
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__aob2Ab
                                                      ? vlSelfRef.__PVT__excUnit__DOT__aob
                                                      : 
                                                     (vlSelfRef.__PVT__Nanod
                                                      .__PVT__atl2Abl
                                                       ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Atl)
                                                       : 0U))))))));
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__6(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__6\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__excUnit__DOT__abdMux = ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abd)
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abd)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__dbin2Abd
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__alu2Abd
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                    : 0U))));
    vlSelfRef.__PVT__excUnit__DOT__dbdMux = ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbd)
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbd)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__alue2Dbd
                                                   ? (IData)(vlSelfRef.__PVT__alue)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__dbin2Dbd
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__alu2Dbd
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__dcr2Dbd
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dcrOutput)
                                                      : 0U))))));
}

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__7(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__snd__DOT__cpu__7\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Clks.__PVT__extReset = vlSelfRef.extReset;
    vlSelfRef.__PVT__Clks.__PVT__pwrUp = vlSelfRef.extReset;
    vlSelfRef.__PVT__Clks.__PVT__enPhi1 = vlSymsp->TOP.tb_system__DOT__s_phi1;
    vlSelfRef.__PVT__Clks.__PVT__enPhi2 = vlSymsp->TOP.tb_system__DOT__s_phi2;
    vlSelfRef.__Vcellinp__nanoRom__clk = vlSelfRef.__PVT__Clks
        .__PVT__clk;
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__7(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__7\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nma = ((IData)(vlSelfRef.__PVT__A0Err)
                             ? ((IData)(vlSelfRef.__PVT__sequencer__DOT__a0Rst)
                                 ? 2U : (((IData)(vlSelfRef.__PVT__sequencer__DOT__rExcRst) 
                                          | ((IData)(vlSelfRef.__PVT__sequencer__DOT__rExcBusErr) 
                                             | (IData)(vlSelfRef.__PVT__sequencer__DOT__rExcAdrErr)))
                                          ? 1U : 3U))
                             : (IData)(vlSelfRef.__PVT__sequencer__DOT__uNma));
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__8(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__8\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enT2 = (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                             & (1U == vlSelfRef.__PVT__tState));
    vlSelfRef.__PVT__enT3 = (vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                             & (2U == vlSelfRef.__PVT__tState));
    vlSelfRef.__PVT__enT4 = (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                             & ((0U == vlSelfRef.__PVT__tState) 
                                | (3U == vlSelfRef.__PVT__tState)));
    vlSelfRef.__PVT__rstUrom = (vlSelfRef.__PVT__Clks
                                .__PVT__enPhi1 & (IData)(vlSelfRef.__PVT__enErrClk));
    vlSelfRef.__PVT__busControl__DOT__bcReset = (vlSelfRef.__PVT__Clks
                                                 .__PVT__extReset 
                                                 | (((IData)(vlSelfRef.__PVT__busControl__DOT__addrOeDelay) 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__BeI) 
                                                         | (IData)(vlSelfRef.__PVT__BeiDelay)))) 
                                                    & (IData)(vlSelfRef.__PVT__Vpai)));
    vlSelfRef.__PVT__enT1 = ((vlSelfRef.__PVT__Clks
                              .__PVT__enPhi1 & (4U 
                                                == vlSelfRef.__PVT__tState)) 
                             & (~ (IData)(vlSelfRef.__PVT__wClk)));
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__9(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__snd__DOT__cpu__9\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_10 = (((((1U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                          & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__rAS)) 
                                             & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg))) 
                                         | ((IData)(vlSelfRef.__PVT__BRi) 
                                            & ((IData)(vlSelfRef.__PVT__BgackI) 
                                               & ((~ (IData)(vlSelfRef.__PVT__busArbiter__DOT__rGranted)) 
                                                  & (IData)(vlSelfRef.__PVT__Halti))))) 
                                        & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)) 
                                           & (vlSelfRef.__PVT__Nanod
                                              .__PVT__permStart 
                                              | (IData)(vlSelfRef.__PVT__busControl__DOT__bcPend))))
                                        ? 2U : 1U);
    vlSelfRef.__PVT__busControl__DOT__next = ((0U == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                               ? 1U
                                               : ((6U 
                                                   == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.__PVT__rDtack)) 
                                                          | (IData)(vlSelfRef.__PVT__iStop)))
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                       ? 
                                                      (((5U 
                                                         == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                                        & ((IData)(vlSelfRef.__PVT__busControl__DOT__bcReset) 
                                                           & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg)))
                                                        ? 6U
                                                        : __VdfgRegularize_hebeb780c_0_10)
                                                       : 
                                                      ((1U 
                                                        == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                        ? __VdfgRegularize_hebeb780c_0_10
                                                        : 1U)))))));
    vlSelfRef.__PVT__busControl__DOT__busEnding = (
                                                   (1U 
                                                    == vlSelfRef.__PVT__busControl__DOT__next) 
                                                   | (2U 
                                                      == vlSelfRef.__PVT__busControl__DOT__next));
}

void Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___ico_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Clks.__PVT__extReset = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__Clks.__PVT__pwrUp = vlSymsp->TOP.reset;
}

void Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___ico_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    // Body
    vlSelfRef.__Vcellinp__nanoRom__clk = vlSelfRef.__PVT__Clks
        .__PVT__clk;
    vlSelfRef.__PVT__enT2 = (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                             & (1U == vlSelfRef.__PVT__tState));
    vlSelfRef.__PVT__enT3 = (vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                             & (2U == vlSelfRef.__PVT__tState));
    vlSelfRef.__PVT__enT4 = (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                             & ((0U == vlSelfRef.__PVT__tState) 
                                | (3U == vlSelfRef.__PVT__tState)));
    vlSelfRef.__PVT__rstUrom = (vlSelfRef.__PVT__Clks
                                .__PVT__enPhi1 & (IData)(vlSelfRef.__PVT__enErrClk));
    vlSelfRef.__PVT__enT1 = ((vlSelfRef.__PVT__Clks
                              .__PVT__enPhi1 & (4U 
                                                == vlSelfRef.__PVT__tState)) 
                             & (~ (IData)(vlSelfRef.__PVT__wClk)));
    vlSelfRef.__PVT__busControl__DOT__bcReset = (vlSelfRef.__PVT__Clks
                                                 .__PVT__extReset 
                                                 | (((IData)(vlSelfRef.__PVT__busControl__DOT__addrOeDelay) 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__BeI) 
                                                         | (IData)(vlSelfRef.__PVT__BeiDelay)))) 
                                                    & (IData)(vlSelfRef.__PVT__Vpai)));
    __VdfgRegularize_hebeb780c_0_11 = (((((1U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                          & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__rAS)) 
                                             & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg))) 
                                         | ((IData)(vlSelfRef.__PVT__BRi) 
                                            & ((IData)(vlSelfRef.__PVT__BgackI) 
                                               & ((~ (IData)(vlSelfRef.__PVT__busArbiter__DOT__rGranted)) 
                                                  & (IData)(vlSelfRef.__PVT__Halti))))) 
                                        & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)) 
                                           & (vlSelfRef.__PVT__Nanod
                                              .__PVT__permStart 
                                              | (IData)(vlSelfRef.__PVT__busControl__DOT__bcPend))))
                                        ? 2U : 1U);
    vlSelfRef.__PVT__busControl__DOT__next = ((0U == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                               ? 1U
                                               : ((6U 
                                                   == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.__PVT__rDtack)) 
                                                          | (IData)(vlSelfRef.__PVT__iStop)))
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                       ? 
                                                      (((5U 
                                                         == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                                        & ((IData)(vlSelfRef.__PVT__busControl__DOT__bcReset) 
                                                           & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg)))
                                                        ? 6U
                                                        : __VdfgRegularize_hebeb780c_0_11)
                                                       : 
                                                      ((1U 
                                                        == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                        ? __VdfgRegularize_hebeb780c_0_11
                                                        : 1U)))))));
    vlSelfRef.__PVT__busControl__DOT__busEnding = (
                                                   (1U 
                                                    == vlSelfRef.__PVT__busControl__DOT__next) 
                                                   | (2U 
                                                      == vlSelfRef.__PVT__busControl__DOT__next));
}

extern const VlWide<20>/*639:0*/ Vtb_system__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_system__ConstPool__TABLE_ha56e5a24_0;

void Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___act_comb__TOP__tb_system__DOT__main_board__DOT__cpu__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __PVT__excUnit__DOT__alu__DOT__subResult;
    __PVT__excUnit__DOT__alu__DOT__subResult = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__subCout;
    __PVT__excUnit__DOT__alu__DOT__subCout = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__subOv;
    __PVT__excUnit__DOT__alu__DOT__subOv = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__shftCin;
    __PVT__excUnit__DOT__alu__DOT__shftCin = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__shftMsb;
    __PVT__excUnit__DOT__alu__DOT__shftMsb = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
    IData/*31:0*/ __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata;
    __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata = 0;
    SData/*15:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa = 0;
    SData/*15:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__nDecoder__DOT__dblSpecial = vlSelfRef.__PVT__Nanod
        .__PVT__pcldbl;
    vlSelfRef.__PVT__nDecoder__DOT__dbhSpecial = vlSelfRef.__PVT__Nanod
        .__PVT__pchdbh;
    vlSelfRef.__PVT__nDecoder__DOT__ablSpecial = vlSelfRef.__PVT__Nanod
        .__PVT__pclabl;
    vlSelfRef.__PVT__nDecoder__DOT__abhSpecial = vlSelfRef.__PVT__Nanod
        .__PVT__pchabh;
    vlSelfRef.__PVT__excUnit__DOT__abhIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Abh)))) {
        if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__rxh2abh))) {
            if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__ryh2abh))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__au2Ab))) {
                    if ((1U & (~ vlSelfRef.__PVT__Nanod
                               .__PVT__aob2Ab))) {
                        if ((1U & (~ vlSelfRef.__PVT__Nanod
                                   .__PVT__ath2Abh))) {
                            vlSelfRef.__PVT__excUnit__DOT__abhIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__dbhIdle = 0U;
    if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__rxh2dbh))) {
        if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__ryh2dbh))) {
            if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__au2Db))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__ath2Dbh))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Dbh)))) {
                        vlSelfRef.__PVT__excUnit__DOT__dbhIdle = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0U;
    if ((1U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 1U;
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
            = (vlSelfRef.__PVT__Nanod.__PVT__aluFinish
                ? ((0x00000080U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                    ? 0x0fU : 0x0cU) : ((0U != (3U 
                                                & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 0x0000000dU)))
                                         ? 4U : 0x0fU));
    } else {
        if ((5U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 5U;
        } else if ((1U & ((0U != (0x039eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) 
                          | ((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                    >> 5U)) || (1U 
                                                & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 6U)))))) {
            if ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if (((4U == vlSelfRef.__PVT__Nanod
                             .__PVT__aluColumn) || 
                            (6U == vlSelfRef.__PVT__Nanod
                             .__PVT__aluColumn))) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x15U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0bU;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0eU;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                        = ((2U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluDctrl) ? 0x00000016U
                            : 4U);
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0dU;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                    = ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) ? 0x0000000fU
                        : 1U);
            } else if (((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                               >> 5U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                 >> 6U)))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x10U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 5U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 1U;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((2U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 6U;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x11U;
            }
        } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x12U;
            }
        } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x13U;
            }
        } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
        } else if ((0x00002000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 9U;
        } else if ((0x00004000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                = ((4U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? 9U : 8U);
        } else if ((0x00008000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                = ((3U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? 4U : 8U);
        }
        if (((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn) 
             || (3U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn))) {
            if ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                               >> 3U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                 >> 9U)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
                    = ((2U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) ? 0x1bU : 0x1fU);
            } else if (((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                 >> 2U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 5U))) 
                         || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0aU))) || (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0cU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x1fU;
            } else if ((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                >> 6U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                  >> 7U))) 
                        || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                  >> 0x0bU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                 >> 4U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 8U))) 
                         || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0dU))) || (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0eU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if ((0x00008000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(16, (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row), Vtb_system__ConstPool__CONST_h1b96ab98_0);
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
                = ((4U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? Vtb_system__ConstPool__TABLE_ha56e5a24_0
                   [__Vtemp_1] : ((5U == vlSelfRef.__PVT__Nanod
                                   .__PVT__aluColumn)
                                   ? ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                                       ? 0x0fU : 0U)
                                   : 0U));
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__dobInput = ((2U 
                                                == vlSelfRef.__PVT__Nanod
                                                .__PVT__dobCtrl)
                                                ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd)
                                                : (
                                                   (1U 
                                                    == vlSelfRef.__PVT__Nanod
                                                    .__PVT__dobCtrl)
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbd)
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__Nanod
                                                     .__PVT__dobCtrl)
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 0U)));
    vlSelfRef.__PVT__excUnit__DOT__dbhMux = (0x0000ffffU 
                                             & (vlSelfRef.__PVT__Nanod
                                                .__PVT__rxh2dbh
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.__PVT__Nanod
                                                 .__PVT__ryh2dbh
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__au2Db
                                                   ? 
                                                  (vlSelfRef.__PVT__excUnit__DOT__auReg 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__ath2Dbh
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Ath)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Dbh)
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcH)
                                                     : 0U))))));
    vlSelfRef.__PVT__excUnit__DOT__auInpMux = ((4U 
                                                & vlSelfRef.__PVT__Nanod
                                                .__PVT__auCntrl)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.__PVT__Nanod
                                                    .__PVT__auCntrl)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__Nanod
                                                     .__PVT__auCntrl)
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__excUnit__DOT__byteNotSpAlign) 
                                                      | vlSelfRef.__PVT__Nanod
                                                      .__PVT__noSpAlign)
                                                      ? 0xffffffffU
                                                      : 0xfffffffeU)
                                                     : 0xfffffffeU)
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__Nanod
                                                     .__PVT__auCntrl)
                                                     ? 4U
                                                     : 2U))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.__PVT__Nanod
                                                    .__PVT__auCntrl)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__Nanod
                                                     .__PVT__auCntrl)
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__excUnit__DOT__Abh) 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__excUnit__DOT__Abl))
                                                     : 0xfffffffcU)
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__Nanod
                                                     .__PVT__auCntrl)
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__excUnit__DOT__byteNotSpAlign) 
                                                      | vlSelfRef.__PVT__Nanod
                                                      .__PVT__noSpAlign)
                                                      ? 1U
                                                      : 2U)
                                                     : 0U)));
    vlSelfRef.__PVT__excUnit__DOT__abhMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pch2Abh)
                                                 ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcH)
                                                 : 
                                                (vlSelfRef.__PVT__Nanod
                                                 .__PVT__rxh2abh
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__ryh2abh
                                                   ? 
                                                  ((0x11U 
                                                    >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                    ? vlSelfRef.__PVT__excUnit__DOT__regs68H
                                                   [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                    : 0U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__au2Ab
                                                    ? 
                                                   (vlSelfRef.__PVT__excUnit__DOT__auReg 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__aob2Ab
                                                     ? 
                                                    (vlSelfRef.__PVT__excUnit__DOT__aob 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__ath2Abh
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Ath)
                                                      : 0U)))))));
    vlSelfRef.__PVT__excUnit__DOT__ryl2Abd = (vlSelfRef.__PVT__Nanod
                                              .__PVT__ryl2ab 
                                              & ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsAreg)) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__ablAbd));
    vlSelfRef.__PVT__excUnit__DOT__rxl2Abd = (vlSelfRef.__PVT__Nanod
                                              .__PVT__rxl2ab 
                                              & ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsAreg)) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__ablAbd));
    vlSelfRef.__PVT__excUnit__DOT__ryl2Dbd = (vlSelfRef.__PVT__Nanod
                                              .__PVT__ryl2db 
                                              & ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsAreg)) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__dblDbd));
    vlSelfRef.__PVT__excUnit__DOT__rxl2Dbd = (vlSelfRef.__PVT__Nanod
                                              .__PVT__rxl2db 
                                              & ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsAreg)) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__dblDbd));
    vlSelfRef.__PVT__excUnit__DOT__ryl2Dbl = (vlSelfRef.__PVT__Nanod
                                              .__PVT__ryl2db 
                                              & ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsAreg) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__dblDbd));
    vlSelfRef.__PVT__excUnit__DOT__rxl2Dbl = (vlSelfRef.__PVT__Nanod
                                              .__PVT__rxl2db 
                                              & ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsAreg) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__dblDbd));
    __VdfgRegularize_hebeb780c_0_11 = (((((1U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                          & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__rAS)) 
                                             & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg))) 
                                         | ((IData)(vlSelfRef.__PVT__BRi) 
                                            & ((IData)(vlSelfRef.__PVT__BgackI) 
                                               & ((~ (IData)(vlSelfRef.__PVT__busArbiter__DOT__rGranted)) 
                                                  & (IData)(vlSelfRef.__PVT__Halti))))) 
                                        & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)) 
                                           & (vlSelfRef.__PVT__Nanod
                                              .__PVT__permStart 
                                              | (IData)(vlSelfRef.__PVT__busControl__DOT__bcPend))))
                                        ? 2U : 1U);
    vlSelfRef.__PVT__excUnit__DOT__ryl2Abl = (vlSelfRef.__PVT__Nanod
                                              .__PVT__ryl2ab 
                                              & ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsAreg) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__ablAbd));
    vlSelfRef.__PVT__excUnit__DOT__rxl2Abl = (vlSelfRef.__PVT__Nanod
                                              .__PVT__rxl2ab 
                                              & ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsAreg) 
                                                 | vlSelfRef.__PVT__Nanod
                                                 .__PVT__ablAbd));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand 
        = (0x0000ffffU & ((2U & vlSelfRef.__PVT__Nanod
                           .__PVT__aluDctrl) ? (- (IData)(
                                                          (1U 
                                                           & vlSelfRef.__PVT__Nanod
                                                           .__PVT__aluDctrl)))
                           : ((IData)(vlSelfRef.__PVT__excUnit__DOT__Dbd) 
                              & (- (IData)((1U & (~ vlSelfRef.__PVT__Nanod
                                                  .__PVT__aluDctrl)))))));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand 
        = (vlSelfRef.__PVT__Nanod.__PVT__aluActrl ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alub)
            : (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd));
    if (vlSelfRef.__PVT__Nanod.__PVT__ssp) {
        vlSelfRef.__PVT__excUnit__DOT__rxMux = 0x10U;
        vlSelfRef.__PVT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.__PVT__excUnit__DOT__rxReg = 0U;
    } else if (vlSelfRef.__PVT__Irdecod.__PVT__rxIsUsp) {
        vlSelfRef.__PVT__excUnit__DOT__rxMux = 0x0fU;
        vlSelfRef.__PVT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.__PVT__excUnit__DOT__rxReg = 0U;
    } else if ((vlSelfRef.__PVT__Irdecod.__PVT__rxIsDt 
                & (~ vlSelfRef.__PVT__Irdecod.__PVT__implicitSp))) {
        vlSelfRef.__PVT__excUnit__DOT__rxMux = 0x11U;
        vlSelfRef.__PVT__excUnit__DOT__rxIsSp = 0U;
        vlSelfRef.__PVT__excUnit__DOT__rxReg = 0U;
    } else {
        vlSelfRef.__PVT__excUnit__DOT__rxReg = (vlSelfRef.__PVT__Irdecod
                                                .__PVT__implicitSp
                                                 ? 0x0fU
                                                 : 
                                                (vlSelfRef.__PVT__Irdecod
                                                 .__PVT__rxIsMovem
                                                  ? (IData)(vlSelfRef.__PVT__excUnit__DOT__movemRx)
                                                  : 
                                                 ((vlSelfRef.__PVT__Irdecod
                                                   .__PVT__rxIsAreg 
                                                   << 3U) 
                                                  | vlSelfRef.__PVT__Irdecod
                                                  .__PVT__rx)));
        if ((0x0000000fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__rxReg))) {
            vlSelfRef.__PVT__excUnit__DOT__rxMux = 
                ((IData)(vlSelfRef.__PVT__pswS) ? 0x00000010U
                  : 0x0000000fU);
            vlSelfRef.__PVT__excUnit__DOT__rxIsSp = 1U;
        } else {
            vlSelfRef.__PVT__excUnit__DOT__rxMux = vlSelfRef.__PVT__excUnit__DOT__rxReg;
            vlSelfRef.__PVT__excUnit__DOT__rxIsSp = 0U;
        }
    }
    if ((vlSelfRef.__PVT__Irdecod.__PVT__ryIsDt & (~ vlSelfRef.__PVT__Nanod
                                                   .__PVT__rz))) {
        vlSelfRef.__PVT__excUnit__DOT__ryMux = 0x11U;
        vlSelfRef.__PVT__excUnit__DOT__ryIsSp = 0U;
        vlSelfRef.__PVT__excUnit__DOT__ryReg = 0U;
    } else {
        vlSelfRef.__PVT__excUnit__DOT__ryReg = (0x0000000fU 
                                                & (vlSelfRef.__PVT__Nanod
                                                   .__PVT__rz
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__Irc) 
                                                    >> 0x0cU)
                                                    : 
                                                   ((vlSelfRef.__PVT__Irdecod
                                                     .__PVT__ryIsAreg 
                                                     << 3U) 
                                                    | vlSelfRef.__PVT__Irdecod
                                                    .__PVT__ry)));
        vlSelfRef.__PVT__excUnit__DOT__ryIsSp = (0x0000000fU 
                                                 == (IData)(vlSelfRef.__PVT__excUnit__DOT__ryReg));
        vlSelfRef.__PVT__excUnit__DOT__ryMux = (((IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsSp) 
                                                 & (IData)(vlSelfRef.__PVT__pswS))
                                                 ? 0x10U
                                                 : (IData)(vlSelfRef.__PVT__excUnit__DOT__ryReg));
    }
    vlSelfRef.__PVT__excUnit__DOT__aulow = (0x0001ffffU 
                                            & ((0x0000ffffU 
                                                & vlSelfRef.__PVT__excUnit__DOT__auInpMux) 
                                               + (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbl)));
    vlSelfRef.__PVT__excUnit__DOT__abdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abd)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abd)))) {
            if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__dbin2Abd))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__alu2Abd))) {
                    vlSelfRef.__PVT__excUnit__DOT__abdIdle = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__abdMux = ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abd)
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abd)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__dbin2Abd
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__alu2Abd
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                    : 0U))));
    vlSelfRef.__PVT__excUnit__DOT__dbdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbd)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbd)))) {
            if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__alue2Dbd))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__dbin2Dbd))) {
                    if ((1U & (~ vlSelfRef.__PVT__Nanod
                               .__PVT__alu2Dbd))) {
                        if ((1U & (~ vlSelfRef.__PVT__Nanod
                                   .__PVT__dcr2Dbd))) {
                            vlSelfRef.__PVT__excUnit__DOT__dbdIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__dbdMux = ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbd)
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbd)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__alue2Dbd
                                                   ? (IData)(vlSelfRef.__PVT__alue)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__dbin2Dbd
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__alu2Dbd
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__dcr2Dbd
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dcrOutput)
                                                      : 0U))))));
    vlSelfRef.__PVT__excUnit__DOT__dblIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbl)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbl)))) {
            if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__ftu2Dbl))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__au2Db))) {
                    if ((1U & (~ vlSelfRef.__PVT__Nanod
                               .__PVT__atl2Dbl))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Dbl)))) {
                            vlSelfRef.__PVT__excUnit__DOT__dblIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__dblMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Dbl)
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                 [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Dbl)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.__PVT__Nanod
                                                  .__PVT__ftu2Dbl
                                                   ? (IData)(vlSelfRef.__PVT__ftu)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__au2Db
                                                    ? vlSelfRef.__PVT__excUnit__DOT__auReg
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__atl2Dbl
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Atl)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Dbl)
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcL)
                                                      : 0U)))))));
    vlSelfRef.__PVT__busControl__DOT__next = ((0U == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                               ? 1U
                                               : ((6U 
                                                   == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.__PVT__rDtack)) 
                                                          | (IData)(vlSelfRef.__PVT__iStop)))
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                       ? 
                                                      (((5U 
                                                         == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                                        & ((IData)(vlSelfRef.__PVT__busControl__DOT__bcReset) 
                                                           & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg)))
                                                        ? 6U
                                                        : __VdfgRegularize_hebeb780c_0_11)
                                                       : 
                                                      ((1U 
                                                        == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                        ? __VdfgRegularize_hebeb780c_0_11
                                                        : 1U)))))));
    vlSelfRef.__PVT__excUnit__DOT__ablIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Abl)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abl)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abl)))) {
                if ((1U & (~ vlSelfRef.__PVT__Nanod
                           .__PVT__ftu2Abl))) {
                    if ((1U & (~ vlSelfRef.__PVT__Nanod
                               .__PVT__au2Ab))) {
                        if ((1U & (~ vlSelfRef.__PVT__Nanod
                                   .__PVT__aob2Ab))) {
                            if ((1U & (~ vlSelfRef.__PVT__Nanod
                                       .__PVT__atl2Abl))) {
                                vlSelfRef.__PVT__excUnit__DOT__ablIdle = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__ablMux = (0x0000ffffU 
                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__Pcl2Abl)
                                                 ? (IData)(vlSelfRef.__PVT__excUnit__DOT__PcL)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxl2Abl)
                                                  ? 
                                                 ((0x11U 
                                                   >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))
                                                   ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                  [vlSelfRef.__PVT__excUnit__DOT__actualRx]
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryl2Abl)
                                                   ? 
                                                  ((0x11U 
                                                    >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))
                                                    ? vlSelfRef.__PVT__excUnit__DOT__regs68L
                                                   [vlSelfRef.__PVT__excUnit__DOT__actualRy]
                                                    : 0U)
                                                   : 
                                                  (vlSelfRef.__PVT__Nanod
                                                   .__PVT__ftu2Abl
                                                    ? (IData)(vlSelfRef.__PVT__ftu)
                                                    : 
                                                   (vlSelfRef.__PVT__Nanod
                                                    .__PVT__au2Ab
                                                     ? vlSelfRef.__PVT__excUnit__DOT__auReg
                                                     : 
                                                    (vlSelfRef.__PVT__Nanod
                                                     .__PVT__aob2Ab
                                                      ? vlSelfRef.__PVT__excUnit__DOT__aob
                                                      : 
                                                     (vlSelfRef.__PVT__Nanod
                                                      .__PVT__atl2Abl
                                                       ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Atl)
                                                       : 0U))))))));
    __PVT__excUnit__DOT__alu__DOT__shftMsb = (1U & 
                                              ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)
                                                ? ((IData)(vlSelfRef.__PVT__alue) 
                                                   >> 0x0000000fU)
                                                : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                    >> 0x0000000fU))));
    vlSelfRef.__PVT__busControl__DOT__busEnding = (
                                                   (1U 
                                                    == vlSelfRef.__PVT__busControl__DOT__next) 
                                                   | (2U 
                                                      == vlSelfRef.__PVT__busControl__DOT__next));
    __PVT__excUnit__DOT__alu__DOT__shftCin = (1U & 
                                              ((~ (
                                                   (0x10U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   | ((0x0dU 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                      | (0x0fU 
                                                         == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))))) 
                                               & (((0x11U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   | (0x0eU 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb)
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)
                                                    : 
                                                   (((0x13U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                     | (0x14U 
                                                        == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rIrd8)
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                        >> 3U) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                        >> 1U))
                                                       : (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                      >> 4U))
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                     & (vlSelfRef.__PVT__Nanod
                                                        .__PVT__aluColumn 
                                                        >> 1U)))))));
    __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
        = (((IData)(vlSelfRef.__PVT__alue) << 0x00000010U) 
           | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand));
    if (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte) 
         & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))) {
        __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffffeffU & __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                  << 8U));
    } else if (((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)) 
                & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))) {
        __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffeffffU & __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                  << 0x00000010U));
    }
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftResult 
        = (((IData)(vlSelfRef.excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords) 
            & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))
            ? ((((0x00008000U & (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                 << 0x0000000fU)) | 
                 (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                  >> 0x00000011U)) << 0x00000010U) 
               | (((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                   << 0x0000000fU) | (0x00007fffU & 
                                      (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                       >> 1U)))) : 
           ((IData)(vlSelfRef.excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords)
             ? ((((0x0000fffeU & (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                  >> 0x0000000fU)) 
                  | (IData)(__PVT__excUnit__DOT__alu__DOT__shftCin)) 
                 << 0x00000010U) | ((0x0000fffeU & 
                                     (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                      << 1U)) | (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                 >> 0x0000001fU)))
             : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight)
                 ? (((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                     << 0x0000001fU) | (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                        >> 1U)) : (
                                                   (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                    << 1U) 
                                                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftCin)))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd 
        = (((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
            | (0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
           | (0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin 
        = (1U & ((~ ((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                     | (2U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
                 & ((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    | (((0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0aU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                        ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrCore)
                        : (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                            >> 4U) & ((0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                      | (3U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))))))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand;
    if (__Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                               ? (((0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                                   + (0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa))) 
                                  + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))
                               : (((0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                                   - (0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa))) 
                                  - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result 
            = ((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                                                 >> 7U)))) 
                               << 8U)) | (0x000000ffU 
                                          & vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 8U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 7U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                     >> 7U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                     >> 7U));
    } else {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                               ? (((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                                   + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa)) 
                                  + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))
                               : (((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                                   - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa)) 
                                  - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result 
            = (0x0000ffffU & vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp);
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x10U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x0fU));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                     >> 0x0fU));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                     >> 0x0fU));
    }
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm 
        = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                  ? (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm)
                  : (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov 
        = ((((IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm) 
             & (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm)) 
            & (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm))) 
           | (((~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm)) 
               & (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm))) 
              & (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__subHcarry 
        = (1U & ((((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                   ^ (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                  ^ vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp) 
                 >> 4U));
    __PVT__excUnit__DOT__alu__DOT__subResult = vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result;
    __PVT__excUnit__DOT__alu__DOT__subCout = vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout;
    __PVT__excUnit__DOT__alu__DOT__subOv = __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov;
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                           ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                              & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                           : ((8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                               ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                  | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                               : ((9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                   ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                      ^ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                                   : ((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                       ? ((0x0000ff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)))
                                       : ((((((((((0x15U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                  || (0x0dU 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                || (0x0fU 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                               || (0x10U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                              || (0x11U 
                                                  == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                             || (0x12U 
                                                 == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                            || (0x13U 
                                                == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                           || (0x14U 
                                               == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                           ? vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftResult
                                           : ((((((
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                    || (0x0bU 
                                                        == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                   || (0x0cU 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                  || (2U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0aU 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                || (7U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                               || (3U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                               ? (IData)(__PVT__excUnit__DOT__alu__DOT__subResult)
                                               : ((
                                                   (0x16U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   || (6U 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdLatch)
                                                   : 0U))))))));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (0x00000010U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = (0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (4U & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                      ? (~ (0U != (0x000000ffU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result))))
                      : (~ (0U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result)))) 
                    << 2U)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (8U & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                      ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result) 
                         >> 7U) : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result) 
                                   >> 0x0fU)) << 3U)));
    if (((((((((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
               | (((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                   || (8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                  || (9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
              | (1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
             | (0x15U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
            | ((0x0fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
               || (0x13U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
           | ((0x10U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
              || (0x14U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
          | (0x0dU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
         | (0x0eU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        if ((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            if ((5U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                    = (0x0000000aU | (0x11U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)));
            }
        } else if ((((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                     || (8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                    || (9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (((1U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0900U 
                                                       & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))))) 
                      & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                         >> 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x15U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                            >> 0x0fU)));
        } else if (((0x0fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x13U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if (((0x10U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x14U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((~ ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                >> 7U)) & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand))));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x0dU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)) 
                            | (((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                                ^ ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)
                                    ? ((IData)(vlSelfRef.__PVT__alue) 
                                       >> 0x0eU) : 
                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                                     ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                        >> 6U) : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                  >> 0x0eU)))) 
                               << 1U))));
        } else {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)));
        }
    } else if ((0x11U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
    } else if ((0x12U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (1U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)));
    } else if (((((((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                   || (0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                  || (2U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                 || (0x0aU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                || (3U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(__PVT__excUnit__DOT__alu__DOT__subCout));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__subCout) 
                  << 4U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__subOv) 
                  << 1U));
    } else if (((0x16U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                || (6U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdCarry) 
                  << 4U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdOverf) 
                   << 1U) | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdCarry)));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp) 
                                                 & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                | ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                   & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)));
}

extern const VlUnpacked<SData/*15:0*/, 16> Vtb_system__ConstPool__TABLE_he204aa36_0;
extern const VlWide<10>/*319:0*/ Vtb_system__ConstPool__CONST_hf138cbd0_0;
extern const VlUnpacked<CData/*0:0*/, 5> Vtb_system__ConstPool__TABLE_haf575794_0;

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tState;
    __Vdly__tState = 0;
    CData/*3:0*/ __Vdly__eCntr;
    __Vdly__eCntr = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vdly__tState = vlSelfRef.__PVT__tState;
    __Vdly__eCntr = vlSelfRef.__PVT__eCntr;
    vlSelfRef.__Vdly__ftu = vlSelfRef.__PVT__ftu;
    if (((IData)(vlSelfRef.__PVT__sequencer__DOT__grp1LatchEn) 
         & (IData)(vlSelfRef.__PVT__enT3))) {
        vlSelfRef.__PVT__sequencer__DOT__rLineF = vlSelfRef.__PVT__isLineF;
        vlSelfRef.__PVT__sequencer__DOT__rLineA = vlSelfRef.__PVT__isLineA;
        vlSelfRef.__PVT__sequencer__DOT__rTrace = vlSelfRef.__PVT__Tpend;
        vlSelfRef.__PVT__sequencer__DOT__rPriv = ((
                                                   (1U 
                                                    == Vtb_system__ConstPool__TABLE_he204aa36_0
                                                    [
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.__PVT__Ir) 
                                                        >> 0x0000000cU))])
                                                    ? 
                                                   (0x007cU 
                                                    == 
                                                    (0xf5ffU 
                                                     & (IData)(vlSelfRef.__PVT__Ir)))
                                                    : 
                                                   ((0x0010U 
                                                     == Vtb_system__ConstPool__TABLE_he204aa36_0
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.__PVT__Ir) 
                                                         >> 0x0000000cU))]) 
                                                    & ((0x46c0U 
                                                        == 
                                                        (0xffc0U 
                                                         & (IData)(vlSelfRef.__PVT__Ir))) 
                                                       | ((0x4e60U 
                                                           == 
                                                           (0xfff0U 
                                                            & (IData)(vlSelfRef.__PVT__Ir))) 
                                                          | ((0x4e70U 
                                                              == (IData)(vlSelfRef.__PVT__Ir)) 
                                                             | ((0x4e73U 
                                                                 == (IData)(vlSelfRef.__PVT__Ir)) 
                                                                | (0x4e72U 
                                                                   == (IData)(vlSelfRef.__PVT__Ir)))))))) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__psw) 
                                                      >> 0x0dU)));
        vlSelfRef.__PVT__sequencer__DOT__rIllegal = 
            (((0U != ((IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll) 
                      & Vtb_system__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                       >> 0x0000000cU))])) 
              & (~ (IData)(vlSelfRef.__PVT__isLineA))) 
             & (~ (IData)(vlSelfRef.__PVT__isLineF)));
        vlSelfRef.__PVT__sequencer__DOT__rInterrupt 
            = vlSelfRef.__PVT__intPend;
    }
    if (((IData)(vlSelfRef.__PVT__sequencer__DOT__grp0LatchEn) 
         & (IData)(vlSelfRef.__PVT__enT3))) {
        vlSelfRef.__PVT__sequencer__DOT__rExcAdrErr 
            = vlSelfRef.__PVT__busAddrErr;
        vlSelfRef.__PVT__sequencer__DOT__rExcRst = vlSelfRef.__PVT__excRst;
        vlSelfRef.__PVT__sequencer__DOT__rAutovec = vlSelfRef.__PVT__Avia;
        vlSelfRef.__PVT__sequencer__DOT__rSpurious 
            = vlSelfRef.__PVT__Spuria;
        vlSelfRef.__PVT__sequencer__DOT__rExcBusErr 
            = vlSelfRef.__PVT__BerrA;
    }
    if (vlSelfRef.__PVT__enT3) {
        if ((vlSelfRef.__PVT__Nanod.__PVT__dbh2rxh 
             | vlSelfRef.__PVT__Nanod.__PVT__abh2rxh)) {
            if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))) {
                vlSelfRef.__VdlyVal__excUnit__DOT__regs68H__v0 
                    = (vlSelfRef.__PVT__Nanod.__PVT__dbh2rxh
                        ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbh)
                        : (IData)(vlSelfRef.__PVT__excUnit__DOT__Abh));
                vlSelfRef.__VdlyDim0__excUnit__DOT__regs68H__v0 
                    = vlSelfRef.__PVT__excUnit__DOT__actualRx;
                vlSelfRef.__VdlySet__excUnit__DOT__regs68H__v0 = 1U;
            }
        }
        if ((vlSelfRef.__PVT__Nanod.__PVT__dbh2ryh 
             | vlSelfRef.__PVT__Nanod.__PVT__abh2ryh)) {
            if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))) {
                vlSelfRef.__VdlyVal__excUnit__DOT__regs68H__v1 
                    = (vlSelfRef.__PVT__Nanod.__PVT__dbh2ryh
                        ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbh)
                        : (IData)(vlSelfRef.__PVT__excUnit__DOT__Abh));
                vlSelfRef.__VdlyDim0__excUnit__DOT__regs68H__v1 
                    = vlSelfRef.__PVT__excUnit__DOT__actualRy;
                vlSelfRef.__VdlySet__excUnit__DOT__regs68H__v1 = 1U;
            }
        }
        if ((vlSelfRef.__PVT__Nanod.__PVT__dbl2rxl 
             | vlSelfRef.__PVT__Nanod.__PVT__abl2rxl)) {
            if (vlSelfRef.__PVT__excUnit__DOT__rxIsAreg) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v0 
                        = (vlSelfRef.__PVT__Nanod.__PVT__dbl2rxl
                            ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbl)
                            : (IData)(vlSelfRef.__PVT__excUnit__DOT__Abl));
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v0 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v0 = 1U;
                }
            } else if (vlSelfRef.__PVT__Nanod.__PVT__dbl2rxl) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v1 
                        = vlSelfRef.__PVT__excUnit__DOT__Dbd;
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v1 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v1 = 1U;
                }
            } else if (vlSelfRef.__PVT__excUnit__DOT__abdIsByte) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v2 
                        = (0x000000ffU & (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd));
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v2 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRx;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v2 = 1U;
                }
            } else if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRx))) {
                vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v3 
                    = vlSelfRef.__PVT__excUnit__DOT__Abd;
                vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v3 
                    = vlSelfRef.__PVT__excUnit__DOT__actualRx;
                vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v3 = 1U;
            }
        }
        if ((vlSelfRef.__PVT__Nanod.__PVT__dbl2ryl 
             | vlSelfRef.__PVT__Nanod.__PVT__abl2ryl)) {
            if (vlSelfRef.__PVT__excUnit__DOT__ryIsAreg) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v4 
                        = (vlSelfRef.__PVT__Nanod.__PVT__dbl2ryl
                            ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbl)
                            : (IData)(vlSelfRef.__PVT__excUnit__DOT__Abl));
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v4 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v4 = 1U;
                }
            } else if (vlSelfRef.__PVT__Nanod.__PVT__dbl2ryl) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v5 
                        = vlSelfRef.__PVT__excUnit__DOT__Dbd;
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v5 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v5 = 1U;
                }
            } else if (vlSelfRef.__PVT__excUnit__DOT__abdIsByte) {
                if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))) {
                    vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v6 
                        = (0x000000ffU & (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd));
                    vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v6 
                        = vlSelfRef.__PVT__excUnit__DOT__actualRy;
                    vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v6 = 1U;
                }
            } else if ((0x11U >= (IData)(vlSelfRef.__PVT__excUnit__DOT__actualRy))) {
                vlSelfRef.__VdlyVal__excUnit__DOT__regs68L__v7 
                    = vlSelfRef.__PVT__excUnit__DOT__Abd;
                vlSelfRef.__VdlyDim0__excUnit__DOT__regs68L__v7 
                    = vlSelfRef.__PVT__excUnit__DOT__actualRy;
                vlSelfRef.__VdlySet__excUnit__DOT__regs68L__v7 = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
                  .__PVT__abl2Pren)))) {
        if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
             .__PVT__updPren)) {
            vlSelfRef.__PVT__excUnit__DOT__movemRx 
                = (0x0000000fU & (vlSelfRef.__PVT__Irdecod
                                  .__PVT__movemPreDecr
                                   ? (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__prHbit))
                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__prHbit)));
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
        vlSelfRef.__PVT__busControl__DOT__addrOeDelay 
            = vlSelfRef.__PVT__addrOe;
    }
    if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
         .__PVT__au2Pc)) {
        vlSelfRef.__PVT__excUnit__DOT__PcH = (vlSelfRef.__PVT__excUnit__DOT__auReg 
                                              >> 0x10U);
        vlSelfRef.__PVT__excUnit__DOT__PcL = (0x0000ffffU 
                                              & vlSelfRef.__PVT__excUnit__DOT__auReg);
    } else if (vlSelfRef.__PVT__enT3) {
        if (vlSelfRef.__PVT__excUnit__DOT__dbh2Pch) {
            vlSelfRef.__PVT__excUnit__DOT__PcH = vlSelfRef.__PVT__excUnit__DOT__Dbh;
        } else if (vlSelfRef.__PVT__excUnit__DOT__abh2Pch) {
            vlSelfRef.__PVT__excUnit__DOT__PcH = vlSelfRef.__PVT__excUnit__DOT__Abh;
        }
        if (vlSelfRef.__PVT__excUnit__DOT__dbl2Pcl) {
            vlSelfRef.__PVT__excUnit__DOT__PcL = vlSelfRef.__PVT__excUnit__DOT__Dbl;
        } else if (vlSelfRef.__PVT__excUnit__DOT__abl2Pcl) {
            vlSelfRef.__PVT__excUnit__DOT__PcL = vlSelfRef.__PVT__excUnit__DOT__Abl;
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__extReset) {
        vlSelfRef.__PVT__busArbiter__DOT__dmaPhase = 0U;
        vlSelfRef.__PVT__Err6591 = 0U;
        vlSelfRef.__PVT__busArbiter__DOT__rGranted = 0U;
        vlSelfRef.__PVT__sequencer__DOT__a0Rst = 1U;
        vlSelfRef.__PVT__excUnit__DOT__Pch2Dbh = 0U;
        vlSelfRef.__PVT__excUnit__DOT__Pch2Abh = 0U;
        vlSelfRef.__PVT__excUnit__DOT__Pcl2Dbl = 0U;
        vlSelfRef.__PVT__excUnit__DOT__Pcl2Abl = 0U;
        vlSelfRef.__PVT__rAddrErr = 0U;
        vlSelfRef.__PVT__busControl__DOT__rAS = 1U;
        vlSelfRef.__PVT__iStop = 0U;
        vlSelfRef.__PVT__iBusErr = 0U;
        vlSelfRef.__PVT__A0Err = 1U;
        vlSelfRef.__PVT__busControl__DOT__rLDS = 1U;
        vlSelfRef.__PVT__busControl__DOT__rUDS = 1U;
    } else {
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
            vlSelfRef.__PVT__busArbiter__DOT__dmaPhase 
                = vlSelfRef.__PVT__busArbiter__DOT__next;
            __Vtemp_1 = VL_MATCHMASKED_I(32, vlSelfRef.__PVT__busArbiter__DOT__next, Vtb_system__ConstPool__CONST_hf138cbd0_0);
            vlSelfRef.__PVT__busArbiter__DOT__rGranted 
                = Vtb_system__ConstPool__TABLE_haf575794_0
                [__Vtemp_1];
        }
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
            vlSelfRef.__PVT__Err6591 = vlSelfRef.__PVT__enErrClk;
            if (((IData)(vlSelfRef.__PVT__busAddrErr) 
                 & (IData)(vlSelfRef.__PVT__addrOe))) {
                vlSelfRef.__PVT__rAddrErr = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__addrOe)))) {
                vlSelfRef.__PVT__rAddrErr = 0U;
            }
            vlSelfRef.__PVT__iBusErr = (((IData)(vlSelfRef.__PVT__BerrA) 
                                         & (~ (IData)(vlSelfRef.__PVT__BeI))) 
                                        & (7U != (IData)(vlSelfRef.__PVT__rFC)));
        }
        if (vlSelfRef.__PVT__enT3) {
            vlSelfRef.__PVT__sequencer__DOT__a0Rst = 0U;
            vlSelfRef.__PVT__A0Err = 0U;
        } else if (((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                     & (IData)(vlSelfRef.__PVT__enErrClk)) 
                    & ((IData)(vlSelfRef.__PVT__busAddrErr) 
                       | (IData)(vlSelfRef.__PVT__BerrA)))) {
            vlSelfRef.__PVT__A0Err = 1U;
        }
        if (vlSelfRef.__PVT__enT4) {
            vlSelfRef.__PVT__excUnit__DOT__Pch2Dbh 
                = (vlSelfRef.__PVT__Nanod.__PVT__reg2dbh 
                   & vlSelfRef.__PVT__Nanod.__PVT__pchdbh);
            vlSelfRef.__PVT__excUnit__DOT__Pch2Abh 
                = (vlSelfRef.__PVT__Nanod.__PVT__reg2abh 
                   & vlSelfRef.__PVT__Nanod.__PVT__pchabh);
            vlSelfRef.__PVT__excUnit__DOT__Pcl2Dbl 
                = (vlSelfRef.__PVT__Nanod.__PVT__reg2dbl 
                   & vlSelfRef.__PVT__Nanod.__PVT__pcldbl);
            vlSelfRef.__PVT__excUnit__DOT__Pcl2Abl 
                = (vlSelfRef.__PVT__Nanod.__PVT__reg2abl 
                   & vlSelfRef.__PVT__Nanod.__PVT__pclabl);
        }
        if ((vlSelfRef.__PVT__Clks.__PVT__enPhi1 & 
             (2U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
            vlSelfRef.__PVT__busControl__DOT__rAS = 0U;
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__isWriteReg)) 
                       & (~ (IData)(vlSelfRef.__PVT__busAddrErr))))) {
                vlSelfRef.__PVT__busControl__DOT__rLDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bciByte)) 
                                | vlSelfRef.__PVT__excUnit__DOT__aob)));
                vlSelfRef.__PVT__busControl__DOT__rUDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bciByte)) 
                                | (~ vlSelfRef.__PVT__excUnit__DOT__aob))));
            }
        } else {
            if ((vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                 & (6U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
                vlSelfRef.__PVT__busControl__DOT__rAS = 1U;
            } else if ((0U != (0xfffffff9U & (vlSelfRef.__PVT__Clks
                                              .__PVT__enPhi2 
                                              & (5U 
                                                 == vlSelfRef.__PVT__busControl__DOT__busPhase))))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg)))) {
                    vlSelfRef.__PVT__busControl__DOT__rAS = 1U;
                }
            }
            if ((((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                   & (IData)(vlSelfRef.__PVT__busControl__DOT__isWriteReg)) 
                  & (3U == vlSelfRef.__PVT__busControl__DOT__busPhase)) 
                 & (~ (IData)(vlSelfRef.__PVT__busAddrErr)))) {
                vlSelfRef.__PVT__busControl__DOT__rLDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bciByte)) 
                                | vlSelfRef.__PVT__excUnit__DOT__aob)));
                vlSelfRef.__PVT__busControl__DOT__rUDS 
                    = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bciByte)) 
                                | (~ vlSelfRef.__PVT__excUnit__DOT__aob))));
            } else if ((vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                        & (5U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
                vlSelfRef.__PVT__busControl__DOT__rLDS = 1U;
                vlSelfRef.__PVT__busControl__DOT__rUDS = 1U;
            }
        }
        if ((1U & (~ vlSelfRef.__PVT__Clks.__PVT__enPhi1))) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
                vlSelfRef.__PVT__iStop = (((~ (IData)(vlSelfRef.__PVT__rVma)) 
                                           & (8U == (IData)(vlSelfRef.__PVT__eCntr))) 
                                          | ((IData)(vlSelfRef.__PVT__Vpai) 
                                             & ((IData)(vlSelfRef.__PVT__iAddrErr) 
                                                | (~ (IData)(vlSelfRef.__PVT__rBerr)))));
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
         .__PVT__abl2Pren)) {
        vlSelfRef.__PVT__excUnit__DOT__prenLatch = vlSelfRef.__PVT__excUnit__DOT__dbin;
    } else if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
                .__PVT__updPren)) {
        vlSelfRef.__PVT__excUnit__DOT__prenLatch = 
            ((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__excUnit__DOT__prHbit))) 
             & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch));
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        __Vdly__tState = 0U;
        vlSelfRef.__PVT__tState = __Vdly__tState;
        vlSelfRef.__Vdly__ftu = 0U;
    } else {
        if ((0U == vlSelfRef.__PVT__tState)) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
                __Vdly__tState = 4U;
            }
        } else if ((1U == vlSelfRef.__PVT__tState)) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
                __Vdly__tState = 2U;
            }
        } else if ((2U == vlSelfRef.__PVT__tState)) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
                __Vdly__tState = 3U;
            }
        } else if ((3U == vlSelfRef.__PVT__tState)) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
                __Vdly__tState = 4U;
            }
        } else if ((4U == vlSelfRef.__PVT__tState)) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
                __Vdly__tState = ((IData)(vlSelfRef.__PVT__wClk)
                                   ? 0U : 1U);
            }
        }
        vlSelfRef.__PVT__tState = __Vdly__tState;
        if (vlSelfRef.__PVT__enT3) {
            if (vlSelfRef.__PVT__Nanod.__PVT__tvn2Ftu) {
                vlSelfRef.__Vdly__ftu = ((IData)(vlSelfRef.__PVT__inExcept01)
                                          ? ((0x0cU 
                                              == (IData)(vlSelfRef.__PVT__tvnLatch))
                                              ? 0x0060U
                                              : ((0x0dU 
                                                  == (IData)(vlSelfRef.__PVT__tvnLatch))
                                                  ? 
                                                 (0x00000060U 
                                                  | ((IData)(vlSelfRef.__PVT__pswI) 
                                                     << 2U))
                                                  : 
                                                 ((0x0fU 
                                                   == (IData)(vlSelfRef.__PVT__tvnLatch))
                                                   ? 
                                                  (0x000003fcU 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      << 2U))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__tvnLatch) 
                                                   << 2U))))
                                          : (vlSelfRef.__PVT__Irdecod
                                             .__PVT__macroTvn 
                                             << 2U));
            } else if (vlSelfRef.__PVT__Nanod.__PVT__sr2Ftu) {
                vlSelfRef.__Vdly__ftu = (((IData)(vlSelfRef.__PVT__pswT) 
                                          << 0x0000000fU) 
                                         | (((IData)(vlSelfRef.__PVT__pswS) 
                                             << 0x0000000dU) 
                                            | (((IData)(vlSelfRef.__PVT__pswI) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr))));
            } else if (vlSelfRef.__PVT__Nanod.__PVT__ird2Ftu) {
                vlSelfRef.__Vdly__ftu = vlSelfRef.__PVT__Ird;
            } else if (vlSelfRef.__PVT__Nanod.__PVT__ssw2Ftu) {
                vlSelfRef.__Vdly__ftu = ((0xffe0U & (IData)(vlSelfRef.__Vdly__ftu)) 
                                         | (IData)(vlSelfRef.__PVT__ssw));
            } else {
                vlSelfRef.__Vdly__ftu = (vlSelfRef.__PVT__Nanod
                                         .__PVT__pswIToFtu
                                          ? (0x0000fff0U 
                                             | ((IData)(vlSelfRef.__PVT__pswI) 
                                                << 1U))
                                          : (vlSelfRef.__PVT__Nanod
                                             .__PVT__const2Ftu
                                              ? vlSelfRef.__PVT__Irdecod
                                             .__PVT__ftuConst
                                              : (vlSelfRef.__PVT__Nanod
                                                 .__PVT__abl2Pren
                                                  ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Abl)
                                                  : (IData)(vlSelfRef.__PVT__ftu))));
            }
        }
    }
    if ((vlSelfRef.__PVT__Nanod.__PVT__updSsw & (IData)(vlSelfRef.__PVT__enT3))) {
        vlSelfRef.__PVT__ssw = ((0x00000010U & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__isWriteReg)) 
                                                << 4U)) 
                                | (((IData)(vlSelfRef.__PVT__inExcept01) 
                                    << 3U) | (IData)(vlSelfRef.__PVT__rFC)));
    }
    if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
         .__PVT__Ir2Ird)) {
        vlSelfRef.__PVT__tvnLatch = vlSelfRef.__PVT__tvn;
        vlSelfRef.__PVT__inExcept01 = (1U != (IData)(vlSelfRef.__PVT__tvn));
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__busControl__DOT__wendReg = 0U;
        vlSelfRef.__PVT__busControl__DOT__bcPend = 0U;
        vlSelfRef.__PVT__dcr4 = 0U;
        vlSelfRef.E = 0U;
        __Vdly__eCntr = 0U;
        vlSelfRef.__PVT__rVma = 1U;
    } else {
        if ((vlSelfRef.__PVT__Clks.__PVT__enPhi2 & 
             ((5U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
              | (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)))) {
            vlSelfRef.__PVT__busControl__DOT__wendReg = 0U;
            vlSelfRef.__PVT__busControl__DOT__bcPend = 0U;
        } else {
            if (vlSelfRef.__PVT__enT1) {
                vlSelfRef.__PVT__busControl__DOT__wendReg 
                    = vlSelfRef.__PVT__Nanod.__PVT__waitBusFinish;
            }
            if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
                 .__PVT__permStart)) {
                vlSelfRef.__PVT__busControl__DOT__bcPend = 1U;
            }
        }
        if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
             .__PVT__abd2Dcr)) {
            vlSelfRef.__PVT__dcr4 = (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__Abd) 
                                           >> 4U));
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
        if ((9U == (IData)(vlSelfRef.__PVT__eCntr))) {
            vlSelfRef.E = 0U;
            __Vdly__eCntr = 0U;
        } else {
            if ((5U == (IData)(vlSelfRef.__PVT__eCntr))) {
                vlSelfRef.E = 1U;
            }
            __Vdly__eCntr = (0x0000000fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__eCntr)));
        }
    }
    if ((((vlSelfRef.__PVT__Clks.__PVT__enPhi2 & (IData)(vlSelfRef.__PVT__addrOe)) 
          & (~ (IData)(vlSelfRef.__PVT__Vpai))) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__eCntr)))) {
        vlSelfRef.__PVT__rVma = 0U;
    } else if ((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                & (0U == (IData)(vlSelfRef.__PVT__eCntr)))) {
        vlSelfRef.__PVT__rVma = 1U;
    }
    if (vlSelfRef.__PVT__enT4) {
        vlSelfRef.__VdlyVal__Nanod__v0 = (1U & (~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 0x00000013U)));
        vlSelfRef.__VdlySet__Nanod__v0 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v1 = (7U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                >> 0x00000010U));
        vlSelfRef.__VdlySet__Nanod__v1 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v2 = (3U == (3U 
                                                 & vlSelfRef.__PVT__nanoLatch[0U]));
        vlSelfRef.__VdlySet__Nanod__v2 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v3 = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                >> 0x0000000cU));
        vlSelfRef.__VdlySet__Nanod__v3 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v4 = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                >> 0x0000000dU));
        vlSelfRef.__VdlySet__Nanod__v4 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v5 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                >> 0x0000001cU));
        vlSelfRef.__VdlySet__Nanod__v5 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v6 = (1U & (vlSelfRef.__PVT__nanoLatch[2U] 
                                                >> 2U));
        vlSelfRef.__VdlySet__Nanod__v6 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v7 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                >> 3U));
        vlSelfRef.__VdlySet__Nanod__v7 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v8 = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                >> 0x0000000eU));
        vlSelfRef.__VdlySet__Nanod__v8 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v9 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                >> 2U));
        vlSelfRef.__VdlySet__Nanod__v9 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v10 = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                 >> 0x0000000fU));
        vlSelfRef.__VdlySet__Nanod__v10 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v11 = (2U == (vlSelfRef.__PVT__nanoLatch[0U] 
                                                  >> 0x0000001dU));
        vlSelfRef.__VdlySet__Nanod__v11 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v12 = (3U == (vlSelfRef.__PVT__nanoLatch[0U] 
                                                  >> 0x0000001dU));
        vlSelfRef.__VdlySet__Nanod__v12 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v13 = (4U == (vlSelfRef.__PVT__nanoLatch[0U] 
                                                  >> 0x0000001dU));
        vlSelfRef.__VdlySet__Nanod__v13 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v14 = (5U == (vlSelfRef.__PVT__nanoLatch[0U] 
                                                  >> 0x0000001dU));
        vlSelfRef.__VdlySet__Nanod__v14 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v15 = (5U == (7U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 9U)));
        vlSelfRef.__VdlySet__Nanod__v15 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v16 = ((1U == (7U 
                                                   & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                      >> 9U))) 
                                           | (5U == 
                                              (7U & 
                                               (vlSelfRef.__PVT__nanoLatch[0U] 
                                                >> 9U))));
        vlSelfRef.__VdlySet__Nanod__v16 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v17 = (4U == (7U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 9U)));
        vlSelfRef.__VdlySet__Nanod__v17 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v18 = (6U == (7U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 9U)));
        vlSelfRef.__VdlySet__Nanod__v18 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v19 = (3U == (7U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 9U)));
        vlSelfRef.__VdlySet__Nanod__v19 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v20 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 0x0000000cU));
        vlSelfRef.__VdlySet__Nanod__v20 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v21 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 0x0000000dU));
        vlSelfRef.__VdlySet__Nanod__v21 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v22 = (3U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                     >> 0x00000019U)));
        vlSelfRef.__VdlySet__Nanod__v22 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v23 = (3U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                     >> 0x0000001aU)));
        vlSelfRef.__VdlySet__Nanod__v23 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v24 = (2U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                     >> 0x0000001aU)));
        vlSelfRef.__VdlySet__Nanod__v24 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v25 = (1U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                     >> 0x00000019U)));
        vlSelfRef.__VdlySet__Nanod__v25 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v26 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 0x00000011U));
        vlSelfRef.__VdlySet__Nanod__v26 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v27 = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 0x00000010U));
        vlSelfRef.__VdlySet__Nanod__v27 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v28 = vlSelfRef.__PVT__nDecoder__DOT__dobCtrl;
        vlSelfRef.__VdlySet__Nanod__v28 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v29 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2dbl 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dblSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 8U));
        vlSelfRef.__VdlySet__Nanod__v29 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v30 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2abl 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__ablSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 8U)));
        vlSelfRef.__VdlySet__Nanod__v30 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v31 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__dbl2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dblSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 8U));
        vlSelfRef.__VdlySet__Nanod__v31 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v32 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__abl2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__ablSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 8U)));
        vlSelfRef.__VdlySet__Nanod__v32 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v33 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2dbh 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dbhSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[0U] 
                                              >> 0x00000016U));
        vlSelfRef.__VdlySet__Nanod__v33 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v34 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2abh 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__abhSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                 >> 0x00000016U)));
        vlSelfRef.__VdlySet__Nanod__v34 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v35 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__dbh2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dbhSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[0U] 
                                              >> 0x00000016U));
        vlSelfRef.__VdlySet__Nanod__v35 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v36 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__abh2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__abhSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                 >> 0x00000016U)));
        vlSelfRef.__VdlySet__Nanod__v36 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v37 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__dbh2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dbhSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                 >> 0x00000016U)));
        vlSelfRef.__VdlySet__Nanod__v37 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v38 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__abh2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__abhSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[0U] 
                                              >> 0x00000016U));
        vlSelfRef.__VdlySet__Nanod__v38 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v39 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__dbl2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dblSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 8U)));
        vlSelfRef.__VdlySet__Nanod__v39 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v40 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__abl2reg 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__ablSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 8U));
        vlSelfRef.__VdlySet__Nanod__v40 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v41 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2dbl 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dblSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[1U] 
                                                 >> 8U)));
        vlSelfRef.__VdlySet__Nanod__v41 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v42 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2abl 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__ablSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 8U));
        vlSelfRef.__VdlySet__Nanod__v42 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v43 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2dbh 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__dbhSpecial))) 
                                           & (~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                 >> 0x00000016U)));
        vlSelfRef.__VdlySet__Nanod__v43 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v44 = ((vlSelfRef.__PVT__Nanod
                                            .__PVT__reg2abh 
                                            & (~ (IData)(vlSelfRef.__PVT__nDecoder__DOT__abhSpecial))) 
                                           & (vlSelfRef.__PVT__nanoLatch[0U] 
                                              >> 0x00000016U));
        vlSelfRef.__VdlySet__Nanod__v44 = 1U;
        vlSelfRef.__VdlyVal__Nanod__v45 = (vlSelfRef.__PVT__Irdecod
                                           .__PVT__isTas 
                                           & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 0x0000000aU));
        vlSelfRef.__VdlySet__Nanod__v45 = 1U;
        vlSelfRef.__PVT__excUnit__DOT__byteNotSpAlign 
            = (vlSelfRef.__PVT__Irdecod.__PVT__isByte 
               & (~ (vlSelfRef.__PVT__Nanod.__PVT__rxlDbl
                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsSp)
                      : (IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsSp))));
        vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl = (
                                                   (((2U 
                                                      & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                         >> 0x00000018U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                           >> 0x0000001aU))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                          >> 0x0000001aU)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                            >> 0x0000001cU))));
        vlSelfRef.__PVT__excUnit__DOT__actualRx = vlSelfRef.__PVT__excUnit__DOT__rxMux;
        vlSelfRef.__PVT__excUnit__DOT__actualRy = vlSelfRef.__PVT__excUnit__DOT__ryMux;
        vlSelfRef.__PVT__excUnit__DOT__rxIsAreg = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxIsSp) 
                                                      | ((IData)(vlSelfRef.__PVT__excUnit__DOT__rxMux) 
                                                         >> 3U)));
        vlSelfRef.__PVT__excUnit__DOT__ryIsAreg = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryIsSp) 
                                                      | ((IData)(vlSelfRef.__PVT__excUnit__DOT__ryMux) 
                                                         >> 3U)));
        vlSelfRef.__PVT__Avia = ((~ (IData)(vlSelfRef.__PVT__Vpai)) 
                                 & (7U == (IData)(vlSelfRef.__PVT__rFC)));
        vlSelfRef.__PVT__Spuria = ((~ (IData)(vlSelfRef.__PVT__BeiDelay)) 
                                   & (7U == (IData)(vlSelfRef.__PVT__rFC)));
    }
    if (vlSelfRef.__PVT__Clks.__PVT__extReset) {
        vlSelfRef.__PVT__excRst = 1U;
        vlSelfRef.__PVT__intPend = 0U;
        vlSelfRef.__PVT__nanoLatch[0U] = 0U;
        vlSelfRef.__PVT__nanoLatch[1U] = 0U;
        vlSelfRef.__PVT__nanoLatch[2U] = 0U;
        vlSelfRef.__PVT__BerrA = 0U;
        vlSelfRef.__PVT__excUnit__DOT__dbh2Pch = 0U;
        vlSelfRef.__PVT__excUnit__DOT__abh2Pch = 0U;
        vlSelfRef.__PVT__excUnit__DOT__dbl2Pcl = 0U;
        vlSelfRef.__PVT__excUnit__DOT__abl2Pcl = 0U;
        vlSelfRef.__PVT__prevNmi = 0U;
        vlSelfRef.__PVT__rFC = 0U;
        vlSelfRef.__PVT__addrOe = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__enT2) & vlSelfRef.__PVT__Nanod
             .__PVT__permStart)) {
            vlSelfRef.__PVT__excRst = 0U;
        }
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
            if (((IData)(vlSelfRef.__PVT__iplStable) 
                 & (((7U == (IData)(vlSelfRef.__PVT__iIpl)) 
                     & (~ (IData)(vlSelfRef.__PVT__prevNmi))) 
                    | (IData)(vlSelfRef.__PVT__iplComp)))) {
                vlSelfRef.__PVT__intPend = 1U;
            } else if ((((7U == (IData)(vlSelfRef.__PVT__inl)) 
                         & (7U == (IData)(vlSelfRef.__PVT__rFC))) 
                        | (((IData)(vlSelfRef.__PVT__iplStable) 
                            & (7U != (IData)(vlSelfRef.__PVT__iIpl))) 
                           & (~ (IData)(vlSelfRef.__PVT__iplComp))))) {
                vlSelfRef.__PVT__intPend = 0U;
            }
            if ((((~ (IData)(vlSelfRef.__PVT__BeI)) 
                  & (7U != (IData)(vlSelfRef.__PVT__rFC))) 
                 & (IData)(vlSelfRef.__PVT__addrOe))) {
                vlSelfRef.__PVT__BerrA = 1U;
            } else if (((IData)(vlSelfRef.__PVT__BeI) 
                        & (2U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
                vlSelfRef.__PVT__BerrA = 0U;
            }
            vlSelfRef.__PVT__prevNmi = (7U == (IData)(vlSelfRef.__PVT__iIpl));
        }
        if (vlSelfRef.__PVT__rstUrom) {
            vlSelfRef.__PVT__nanoLatch[0U] = 0U;
            vlSelfRef.__PVT__nanoLatch[1U] = 0U;
            vlSelfRef.__PVT__nanoLatch[2U] = 0U;
        } else if (vlSelfRef.__PVT__enT3) {
            vlSelfRef.__PVT__nanoLatch[0U] = vlSelfRef.__PVT__nanoOutput[0U];
            vlSelfRef.__PVT__nanoLatch[1U] = vlSelfRef.__PVT__nanoOutput[1U];
            vlSelfRef.__PVT__nanoLatch[2U] = vlSelfRef.__PVT__nanoOutput[2U];
        }
        if (vlSelfRef.__PVT__enT4) {
            vlSelfRef.__PVT__excUnit__DOT__dbh2Pch 
                = (vlSelfRef.__PVT__Nanod.__PVT__dbh2reg 
                   & vlSelfRef.__PVT__Nanod.__PVT__pchdbh);
            vlSelfRef.__PVT__excUnit__DOT__abh2Pch 
                = (vlSelfRef.__PVT__Nanod.__PVT__abh2reg 
                   & vlSelfRef.__PVT__Nanod.__PVT__pchabh);
            vlSelfRef.__PVT__excUnit__DOT__dbl2Pcl 
                = (vlSelfRef.__PVT__Nanod.__PVT__dbl2reg 
                   & vlSelfRef.__PVT__Nanod.__PVT__pcldbl);
            vlSelfRef.__PVT__excUnit__DOT__abl2Pcl 
                = (vlSelfRef.__PVT__Nanod.__PVT__abl2reg 
                   & vlSelfRef.__PVT__Nanod.__PVT__pclabl);
        }
        if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
             .__PVT__permStart)) {
            vlSelfRef.__PVT__rFC = ((3U & (IData)(vlSelfRef.__PVT__rFC)) 
                                    | ((IData)(vlSelfRef.__PVT__pswS) 
                                       << 2U));
            vlSelfRef.__PVT__rFC = ((5U & (IData)(vlSelfRef.__PVT__rFC)) 
                                    | (2U & ((0x0001fffeU 
                                              & (vlSelfRef.__PVT__microLatch 
                                                 >> 0x0000000fU)) 
                                             | (((~ 
                                                  (vlSelfRef.__PVT__microLatch 
                                                   >> 0x0fU)) 
                                                 & vlSelfRef.__PVT__Irdecod
                                                 .__PVT__isPcRel) 
                                                << 1U))));
            vlSelfRef.__PVT__rFC = ((6U & (IData)(vlSelfRef.__PVT__rFC)) 
                                    | (1U & ((vlSelfRef.__PVT__microLatch 
                                              >> 0x0fU) 
                                             | ((~ 
                                                 (vlSelfRef.__PVT__microLatch 
                                                  >> 0x10U)) 
                                                & (~ vlSelfRef.__PVT__Irdecod
                                                   .__PVT__isPcRel)))));
        }
        if ((vlSelfRef.__PVT__Clks.__PVT__enPhi2 & 
             (2U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
            vlSelfRef.__PVT__addrOe = 1U;
        } else if ((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                    & (6U == vlSelfRef.__PVT__busControl__DOT__busPhase))) {
            vlSelfRef.__PVT__addrOe = 0U;
        } else if (((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                     & (~ (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg))) 
                    & (IData)(vlSelfRef.__PVT__busControl__DOT__busEnding))) {
            vlSelfRef.__PVT__addrOe = 0U;
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__Tpend = 0U;
        vlSelfRef.__PVT__busControl__DOT__bciByte = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enT4)))) {
            if (vlSelfRef.__PVT__enT3) {
                if (vlSelfRef.__PVT__Nanod.__PVT__updTpend) {
                    vlSelfRef.__PVT__Tpend = vlSelfRef.__PVT__pswT;
                } else if (vlSelfRef.__PVT__Nanod.__PVT__clrTpend) {
                    vlSelfRef.__PVT__Tpend = 0U;
                }
            }
        }
        if ((1U & (~ (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                      & ((5U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                         | (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)))))) {
            if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
                 .__PVT__permStart)) {
                vlSelfRef.__PVT__busControl__DOT__bciByte 
                    = vlSelfRef.__PVT__busControl__DOT__isByteT4;
            }
        }
    }
    if ((1U & (~ vlSelfRef.__PVT__Clks.__PVT__pwrUp))) {
        if ((1U & (~ vlSelfRef.__PVT__Clks.__PVT__enPhi2))) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
                vlSelfRef.__PVT__Halti = 1U;
                vlSelfRef.__PVT__BgackI = 1U;
                vlSelfRef.__PVT__BRi = 1U;
                vlSelfRef.__PVT__Vpai = vlSymsp->TOP.tb_system__DOT__main_board__DOT__vpa_n;
                vlSelfRef.__PVT__BeiDelay = vlSelfRef.__PVT__BeI;
            }
        }
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
            vlSelfRef.__PVT__rDtack = (1U & (~ ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_ram) 
                                                | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_vram) 
                                                   | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_spr) 
                                                      | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_ptm) 
                                                         | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_in0) 
                                                            | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_in1) 
                                                               | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_dsw) 
                                                                  | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_pal) 
                                                                     | ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_wdt) 
                                                                        | (((IData)(vlSymsp->TOP.tb_system__DOT__mrom_ack) 
                                                                            & (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_rom)) 
                                                                           | (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__sel_ctl)))))))))))));
        }
        if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
             .__PVT__abd2Dcr)) {
            vlSelfRef.__PVT__excUnit__DOT__dcrOutput 
                = Vtb_system__ConstPool__TABLE_he204aa36_0
                [((8U & (((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__abdIsByte)) 
                          << 3U) & (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd))) 
                  | (7U & (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd)))];
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__BeI = 0U;
        vlSelfRef.__PVT__pswT = 0U;
        vlSelfRef.__PVT__pswS = 0U;
        vlSelfRef.__PVT__pswI = 0U;
    } else {
        if ((1U & (~ vlSelfRef.__PVT__Clks.__PVT__enPhi2))) {
            if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
                vlSelfRef.__PVT__BeI = vlSelfRef.__PVT__rBerr;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enT4)))) {
            if (vlSelfRef.__PVT__enT3) {
                if ((vlSelfRef.__PVT__Nanod.__PVT__ftu2Sr 
                     & (~ (IData)(vlSelfRef.__PVT__irdToCcr_t4)))) {
                    vlSelfRef.__PVT__pswT = (1U & ((IData)(vlSelfRef.__PVT__ftu) 
                                                   >> 0x0fU));
                    vlSelfRef.__PVT__pswS = (1U & ((IData)(vlSelfRef.__PVT__ftu) 
                                                   >> 0x0dU));
                    vlSelfRef.__PVT__pswI = (7U & ((IData)(vlSelfRef.__PVT__ftu) 
                                                   >> 8U));
                } else {
                    if (vlSelfRef.__PVT__Nanod.__PVT__initST) {
                        vlSelfRef.__PVT__pswS = 1U;
                        vlSelfRef.__PVT__pswT = 0U;
                    }
                    if (vlSelfRef.__PVT__Nanod.__PVT__inl2psw) {
                        vlSelfRef.__PVT__pswI = vlSelfRef.__PVT__inl;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__extReset) {
        vlSelfRef.__PVT__inl = 7U;
        vlSelfRef.__PVT__updIll = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enT4)))) {
            if (((IData)(vlSelfRef.__PVT__enT1) & (IData)(vlSelfRef.__PVT__updIll))) {
                vlSelfRef.__PVT__inl = vlSelfRef.__PVT__iIpl;
            }
        }
        if (vlSelfRef.__PVT__enT4) {
            vlSelfRef.__PVT__updIll = (1U & vlSelfRef.__PVT__microLatch);
        }
    }
    if ((1U & (~ vlSelfRef.__PVT__Clks.__PVT__pwrUp))) {
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
            vlSelfRef.__PVT__iIpl = vlSelfRef.__PVT__rIpl;
            vlSelfRef.__PVT__rIpl = (7U & (~ (4U | 
                                              ((2U 
                                                & ((~ (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__ptm_irq)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__irq493)))))));
        }
    }
    vlSelfRef.__PVT__sequencer__DOT__grp1Nma = 0x01c0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__sequencer__DOT__rExcRst)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__sequencer__DOT__rExcBusErr) 
                      | (IData)(vlSelfRef.__PVT__sequencer__DOT__rExcAdrErr))))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__sequencer__DOT__rSpurious) 
                          | (IData)(vlSelfRef.__PVT__sequencer__DOT__rAutovec))))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__sequencer__DOT__rTrace)))) {
                    if (vlSelfRef.__PVT__sequencer__DOT__rInterrupt) {
                        vlSelfRef.__PVT__sequencer__DOT__grp1Nma = 0x01c4U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__enT3) {
        if (vlSelfRef.__PVT__Nanod.__PVT__abh2Ath) {
            vlSelfRef.__PVT__excUnit__DOT__Ath = vlSelfRef.__PVT__excUnit__DOT__Abh;
        } else if (vlSelfRef.__PVT__Nanod.__PVT__dbh2Ath) {
            vlSelfRef.__PVT__excUnit__DOT__Ath = vlSelfRef.__PVT__excUnit__DOT__Dbh;
        }
        if (vlSelfRef.__PVT__Nanod.__PVT__dbl2Atl) {
            vlSelfRef.__PVT__excUnit__DOT__Atl = vlSelfRef.__PVT__excUnit__DOT__Dbl;
        } else if (vlSelfRef.__PVT__Nanod.__PVT__abl2Atl) {
            vlSelfRef.__PVT__excUnit__DOT__Atl = vlSelfRef.__PVT__excUnit__DOT__Abl;
        }
        if (vlSelfRef.__PVT__Nanod.__PVT__dbd2Alub) {
            vlSelfRef.__PVT__excUnit__DOT__alub = vlSelfRef.__PVT__excUnit__DOT__Dbd;
        } else if (vlSelfRef.__PVT__Nanod.__PVT__abd2Alub) {
            vlSelfRef.__PVT__excUnit__DOT__alub = vlSelfRef.__PVT__excUnit__DOT__Abd;
        }
    }
    if (vlSelfRef.__PVT__enT2) {
        vlSelfRef.__PVT__excUnit__DOT__Abh = (0x0000ffffU 
                                              & (vlSelfRef.__PVT__Nanod
                                                 .__PVT__extAbh
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__ablIdle)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__preAbd) 
                                                                 >> 0x0fU)
                                                                 : 
                                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__preAbl) 
                                                                 >> 0x0fU)))))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__excUnit__DOT__abhIdle)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__excUnit__DOT__ablIdle)
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbd)
                                                    : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbl))
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbh))));
        vlSelfRef.__PVT__excUnit__DOT__Abl = ((IData)(vlSelfRef.__PVT__excUnit__DOT__ablIdle)
                                               ? (vlSelfRef.__PVT__Nanod
                                                  .__PVT__ablAbh
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbh)
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbd))
                                               : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbl));
        vlSelfRef.__PVT__excUnit__DOT__Abd = ((IData)(vlSelfRef.__PVT__excUnit__DOT__abdIdle)
                                               ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__ablIdle)
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbh)
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbl))
                                               : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbd));
    }
    vlSelfRef.__PVT__excUnit__DOT__prHbit = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0fU;
    }
    if ((0x00004000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0eU;
    }
    if ((0x00002000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0dU;
    }
    if ((0x00001000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0cU;
    }
    if ((0x00000800U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0bU;
    }
    if ((0x00000400U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0x0aU;
    }
    if ((0x00000200U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 9U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 8U;
    }
    if ((0x00000080U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 7U;
    }
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 6U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 5U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 4U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 3U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 2U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch))) {
        vlSelfRef.__PVT__excUnit__DOT__prHbit = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToDbin) 
         & vlSelfRef.__PVT__Clks.__PVT__enPhi2)) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dbinNoLow)))) {
            vlSelfRef.__PVT__excUnit__DOT__dbin = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__byteMux)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__cpu_din) 
                                                          >> 8U)
                                                          : (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__cpu_din))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dbinNoHigh)))) {
            vlSelfRef.__PVT__excUnit__DOT__dbin = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.__PVT__excUnit__DOT__dbin)) 
                                                   | (0x0000ff00U 
                                                      & ((((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__byteMux)) 
                                                           & (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dbinNoLow))
                                                           ? (IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__cpu_din)
                                                           : 
                                                          ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__cpu_din) 
                                                           >> 8U)) 
                                                         << 8U)));
        }
    }
    if (vlSelfRef.__PVT__enT3) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dbinNoLow 
            = vlSelfRef.__PVT__Nanod.__PVT__noLowByte;
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dbinNoHigh 
            = vlSelfRef.__PVT__Nanod.__PVT__noHighByte;
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__byteMux 
            = ((vlSelfRef.__PVT__Nanod.__PVT__busByte 
                & (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__isByte_T4)) 
               & (~ vlSelfRef.__PVT__excUnit__DOT__aob));
    }
    if (vlSelfRef.__PVT__enT4) {
        vlSelfRef.__PVT__excUnit__DOT__abdIsByte = 
            (vlSelfRef.__PVT__Nanod.__PVT__abdIsByte 
             & vlSelfRef.__PVT__Irdecod.__PVT__isByte);
        vlSelfRef.__PVT__busControl__DOT__isByteT4 
            = (vlSelfRef.__PVT__Nanod.__PVT__busByte 
               & (vlSelfRef.__PVT__Irdecod.__PVT__isByte 
                  | vlSelfRef.__PVT__Irdecod.__PVT__isMovep));
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__isByte_T4 
            = vlSelfRef.__PVT__Irdecod.__PVT__isByte;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((2U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__rUDS)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__busControl__DOT__rLDS))));
    vlSelfRef.__PVT__eCntr = __Vdly__eCntr;
    vlSelfRef.__PVT__nDecoder__DOT__dobCtrl = ((2U 
                                                & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 0x00000017U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                     >> 0x00000015U)));
    vlSelfRef.__PVT__tvn = ((IData)(vlSelfRef.__PVT__sequencer__DOT__rExcRst)
                             ? 0U : (0x0000000fU & 
                                     (((IData)(vlSelfRef.__PVT__sequencer__DOT__rExcBusErr) 
                                       | (IData)(vlSelfRef.__PVT__sequencer__DOT__rExcAdrErr))
                                       ? (2U | (IData)(vlSelfRef.__PVT__sequencer__DOT__rExcAdrErr))
                                       : (((IData)(vlSelfRef.__PVT__sequencer__DOT__rSpurious) 
                                           | (IData)(vlSelfRef.__PVT__sequencer__DOT__rAutovec))
                                           ? ((IData)(vlSelfRef.__PVT__sequencer__DOT__rSpurious)
                                               ? 0x0000000cU
                                               : 0x0000000dU)
                                           : ((IData)(vlSelfRef.__PVT__sequencer__DOT__rTrace)
                                               ? 9U
                                               : ((IData)(vlSelfRef.__PVT__sequencer__DOT__rInterrupt)
                                                   ? 0x0fU
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__sequencer__DOT__rIllegal)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__sequencer__DOT__rPriv)
                                                     ? 8U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__sequencer__DOT__rLineA)
                                                      ? 0x0aU
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__sequencer__DOT__rLineF)
                                                       ? 0x0bU
                                                       : 1U))))))))));
    vlSelfRef.__PVT__iAddrErr = ((IData)(vlSelfRef.__PVT__addrOe) 
                                 & (IData)(vlSelfRef.__PVT__rAddrErr));
    if (((IData)(vlSelfRef.__PVT__enT1) & (vlSelfRef.__PVT__Nanod
                                           .__PVT__au2Aob 
                                           | (vlSelfRef.__PVT__Nanod
                                              .__PVT__au2Db 
                                              & vlSelfRef.__PVT__Nanod
                                              .__PVT__db2Aob)))) {
        vlSelfRef.__PVT__excUnit__DOT__aob = vlSelfRef.__PVT__excUnit__DOT__auReg;
    } else if (vlSelfRef.__PVT__enT2) {
        if (vlSelfRef.__PVT__Nanod.__PVT__db2Aob) {
            vlSelfRef.__PVT__excUnit__DOT__aob = (((IData)(vlSelfRef.__PVT__excUnit__DOT__preDbh) 
                                                   << 0x00000010U) 
                                                  | ((IData)(vlSelfRef.__PVT__excUnit__DOT__dblIdle)
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbd)
                                                      : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbl)));
        } else if (vlSelfRef.__PVT__Nanod.__PVT__ab2Aob) {
            vlSelfRef.__PVT__excUnit__DOT__aob = (((IData)(vlSelfRef.__PVT__excUnit__DOT__preAbh) 
                                                   << 0x00000010U) 
                                                  | ((IData)(vlSelfRef.__PVT__excUnit__DOT__ablIdle)
                                                      ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbd)
                                                      : (IData)(vlSelfRef.__PVT__excUnit__DOT__preAbl)));
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__busControl__DOT__isRmcReg = 0U;
        vlSelfRef.__PVT__rBerr = 0U;
        vlSelfRef.__PVT__irdToCcr_t4 = 0U;
        vlSelfRef.__PVT__excUnit__DOT__auReg = 0U;
    } else {
        if ((1U & (~ (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                      & ((5U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                         | (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)))))) {
            if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
                 .__PVT__permStart)) {
                vlSelfRef.__PVT__busControl__DOT__isRmcReg 
                    = (vlSelfRef.__PVT__Nanod.__PVT__isRmc 
                       & (~ vlSelfRef.__PVT__Nanod.__PVT__isWrite));
            }
        }
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi2) {
            vlSelfRef.__PVT__rBerr = 1U;
        }
        if (vlSelfRef.__PVT__enT4) {
            vlSelfRef.__PVT__irdToCcr_t4 = vlSelfRef.__PVT__Irdecod
                .__PVT__toCcr;
        }
        if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
             .__PVT__auClkEn)) {
            vlSelfRef.__PVT__excUnit__DOT__auReg = 
                ((((IData)(vlSelfRef.__PVT__excUnit__DOT__Dbh) 
                   + ((vlSelfRef.__PVT__excUnit__DOT__auInpMux 
                       >> 0x00000010U) + (1U & (vlSelfRef.__PVT__excUnit__DOT__aulow 
                                                >> 0x00000010U)))) 
                  << 0x00000010U) | (0x0000ffffU & vlSelfRef.__PVT__excUnit__DOT__aulow));
        }
    }
    if (vlSelfRef.__PVT__enT1) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToDbin = 0U;
        vlSelfRef.__PVT__excUnit__DOT__preAbd = vlSelfRef.__PVT__excUnit__DOT__abdMux;
        vlSelfRef.__PVT__excUnit__DOT__preAbh = vlSelfRef.__PVT__excUnit__DOT__abhMux;
        vlSelfRef.__PVT__excUnit__DOT__preAbl = vlSelfRef.__PVT__excUnit__DOT__ablMux;
    } else if (vlSelfRef.__PVT__enT3) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToDbin 
            = vlSelfRef.__PVT__Nanod.__PVT__todbin;
    }
    vlSelfRef.__PVT__enErrClk = ((IData)(vlSelfRef.__PVT__iBusErr) 
                                 | (IData)(vlSelfRef.__PVT__iAddrErr));
    vlSelfRef.__PVT__busAddrErr = (1U & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bciByte)) 
                                         & vlSelfRef.__PVT__excUnit__DOT__aob));
    vlSelfRef.__PVT__iplComp = ((IData)(vlSelfRef.__PVT__iIpl) 
                                > (IData)(vlSelfRef.__PVT__pswI));
    vlSelfRef.__PVT__iplStable = ((IData)(vlSelfRef.__PVT__iIpl) 
                                  == (IData)(vlSelfRef.__PVT__rIpl));
}

extern const VlWide<20>/*639:0*/ Vtb_system__ConstPool__CONST_h79f0020d_0;
extern const VlUnpacked<CData/*0:0*/, 10> Vtb_system__ConstPool__TABLE_h163a3758_0;

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_19;
    __VdfgRegularize_hebeb780c_0_19 = 0;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_23;
    __VdfgRegularize_hebeb780c_0_23 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_25;
    __VdfgRegularize_hebeb780c_0_25 = 0;
    CData/*4:0*/ __Vdly__excUnit__DOT__alu__DOT__pswCcr;
    __Vdly__excUnit__DOT__alu__DOT__pswCcr = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vdly__excUnit__DOT__alu__DOT__pswCcr = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr;
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        __Vdly__excUnit__DOT__alu__DOT__pswCcr = 0U;
    } else if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
                .__PVT__ftu2Ccr)) {
        __Vdly__excUnit__DOT__alu__DOT__pswCcr = (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ftu));
    } else if ((((IData)(vlSelfRef.__PVT__enT3) & (~ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__noCcrEn))) 
                & (vlSelfRef.__PVT__Nanod.__PVT__aluFinish 
                   | vlSelfRef.__PVT__Nanod.__PVT__aluInit))) {
        __Vdly__excUnit__DOT__alu__DOT__pswCcr = ((0x00000018U 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
                                                  | ((4U 
                                                      & (((vlSelfRef.__PVT__Nanod
                                                           .__PVT__aluFinish 
                                                           | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isArX))
                                                           ? 
                                                          (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                            & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                                                           >> 2U)
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                                                           >> 2U)) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))));
    }
    if (vlSelfRef.__PVT__enT1) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdLatch 
            = ((0x000000f0U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
                               << 4U)) | (0x0000000fU 
                                          & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp)));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdCarry 
            = (1U & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                      | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib)) 
                     >> 4U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdOverf 
            = (1U & ((6U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                      ? ((~ ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch) 
                             >> 7U)) & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                        >> 3U)) : (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch) 
                                                      >> 7U))));
    }
    if (vlSelfRef.__PVT__enT4) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrMask 
            = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask;
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong 
            = (1U & (IData)(((0U != (0x0082U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) 
                             | (0x0080U == (0x00c0U 
                                            & (IData)(vlSelfRef.__PVT__Ird))))));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper 
            = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp;
    }
    if (vlSelfRef.__PVT__enT3) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte 
            = vlSelfRef.__PVT__Irdecod.__PVT__isByte;
        if ((0U != vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__coreH 
                = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__subHcarry;
            if ((0U != vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrCore 
                    = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp;
            }
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch 
                = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result;
        }
        if (((IData)(vlSelfRef.__PVT__enT3) & vlSelfRef.__PVT__Nanod
             .__PVT__dbd2Alue)) {
            vlSelfRef.__PVT__alue = vlSelfRef.__PVT__excUnit__DOT__Dbd;
        } else if (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isShift) 
                    & (0U != vlSelfRef.__PVT__Nanod
                       .__PVT__aluColumn))) {
            vlSelfRef.__PVT__alue = (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftResult 
                                     >> 0x10U);
        }
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rIrd8 
            = (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                     >> 8U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__noCcrEn 
            = ((IData)((0x90c0U == (0xb0c0U & (IData)(vlSelfRef.__PVT__Ird)))) 
               | ((IData)((0x2040U == (0xe1c0U & (IData)(vlSelfRef.__PVT__Ird)))) 
                  | (IData)((0x5008U == (0xf038U & (IData)(vlSelfRef.__PVT__Ird))))));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isArX 
            = ((IData)((0U != (0x1400U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow)))) 
               & ((4U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0000000cU))) 
                  | ((9U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 0x0000000cU))) 
                     | (0x0dU == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                                 >> 0x0000000cU))))));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row 
            = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow;
    }
    if ((0x014fU >= (IData)(vlSelfRef.__PVT__nanoAddr))) {
        vlSelfRef.__PVT__nanoOutput[0U] = vlSelfRef.__PVT__nanoRom__DOT__nRam
            [vlSelfRef.__PVT__nanoAddr][0U];
        vlSelfRef.__PVT__nanoOutput[1U] = vlSelfRef.__PVT__nanoRom__DOT__nRam
            [vlSelfRef.__PVT__nanoAddr][1U];
        vlSelfRef.__PVT__nanoOutput[2U] = vlSelfRef.__PVT__nanoRom__DOT__nRam
            [vlSelfRef.__PVT__nanoAddr][2U];
    } else {
        vlSelfRef.__PVT__nanoOutput[0U] = 0U;
        vlSelfRef.__PVT__nanoOutput[1U] = 0U;
        vlSelfRef.__PVT__nanoOutput[2U] = 0U;
    }
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr 
        = __Vdly__excUnit__DOT__alu__DOT__pswCcr;
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isShift = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
        if ((8U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            if ((9U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
                if ((5U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
                    if ((((((((((0x15U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                || (0x0dU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                               || (0x0eU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                              || (0x0fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                             || (0x10U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                            || (0x11U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                           || (0x12U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                          || (0x13U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                         || (0x14U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
                        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isShift = 1U;
                    }
                }
            }
        }
    }
    __Vtemp_1 = VL_MATCHMASKED_I(32, (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper), Vtb_system__ConstPool__CONST_h79f0020d_0);
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight 
        = Vtb_system__ConstPool__TABLE_h163a3758_0[__Vtemp_1];
    __VdfgRegularize_hebeb780c_0_24 = (6U & (- (IData)(
                                                       ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__coreH) 
                                                        | ((6U 
                                                            != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                           & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch) 
                                                               >> 3U) 
                                                              & (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch) 
                                                                     >> 1U)))))))));
    vlSelfRef.excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords 
        = (IData)((0U != (0x0082U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))));
    __VdfgRegularize_hebeb780c_0_19 = (0x000001ffU 
                                       & ((0x000000ffU 
                                           & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)) 
                                          - (IData)(__VdfgRegularize_hebeb780c_0_24)));
    __VdfgRegularize_hebeb780c_0_25 = (0x000001ffU 
                                       & ((IData)(__VdfgRegularize_hebeb780c_0_24) 
                                          + (0x000000ffU 
                                             & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch))));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp 
        = ((6U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(__VdfgRegularize_hebeb780c_0_25)
            : (IData)(__VdfgRegularize_hebeb780c_0_19));
    __VdfgRegularize_hebeb780c_0_23 = (6U & (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                            >> 4U) 
                                                           | ((6U 
                                                               != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                              & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                  >> 8U) 
                                                                 | (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                           >> 5U)))))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = (0x0000001fU 
                                                 & (((IData)(__VdfgRegularize_hebeb780c_0_19) 
                                                     >> 4U) 
                                                    - (IData)(__VdfgRegularize_hebeb780c_0_23)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = (0x0000001fU 
                                                 & (((IData)(__VdfgRegularize_hebeb780c_0_25) 
                                                     >> 4U) 
                                                    + (IData)(__VdfgRegularize_hebeb780c_0_23)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib 
        = ((6U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20));
}

extern const VlWide<274>/*8767:0*/ Vtb_system__ConstPool__CONST_h1528ed39_0;
extern const VlUnpacked<CData/*6:0*/, 137> Vtb_system__ConstPool__TABLE_h292666c2_0;
extern const VlWide<16>/*511:0*/ Vtb_system__ConstPool__CONST_he0dc4311_0;
extern const VlUnpacked<SData/*10:0*/, 8> Vtb_system__ConstPool__TABLE_h911422d5_0;
extern const VlWide<26>/*831:0*/ Vtb_system__ConstPool__CONST_he4e93662_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h7dd77d9e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hbae207b6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h68e348e7_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h9e077beb_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h9856367f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h32fa7448_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h43eeafa8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hac4b9c1a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hb2f687d9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hbe127729_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h7b3264b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h6d6f8a73_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hd082d1c8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h0f86901e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hfef82f04_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h2697a45d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_h8df97df5_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_h0088877f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_hcd9cce84_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_h38dd4db7_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_he5a4ad0d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_he13c6a00_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_h7e3d08c6_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_ha137bec4_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_hacf0eeca_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_haf34f21f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_ha4b3081e_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_system__ConstPool__TABLE_hccb66154_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h9cd354aa_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h3e2181b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hd2959be6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h13aa4342_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h89c98bd1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h8c87e397_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h076b5ef1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h5fe6edae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h057bcb4f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hdb878943_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hb9b985c2_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hc118f1ba_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hbc774d6a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h9f4d8f37_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hc90e0332_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h6c6b9226_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h4d8af2d8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hc2184f42_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h512d5c40_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h68d6d722_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hb4efbd7e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hcad3a1c4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h48910ea9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h2334f8f1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h6feb013a_0;
extern const VlWide<20>/*639:0*/ Vtb_system__ConstPool__CONST_h0c7e2d64_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_system__ConstPool__TABLE_h6c931bbf_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h3327f4a6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_haf48ddb4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_he9046c6e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h6d5e945a_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_system__ConstPool__TABLE_hea13bce5_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hdb962c9f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h4df1601b_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hd7dd2a27_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h4fe821f2_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_system__ConstPool__TABLE_h17c67228_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h1bf8d03a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hfb8ce208_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hb29b6323_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h8b5ab276_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_system__ConstPool__TABLE_h139a610e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h4474e570_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h1e53f1ae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hadebe4a9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hb343e8cc_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h5679d896_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hed5970b0_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_heae1ca30_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_h4971b97e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_system__ConstPool__TABLE_hdc124375_0;

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__3(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__bgBlock;
    __PVT__bgBlock = 0;
    CData/*3:0*/ __PVT__uaddrDecode__DOT__eaCol;
    __PVT__uaddrDecode__DOT__eaCol = 0;
    CData/*3:0*/ __PVT__uaddrDecode__DOT__movEa;
    __PVT__uaddrDecode__DOT__movEa = 0;
    CData/*0:0*/ __PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc;
    __PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0;
    SData/*9:0*/ __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
    __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0;
    CData/*0:0*/ __PVT__irdDecode__DOT__isRegShift;
    __PVT__irdDecode__DOT__isRegShift = 0;
    CData/*0:0*/ __PVT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
    __PVT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_21;
    __VdfgRegularize_hebeb780c_0_21 = 0;
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
    vlSelfRef.__PVT__ftu = vlSelfRef.__Vdly__ftu;
    if (vlSelfRef.__PVT__enT2) {
        vlSelfRef.__PVT__excUnit__DOT__Dbh = (0x0000ffffU 
                                              & (vlSelfRef.__PVT__Nanod
                                                 .__PVT__extDbh
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__excUnit__DOT__dblIdle)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__preDbd) 
                                                                 >> 0x0fU)
                                                                 : 
                                                                ((IData)(vlSelfRef.__PVT__excUnit__DOT__preDbl) 
                                                                 >> 0x0fU)))))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__excUnit__DOT__dbhIdle)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__excUnit__DOT__dblIdle)
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbd)
                                                    : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbl))
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbh))));
        vlSelfRef.__PVT__excUnit__DOT__Dbl = ((IData)(vlSelfRef.__PVT__excUnit__DOT__dblIdle)
                                               ? (vlSelfRef.__PVT__Nanod
                                                  .__PVT__dblDbh
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbh)
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbd))
                                               : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbl));
        vlSelfRef.__PVT__excUnit__DOT__Dbd = ((IData)(vlSelfRef.__PVT__excUnit__DOT__dbdIdle)
                                               ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__dblIdle)
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbh)
                                                   : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbl))
                                               : (IData)(vlSelfRef.__PVT__excUnit__DOT__preDbd));
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__nanoAddr = 2U;
    } else if (vlSelfRef.__PVT__enT1) {
        __Vtemp_1 = VL_MATCHMASKED_I(32, (0x000000ffU 
                                          & ((IData)(vlSelfRef.__PVT__nma) 
                                             >> 2U)), Vtb_system__ConstPool__CONST_h1528ed39_0);
        vlSelfRef.__PVT__nanoAddr = (((IData)(Vtb_system__ConstPool__TABLE_h292666c2_0
                                              [__Vtemp_1]) 
                                      << 2U) | (3U 
                                                & (IData)(vlSelfRef.__PVT__nma)));
    }
    if (vlSelfRef.__PVT__Clks.__PVT__extReset) {
        vlSelfRef.__PVT__busControl__DOT__rRWn = 1U;
    } else if ((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                & (IData)(vlSelfRef.__PVT__busControl__DOT__busEnding))) {
        vlSelfRef.__PVT__busControl__DOT__rRWn = 1U;
    } else if ((vlSelfRef.__PVT__Clks.__PVT__enPhi1 
                & (IData)(vlSelfRef.__PVT__busControl__DOT__isWriteReg))) {
        if (((2U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
             & (IData)(vlSelfRef.__PVT__busControl__DOT__isWriteReg))) {
            vlSelfRef.__PVT__busControl__DOT__rRWn = 0U;
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__pwrUp) {
        vlSelfRef.__PVT__busControl__DOT__isWriteReg = 0U;
    } else if ((1U & (~ (vlSelfRef.__PVT__Clks.__PVT__enPhi2 
                         & ((5U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                            | (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)))))) {
        if (((IData)(vlSelfRef.__PVT__enT1) & vlSelfRef.__PVT__Nanod
             .__PVT__permStart)) {
            vlSelfRef.__PVT__busControl__DOT__isWriteReg 
                = vlSelfRef.__PVT__Nanod.__PVT__isWrite;
        }
    }
    if (vlSelfRef.__PVT__enT1) {
        if (vlSelfRef.__PVT__Nanod.__PVT__Ir2Ird) {
            vlSelfRef.__PVT__Ird = vlSelfRef.__PVT__Ir;
        }
        vlSelfRef.__PVT__excUnit__DOT__preDbh = vlSelfRef.__PVT__excUnit__DOT__dbhMux;
        vlSelfRef.__PVT__excUnit__DOT__preDbd = vlSelfRef.__PVT__excUnit__DOT__dbdMux;
        vlSelfRef.__PVT__excUnit__DOT__preDbl = vlSelfRef.__PVT__excUnit__DOT__dblMux;
        if ((1U & (~ vlSelfRef.__PVT__Nanod.__PVT__Ir2Ird))) {
            if ((1U & vlSelfRef.__PVT__microLatch)) {
                vlSelfRef.__PVT__Ir = vlSelfRef.__PVT__Irc;
            }
        }
    }
    if (vlSelfRef.__PVT__Clks.__PVT__extReset) {
        vlSelfRef.__PVT__microLatch = 0U;
        vlSelfRef.__PVT__busControl__DOT__busPhase = 0U;
    } else {
        if (vlSelfRef.__PVT__rstUrom) {
            vlSelfRef.__PVT__microLatch = (0x00007fffU 
                                           & vlSelfRef.__PVT__microLatch);
            vlSelfRef.__PVT__microLatch = (0x0001fffeU 
                                           & vlSelfRef.__PVT__microLatch);
        } else if (vlSelfRef.__PVT__enT3) {
            vlSelfRef.__PVT__microLatch = vlSelfRef.__PVT__microOutput;
        }
        if (vlSelfRef.__PVT__Clks.__PVT__enPhi1) {
            vlSelfRef.__PVT__busControl__DOT__busPhase 
                = vlSelfRef.__PVT__busControl__DOT__next;
        }
    }
    if (((IData)(vlSelfRef.__PVT__enT3) & (0U != vlSelfRef.__PVT__Nanod
                                           .__PVT__dobCtrl))) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dob 
            = ((0xff00U & (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dob)) 
               | (0x000000ffU & (vlSelfRef.__PVT__Nanod
                                 .__PVT__noLowByte ? 
                                 ((IData)(vlSelfRef.__PVT__excUnit__DOT__dobInput) 
                                  >> 8U) : (IData)(vlSelfRef.__PVT__excUnit__DOT__dobInput))));
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dob 
            = ((0x00ffU & (IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__dob)) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__byteCycle) 
                                   | vlSelfRef.__PVT__Nanod
                                   .__PVT__noHighByte)
                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__dobInput)
                                   : ((IData)(vlSelfRef.__PVT__excUnit__DOT__dobInput) 
                                      >> 8U)) << 8U)));
    }
    if (((((((((4U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                      >> 0x0cU))) | 
               (0U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                      >> 0x0cU)))) 
              | (((1U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0cU))) 
                  || (2U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 0x0cU)))) 
                 || (3U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                           >> 0x0cU))))) 
             | (5U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                      >> 0x0cU)))) 
            | (6U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                     >> 0x0cU)))) | 
           (7U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                  >> 0x0cU)))) | (8U 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 0x0cU)))) 
         | (9U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                  >> 0x0cU))))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow 
            = ((4U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                      >> 0x0cU))) ? 
               ((0x00000100U & (IData)(vlSelfRef.__PVT__Ird))
                 ? 0x0040U : ((0U == (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 9U)))
                               ? 0x0400U : ((1U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.__PVT__Ird) 
                                               >> 9U)))
                                             ? 0x0010U
                                             : ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__Ird) 
                                                     >> 9U)))
                                                 ? 0x0020U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 9U)))
                                                  ? 0x0800U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.__PVT__Ird))
                                                    ? 0x0100U
                                                    : 0x0200U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.__PVT__Ird) 
                                                        >> 9U)))
                                                    ? 0x8000U
                                                    : 0U)))))))
                : ((0U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                          >> 0x0cU)))
                    ? ((0x00000100U & (IData)(vlSelfRef.__PVT__Ird))
                        ? ((0x00000080U & (IData)(vlSelfRef.__PVT__Ird))
                            ? 0x4000U : 0x2000U) : 
                       ((0U == (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                      >> 9U))) ? 0x4000U
                         : ((1U == (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                          >> 9U))) ? 0x0010U
                             : ((2U == (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                              >> 9U)))
                                 ? 0x0020U : ((3U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.__PVT__Ird) 
                                                   >> 9U)))
                                               ? 4U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.__PVT__Ird))
                                                    ? 0x4000U
                                                    : 0x2000U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.__PVT__Ird) 
                                                        >> 9U)))
                                                    ? 0x2000U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.__PVT__Ird) 
                                                         >> 9U)))
                                                     ? 0x0040U
                                                     : 0U))))))))
                    : ((((1U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                                >> 0x0cU))) 
                         || (2U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                                   >> 0x0cU)))) 
                        || (3U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                                  >> 0x0cU))))
                        ? 4U : ((5U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.__PVT__Ird) 
                                           >> 0x0cU)))
                                 ? ((3U == (3U & ((IData)(vlSelfRef.__PVT__Ird) 
                                                  >> 6U)))
                                     ? 0x8000U : ((0x00000100U 
                                                   & (IData)(vlSelfRef.__PVT__Ird))
                                                   ? 0x0020U
                                                   : 4U))
                                 : ((6U == (0x0000000fU 
                                            & ((IData)(vlSelfRef.__PVT__Ird) 
                                               >> 0x0cU)))
                                     ? 0U : ((7U == 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.__PVT__Ird) 
                                                  >> 0x0cU)))
                                              ? 4U : 
                                             ((8U == 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.__PVT__Ird) 
                                                   >> 0x0cU)))
                                               ? ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 6U)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.__PVT__Ird))))
                                                    ? 0x0200U
                                                    : 0x4000U))
                                               : ((IData)(
                                                          ((0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.__PVT__Ird))) 
                                                           & (~ 
                                                              (3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                   >> 6U))))))
                                                   ? 0x0400U
                                                   : 0x0020U))))))));
    } else if ((0x0bU == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow 
            = (((((IData)(vlSelfRef.__PVT__Ird) >> 8U) 
                 & (~ (3U == (3U & ((IData)(vlSelfRef.__PVT__Ird) 
                                    >> 6U))))) & (1U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 3U))))
                ? 0x2000U : 0x0040U);
    } else if ((0x0cU == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow 
            = ((3U == (3U & ((IData)(vlSelfRef.__PVT__Ird) 
                             >> 6U))) ? 0x0080U : ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.__PVT__Ird))))
                                                    ? 8U
                                                    : 0x0010U));
    } else if ((0x0dU == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow 
            = ((IData)(((0x0100U == (0x0130U & (IData)(vlSelfRef.__PVT__Ird))) 
                        & (~ (3U == (3U & ((IData)(vlSelfRef.__PVT__Ird) 
                                           >> 6U))))))
                ? 0x1000U : 4U);
    } else if ((0x0eU == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype 
            = (3U & ((3U == (3U & ((IData)(vlSelfRef.__PVT__Ird) 
                                   >> 6U))) ? ((IData)(vlSelfRef.__PVT__Ird) 
                                               >> 9U)
                      : ((IData)(vlSelfRef.__PVT__Ird) 
                         >> 3U)));
        if (((((((((0U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 8U)))) 
                   | (1U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                              << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                              >> 8U))))) 
                  | (2U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                             << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                             >> 8U))))) 
                 | (3U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 8U))))) 
                | (4U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                           << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                           >> 8U))))) 
               | (5U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                          << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                          >> 8U))))) 
              | (6U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                         << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                         >> 8U))))) 
             | (7U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                        << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                        >> 8U)))))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow 
                = ((0U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__Ird) 
                                            >> 8U))))
                    ? 4U : ((1U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.__PVT__Ird) 
                                                >> 8U))))
                             ? 8U : ((2U == (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.__PVT__Ird) 
                                                   >> 8U))))
                                      ? 0x0020U : (
                                                   (3U 
                                                    == 
                                                    (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.__PVT__Ird) 
                                                           >> 8U))))
                                                    ? 0x0010U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 8U))))
                                                     ? 0x0100U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__Ird) 
                                                             >> 8U))))
                                                      ? 0x0800U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__Ird) 
                                                              >> 8U))))
                                                       ? 0x0400U
                                                       : 0x0200U)))))));
        }
    } else {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cRow = 0U;
    }
    vlSelfRef.__PVT__sequencer__DOT__enl = ((2U & ((IData)(vlSelfRef.__PVT__Ird) 
                                                   >> 5U)) 
                                            | (1U & 
                                               (~ (0U 
                                                   != (IData)(vlSelfRef.__PVT__excUnit__DOT__prenLatch)))));
    __VdfgRegularize_hebeb780c_0_21 = (1U & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                             [(0x0000000fU 
                                               & ((IData)(vlSelfRef.__PVT__Ird) 
                                                  >> 0x0000000cU))] 
                                             >> 0x0000000eU));
    if (vlSelfRef.__PVT__enT4) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__byteCycle 
            = (vlSelfRef.__PVT__Nanod.__PVT__busByte 
               & vlSelfRef.__PVT__Irdecod.__PVT__isByte);
    }
    __PVT__irdDecode__DOT__isRegShift = ((IData)(__VdfgRegularize_hebeb780c_0_21) 
                                         & (3U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 6U))));
    vlSelfRef.__PVT__Irdecod.__PVT__rx = (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                                >> 9U));
    vlSelfRef.__PVT__Irdecod.__PVT__ry = (7U & (IData)(vlSelfRef.__PVT__Ird));
    vlSelfRef.__PVT__Irdecod.__PVT__isTas = (IData)(
                                                    ((0x0ac0U 
                                                      == 
                                                      (0x0fc0U 
                                                       & (IData)(vlSelfRef.__PVT__Ird))) 
                                                     & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                        [
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 0x0000000cU))] 
                                                        >> 4U)));
    vlSelfRef.__PVT__Irdecod.__PVT__rxIsDt = (1U & 
                                              ((Vtb_system__ConstPool__TABLE_he204aa36_0
                                                [(0x0000000fU 
                                                  & ((IData)(vlSelfRef.__PVT__Ird) 
                                                     >> 0x0000000cU))] 
                                                >> 5U) 
                                               | (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                  [
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 0x0000000cU))] 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 8U)))));
    vlSelfRef.__PVT__Irdecod.__PVT__rxIsUsp = (IData)(
                                                      ((0x0e60U 
                                                        == 
                                                        (0x0ff0U 
                                                         & (IData)(vlSelfRef.__PVT__Ird))) 
                                                       & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                          [
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.__PVT__Ird) 
                                                              >> 0x0000000cU))] 
                                                          >> 4U)));
    vlSelfRef.__PVT__Irdecod.__PVT__isMovep = (IData)(
                                                      ((0x0108U 
                                                        == 
                                                        (0x0138U 
                                                         & (IData)(vlSelfRef.__PVT__Ird))) 
                                                       & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                       [
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__PVT__Ird) 
                                                           >> 0x0000000cU))]));
    vlSelfRef.__PVT__Irdecod.__PVT__implicitSp = ((0x00000040U 
                                                   & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                   [
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 0x0000000cU))])
                                                   ? 
                                                  (1U 
                                                   == 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 8U)))
                                                   : 
                                                  ((1U 
                                                    & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                       [
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__PVT__Ird) 
                                                           >> 0x0000000cU))] 
                                                       >> 4U)) 
                                                   && ((0x0eU 
                                                        == 
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 8U))) 
                                                       | (0x21U 
                                                          == 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.__PVT__Ird) 
                                                              >> 6U))))));
    vlSelfRef.__PVT__Irdecod.__PVT__toCcr = (((Vtb_system__ConstPool__TABLE_he204aa36_0
                                               [(0x0000000fU 
                                                 & ((IData)(vlSelfRef.__PVT__Ird) 
                                                    >> 0x0000000cU))] 
                                               >> 4U) 
                                              & ((0x0e77U 
                                                  == 
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.__PVT__Ird))) 
                                                 | (0x13U 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.__PVT__Ird) 
                                                        >> 6U))))) 
                                             | (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x01c0U 
                                                          & (IData)(vlSelfRef.__PVT__Ird))) 
                                                        & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                        [
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 0x0000000cU))])));
    vlSelfRef.__PVT__Irdecod.__PVT__macroTvn = ((0x00000010U 
                                                 & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                 [(0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 0x0000000cU))])
                                                 ? 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.__PVT__Ird))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.__PVT__Ird))
                                                   ? 7U
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000000fU 
                                                      & (IData)(vlSelfRef.__PVT__Ird))))
                                                  : 6U)
                                                 : 5U);
    vlSelfRef.__PVT__Irdecod.__PVT__inhibitCcr = (((IData)(
                                                           ((0x00c0U 
                                                             == 
                                                             (0x00c0U 
                                                              & (IData)(vlSelfRef.__PVT__Ird))) 
                                                            & ((Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                [
                                                                (0x0000000fU 
                                                                 & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                    >> 0x0000000cU))] 
                                                                >> 9U) 
                                                               | (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                  [
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                      >> 0x0000000cU))] 
                                                                  >> 0x0dU)))) 
                                                   | (IData)(
                                                             ((8U 
                                                               == 
                                                               (0x0038U 
                                                                & (IData)(vlSelfRef.__PVT__Ird))) 
                                                              & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                 [
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                     >> 0x0000000cU))] 
                                                                 >> 5U)))) 
                                                  | (IData)(
                                                            ((0x0040U 
                                                              == 
                                                              (0x01c0U 
                                                               & (IData)(vlSelfRef.__PVT__Ird))) 
                                                             & ((Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                 [
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                     >> 0x0000000cU))] 
                                                                 >> 2U) 
                                                                | (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                   [
                                                                   (0x0000000fU 
                                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                       >> 0x0000000cU))] 
                                                                   >> 3U)))));
    vlSelfRef.__PVT__Irdecod.__PVT__ftuConst = ((0U 
                                                 != 
                                                 (3U 
                                                  & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.__PVT__Ird) 
                                                         >> 0x0000000cU))] 
                                                     >> 6U)))
                                                 ? 
                                                ((0x0000ff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (IData)(vlSelfRef.__PVT__Ird)))
                                                 : 
                                                ((1U 
                                                  & ((IData)(__VdfgRegularize_hebeb780c_0_21) 
                                                     | (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                        [
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 0x0000000cU))] 
                                                        >> 5U)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.__PVT__Ird) 
                                                       >> 9U)))
                                                   ? 8U
                                                   : 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 9U)))
                                                  : 
                                                 ((1U 
                                                   & ((Vtb_system__ConstPool__TABLE_he204aa36_0
                                                       [
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__PVT__Ird) 
                                                           >> 0x0000000cU))] 
                                                       >> 8U) 
                                                      | (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                         [
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.__PVT__Ird) 
                                                             >> 0x0000000cU))] 
                                                         >> 0x0000000cU)))
                                                   ? 0x000fU
                                                   : 
                                                  (0x0080U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                                    [
                                                                    (0x0000000fU 
                                                                     & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                        >> 0x0000000cU))] 
                                                                    >> 4U))))))));
    vlSelfRef.__PVT__Irdecod.__PVT__isPcRel = (IData)(
                                                      ((0x003aU 
                                                        == 
                                                        (0x003eU 
                                                         & (IData)(vlSelfRef.__PVT__Ird))) 
                                                       & (~ 
                                                          (((IData)(vlSelfRef.__PVT__Ird) 
                                                            >> 5U) 
                                                           & (IData)(__PVT__irdDecode__DOT__isRegShift)))));
    vlSelfRef.__PVT__Irdecod.__PVT__ryIsDt = (IData)(
                                                     ((0x0038U 
                                                       == 
                                                       (0x003aU 
                                                        & (IData)(vlSelfRef.__PVT__Ird))) 
                                                      & (~ (IData)(__PVT__irdDecode__DOT__isRegShift))));
    __PVT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg 
        = ((0U != (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                         >> 3U))) & (7U != (7U & ((IData)(vlSelfRef.__PVT__Ird) 
                                                  >> 3U))));
    vlSelfRef.__PVT__Irdecod.__PVT__ryIsAreg = ((0x00000020U 
                                                 & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                 [(0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__Ird) 
                                                      >> 0x0000000cU))])
                                                 ? 
                                                ((IData)(__PVT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg) 
                                                 & (0x19U 
                                                    != 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__PVT__Ird) 
                                                        >> 3U))))
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     ((1U 
                                                       & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                          [
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.__PVT__Ird) 
                                                              >> 0x0000000cU))] 
                                                          >> 6U)) 
                                                      || (1U 
                                                          & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                                             [
                                                             (0x0000000fU 
                                                              & ((IData)(vlSelfRef.__PVT__Ird) 
                                                                 >> 0x0000000cU))] 
                                                             >> 7U))))) 
                                                 && (1U 
                                                     & ((0x00004000U 
                                                         & Vtb_system__ConstPool__TABLE_he204aa36_0
                                                         [
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.__PVT__Ird) 
                                                             >> 0x0000000cU))])
                                                         ? 
                                                        (~ (IData)(__PVT__irdDecode__DOT__isRegShift))
                                                         : (IData)(__PVT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg)))));
    vlSelfRef.__PVT__isLineA = (1U & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                      [(0x0000000fU 
                                        & ((IData)(vlSelfRef.__PVT__Ir) 
                                           >> 0x0000000cU))] 
                                      >> 0x0000000aU));
    vlSelfRef.__PVT__isLineF = (1U & (Vtb_system__ConstPool__TABLE_he204aa36_0
                                      [(0x0000000fU 
                                        & ((IData)(vlSelfRef.__PVT__Ir) 
                                           >> 0x0000000cU))] 
                                      >> 0x0000000fU));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = ((0xff3fU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
           | (0x00000080U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 1U)));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00000400U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00008000U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[6U] 
        = (0x000003ffU & ((1U == (0x0000000fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                                 >> 8U)))
                           ? ((0U != (0x000000ffU & (IData)(vlSelfRef.__PVT__Ir)))
                               ? 0x00000089U : 0x000000a9U)
                           : ((0U != (0x000000ffU & (IData)(vlSelfRef.__PVT__Ir)))
                               ? 0x00000308U : 0x00000068U)));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[7U] = 0x023bU;
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[10U] = 0U;
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[15U] = 0U;
    __PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Ir))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__Ir))) {
            if ((8U & (IData)(vlSelfRef.__PVT__Ir))) {
                __PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__Ir))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__Ir) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__Ir)))) {
                        __PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                    }
                }
                __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.__PVT__Ir))
                        ? ((1U & (IData)(vlSelfRef.__PVT__Ir))
                            ? 0x012aU : 0x006dU) : 
                       ((1U & (IData)(vlSelfRef.__PVT__Ir))
                         ? 0x0126U : 0U));
            } else {
                __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.__PVT__Ir))
                        ? ((1U & (IData)(vlSelfRef.__PVT__Ir))
                            ? 0x012aU : 0x03a2U) : 
                       ((1U & (IData)(vlSelfRef.__PVT__Ir))
                         ? 0x0363U : 0x03a6U));
            }
        } else {
            __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                = ((8U & (IData)(vlSelfRef.__PVT__Ir))
                    ? 0x0230U : 0x02f5U);
        }
    } else {
        __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
            = ((0x00000010U & (IData)(vlSelfRef.__PVT__Ir))
                ? ((8U & (IData)(vlSelfRef.__PVT__Ir))
                    ? 0x0119U : 0x030bU) : 0x01d0U);
    }
    __PVT__uaddrDecode__DOT__movEa = (0x0000000fU & 
                                      ((7U == (7U & 
                                               ((IData)(vlSelfRef.__PVT__Ir) 
                                                >> 6U)))
                                        ? (0xcccba987U 
                                           >> (0x0000001cU 
                                               & ((IData)(vlSelfRef.__PVT__Ir) 
                                                  >> 7U)))
                                        : (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                                                 >> 6U))));
    __PVT__uaddrDecode__DOT__eaCol = (0x0000000fU & 
                                      ((7U == (7U & 
                                               ((IData)(vlSelfRef.__PVT__Ir) 
                                                >> 3U)))
                                        ? (0xcccba987U 
                                           >> (0x0000001cU 
                                               & ((IData)(vlSelfRef.__PVT__Ir) 
                                                  << 2U)))
                                        : (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                                                 >> 3U))));
    vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[14U] 
        = ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.__PVT__Ir))))
            ? 0x03c7U : 0U);
    if ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.__PVT__Ir))))) {
        __Vtemp_2 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he0dc4311_0);
        vlSelfRef.__VcaseDecoderOut114 = Vtb_system__ConstPool__TABLE_h911422d5_0
            [__Vtemp_2];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xbfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00004000U & ((IData)(vlSelfRef.__VcaseDecoderOut114) 
                                 << 0x0000000eU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = (0x000003ffU & ((IData)(vlSelfRef.__VcaseDecoderOut114) 
                              >> 1U));
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__Ir))) {
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00004000U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] = 0U;
        } else {
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0xbfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
                = ((0x00000020U & (IData)(vlSelfRef.__PVT__Ir))
                    ? 0x00000386U : 0x00000385U);
        }
    } else {
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (0xbfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = ((0x00000020U & (IData)(vlSelfRef.__PVT__Ir))
                ? 0x00000382U : 0x00000381U);
    }
    if (((IData)(vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToIrc) 
         & vlSelfRef.__PVT__Clks.__PVT__enPhi2)) {
        vlSelfRef.__PVT__Irc = vlSymsp->TOP.tb_system__DOT__main_board__DOT__cpu_din;
    }
    if (vlSelfRef.__PVT__enT1) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToIrc = 0U;
    } else if (vlSelfRef.__PVT__enT3) {
        vlSelfRef.__PVT__excUnit__DOT__dataIo__DOT__xToIrc 
            = vlSelfRef.__PVT__Nanod.__PVT__toIrc;
    }
    if ((0U == (0x00000027U & ((IData)(vlSelfRef.__PVT__Ir) 
                               >> 6U)))) {
        __Vtemp_3 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut135 = Vtb_system__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_3];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut135 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut135 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut135 
                              >> 0x0000000bU));
    } else if ((1U == (0x00000027U & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_4 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut136 = Vtb_system__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_4];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut136 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut136 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut136 
                              >> 0x0000000bU));
    } else if ((2U == (0x00000027U & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_5 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut137 = Vtb_system__ConstPool__TABLE_hbae207b6_0
            [__Vtemp_5];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut137 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut137 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut137 
                              >> 0x0000000bU));
    } else if ((3U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_6 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut138 = Vtb_system__ConstPool__TABLE_h68e348e7_0
            [__Vtemp_6];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut138 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut138 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut138 
                              >> 0x0000000bU));
    } else if ((0x13U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_7 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut139 = Vtb_system__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_7];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut139 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut139 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut139 
                              >> 0x0000000bU));
    } else if ((0x1bU == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_8 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut140 = Vtb_system__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_8];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut140 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut140 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut140 
                              >> 0x0000000bU));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_9 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut141 = Vtb_system__ConstPool__TABLE_h9856367f_0
            [__Vtemp_9];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut141 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut141 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut141 
                              >> 0x0000000bU));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_10 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut142 = Vtb_system__ConstPool__TABLE_h32fa7448_0
            [__Vtemp_10];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut142 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut142 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut142 
                              >> 0x0000000bU));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_11 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut143 = Vtb_system__ConstPool__TABLE_h43eeafa8_0
            [__Vtemp_11];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut143 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut143 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut143 
                              >> 0x0000000bU));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_12 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut144 = Vtb_system__ConstPool__TABLE_hac4b9c1a_0
            [__Vtemp_12];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut144 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut144 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut144 
                              >> 0x0000000bU));
    } else if ((0x28U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_13 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut145 = Vtb_system__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_13];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut145 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut145 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut145 
                              >> 0x0000000bU));
    } else if ((0x29U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_14 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut146 = Vtb_system__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_14];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut146 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut146 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut146 
                              >> 0x0000000bU));
    } else if ((0x2aU == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_15 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut147 = Vtb_system__ConstPool__TABLE_hbe127729_0
            [__Vtemp_15];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut147 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut147 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut147 
                              >> 0x0000000bU));
    } else if ((0x2bU == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_16 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut148 = Vtb_system__ConstPool__TABLE_h7b3264b8_0
            [__Vtemp_16];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut148 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut148 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut148 
                              >> 0x0000000bU));
    } else if ((0x00000032U == (0x0000003eU & ((IData)(vlSelfRef.__PVT__Ir) 
                                               >> 6U)))) {
        __Vtemp_17 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut149 = Vtb_system__ConstPool__TABLE_h6d6f8a73_0
            [__Vtemp_17];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut149 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut149 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut149 
                              >> 0x0000000bU));
    } else if ((6U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_18 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut150 = Vtb_system__ConstPool__TABLE_hd082d1c8_0
            [__Vtemp_18];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut150 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut150 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut150 
                              >> 0x0000000bU));
    } else if ((7U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_19 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut151 = Vtb_system__ConstPool__TABLE_h0f86901e_0
            [__Vtemp_19];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut151 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut151 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut151 
                              >> 0x0000000bU));
    } else if ((0x3aU == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_20 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut152 = Vtb_system__ConstPool__TABLE_hfef82f04_0
            [__Vtemp_20];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut152 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut152 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut152 
                              >> 0x0000000bU));
    } else if ((0x3bU == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_21 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut153 = Vtb_system__ConstPool__TABLE_h2697a45d_0
            [__Vtemp_21];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut153 
                                 << 4U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut153 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut153 
                              >> 0x0000000bU));
    } else {
        if ((0x39U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffefU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | ((IData)(__PVT__uaddrDecode__DOT__pla_lined__DOT__illMisc) 
                      << 4U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
                = __PVT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
        } else {
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00000010U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] = 0U;
        }
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] = 0U;
    }
    if ((8U == (0x0000001fU & ((IData)(vlSelfRef.__PVT__Ir) 
                               >> 6U)))) {
        __Vtemp_22 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut115 = Vtb_system__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_22];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut115));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut115 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut115 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut115 
                              >> 0x00000015U));
    } else if ((0U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_23 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut116 = Vtb_system__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_23];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut116));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut116 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut116 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut116 
                              >> 0x00000015U));
    } else if ((9U == (0x0000001fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_24 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut117 = Vtb_system__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_24];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut117));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut117 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut117 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut117 
                              >> 0x00000015U));
    } else if ((1U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_25 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut118 = Vtb_system__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_25];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut118));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut118 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut118 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut118 
                              >> 0x00000015U));
    } else if ((0x0000000aU == (0x0000001fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                               >> 6U)))) {
        __Vtemp_26 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut119 = Vtb_system__ConstPool__TABLE_h0088877f_0
            [__Vtemp_26];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut119));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut119 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut119 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut119 
                              >> 0x00000015U));
    } else if ((2U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                      >> 6U)))) {
        __Vtemp_27 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut120 = Vtb_system__ConstPool__TABLE_h0088877f_0
            [__Vtemp_27];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut120));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut120 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut120 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut120 
                              >> 0x00000015U));
    } else if ((0x00000010U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                               >> 6U)))) {
        __Vtemp_28 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut121 = Vtb_system__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_28];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut121));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut121 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut121 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut121 
                              >> 0x00000015U));
    } else if ((0x00000011U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                               >> 6U)))) {
        __Vtemp_29 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut122 = Vtb_system__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_29];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut122));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut122 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut122 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut122 
                              >> 0x00000015U));
    } else if ((0x00000012U == (0x00000037U & ((IData)(vlSelfRef.__PVT__Ir) 
                                               >> 6U)))) {
        __Vtemp_30 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut123 = Vtb_system__ConstPool__TABLE_h0088877f_0
            [__Vtemp_30];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut123));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut123 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut123 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut123 
                              >> 0x00000015U));
    } else if ((4U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_31 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut124 = Vtb_system__ConstPool__TABLE_h38dd4db7_0
            [__Vtemp_31];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut124));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut124 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut124 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut124 
                              >> 0x00000015U));
    } else if ((5U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_32 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut125 = Vtb_system__ConstPool__TABLE_he5a4ad0d_0
            [__Vtemp_32];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut125));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut125 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut125 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut125 
                              >> 0x00000015U));
    } else if ((7U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_33 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut126 = Vtb_system__ConstPool__TABLE_he13c6a00_0
            [__Vtemp_33];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut126));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut126 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut126 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut126 
                              >> 0x00000015U));
    } else if ((6U == (7U & ((IData)(vlSelfRef.__PVT__Ir) 
                             >> 6U)))) {
        __Vtemp_34 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut127 = Vtb_system__ConstPool__TABLE_h7e3d08c6_0
            [__Vtemp_34];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut127));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut127 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut127 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut127 
                              >> 0x00000015U));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_35 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut128 = Vtb_system__ConstPool__TABLE_ha137bec4_0
            [__Vtemp_35];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut128));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut128 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut128 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut128 
                              >> 0x00000015U));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_36 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut129 = Vtb_system__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_36];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut129));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut129 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut129 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut129 
                              >> 0x00000015U));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_37 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut130 = Vtb_system__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_37];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut130));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut130 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut130 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut130 
                              >> 0x00000015U));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_38 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut131 = Vtb_system__ConstPool__TABLE_haf34f21f_0
            [__Vtemp_38];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut131));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut131 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut131 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut131 
                              >> 0x00000015U));
    } else if ((0x30U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_39 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut132 = Vtb_system__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_39];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut132));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut132 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut132 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut132 
                              >> 0x00000015U));
    } else if ((0x31U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_40 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut133 = Vtb_system__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_40];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut133));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut133 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut133 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut133 
                              >> 0x00000015U));
    } else if ((0x32U == (0x0000003fU & ((IData)(vlSelfRef.__PVT__Ir) 
                                         >> 6U)))) {
        __Vtemp_41 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut134 = Vtb_system__ConstPool__TABLE_hccb66154_0
            [__Vtemp_41];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut134));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut134 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut134 
                              >> 0x0000000bU));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut134 
                              >> 0x00000015U));
    } else {
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (1U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 = 0U;
    }
    if (((((((((0U == (IData)(__PVT__uaddrDecode__DOT__movEa)) 
               | (2U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
              | (3U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
             | (4U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
            | (5U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
           | (6U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
          | (7U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
         | (8U == (IData)(__PVT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_42 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut154 = Vtb_system__ConstPool__TABLE_h9cd354aa_0
                [__Vtemp_42];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut154 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut154 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut154 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_43 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut155 = Vtb_system__ConstPool__TABLE_h3e2181b8_0
                [__Vtemp_43];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut155 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut155 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut155 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_44 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut156 = Vtb_system__ConstPool__TABLE_hd2959be6_0
                [__Vtemp_44];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut156 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut156 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut156 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_45 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut157 = Vtb_system__ConstPool__TABLE_h13aa4342_0
                [__Vtemp_45];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut157 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut157 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut157 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_46 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut158 = Vtb_system__ConstPool__TABLE_h89c98bd1_0
                [__Vtemp_46];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut158 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut158 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut158 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_47 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut159 = Vtb_system__ConstPool__TABLE_h8c87e397_0
                [__Vtemp_47];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut159 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut159 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut159 
                                  >> 0x0000000bU));
        } else if ((7U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_48 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut160 = Vtb_system__ConstPool__TABLE_h076b5ef1_0
                [__Vtemp_48];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut160 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut160 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut160 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_49 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut161 = Vtb_system__ConstPool__TABLE_h5fe6edae_0
                [__Vtemp_49];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut161 
                            << 1U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut161 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut161 
                                  >> 0x0000000bU));
        }
    } else {
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (2U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] = 0U;
    }
    if (((((((((0U == (IData)(__PVT__uaddrDecode__DOT__movEa)) 
               | (1U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
              | (2U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
             | (3U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
            | (4U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
           | (5U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
          | (6U == (IData)(__PVT__uaddrDecode__DOT__movEa))) 
         | (7U == (IData)(__PVT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_50 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut162 = Vtb_system__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_50];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut162 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut162 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut162 
                                  >> 0x0000000bU));
            __Vtemp_59 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut171 = Vtb_system__ConstPool__TABLE_hdb878943_0
                [__Vtemp_59];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut171 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut171 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut171 
                                  >> 0x0000000bU));
        } else if ((1U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_51 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut163 = Vtb_system__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_51];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut163 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut163 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut163 
                                  >> 0x0000000bU));
            __Vtemp_60 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut172 = Vtb_system__ConstPool__TABLE_hb9b985c2_0
                [__Vtemp_60];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut172 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut172 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut172 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_52 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut164 = Vtb_system__ConstPool__TABLE_hc118f1ba_0
                [__Vtemp_52];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut164 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut164 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut164 
                                  >> 0x0000000bU));
            __Vtemp_61 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut173 = Vtb_system__ConstPool__TABLE_hbc774d6a_0
                [__Vtemp_61];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut173 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut173 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut173 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_53 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut165 = Vtb_system__ConstPool__TABLE_h9f4d8f37_0
                [__Vtemp_53];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut165 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut165 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut165 
                                  >> 0x0000000bU));
            __Vtemp_62 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut174 = Vtb_system__ConstPool__TABLE_hc90e0332_0
                [__Vtemp_62];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut174 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut174 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut174 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_54 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut166 = Vtb_system__ConstPool__TABLE_h6c6b9226_0
                [__Vtemp_54];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut166 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut166 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut166 
                                  >> 0x0000000bU));
            __Vtemp_63 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut175 = Vtb_system__ConstPool__TABLE_h4d8af2d8_0
                [__Vtemp_63];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut175 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut175 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut175 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_55 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut167 = Vtb_system__ConstPool__TABLE_hc2184f42_0
                [__Vtemp_55];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut167 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut167 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut167 
                                  >> 0x0000000bU));
            __Vtemp_64 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut176 = Vtb_system__ConstPool__TABLE_h512d5c40_0
                [__Vtemp_64];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut176 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut176 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut176 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
            __Vtemp_56 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut168 = Vtb_system__ConstPool__TABLE_h68d6d722_0
                [__Vtemp_56];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut168 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut168 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut168 
                                  >> 0x0000000bU));
            __Vtemp_65 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut177 = Vtb_system__ConstPool__TABLE_hb4efbd7e_0
                [__Vtemp_65];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut177 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut177 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut177 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_57 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut169 = Vtb_system__ConstPool__TABLE_hcad3a1c4_0
                [__Vtemp_57];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut169 
                            << 2U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut169 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut169 
                                  >> 0x0000000bU));
            __Vtemp_66 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut178 = Vtb_system__ConstPool__TABLE_h48910ea9_0
                [__Vtemp_66];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut178 
                            << 3U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut178 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut178 
                                  >> 0x0000000bU));
        }
    } else if ((8U == (IData)(__PVT__uaddrDecode__DOT__movEa))) {
        __Vtemp_58 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut170 = Vtb_system__ConstPool__TABLE_h2334f8f1_0
            [__Vtemp_58];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffbU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (4U & (vlSelfRef.__VcaseDecoderOut170 
                        << 2U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut170 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut170 
                              >> 0x0000000bU));
        __Vtemp_67 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut179 = Vtb_system__ConstPool__TABLE_h6feb013a_0
            [__Vtemp_67];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfff7U & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (8U & (vlSelfRef.__VcaseDecoderOut179 
                        << 3U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut179 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut179 
                              >> 0x0000000bU));
    } else {
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (4U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (8U | (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] = 0U;
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] = 0U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__Ir))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__Ir))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__Ir))) {
                __Vtemp_68 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut187 = Vtb_system__ConstPool__TABLE_h6c931bbf_0
                    [__Vtemp_68];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut187 
                                         << 5U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut187 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut187 
                                      >> 0x0000000bU));
                __Vtemp_76 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut195 = Vtb_system__ConstPool__TABLE_h3327f4a6_0
                    [__Vtemp_76];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut195 
                                         << 8U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut195 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut195 
                                      >> 0x0000000bU));
                __Vtemp_84 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut203 = Vtb_system__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_84];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut203 
                                         << 9U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut203 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut203 
                                      >> 0x0000000bU));
                __Vtemp_92 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut211 = Vtb_system__ConstPool__TABLE_he9046c6e_0
                    [__Vtemp_92];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut211 
                                         << 0x0000000bU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut211 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut211 
                                      >> 0x0000000bU));
                __Vtemp_100 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut219 = Vtb_system__ConstPool__TABLE_h6d5e945a_0
                    [__Vtemp_100];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut219 
                                         << 0x0000000cU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut219 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut219 
                                      >> 0x0000000bU));
                __Vtemp_108 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut227 = Vtb_system__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_108];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut227 
                                         << 0x0000000dU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut227 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut227 
                                      >> 0x0000000bU));
            } else {
                __Vtemp_69 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut186 = Vtb_system__ConstPool__TABLE_hea13bce5_0
                    [__Vtemp_69];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut186 
                                         << 5U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut186 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut186 
                                      >> 0x0000000bU));
                __Vtemp_77 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut194 = Vtb_system__ConstPool__TABLE_hdb962c9f_0
                    [__Vtemp_77];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut194 
                                         << 8U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut194 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut194 
                                      >> 0x0000000bU));
                __Vtemp_85 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut202 = Vtb_system__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_85];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut202 
                                         << 9U)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut202 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut202 
                                      >> 0x0000000bU));
                __Vtemp_93 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut210 = Vtb_system__ConstPool__TABLE_hd7dd2a27_0
                    [__Vtemp_93];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut210 
                                         << 0x0000000bU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut210 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut210 
                                      >> 0x0000000bU));
                __Vtemp_101 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut218 = Vtb_system__ConstPool__TABLE_h4fe821f2_0
                    [__Vtemp_101];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut218 
                                         << 0x0000000cU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut218 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut218 
                                      >> 0x0000000bU));
                __Vtemp_109 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut226 = Vtb_system__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_109];
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut226 
                                         << 0x0000000dU)));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut226 
                                      >> 1U));
                vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut226 
                                      >> 0x0000000bU));
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__Ir))) {
            __Vtemp_70 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut185 = Vtb_system__ConstPool__TABLE_h17c67228_0
                [__Vtemp_70];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut185 
                                     << 5U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut185 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut185 
                                  >> 0x0000000bU));
            __Vtemp_78 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut193 = Vtb_system__ConstPool__TABLE_h1bf8d03a_0
                [__Vtemp_78];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut193 
                                     << 8U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut193 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut193 
                                  >> 0x0000000bU));
            __Vtemp_86 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut201 = Vtb_system__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_86];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut201 
                                     << 9U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut201 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut201 
                                  >> 0x0000000bU));
            __Vtemp_94 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut209 = Vtb_system__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_94];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut209 
                                     << 0x0000000bU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut209 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut209 
                                  >> 0x0000000bU));
            __Vtemp_102 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut217 = Vtb_system__ConstPool__TABLE_h8b5ab276_0
                [__Vtemp_102];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut217 
                                     << 0x0000000cU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut217 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut217 
                                  >> 0x0000000bU));
            __Vtemp_110 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut225 = Vtb_system__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_110];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut225 
                                     << 0x0000000dU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut225 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut225 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_71 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut184 = Vtb_system__ConstPool__TABLE_h139a610e_0
                [__Vtemp_71];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut184 
                                     << 5U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut184 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut184 
                                  >> 0x0000000bU));
            __Vtemp_79 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut192 = Vtb_system__ConstPool__TABLE_h4474e570_0
                [__Vtemp_79];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut192 
                                     << 8U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut192 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut192 
                                  >> 0x0000000bU));
            __Vtemp_87 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut200 = Vtb_system__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_87];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut200 
                                     << 9U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut200 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut200 
                                  >> 0x0000000bU));
            __Vtemp_95 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut208 = Vtb_system__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_95];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut208 
                                     << 0x0000000bU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut208 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut208 
                                  >> 0x0000000bU));
            __Vtemp_103 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut216 = Vtb_system__ConstPool__TABLE_h4474e570_0
                [__Vtemp_103];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut216 
                                     << 0x0000000cU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut216 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut216 
                                  >> 0x0000000bU));
            __Vtemp_111 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut224 = Vtb_system__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_111];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut224 
                                     << 0x0000000dU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut224 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut224 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__Ir))) {
            __Vtemp_72 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut183 = Vtb_system__ConstPool__TABLE_h6c931bbf_0
                [__Vtemp_72];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut183 
                                     << 5U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut183 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut183 
                                  >> 0x0000000bU));
            __Vtemp_80 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut191 = Vtb_system__ConstPool__TABLE_h1e53f1ae_0
                [__Vtemp_80];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut191 
                                     << 8U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut191 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut191 
                                  >> 0x0000000bU));
            __Vtemp_88 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut199 = Vtb_system__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_88];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut199 
                                     << 9U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut199 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut199 
                                  >> 0x0000000bU));
            __Vtemp_96 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut207 = Vtb_system__ConstPool__TABLE_hb343e8cc_0
                [__Vtemp_96];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut207 
                                     << 0x0000000bU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut207 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut207 
                                  >> 0x0000000bU));
            __Vtemp_104 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut215 = Vtb_system__ConstPool__TABLE_h6d5e945a_0
                [__Vtemp_104];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut215 
                                     << 0x0000000cU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut215 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut215 
                                  >> 0x0000000bU));
            __Vtemp_112 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut223 = Vtb_system__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_112];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut223 
                                     << 0x0000000dU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut223 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut223 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_73 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut182 = Vtb_system__ConstPool__TABLE_hea13bce5_0
                [__Vtemp_73];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut182 
                                     << 5U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut182 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut182 
                                  >> 0x0000000bU));
            __Vtemp_81 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut190 = Vtb_system__ConstPool__TABLE_h5679d896_0
                [__Vtemp_81];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut190 
                                     << 8U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut190 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut190 
                                  >> 0x0000000bU));
            __Vtemp_89 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut198 = Vtb_system__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_89];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut198 
                                     << 9U)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut198 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut198 
                                  >> 0x0000000bU));
            __Vtemp_97 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut206 = Vtb_system__ConstPool__TABLE_he9046c6e_0
                [__Vtemp_97];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut206 
                                     << 0x0000000bU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut206 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut206 
                                  >> 0x0000000bU));
            __Vtemp_105 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut214 = Vtb_system__ConstPool__TABLE_h5679d896_0
                [__Vtemp_105];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut214 
                                     << 0x0000000cU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut214 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut214 
                                  >> 0x0000000bU));
            __Vtemp_113 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut222 = Vtb_system__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_113];
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut222 
                                     << 0x0000000dU)));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut222 
                                  >> 1U));
            vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut222 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__Ir))) {
        __Vtemp_74 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut181 = Vtb_system__ConstPool__TABLE_h17c67228_0
            [__Vtemp_74];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut181 
                                 << 5U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut181 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut181 
                              >> 0x0000000bU));
        __Vtemp_82 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut189 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_82];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut189 
                                 << 8U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut189 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut189 
                              >> 0x0000000bU));
        __Vtemp_90 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut197 = Vtb_system__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_90];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut197 
                                 << 9U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut197 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut197 
                              >> 0x0000000bU));
        __Vtemp_98 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut205 = Vtb_system__ConstPool__TABLE_h4971b97e_0
            [__Vtemp_98];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut205 
                                 << 0x0000000bU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut205 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut205 
                              >> 0x0000000bU));
        __Vtemp_106 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut213 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_106];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut213 
                                 << 0x0000000cU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut213 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut213 
                              >> 0x0000000bU));
        __Vtemp_114 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut221 = Vtb_system__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_114];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut221 
                                 << 0x0000000dU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut221 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut221 
                              >> 0x0000000bU));
    } else {
        __Vtemp_75 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut180 = Vtb_system__ConstPool__TABLE_h139a610e_0
            [__Vtemp_75];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut180 
                                 << 5U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut180 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut180 
                              >> 0x0000000bU));
        __Vtemp_83 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut188 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_83];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut188 
                                 << 8U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut188 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut188 
                              >> 0x0000000bU));
        __Vtemp_91 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut196 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_91];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut196 
                                 << 9U)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut196 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut196 
                              >> 0x0000000bU));
        __Vtemp_99 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut204 = Vtb_system__ConstPool__TABLE_hdc124375_0
            [__Vtemp_99];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut204 
                                 << 0x0000000bU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut204 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut204 
                              >> 0x0000000bU));
        __Vtemp_107 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut212 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_107];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut212 
                                 << 0x0000000cU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut212 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut212 
                              >> 0x0000000bU));
        __Vtemp_115 = VL_MATCHMASKED_I(32, (IData)(__PVT__uaddrDecode__DOT__eaCol), Vtb_system__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut220 = Vtb_system__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_115];
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut220 
                                 << 0x0000000dU)));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut220 
                              >> 1U));
        vlSelfRef.__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut220 
                              >> 0x0000000bU));
    }
    vlSelfRef.__PVT__sequencer__DOT__grp1LatchEn = 
        (vlSelfRef.__PVT__microLatch & (0x00000010U 
                                        != (0x00000012U 
                                            & vlSelfRef.__PVT__microLatch)));
    vlSelfRef.__PVT__sequencer__DOT__grp0LatchEn = (IData)(
                                                           (0x00000010U 
                                                            == 
                                                            (0x00000012U 
                                                             & vlSelfRef.__PVT__microLatch)));
    __PVT__bgBlock = ((6U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                      | ((IData)(vlSelfRef.__PVT__busControl__DOT__rAS) 
                         & (2U == vlSelfRef.__PVT__busControl__DOT__busPhase)));
    vlSelfRef.__PVT__wClk = (1U & ((IData)(vlSelfRef.__PVT__iAddrErr) 
                                   | (((5U != vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                       & (IData)(vlSelfRef.__PVT__busControl__DOT__wendReg)) 
                                      | ((~ (IData)(vlSelfRef.__PVT__BeI)) 
                                         | (IData)(vlSelfRef.__PVT__Err6591)))));
    vlSelfRef.__PVT__Nanod.__PVT__updTpend = (1U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__clrTpend = (0x0eU 
                                              == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__tvn2Ftu = (0x0dU 
                                             == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__const2Ftu = (1U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__ftu2Dbl = ((4U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl)) 
                                             | (6U 
                                                == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.__PVT__Nanod.__PVT__ftu2Abl = (8U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__inl2psw = (6U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__pswIToFtu = (5U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__ftu2Sr = (2U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__sr2Ftu = (7U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__ird2Ftu = (9U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__ssw2Ftu = (0x0bU 
                                             == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__initST = (((6U == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl)) 
                                             | (0x0eU 
                                                == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl))) 
                                            | (0x0fU 
                                               == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.__PVT__Nanod.__PVT__abl2Pren = (0x0cU 
                                              == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__updPren = (0x0aU 
                                             == (IData)(vlSelfRef.__PVT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__Ir2Ird = (1U & (vlSelfRef.__PVT__nanoLatch[2U] 
                                                  >> 3U));
    vlSelfRef.__PVT__Nanod.__PVT__aluDctrl = (3U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x00000013U));
    vlSelfRef.__PVT__Nanod.__PVT__aluActrl = (1U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x00000012U));
    vlSelfRef.__PVT__Nanod.__PVT__aluColumn = ((4U 
                                                & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 0x0000001dU)) 
                                               | ((2U 
                                                   & (vlSelfRef.__PVT__nanoLatch[2U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__nanoLatch[2U] 
                                                        >> 1U))));
    vlSelfRef.__PVT__Nanod.__PVT__aluFinish = (2U == 
                                               (3U 
                                                & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 0x0000001dU)));
    vlSelfRef.__PVT__Nanod.__PVT__aluInit = (1U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x0000001dU)));
    vlSelfRef.__PVT__Nanod.__PVT__ftu2Ccr = (3U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x0000001dU)));
    vlSelfRef.__PVT__Nanod.__PVT__abdIsByte = (1U & 
                                               (vlSelfRef.__PVT__nanoLatch[1U] 
                                                >> 6U));
    vlSelfRef.__PVT__Nanod.__PVT__au2Db = (1U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__Nanod.__PVT__au2Ab = (2U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__Nanod.__PVT__au2Pc = (3U == (3U 
                                                  & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__Nanod.__PVT__db2Aob = (2U == (3U 
                                                   & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                      >> 3U)));
    vlSelfRef.__PVT__Nanod.__PVT__ab2Aob = (1U == (3U 
                                                   & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                      >> 3U)));
    vlSelfRef.__PVT__Nanod.__PVT__au2Aob = (3U == (3U 
                                                   & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                      >> 3U)));
    vlSelfRef.__PVT__Nanod.__PVT__dbin2Abd = (1U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x0000000eU));
    vlSelfRef.__PVT__Nanod.__PVT__dbin2Dbd = (1U & 
                                              (vlSelfRef.__PVT__nanoLatch[1U] 
                                               >> 0x0000000fU));
    vlSelfRef.__PVT__Nanod.__PVT__permStart = (0U != 
                                               (3U 
                                                & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 3U)));
    vlSelfRef.__PVT__Nanod.__PVT__isWrite = (0U != (IData)(vlSelfRef.__PVT__nDecoder__DOT__dobCtrl));
    vlSelfRef.__PVT__Nanod.__PVT__busByte = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 0x0000000aU));
    vlSelfRef.__PVT__Nanod.__PVT__noLowByte = (1U & 
                                               (vlSelfRef.__PVT__nanoLatch[1U] 
                                                >> 0x00000017U));
    vlSelfRef.__PVT__Nanod.__PVT__noHighByte = (1U 
                                                & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 0x00000016U));
    vlSelfRef.__PVT__Nanod.__PVT__abl2reg = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 4U));
    vlSelfRef.__PVT__Nanod.__PVT__abh2reg = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 7U));
    vlSelfRef.__PVT__Nanod.__PVT__dbl2reg = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 1U));
    vlSelfRef.__PVT__Nanod.__PVT__dbh2reg = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 5U));
    vlSelfRef.__PVT__Nanod.__PVT__reg2dbl = (1U & vlSelfRef.__PVT__nanoLatch[1U]);
    vlSelfRef.__PVT__Nanod.__PVT__reg2dbh = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 6U));
    vlSelfRef.__PVT__Nanod.__PVT__reg2abl = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 5U));
    vlSelfRef.__PVT__Nanod.__PVT__reg2abh = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 8U));
    vlSelfRef.__PVT__Nanod.__PVT__ssp = (1U & (vlSelfRef.__PVT__nanoLatch[0U] 
                                               >> 0x00000018U));
    vlSelfRef.__PVT__Nanod.__PVT__rz = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                              >> 0x0000000bU));
    vlSelfRef.__PVT__Nanod.__PVT__rxlDbl = (1U & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                  >> 8U));
    vlSelfRef.__PVT__Nanod.__PVT__pcldbl = (1U & ((vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 7U) 
                                                  | ((~ 
                                                      (vlSelfRef.__PVT__nanoLatch[1U] 
                                                       >> 8U)) 
                                                     & (IData)(vlSelfRef.__PVT__nDecoder__DOT__isPcRel))));
    vlSelfRef.__PVT__Nanod.__PVT__pchdbh = ((1U == 
                                             (3U & vlSelfRef.__PVT__nanoLatch[0U])) 
                                            | ((~ (vlSelfRef.__PVT__nanoLatch[0U] 
                                                   >> 0x00000016U)) 
                                               & (IData)(vlSelfRef.__PVT__nDecoder__DOT__isPcRel)));
    vlSelfRef.__PVT__Nanod.__PVT__pclabl = (1U & ((vlSelfRef.__PVT__nanoLatch[1U] 
                                                   >> 9U) 
                                                  | ((IData)(vlSelfRef.__PVT__nDecoder__DOT__isPcRel) 
                                                     & (vlSelfRef.__PVT__nanoLatch[1U] 
                                                        >> 8U))));
    vlSelfRef.__PVT__Nanod.__PVT__pchabh = ((2U == 
                                             (3U & vlSelfRef.__PVT__nanoLatch[0U])) 
                                            | ((IData)(vlSelfRef.__PVT__nDecoder__DOT__isPcRel) 
                                               & (vlSelfRef.__PVT__nanoLatch[0U] 
                                                  >> 0x00000016U)));
    if (vlSelfRef.__VdlySet__Nanod__v0) {
        vlSelfRef.__VdlySet__Nanod__v0 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__auClkEn = vlSelfRef.__VdlyVal__Nanod__v0;
    }
    if (vlSelfRef.__VdlySet__Nanod__v1) {
        vlSelfRef.__VdlySet__Nanod__v1 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__auCntrl = vlSelfRef.__VdlyVal__Nanod__v1;
    }
    if (vlSelfRef.__VdlySet__Nanod__v2) {
        vlSelfRef.__VdlySet__Nanod__v2 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__noSpAlign = vlSelfRef.__VdlyVal__Nanod__v2;
    }
    if (vlSelfRef.__VdlySet__Nanod__v3) {
        vlSelfRef.__VdlySet__Nanod__v3 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__extDbh = vlSelfRef.__VdlyVal__Nanod__v3;
    }
    if (vlSelfRef.__VdlySet__Nanod__v4) {
        vlSelfRef.__VdlySet__Nanod__v4 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__extAbh = vlSelfRef.__VdlyVal__Nanod__v4;
    }
    if (vlSelfRef.__VdlySet__Nanod__v5) {
        vlSelfRef.__VdlySet__Nanod__v5 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__todbin = vlSelfRef.__VdlyVal__Nanod__v5;
    }
    if (vlSelfRef.__VdlySet__Nanod__v6) {
        vlSelfRef.__VdlySet__Nanod__v6 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__toIrc = vlSelfRef.__VdlyVal__Nanod__v6;
    }
    if (vlSelfRef.__VdlySet__Nanod__v7) {
        vlSelfRef.__VdlySet__Nanod__v7 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ablAbd = vlSelfRef.__VdlyVal__Nanod__v7;
    }
    if (vlSelfRef.__VdlySet__Nanod__v8) {
        vlSelfRef.__VdlySet__Nanod__v8 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ablAbh = vlSelfRef.__VdlyVal__Nanod__v8;
    }
    if (vlSelfRef.__VdlySet__Nanod__v9) {
        vlSelfRef.__VdlySet__Nanod__v9 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dblDbd = vlSelfRef.__VdlyVal__Nanod__v9;
    }
    if (vlSelfRef.__VdlySet__Nanod__v10) {
        vlSelfRef.__VdlySet__Nanod__v10 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dblDbh = vlSelfRef.__VdlyVal__Nanod__v10;
    }
    if (vlSelfRef.__VdlySet__Nanod__v11) {
        vlSelfRef.__VdlySet__Nanod__v11 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbl2Atl = vlSelfRef.__VdlyVal__Nanod__v11;
    }
    if (vlSelfRef.__VdlySet__Nanod__v12) {
        vlSelfRef.__VdlySet__Nanod__v12 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__atl2Dbl = vlSelfRef.__VdlyVal__Nanod__v12;
    }
    if (vlSelfRef.__VdlySet__Nanod__v13) {
        vlSelfRef.__VdlySet__Nanod__v13 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abl2Atl = vlSelfRef.__VdlyVal__Nanod__v13;
    }
    if (vlSelfRef.__VdlySet__Nanod__v14) {
        vlSelfRef.__VdlySet__Nanod__v14 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__atl2Abl = vlSelfRef.__VdlyVal__Nanod__v14;
    }
    if (vlSelfRef.__VdlySet__Nanod__v15) {
        vlSelfRef.__VdlySet__Nanod__v15 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__aob2Ab = vlSelfRef.__VdlyVal__Nanod__v15;
    }
    if (vlSelfRef.__VdlySet__Nanod__v16) {
        vlSelfRef.__VdlySet__Nanod__v16 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abh2Ath = vlSelfRef.__VdlyVal__Nanod__v16;
    }
    if (vlSelfRef.__VdlySet__Nanod__v17) {
        vlSelfRef.__VdlySet__Nanod__v17 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbh2Ath = vlSelfRef.__VdlyVal__Nanod__v17;
    }
    if (vlSelfRef.__VdlySet__Nanod__v18) {
        vlSelfRef.__VdlySet__Nanod__v18 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ath2Dbh = vlSelfRef.__VdlyVal__Nanod__v18;
    }
    if (vlSelfRef.__VdlySet__Nanod__v19) {
        vlSelfRef.__VdlySet__Nanod__v19 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ath2Abh = vlSelfRef.__VdlyVal__Nanod__v19;
    }
    if (vlSelfRef.__VdlySet__Nanod__v20) {
        vlSelfRef.__VdlySet__Nanod__v20 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__alu2Dbd = vlSelfRef.__VdlyVal__Nanod__v20;
    }
    if (vlSelfRef.__VdlySet__Nanod__v21) {
        vlSelfRef.__VdlySet__Nanod__v21 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__alu2Abd = vlSelfRef.__VdlyVal__Nanod__v21;
    }
    if (vlSelfRef.__VdlySet__Nanod__v22) {
        vlSelfRef.__VdlySet__Nanod__v22 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abd2Dcr = vlSelfRef.__VdlyVal__Nanod__v22;
    }
    if (vlSelfRef.__VdlySet__Nanod__v23) {
        vlSelfRef.__VdlySet__Nanod__v23 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dcr2Dbd = vlSelfRef.__VdlyVal__Nanod__v23;
    }
    if (vlSelfRef.__VdlySet__Nanod__v24) {
        vlSelfRef.__VdlySet__Nanod__v24 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbd2Alue = vlSelfRef.__VdlyVal__Nanod__v24;
    }
    if (vlSelfRef.__VdlySet__Nanod__v25) {
        vlSelfRef.__VdlySet__Nanod__v25 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__alue2Dbd = vlSelfRef.__VdlyVal__Nanod__v25;
    }
    if (vlSelfRef.__VdlySet__Nanod__v26) {
        vlSelfRef.__VdlySet__Nanod__v26 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbd2Alub = vlSelfRef.__VdlyVal__Nanod__v26;
    }
    if (vlSelfRef.__VdlySet__Nanod__v27) {
        vlSelfRef.__VdlySet__Nanod__v27 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abd2Alub = vlSelfRef.__VdlyVal__Nanod__v27;
    }
    if (vlSelfRef.__VdlySet__Nanod__v28) {
        vlSelfRef.__VdlySet__Nanod__v28 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dobCtrl = vlSelfRef.__VdlyVal__Nanod__v28;
    }
    if (vlSelfRef.__VdlySet__Nanod__v29) {
        vlSelfRef.__VdlySet__Nanod__v29 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__rxl2db = vlSelfRef.__VdlyVal__Nanod__v29;
    }
    if (vlSelfRef.__VdlySet__Nanod__v30) {
        vlSelfRef.__VdlySet__Nanod__v30 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__rxl2ab = vlSelfRef.__VdlyVal__Nanod__v30;
    }
    if (vlSelfRef.__VdlySet__Nanod__v31) {
        vlSelfRef.__VdlySet__Nanod__v31 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbl2rxl = vlSelfRef.__VdlyVal__Nanod__v31;
    }
    if (vlSelfRef.__VdlySet__Nanod__v32) {
        vlSelfRef.__VdlySet__Nanod__v32 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abl2rxl = vlSelfRef.__VdlyVal__Nanod__v32;
    }
    if (vlSelfRef.__VdlySet__Nanod__v33) {
        vlSelfRef.__VdlySet__Nanod__v33 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__rxh2dbh = vlSelfRef.__VdlyVal__Nanod__v33;
    }
    if (vlSelfRef.__VdlySet__Nanod__v34) {
        vlSelfRef.__VdlySet__Nanod__v34 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__rxh2abh = vlSelfRef.__VdlyVal__Nanod__v34;
    }
    if (vlSelfRef.__VdlySet__Nanod__v35) {
        vlSelfRef.__VdlySet__Nanod__v35 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbh2rxh = vlSelfRef.__VdlyVal__Nanod__v35;
    }
    if (vlSelfRef.__VdlySet__Nanod__v36) {
        vlSelfRef.__VdlySet__Nanod__v36 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abh2rxh = vlSelfRef.__VdlyVal__Nanod__v36;
    }
    if (vlSelfRef.__VdlySet__Nanod__v37) {
        vlSelfRef.__VdlySet__Nanod__v37 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbh2ryh = vlSelfRef.__VdlyVal__Nanod__v37;
    }
    if (vlSelfRef.__VdlySet__Nanod__v38) {
        vlSelfRef.__VdlySet__Nanod__v38 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abh2ryh = vlSelfRef.__VdlyVal__Nanod__v38;
    }
    if (vlSelfRef.__VdlySet__Nanod__v39) {
        vlSelfRef.__VdlySet__Nanod__v39 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__dbl2ryl = vlSelfRef.__VdlyVal__Nanod__v39;
    }
    if (vlSelfRef.__VdlySet__Nanod__v40) {
        vlSelfRef.__VdlySet__Nanod__v40 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__abl2ryl = vlSelfRef.__VdlyVal__Nanod__v40;
    }
    if (vlSelfRef.__VdlySet__Nanod__v41) {
        vlSelfRef.__VdlySet__Nanod__v41 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ryl2db = vlSelfRef.__VdlyVal__Nanod__v41;
    }
    if (vlSelfRef.__VdlySet__Nanod__v42) {
        vlSelfRef.__VdlySet__Nanod__v42 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ryl2ab = vlSelfRef.__VdlyVal__Nanod__v42;
    }
    if (vlSelfRef.__VdlySet__Nanod__v43) {
        vlSelfRef.__VdlySet__Nanod__v43 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ryh2dbh = vlSelfRef.__VdlyVal__Nanod__v43;
    }
    if (vlSelfRef.__VdlySet__Nanod__v44) {
        vlSelfRef.__VdlySet__Nanod__v44 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__ryh2abh = vlSelfRef.__VdlyVal__Nanod__v44;
    }
    if (vlSelfRef.__VdlySet__Nanod__v45) {
        vlSelfRef.__VdlySet__Nanod__v45 = 0U;
        vlSelfRef.__PVT__Nanod.__PVT__isRmc = vlSelfRef.__VdlyVal__Nanod__v45;
    }
    vlSelfRef.__PVT__busArbiter__DOT__next = ((0U == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                               ? 1U
                                               : ((1U 
                                                   == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                   ? 
                                                  ((IData)(__PVT__bgBlock)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__BgackI)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__BRi)
                                                      ? 1U
                                                      : 2U)
                                                     : 4U))
                                                   : 
                                                  ((4U 
                                                    == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__BRi) 
                                                     | (IData)(__PVT__bgBlock))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__BgackI) 
                                                      | (IData)(__PVT__bgBlock))
                                                      ? 1U
                                                      : 4U)
                                                     : 6U)
                                                    : 
                                                   ((2U 
                                                     == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                     ? 3U
                                                     : 
                                                    ((3U 
                                                      == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                      ? 
                                                     (((~ (IData)(vlSelfRef.__PVT__BRi)) 
                                                       & (IData)(vlSelfRef.__PVT__BgackI))
                                                       ? 3U
                                                       : 4U)
                                                      : 
                                                     ((6U 
                                                       == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                       ? 5U
                                                       : 
                                                      ((5U 
                                                        == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__BgackI)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__BRi)
                                                          ? 1U
                                                          : 3U)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__BRi)
                                                          ? 7U
                                                          : 5U))
                                                        : 
                                                       ((7U 
                                                         == vlSelfRef.__PVT__busArbiter__DOT__dmaPhase)
                                                         ? 4U
                                                         : 1U))))))));
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__1(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP.tb_system__DOT__main_board__DOT__wr_q) 
                                                    | (IData)(vlSelfRef.__PVT__busControl__DOT__rRWn))));
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__4(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __PVT__excUnit__DOT__alu__DOT__subResult;
    __PVT__excUnit__DOT__alu__DOT__subResult = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__subCout;
    __PVT__excUnit__DOT__alu__DOT__subCout = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__subOv;
    __PVT__excUnit__DOT__alu__DOT__subOv = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__shftCin;
    __PVT__excUnit__DOT__alu__DOT__shftCin = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__shftMsb;
    __PVT__excUnit__DOT__alu__DOT__shftMsb = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
    CData/*0:0*/ __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
    IData/*31:0*/ __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata;
    __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata = 0;
    SData/*15:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa = 0;
    SData/*15:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte = 0;
    CData/*0:0*/ __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0U;
    if ((1U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 1U;
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
            = (vlSelfRef.__PVT__Nanod.__PVT__aluFinish
                ? ((0x00000080U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                    ? 0x0fU : 0x0cU) : ((0U != (3U 
                                                & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 0x0000000dU)))
                                         ? 4U : 0x0fU));
    } else {
        if ((5U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 5U;
        } else if ((1U & ((0U != (0x039eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) 
                          | ((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                    >> 5U)) || (1U 
                                                & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 6U)))))) {
            if ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if (((4U == vlSelfRef.__PVT__Nanod
                             .__PVT__aluColumn) || 
                            (6U == vlSelfRef.__PVT__Nanod
                             .__PVT__aluColumn))) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x15U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0bU;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0eU;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                        = ((2U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluDctrl) ? 0x00000016U
                            : 4U);
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0dU;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                    = ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) ? 0x0000000fU
                        : 1U);
            } else if (((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                               >> 5U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                 >> 6U)))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x10U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 5U;
                } else if ((3U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 1U;
                } else if ((4U == vlSelfRef.__PVT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
            } else if ((2U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 6U;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x11U;
            }
        } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x12U;
            }
        } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((3U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((4U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x13U;
            }
        } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
        } else if ((0x00002000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp = 9U;
        } else if ((0x00004000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                = ((4U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? 9U : 8U);
        } else if ((0x00008000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluOp 
                = ((3U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? 4U : 8U);
        }
        if (((2U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn) 
             || (3U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn))) {
            if ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                               >> 3U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                 >> 9U)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
                    = ((2U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) ? 0x1bU : 0x1fU);
            } else if (((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                 >> 2U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 5U))) 
                         || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0aU))) || (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0cU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x1fU;
            } else if ((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                >> 6U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                  >> 7U))) 
                        || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                  >> 0x0bU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if (((((1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                 >> 4U)) || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                   >> 8U))) 
                         || (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                   >> 0x0dU))) || (1U 
                                                   & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0eU)))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if ((0x00008000U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask = 0U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(16, (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row), Vtb_system__ConstPool__CONST_h1b96ab98_0);
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__cMask 
                = ((4U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)
                    ? Vtb_system__ConstPool__TABLE_ha56e5a24_0
                   [__Vtemp_1] : ((5U == vlSelfRef.__PVT__Nanod
                                   .__PVT__aluColumn)
                                   ? ((2U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                                       ? 0x0fU : 0U)
                                   : 0U));
        }
    }
    vlSelfRef.__PVT__excUnit__DOT__dobInput = ((2U 
                                                == vlSelfRef.__PVT__Nanod
                                                .__PVT__dobCtrl)
                                                ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Abd)
                                                : (
                                                   (1U 
                                                    == vlSelfRef.__PVT__Nanod
                                                    .__PVT__dobCtrl)
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__Dbd)
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__Nanod
                                                     .__PVT__dobCtrl)
                                                     ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 0U)));
    __PVT__excUnit__DOT__alu__DOT__shftMsb = (1U & 
                                              ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)
                                                ? ((IData)(vlSelfRef.__PVT__alue) 
                                                   >> 0x0000000fU)
                                                : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                    >> 0x0000000fU))));
    __PVT__excUnit__DOT__alu__DOT__shftCin = (1U & 
                                              ((~ (
                                                   (0x10U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   | ((0x0dU 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                      | (0x0fU 
                                                         == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))))) 
                                               & (((0x11U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   | (0x0eU 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb)
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                                    ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)
                                                    : 
                                                   (((0x13U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                     | (0x14U 
                                                        == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__rIrd8)
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                        >> 3U) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                        >> 1U))
                                                       : (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                                                      >> 4U))
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                     & (vlSelfRef.__PVT__Nanod
                                                        .__PVT__aluColumn 
                                                        >> 1U)))))));
    __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
        = (((IData)(vlSelfRef.__PVT__alue) << 0x00000010U) 
           | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand));
    if (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte) 
         & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))) {
        __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffffeffU & __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                  << 8U));
    } else if (((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)) 
                & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))) {
        __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffeffffU & __PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                  << 0x00000010U));
    }
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftResult 
        = (((IData)(vlSelfRef.excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords) 
            & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight))
            ? ((((0x00008000U & (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                 << 0x0000000fU)) | 
                 (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                  >> 0x00000011U)) << 0x00000010U) 
               | (((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                   << 0x0000000fU) | (0x00007fffU & 
                                      (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                       >> 1U)))) : 
           ((IData)(vlSelfRef.excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords)
             ? ((((0x0000fffeU & (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                  >> 0x0000000fU)) 
                  | (IData)(__PVT__excUnit__DOT__alu__DOT__shftCin)) 
                 << 0x00000010U) | ((0x0000fffeU & 
                                     (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                      << 1U)) | (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                 >> 0x0000001fU)))
             : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftRight)
                 ? (((IData)(__PVT__excUnit__DOT__alu__DOT__shftCin) 
                     << 0x0000001fU) | (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                        >> 1U)) : (
                                                   (__PVT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                    << 1U) 
                                                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftCin)))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd 
        = (((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
            | (0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
           | (0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin 
        = (1U & ((~ ((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                     | (2U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
                 & ((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    | (((0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0aU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                        ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrCore)
                        : (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                            >> 4U) & ((0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                      | (3U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))))))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand;
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa 
        = vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand;
    if (__Vtask_excUnit__DOT__alu__DOT__mySubber__5__isByte) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                               ? (((0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                                   + (0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa))) 
                                  + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))
                               : (((0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                                   - (0x000000ffU & (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa))) 
                                  - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result 
            = ((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                                                 >> 7U)))) 
                               << 8U)) | (0x000000ffU 
                                          & vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 8U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 7U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                     >> 7U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                     >> 7U));
    } else {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                               ? (((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                                   + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa)) 
                                  + (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))
                               : (((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                                   - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa)) 
                                  - (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cin))));
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result 
            = (0x0000ffffU & vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp);
        vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x10U));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x0fU));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb) 
                     >> 0x0fU));
        __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                     >> 0x0fU));
    }
    __PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm 
        = (1U & ((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__bAdd)
                  ? (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm)
                  : (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm))));
    __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov 
        = ((((IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm) 
             & (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm)) 
            & (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm))) 
           | (((~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm)) 
               & (~ (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm))) 
              & (IData)(__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__subHcarry 
        = (1U & ((((IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpa) 
                   ^ (IData)(__Vtask_excUnit__DOT__alu__DOT__mySubber__5__inpb)) 
                  ^ vlSelfRef.__PVT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp) 
                 >> 4U));
    __PVT__excUnit__DOT__alu__DOT__subResult = vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result;
    __PVT__excUnit__DOT__alu__DOT__subCout = vlSelfRef.__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout;
    __PVT__excUnit__DOT__alu__DOT__subOv = __Vtask_excUnit__DOT__alu__DOT__mySubber__5__ov;
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                           ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                              & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                           : ((8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                               ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                  | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                               : ((9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                   ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                      ^ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__dOperand))
                                   : ((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))
                                       ? ((0x0000ff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)))
                                       : ((((((((((0x15U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                  || (0x0dU 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                || (0x0fU 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                               || (0x10U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                              || (0x11U 
                                                  == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                             || (0x12U 
                                                 == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                            || (0x13U 
                                                == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                           || (0x14U 
                                               == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                           ? vlSelfRef.__PVT__excUnit__DOT__alu__DOT__shftResult
                                           : ((((((
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                    || (0x0bU 
                                                        == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                   || (0x0cU 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                  || (2U 
                                                      == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0aU 
                                                     == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                                || (7U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                                               || (3U 
                                                   == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                               ? (IData)(__PVT__excUnit__DOT__alu__DOT__subResult)
                                               : ((
                                                   (0x16U 
                                                    == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                                                   || (6U 
                                                       == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdLatch)
                                                   : 0U))))))));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (0x00000010U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = (0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (4U & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                      ? (~ (0U != (0x000000ffU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result))))
                      : (~ (0U != (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result)))) 
                    << 2U)));
    vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (8U & (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                      ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result) 
                         >> 7U) : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__result) 
                                   >> 0x0fU)) << 3U)));
    if (((((((((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
               | (((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                   || (8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                  || (9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
              | (1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
             | (0x15U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
            | ((0x0fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
               || (0x13U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
           | ((0x10U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
              || (0x14U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) 
          | (0x0dU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
         | (0x0eU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        if ((5U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            if ((5U == vlSelfRef.__PVT__Nanod.__PVT__aluColumn)) {
                vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                    = (0x0000000aU | (0x11U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)));
            }
        } else if ((((7U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                     || (8U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                    || (9U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((1U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (((1U == vlSelfRef.__PVT__Nanod
                        .__PVT__aluColumn) & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0900U 
                                                       & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row))))) 
                      & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr) 
                         >> 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x15U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                            >> 0x0fU)));
        } else if (((0x0fU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x13U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if (((0x10U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x14U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((~ ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__row) 
                                >> 7U)) & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand))));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x0dU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)) 
                            | (((IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb) 
                                ^ ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isLong)
                                    ? ((IData)(vlSelfRef.__PVT__alue) 
                                       >> 0x0eU) : 
                                   ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__isByte)
                                     ? ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                        >> 6U) : ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                                  >> 0x0eU)))) 
                               << 1U))));
        } else {
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)));
        }
    } else if ((0x11U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(__PVT__excUnit__DOT__alu__DOT__shftMsb));
    } else if ((0x12U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (1U & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__aOperand)));
    } else if (((((((4U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x0bU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                   || (0x0cU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                  || (2U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                 || (0x0aU == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper))) 
                || (3U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(__PVT__excUnit__DOT__alu__DOT__subCout));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__subCout) 
                  << 4U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(__PVT__excUnit__DOT__alu__DOT__subOv) 
                  << 1U));
    } else if (((0x16U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)) 
                || (6U == (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdCarry) 
                  << 4U));
        vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1cU & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdOverf) 
                   << 1U) | (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__bcdCarry)));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (((IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrTemp) 
                                                 & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                | ((~ (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                   & (IData)(vlSelfRef.__PVT__excUnit__DOT__alu__DOT__pswCcr)));
}

void Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__6(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__6\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Clks.__PVT__enPhi1 = vlSymsp->TOP.tb_system__DOT__m_phi1;
    vlSelfRef.__PVT__Clks.__PVT__enPhi2 = vlSymsp->TOP.tb_system__DOT__m_phi2;
    vlSelfRef.__Vcellinp__nanoRom__clk = vlSelfRef.__PVT__Clks
        .__PVT__clk;
}

void Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__10(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___nba_comb__TOP__tb_system__DOT__main_board__DOT__cpu__10\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_11 = (((((1U == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                          & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__rAS)) 
                                             & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg))) 
                                         | ((IData)(vlSelfRef.__PVT__BRi) 
                                            & ((IData)(vlSelfRef.__PVT__BgackI) 
                                               & ((~ (IData)(vlSelfRef.__PVT__busArbiter__DOT__rGranted)) 
                                                  & (IData)(vlSelfRef.__PVT__Halti))))) 
                                        & ((~ (IData)(vlSelfRef.__PVT__busControl__DOT__bcReset)) 
                                           & (vlSelfRef.__PVT__Nanod
                                              .__PVT__permStart 
                                              | (IData)(vlSelfRef.__PVT__busControl__DOT__bcPend))))
                                        ? 2U : 1U);
    vlSelfRef.__PVT__busControl__DOT__next = ((0U == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                               ? 1U
                                               : ((6U 
                                                   == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.__PVT__rDtack)) 
                                                          | (IData)(vlSelfRef.__PVT__iStop)))
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                       ? 
                                                      (((5U 
                                                         == vlSelfRef.__PVT__busControl__DOT__busPhase) 
                                                        & ((IData)(vlSelfRef.__PVT__busControl__DOT__bcReset) 
                                                           & (IData)(vlSelfRef.__PVT__busControl__DOT__isRmcReg)))
                                                        ? 6U
                                                        : __VdfgRegularize_hebeb780c_0_11)
                                                       : 
                                                      ((1U 
                                                        == vlSelfRef.__PVT__busControl__DOT__busPhase)
                                                        ? __VdfgRegularize_hebeb780c_0_11
                                                        : 1U)))))));
    vlSelfRef.__PVT__busControl__DOT__busEnding = (
                                                   (1U 
                                                    == vlSelfRef.__PVT__busControl__DOT__next) 
                                                   | (2U 
                                                      == vlSelfRef.__PVT__busControl__DOT__next));
}
