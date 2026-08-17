// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xeno.h for the primary calling header

#include "Vtb_xeno__pch.h"

extern const VlWide<18>/*575:0*/ Vtb_xeno__ConstPool__CONST_h2ec8fa17_0;
extern const VlUnpacked<CData/*1:0*/, 9> Vtb_xeno__ConstPool__TABLE_h4bf1d606_0;
extern const VlUnpacked<SData/*15:0*/, 16> Vtb_xeno__ConstPool__TABLE_he204aa36_0;

void Vtb_xeno___024root___nba_comb__TOP__1(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_comb__TOP__1\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw 
        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT) 
            << 0x0000000fU) | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS) 
                                << 0x0000000dU) | (
                                                   ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0 
        = ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                  >> 7U)) | (1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue)));
    if (((((((((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 8U))) | (1U 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))) 
              | (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                       >> 8U)))) | 
             (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                    >> 8U)))) | (4U 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))) 
           | (5U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                    >> 8U)))) | (6U 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))) 
         | (7U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                  >> 8U))))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest 
            = ((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                      >> 8U))) || (
                                                   (1U 
                                                    != 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                        >> 8U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           == 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                               >> 8U)))
                                                           ? (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (5U 
                                                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw))))
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x0000000fU 
                                                             & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                >> 8U)))
                                                            ? 
                                                           ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                            | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                               >> 2U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x0000000fU 
                                                              & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                 >> 8U)))
                                                             ? 
                                                            (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw))
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                  >> 8U)))
                                                              ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)
                                                              : 
                                                             ((6U 
                                                               == 
                                                               (0x0000000fU 
                                                                & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                                   >> 8U)))
                                                               ? 
                                                              (~ 
                                                               ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                                >> 2U))
                                                               : 
                                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                               >> 2U)))))))));
    } else if (((((((((8U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 8U))) 
                      | (9U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 8U)))) 
                     | (0x0aU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                 >> 8U)))) 
                    | (0x0bU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                >> 8U)))) 
                   | (0x0cU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                               >> 8U)))) 
                  | (0x0dU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                              >> 8U)))) 
                 | (0x0eU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                             >> 8U)))) 
                | (0x0fU == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 8U))))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest 
            = (1U & ((8U == (0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                            >> 8U)))
                      ? (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                            >> 1U)) : ((9U == (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 8U)))
                                        ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                           >> 1U) : 
                                       ((0x0aU == (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))
                                         ? (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                               >> 3U))
                                         : ((0x0bU 
                                             == (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                    >> 8U)))
                                             ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                >> 3U)
                                             : ((0x0cU 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))
                                                 ? 
                                                ((IData)(
                                                         (0x000aU 
                                                          == 
                                                          (0x000aU 
                                                           & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))) 
                                                 | (IData)(
                                                           (0U 
                                                            == 
                                                            (0x000aU 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))))
                                                 : 
                                                ((0x0dU 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))
                                                  ? 
                                                 ((IData)(
                                                          (8U 
                                                           == 
                                                           (0x000aU 
                                                            & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))) 
                                                  | (IData)(
                                                            (2U 
                                                             == 
                                                             (0x000aU 
                                                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))))
                                                  : 
                                                 ((0x0eU 
                                                   == 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                       >> 8U)))
                                                   ? 
                                                  ((IData)(
                                                           (0x000aU 
                                                            == 
                                                            (0x000eU 
                                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))) 
                                                   | (IData)(
                                                             (0U 
                                                              == 
                                                              (0x000eU 
                                                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))))
                                                   : 
                                                  ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                     >> 2U) 
                                                    | (IData)(
                                                              (8U 
                                                               == 
                                                               (0x000aU 
                                                                & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw))))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (0x000aU 
                                                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)))))))))))));
    }
    if (((((((((0U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                      >> 2U))) | (1U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                      >> 2U)))) 
              | (0x11U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) 
             | (2U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                      >> 2U)))) | (0x12U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                       >> 2U)))) 
           | (3U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                    >> 2U)))) | (4U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                     >> 2U)))) 
         | (5U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                  >> 2U))))) {
        if ((0U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                   >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (3U & (- (IData)((1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc) 
                                          >> 0x0000000bU)))));
        } else if ((1U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((0U != (0x0000003fU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg))
                    ? 3U : 1U);
        } else if ((0x11U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((0U != (0x0000003fU & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg))
                    ? 3U : 0U);
        } else if ((2U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw)));
        } else if ((0x12U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (2U | (1U & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw))));
        } else if ((3U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                          >> 1U)) | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                           >> 2U)));
        } else if ((4U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            if ((0U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                              >> 2U)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 2U;
            } else if ((2U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                     >> 2U)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 1U;
            } else if (((1U == (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                      >> 2U))) || (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                       >> 2U))))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 3U;
            }
        } else {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U | (2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                               >> 2U)));
        }
    } else if (((((((((0x15U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                >> 2U))) 
                      | (6U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                               >> 2U)))) 
                     | (7U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                              >> 2U)))) 
                    | (8U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) 
                   | (9U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                            >> 2U)))) 
                  | (0x19U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                              >> 2U)))) 
                 | (0x0cU == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) 
                | (0x1cU == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                            >> 2U))))) {
        if ((0x15U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                      >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (2U | (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                               >> 3U)));
        } else if ((6U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U | ((IData)((0U == (0x0cU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)))) 
                         << 1U));
        } else if ((7U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            if (((2U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0)) 
                 || (0U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0)))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 3U;
            } else if ((1U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 1U;
            } else if ((3U == (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = 2U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(32, ((8U & 
                                               ((~ 
                                                 (0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                     >> 6U)) 
                                                 | (3U 
                                                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue)))), Vtb_xeno__ConstPool__CONST_h2ec8fa17_0);
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((8U == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 2U))) ? Vtb_xeno__ConstPool__TABLE_h4bf1d606_0
                   [__Vtemp_1] : ((9U == (0x0000001fU 
                                          & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))
                                   ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                       ? 3U : 1U) : 
                                  ((0x19U == (0x0000001fU 
                                              & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                 >> 2U)))
                                    ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                        ? 3U : 2U) : 
                                   ((0x0cU == (0x0000001fU 
                                               & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                  >> 2U)))
                                     ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4)
                                         ? 1U : 3U)
                                     : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4)
                                         ? 2U : 3U)))));
        }
    } else {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 
            = ((0x0aU == (0x0000001fU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                         >> 2U))) ? 
               ((4U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore))
                 ? 0U : 3U) : ((0x0bU == (0x0000001fU 
                                          & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                             >> 2U)))
                                ? ((0U == ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                  >> 2U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                               >> 1U))))
                                    ? 0U : 3U) : ((0x0dU 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                       >> 2U)))
                                                   ? 
                                                  ((2U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw) 
                                                          >> 1U))))
                                                   : 
                                                  (((0x0eU 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                         >> 2U))) 
                                                    || (0x1eU 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                            >> 2U))))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl))
                                                      ? 
                                                     (1U 
                                                      & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                         >> 6U))
                                                      : 3U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl))
                                                      ? 
                                                     (1U 
                                                      & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                         >> 6U))
                                                      : 2U))
                                                    : 0U))));
    }
    if ((2U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((((0x0000000cU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                 >> 0x0000000bU)) | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1)) 
                << 6U) | ((0x0000003cU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                          >> 5U)) | 
                          (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                 >> 0x0bU))));
    } else if ((0U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((((0x0000000cU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                 >> 0x0000000bU)) | 
                 (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                        >> 5U))) << 6U) | ((0x0000003cU 
                                            & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                               >> 5U)) 
                                           | (3U & 
                                              (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                               >> 0x0000000bU))));
    } else if ((1U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma 
            = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rIllegal) 
                | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineF) 
                   | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineA) 
                      | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rPriv) 
                         | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rInterrupt) 
                            | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rTrace))))))
                ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1Nma)
                : vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1
               [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                >> 0x0000000cU))]);
    } else if ((2U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
            [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 0x0000000cU))];
    } else if ((3U == (3U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((1U & Vtb_xeno__ConstPool__TABLE_he204aa36_0
                [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                 >> 0x0000000cU))])
                ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3)
                : vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
               [(0x0000000fU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                >> 0x0000000cU))]);
    }
}

void Vtb_xeno___024root___nba_comb__TOP__4(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_comb__TOP__4\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish 
        = (1U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                   >> 2U) | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                             >> 0x0000001cU)) | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                 .__PVT__isWrite));
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
}

extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_xeno__ConstPool__TABLE_ha56e5a24_0;

void Vtb_xeno___024root___nba_comb__TOP__5(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___nba_comb__TOP__5\n"); );
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
    IData/*31:0*/ __Vtemp_1;
    // Body
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
    tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb 
        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)
                  ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue) 
                     >> 0x0000000fU) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                                         ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                            >> 7U) : 
                                        ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                         >> 0x0000000fU))));
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

void Vtb_xeno___024root___nba_sequent__TOP__0(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___nba_sequent__TOP__1(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___nba_sequent__TOP__2(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___nba_sequent__TOP__3(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___nba_sequent__TOP__4(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___nba_sequent__TOP__5(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___act_sequent__TOP__0(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___ico_comb__TOP__0(Vtb_xeno___024root* vlSelf);

void Vtb_xeno___024root___eval_nba(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_nba\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000028ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1;
            __Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1 = 0;
            __Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1 
                = (1U & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__wr_q) 
                            | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_stb 
                = ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_cs_q)) 
                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm));
            vlSelfRef.dbg_pal_we = (__Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1 
                                    & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_pal));
            vlSelfRef.tb_xeno__DOT__vram_we = ((- (IData)(
                                                          (__Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1 
                                                           & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram)))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5));
            vlSelfRef.tb_xeno__DOT__sprram_we = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                 & (- (IData)(
                                                              (__Vinline_0__nba_comb__TOP__0___VdfgRegularize_hebeb780c_0_1 
                                                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr)))));
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microOutput 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uRom__DOT__uRam
                [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microAddr];
        }
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__pwrUp) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microAddr = 2U;
            } else if (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1) {
                vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microAddr 
                    = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nma;
            }
        }
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_xeno___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
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
                       .__PVT__implicitSp ? 0x0fU : 
                       (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                        .__PVT__rxIsMovem ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__movemRx)
                         : ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                             .__PVT__rxIsAreg << 3U) 
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
                                      .__PVT__rz ? 
                                      ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc) 
                                       >> 0x0cU) : 
                                      ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
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
        }
    }
    if ((0x0000000000000029ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)
                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH)
                                   : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                      .__PVT__rxh2abh
                                       ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                           ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                          [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                           : 0U) : 
                                      (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                       .__PVT__ryh2abh
                                        ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                            ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                           [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                            : 0U) : 
                                       (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                        .__PVT__au2Ab
                                         ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
                                            >> 0x10U)
                                         : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                            .__PVT__aob2Ab
                                             ? (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob 
                                                >> 0x10U)
                                             : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                .__PVT__ath2Abh
                                                 ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                 : 0U)))))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhMux 
                = (0x0000ffffU & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                  .__PVT__rxh2dbh ? 
                                  ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                    ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                   [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                    : 0U) : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                             .__PVT__ryh2dbh
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__au2Db
                                                  ? 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__ath2Dbh
                                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                   : 
                                                  ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)
                                                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH)
                                                    : 0U))))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)
                                   ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                       ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                      [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                       : 0U) : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                                 [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__ftu2Dbl
                                                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu)
                                                  : 
                                                 (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                  .__PVT__au2Db
                                                   ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg
                                                   : 
                                                  (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                   .__PVT__atl2Dbl
                                                    ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                    : 
                                                   ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)
                                                     ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL)
                                                     : 0U)))))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)
                                   ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL)
                                   : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)
                                       ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                           ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                          [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                           : 0U) : 
                                      ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)
                                        ? ((0x11U >= (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                            ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L
                                           [vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                            : 0U) : 
                                       (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                        .__PVT__ftu2Abl
                                         ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu)
                                         : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                            .__PVT__au2Ab
                                             ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg
                                             : (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                .__PVT__aob2Ab
                                                 ? vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob
                                                 : 
                                                (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                 .__PVT__atl2Abl
                                                  ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                  : 0U))))))));
        }
    }
    if ((0x0000000000000039ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
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
                                                    : 
                                                   (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                    .__PVT__alu2Dbd
                                                     ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 
                                                    (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                                     .__PVT__dcr2Dbd
                                                      ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dcrOutput)
                                                      : 0U))))));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nma 
                = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err)
                    ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__a0Rst)
                        ? 2U : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst) 
                                 | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                                    | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr)))
                                 ? 1U : 3U)) : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma));
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi1 
                = vlSelfRef.tb_xeno__DOT__phi1;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi2 
                = vlSelfRef.tb_xeno__DOT__phi2;
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk 
                = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
                .__PVT__clk;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__10
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
        }
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__11
            IData/*31:0*/ __Vinline_0__nba_comb__TOP__11___VdfgRegularize_hebeb780c_0_6;
            __Vinline_0__nba_comb__TOP__11___VdfgRegularize_hebeb780c_0_6 = 0;
            __Vinline_0__nba_comb__TOP__11___VdfgRegularize_hebeb780c_0_6 
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
                                                     : __Vinline_0__nba_comb__TOP__11___VdfgRegularize_hebeb780c_0_6)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __Vinline_0__nba_comb__TOP__11___VdfgRegularize_hebeb780c_0_6
                                                     : 1U)))))));
            vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding 
                = ((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next) 
                   | (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next));
        }
    }
}

void Vtb_xeno___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_xeno___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_xeno___024root___act_comb__TOP__0(Vtb_xeno___024root* vlSelf);

bool Vtb_xeno___024root___eval_phase__act(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_phase__act\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h0102208c__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h0102208c__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h0102208c__0 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__clk;
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0))) 
                                                          << 4U) 
                                                         | ((((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h0102208c__0 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h0102208c__1))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))) 
                                                                << 2U)) 
                                                            | (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1) 
                                                                << 1U) 
                                                               | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr_h0102208c__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h0102208c__0;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xeno___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_xeno___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_xeno___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_xeno___024root___act_sequent__TOP__0(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__1
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updSsw 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aob2Ab;
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish 
                        = (1U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                                   >> 2U) | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                             >> 0x0000001cU)) 
                                 | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                 .__PVT__isWrite));
                }
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__2
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel 
                        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                           .__PVT__isPcRel & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                              .__PVT__rz));
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pcldbl 
                        = (1U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                  >> 7U) | ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                                >> 8U)) 
                                            & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel))));
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pchdbh 
                        = ((1U == (3U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U])) 
                           | ((~ (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[0U] 
                                  >> 0x00000016U)) 
                              & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel)));
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
                }
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_xeno___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

void Vtb_xeno___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_xeno___024root___eval_phase__nba(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_phase__nba\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_xeno___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_xeno___024root___eval_nba(vlSelf);
        Vtb_xeno___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_xeno___024root___eval_phase__ico(Vtb_xeno___024root* vlSelf);

void Vtb_xeno___024root___eval(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_xeno___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../tb_xeno.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_xeno___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_xeno___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb_xeno.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_xeno___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb_xeno.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_xeno___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_xeno___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_xeno___024root___eval_debug_assertions(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_debug_assertions\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
