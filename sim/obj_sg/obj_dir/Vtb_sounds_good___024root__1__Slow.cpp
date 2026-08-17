// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sounds_good.h for the primary calling header

#include "Vtb_sounds_good__pch.h"

extern const VlWide<18>/*575:0*/ Vtb_sounds_good__ConstPool__CONST_h2ec8fa17_0;
extern const VlUnpacked<CData/*1:0*/, 9> Vtb_sounds_good__ConstPool__TABLE_h4bf1d606_0;
extern const VlUnpacked<SData/*15:0*/, 16> Vtb_sounds_good__ConstPool__TABLE_he204aa36_0;

VL_ATTR_COLD void Vtb_sounds_good___024root___stl_sequent__TOP__1(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___stl_sequent__TOP__1\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__isWrite 
        = (0U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dobCtrl));
    if ((1U & (~ ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
                  | ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
                     | ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
                        | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next))))))) {
        if (((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
             | ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
                | ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next) 
                   | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:2235: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.busArbiter", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next);
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 2235, "");
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rstUrom 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
           .__PVT__enPhi1 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enErrClk));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT1 
        = ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
            .__PVT__enPhi1 & (4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState)) 
           & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__wClk)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_rom 
        = (1U & (~ ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                     >> 0x00000012U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_ram 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)) 
           & (0x00070000U == (0x00070000U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_pia 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)) 
           & (0x00060000U == (0x00070000U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)));
    if (((((((((0U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                      >> 2U))) | (1U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                      >> 2U)))) 
              | (0x11U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) 
             | (2U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                      >> 2U)))) | (0x12U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                       >> 2U)))) 
           | (3U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                    >> 2U)))) | (4U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                     >> 2U)))) 
         | (5U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                  >> 2U))))) {
        if ((0U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                   >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (3U & (- (IData)((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irc) 
                                          >> 0x0000000bU)))));
        } else if ((1U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((0U != (0x0000003fU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg))
                    ? 3U : 1U);
        } else if ((0x11U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((0U != (0x0000003fU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg))
                    ? 3U : 0U);
        } else if ((2U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)));
        } else if ((0x12U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (2U | (1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw))));
        } else if ((3U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((2U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                          >> 1U)) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                           >> 2U)));
        } else if ((4U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            if ((0U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                              >> 2U)))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 2U;
            } else if ((2U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                     >> 2U)))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 1U;
            } else if (((1U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                      >> 2U))) || (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                       >> 2U))))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 3U;
            }
        } else {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U | (2U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                               >> 2U)));
        }
    } else if (((((((((0x15U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                >> 2U))) 
                      | (6U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                               >> 2U)))) 
                     | (7U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                              >> 2U)))) 
                    | (8U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) 
                   | (9U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                            >> 2U)))) 
                  | (0x19U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                              >> 2U)))) 
                 | (0x0cU == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))) 
                | (0x1cU == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                            >> 2U))))) {
        if ((0x15U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                      >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (2U | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                               >> 3U)));
        } else if ((6U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = (1U | ((IData)((0U == (0x0cU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)))) 
                         << 1U));
        } else if ((7U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U)))) {
            if (((2U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0)) 
                 || (0U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0)))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 3U;
            } else if ((1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 1U;
            } else if ((3U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 2U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(32, ((8U & 
                                               ((~ 
                                                 (0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                     >> 6U)) 
                                                 | (3U 
                                                    & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue)))), Vtb_sounds_good__ConstPool__CONST_h2ec8fa17_0);
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
                = ((8U == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 2U))) ? Vtb_sounds_good__ConstPool__TABLE_h4bf1d606_0
                   [__Vtemp_1] : ((9U == (0x0000001fU 
                                          & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))
                                   ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                       ? 3U : 1U) : 
                                  ((0x19U == (0x0000001fU 
                                              & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                 >> 2U)))
                                    ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                        ? 3U : 2U) : 
                                   ((0x0cU == (0x0000001fU 
                                               & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                  >> 2U)))
                                     ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__dcr4)
                                         ? 1U : 3U)
                                     : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__dcr4)
                                         ? 2U : 3U)))));
        }
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 
            = ((0x0aU == (0x0000001fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                         >> 2U))) ? 
               ((4U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore))
                 ? 0U : 3U) : ((0x0bU == (0x0000001fU 
                                          & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                             >> 2U)))
                                ? ((0U == ((2U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                  >> 2U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                               >> 1U))))
                                    ? 0U : 3U) : ((0x0dU 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                       >> 2U)))
                                                   ? 
                                                  ((2U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                          >> 1U))))
                                                   : 
                                                  (((0x0eU 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                         >> 2U))) 
                                                    || (0x1eU 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                            >> 2U))))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__enl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__enl))
                                                      ? 
                                                     (1U 
                                                      & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                         >> 6U))
                                                      : 3U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__enl))
                                                      ? 
                                                     (1U 
                                                      & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                         >> 6U))
                                                      : 2U))
                                                    : 0U))));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isPcRel 
        = (IData)(((0x003aU == (0x003eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (~ (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                          >> 5U) & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ryIsDt 
        = (IData)(((0x0038U == (0x003aU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg 
        = ((0U != (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                         >> 3U))) & (7U != (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 3U))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ryIsAreg 
        = ((0x00000020U & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg) 
                                                   & (0x19U 
                                                      != 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                          >> 3U))))
            : ((1U & (~ ((1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))] 
                                >> 6U)) || (1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                                  [
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 0x0000000cU))] 
                                                  >> 7U))))) 
               && (1U & ((0x00004000U & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 0x0000000cU))])
                          ? (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift))
                          : (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia_stb 
        = ((~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia_cs_q) 
               | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rUDS))) 
           & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_pia));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu_din = 0xffffU;
    if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_rom) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu_din 
            = vlSelfRef.tb_sounds_good__DOT__rom_q;
    } else if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_ram) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu_din 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram_q;
    } else if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_pia) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu_din 
            = (0xffU | (0x0000ff00U & (((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                         ? ((4U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                             ? (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__irqb1) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__crb))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__crb))
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3) 
                                                 | ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb)) 
                                                    & (0x000000f0U 
                                                       | (IData)(vlSelfRef.tb_sounds_good__DOT__cmd_data))))
                                                 : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb)))
                                         : ((4U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                             ? (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__irqa1) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__cra))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__cra))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)) 
                                                 | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ora) 
                                                    & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)))
                                                 : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)))) 
                                       << 8U)));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp 
        = ((6U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    __VdfgRegularize_hebeb780c_0_11 = (6U & (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                            >> 4U) 
                                                           | ((6U 
                                                               != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                              & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                  >> 8U) 
                                                                 | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp) 
                                                                           >> 5U)))))))))));
    if ((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch)) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((((0x0000000cU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                 >> 0x0000000bU)) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1)) 
                << 6U) | ((0x0000003cU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                          >> 5U)) | 
                          (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                 >> 0x0bU))));
    } else if ((0U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((((0x0000000cU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                 >> 0x0000000bU)) | 
                 (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                        >> 5U))) << 6U) | ((0x0000003cU 
                                            & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                               >> 5U)) 
                                           | (3U & 
                                              (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                               >> 0x0000000bU))));
    } else if ((1U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma 
            = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rIllegal) 
                | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineF) 
                   | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineA) 
                      | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rPriv) 
                         | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rInterrupt) 
                            | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rTrace))))))
                ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1Nma)
                : vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1
               [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                >> 0x0000000cU))]);
    } else if ((2U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
            [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 0x0000000cU))];
    } else if ((3U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                             >> 2U)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma 
            = ((1U & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                 >> 0x0000000cU))])
                ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3)
                : vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
               [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                >> 0x0000000cU))]);
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x0000001fU 
                                                & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                                                    >> 4U) 
                                                   - (IData)(__VdfgRegularize_hebeb780c_0_11)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (0x0000001fU 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                                     >> 4U) 
                                                    + (IData)(__VdfgRegularize_hebeb780c_0_11)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib 
        = ((6U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nma 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__A0Err)
            ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__a0Rst)
                ? 2U : (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst) 
                         | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                            | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr)))
                         ? 1U : 3U)) : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma));
}

extern const VlWide<20>/*639:0*/ Vtb_sounds_good__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_ha56e5a24_0;

VL_ATTR_COLD void Vtb_sounds_good___024root___stl_comb__TOP__2(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___stl_comb__TOP__2\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
    IData/*31:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata = 0;
    SData/*15:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa = 0;
    SData/*15:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb = 0;
    CData/*0:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin = 0;
    CData/*0:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd = 0;
    CData/*0:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte = 0;
    CData/*0:0*/ __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pcldbl 
        = (1U & ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 7U) | ((~ (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                >> 8U)) & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pchdbh 
        = ((1U == (3U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U])) 
           | ((~ (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                  >> 0x00000016U)) & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pclabl 
        = (1U & ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 9U) | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel) 
                            & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                               >> 8U))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pchabh 
        = ((2U == (3U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U])) 
           | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel) 
              & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 0x00000016U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dblSpecial 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
        .__PVT__pcldbl;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
        .__PVT__pchdbh;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ablSpecial 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
        .__PVT__pclabl;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__abhSpecial 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
        .__PVT__pchabh;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)))) {
        if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                   .__PVT__rxh2abh))) {
            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__ryh2abh))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__au2Ab))) {
                    if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                               .__PVT__aob2Ab))) {
                        if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__ath2Abh))) {
                            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhIdle = 0U;
    if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
               .__PVT__rxh2dbh))) {
        if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                   .__PVT__ryh2dbh))) {
            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__au2Db))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__ath2Dbh))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)))) {
                        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhIdle = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0U;
    if ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
         .__PVT__aluColumn)) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 1U;
    } else if ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                .__PVT__aluColumn)) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 5U;
    } else {
        if ((1U & ((0U != (0x039eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) 
                   | ((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                             >> 5U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                               >> 6U)))))) {
            if ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn) || 
                            (6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn))) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x15U;
                }
                if ((1U & (~ VL_ONEHOT_I(((((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            | (4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                               .__PVT__aluColumn)) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == ((((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__aluColumn) 
                                  | (4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn)) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:539: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 539, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:539: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 539, "");
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0bU;
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0eU;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:546: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 546, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:546: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 546, "");
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                        = ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluDctrl) ? 0x00000016U
                            : 4U);
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0dU;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:553: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 553, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:553: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 553, "");
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                    = ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) ? 0x0000000fU
                        : 1U);
            } else if (((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                               >> 5U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                 >> 6U)))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x10U;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:564: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 564, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:564: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 564, "");
                    }
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 2U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 4U;
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:571: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 571, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:571: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 571, "");
                    }
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 5U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 1U;
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x14U;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:580: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 580, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:580: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 580, "");
                    }
                }
            } else {
                if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                     .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 3U;
                } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 6U;
                } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                            .__PVT__aluColumn)) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x11U;
                }
                if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aluColumn) 
                                           << 2U) | 
                                          (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))))) {
                    if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 << 2U) | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__aluColumn) 
                                            << 1U) 
                                           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:587: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn);
                            VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 587, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:587: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 587, "");
                    }
                }
            }
        } else if ((0x00000400U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0aU;
            } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x12U;
            }
            if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                        .__PVT__aluColumn) 
                                       << 2U) | (((3U 
                                                   == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__aluColumn) 
                                                  << 1U) 
                                                 | (2U 
                                                    == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                    .__PVT__aluColumn))))))) {
                if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                              .__PVT__aluColumn) << 2U) 
                            | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__aluColumn) 
                                << 1U) | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                          .__PVT__aluColumn))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:594: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 594, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:594: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__aluColumn);
                    VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 594, "");
                }
            }
        } else if ((0x00000800U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 7U;
            } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x13U;
            }
            if ((1U & (~ VL_ONEHOT_I((((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                        .__PVT__aluColumn) 
                                       << 2U) | (((3U 
                                                   == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__aluColumn) 
                                                  << 1U) 
                                                 | (2U 
                                                    == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                    .__PVT__aluColumn))))))) {
                if ((0U == (((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                              .__PVT__aluColumn) << 2U) 
                            | (((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__aluColumn) 
                                << 1U) | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                          .__PVT__aluColumn))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:601: Assertion failed in %m: unique case, but none matched for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__aluColumn);
                        VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 601, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:601: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__aluColumn);
                    VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 601, "");
                }
            }
        } else if ((0x00001000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x0cU;
        } else if ((0x00002000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 9U;
        } else if ((0x00004000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                = ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? 9U : 8U);
        } else if ((0x00008000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp 
                = ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? 4U : 8U);
        }
        if ((1U & (~ VL_ONEHOT_I(((0x00003f80U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                  >> 2U)) 
                                  | ((0x00000060U & 
                                      ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                       >> 2U)) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x0060U 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                                   << 4U) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                        >> 1U))))))))) {
            if ((0U == ((0x00003f80U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                        >> 2U)) | (
                                                   (0x00000060U 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                       >> 2U)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x0060U 
                                                                 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                                       << 4U) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                            >> 1U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:537: Assertion failed in %m: unique case, but none matched for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 537, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:537: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 537, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                .__PVT__aluColumn) 
                               << 1U) | (1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__aluColumn)))))) {
        if ((0U != (((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                      .__PVT__aluColumn) << 1U) | (1U 
                                                   == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__aluColumn)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:532: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.aluGetOp", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn);
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 532, "");
            }
        }
    }
    if ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
         .__PVT__aluColumn)) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
            = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
               .__PVT__aluFinish ? ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                     ? 0x0fU : 0x0cU)
                : ((0U != (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 0x0000000dU))) ? 4U
                    : 0x0fU));
    } else if (((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn) || (3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                        .__PVT__aluColumn))) {
        if ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
        } else if (((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                           >> 3U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                             >> 9U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
                = ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? 0x1bU : 0x1fU);
        } else if (((((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                             >> 2U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                               >> 5U))) 
                     || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                               >> 0x0aU))) || (1U & 
                                               ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                >> 0x0cU)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x1fU;
        } else if ((((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                            >> 6U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                              >> 7U))) 
                    || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                              >> 0x0bU)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
        } else if (((((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                             >> 4U)) || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                               >> 8U))) 
                     || (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                               >> 0x0dU))) || (1U & 
                                               ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                >> 0x0eU)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
        } else if ((0x00008000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I(((((4U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                           >> 0x0000000dU)) 
                                    | (((IData)((0U 
                                                 != 
                                                 (0x6110U 
                                                  & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                        << 1U) | (IData)(
                                                         (0U 
                                                          != 
                                                          (0x08c0U 
                                                           & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x1424U 
                                                        & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x0208U 
                                                           & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                      >> 1U))))))))) {
            if ((0U == ((((4U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 0x0000000dU)) | 
                          (((IData)((0U != (0x6110U 
                                            & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                            << 1U) | (IData)((0U != 
                                              (0x08c0U 
                                               & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))))) 
                         << 3U) | (((IData)((0U != 
                                             (0x1424U 
                                              & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                    << 2U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x0208U 
                                                         & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                    >> 1U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:785: Assertion failed in %m: unique case, but none matched for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.ccrTable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 785, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:785: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.ccrTable", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 785, "");
            }
        }
    } else {
        __Vtemp_1 = VL_MATCHMASKED_I(16, (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row), Vtb_sounds_good__ConstPool__CONST_h1b96ab98_0);
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
            = ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                .__PVT__aluColumn) ? Vtb_sounds_good__ConstPool__TABLE_ha56e5a24_0
               [__Vtemp_1] : ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                               .__PVT__aluColumn) ? 
                              ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                ? 0x0fU : 0U) : 0U));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dobInput 
        = ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
            .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abd)
            : ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbd)
                : ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                    : 0U)));
    if ((1U & (~ VL_ONEHOT_I(((((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__aluColumn) 
                                << 3U) | ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__aluColumn) 
                                          << 2U)) | 
                              ((((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__aluColumn) 
                                 | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                    .__PVT__aluColumn)) 
                                << 1U) | (1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                          .__PVT__aluColumn))))))) {
        if ((0U != ((((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__aluColumn) << 3U) | 
                     ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__aluColumn) << 2U)) | 
                    ((((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__aluColumn)) 
                      << 1U) | (1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                .__PVT__aluColumn))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68kAlu.sv:781: Assertion failed in %m: unique case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit.alu.ccrTable", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',32,vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__aluColumn);
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68kAlu.sv", 781, "");
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhMux 
        = (0x0000ffffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                          .__PVT__rxh2dbh ? ((0x11U 
                                              >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                              ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                             [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                              : 0U)
                           : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                              .__PVT__ryh2dbh ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                               : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__au2Db ? (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                   >> 0x10U)
                                   : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                      .__PVT__ath2Dbh
                                       ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Ath)
                                       : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)
                                           ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcH)
                                           : 0U))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auInpMux 
        = ((4U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
            .__PVT__auCntrl) ? ((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__auCntrl) ? 
                                ((1U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__auCntrl) ? 
                                 (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign) 
                                   | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__noSpAlign)
                                   ? 0xffffffffU : 0xfffffffeU)
                                  : 0xfffffffeU) : 
                                ((1U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__auCntrl) ? 4U
                                  : 2U)) : ((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__auCntrl)
                                             ? ((1U 
                                                 & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__auCntrl)
                                                 ? 
                                                (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abh) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abl))
                                                 : 0xfffffffcU)
                                             : ((1U 
                                                 & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__auCntrl)
                                                 ? 
                                                (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign) 
                                                  | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__noSpAlign)
                                                  ? 1U
                                                  : 2U)
                                                 : 0U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)
                           ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcH)
                           : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                              .__PVT__rxh2abh ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                                  ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                                  : 0U)
                               : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__ryh2abh ? 
                                  ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                    ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                   [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                    : 0U) : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__au2Ab
                                              ? (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                 >> 0x10U)
                                              : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__aob2Ab
                                                  ? 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__ath2Abh
                                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                   : 0U)))))));
    __VdfgRegularize_hebeb780c_0_2 = (((((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                         & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rAS)) 
                                            & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isRmcReg))) 
                                        | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi) 
                                           & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI) 
                                              & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__rGranted)) 
                                                 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Halti))))) 
                                       & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset)) 
                                          & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__permStart 
                                             | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcPend))))
                                       ? 2U : 1U);
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__ryl2ab & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsAreg)) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__rxl2ab & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsAreg)) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__ryl2db & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsAreg)) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__rxl2db & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsAreg)) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__ryl2db & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsAreg) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__rxl2db & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsAreg) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__dblDbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__ryl2ab & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsAreg) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__rxl2ab & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsAreg) 
                             | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                             .__PVT__ablAbd));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand 
        = (0x0000ffffU & ((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__aluDctrl) ? (- (IData)(
                                                          (1U 
                                                           & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                           .__PVT__aluDctrl)))
                           : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbd) 
                              & (- (IData)((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__aluDctrl)))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
           .__PVT__aluActrl ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alub)
            : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abd));
    if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
        .__PVT__ssp) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x10U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
               .__PVT__rxIsUsp) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x0fU;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else if ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                .__PVT__rxIsDt & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                  .__PVT__implicitSp))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux = 0x11U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg = 0U;
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg 
            = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
               .__PVT__implicitSp ? 0x0fU : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                             .__PVT__rxIsMovem
                                              ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__movemRx)
                                              : ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                                  .__PVT__rxIsAreg 
                                                  << 3U) 
                                                 | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                                 .__PVT__rx)));
        if ((0x0000000fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux 
                = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswS)
                    ? 0x00000010U : 0x0000000fU);
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 1U;
        } else {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux 
                = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg;
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = 0U;
        }
    }
    if ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
         .__PVT__ryIsDt & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__rz))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryMux = 0x11U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsSp = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryReg = 0U;
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryReg 
            = (0x0000000fU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                              .__PVT__rz ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irc) 
                                            >> 0x0cU)
                               : ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                   .__PVT__ryIsAreg 
                                   << 3U) | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                                  .__PVT__ry)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsSp 
            = (0x0000000fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryReg));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryMux 
            = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsSp) 
                & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswS))
                ? 0x10U : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryReg));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aulow 
        = (0x0001ffffU & ((0x0000ffffU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auInpMux) 
                          + (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbl)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next 
        = ((0U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
            ? 1U : ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                     ? 1U : ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                              ? 3U : ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                       ? 4U : ((4U 
                                                == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                ? (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rDtack)) 
                                                       | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iStop)))
                                                    ? 5U
                                                    : 4U)
                                                : (
                                                   (5U 
                                                    == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                    ? 
                                                   (((5U 
                                                      == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset) 
                                                        & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isRmcReg)))
                                                     ? 6U
                                                     : __VdfgRegularize_hebeb780c_0_2)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __VdfgRegularize_hebeb780c_0_2
                                                     : 1U)))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd)))) {
            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__dbin2Abd))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__alu2Abd))) {
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdIdle = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdMux 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd)
            ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
               [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                : 0U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd)
                          ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                              ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                             [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                              : 0U) : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                       .__PVT__dbin2Abd
                                        ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbin)
                                        : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__alu2Abd
                                            ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                            : 0U))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbdIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd)))) {
            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__alue2Dbd))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__dbin2Dbd))) {
                    if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                               .__PVT__alu2Dbd))) {
                        if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__dcr2Dbd))) {
                            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbdIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbdMux 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)
            ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
               [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                : 0U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd)
                          ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                              ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                             [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                              : 0U) : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                       .__PVT__alue2Dbd
                                        ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue)
                                        : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__dbin2Dbd
                                            ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbin)
                                            : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                               .__PVT__alu2Dbd
                                                ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                                : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__dcr2Dbd
                                                    ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dcrOutput)
                                                    : 0U))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)))) {
            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__ftu2Dbl))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__au2Db))) {
                    if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                               .__PVT__atl2Dbl))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)))) {
                            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblIdle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)
                           ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                               ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                              [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                               : 0U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)
                                         ? ((0x11U 
                                             >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                             ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                            [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                             : 0U) : 
                                        (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                         .__PVT__ftu2Dbl
                                          ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu)
                                          : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__au2Db
                                              ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg
                                              : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__atl2Dbl
                                                  ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)
                                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcL)
                                                   : 0U)))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablIdle = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)))) {
                if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                           .__PVT__ftu2Abl))) {
                    if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                               .__PVT__au2Ab))) {
                        if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__aob2Ab))) {
                            if ((1U & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                       .__PVT__atl2Abl))) {
                                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablIdle = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                .__PVT__dcr2Dbd << 5U) 
                               | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__alu2Dbd 
                                   << 4U) | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__dbin2Dbd 
                                             << 3U))) 
                              | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__alue2Dbd 
                                  << 2U) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)))))))) {
        if ((0U != (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                      .__PVT__dcr2Dbd << 5U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__alu2Dbd 
                                                 << 4U) 
                                                | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__dbin2Dbd 
                                                   << 3U))) 
                    | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__alue2Dbd << 2U) | (
                                                   ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1333: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1333, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl) 
                                << 5U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__atl2Dbl 
                                           << 4U) | 
                                          (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__au2Db 
                                           << 3U))) 
                              | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__ftu2Dbl << 2U) 
                                 | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl) 
                                     << 1U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)))))))) {
        if ((0U != ((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl) 
                      << 5U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__atl2Dbl << 4U) 
                                | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__au2Db << 3U))) 
                    | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__ftu2Dbl << 2U) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1343: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1343, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh) 
                                << 4U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__ath2Dbh 
                                           << 3U) | 
                                          (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                           .__PVT__au2Db 
                                           << 2U))) 
                              | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__ryh2dbh << 1U) 
                                 | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__rxh2dbh)))))) {
        if ((0U != ((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh) 
                      << 4U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__ath2Dbh << 3U) 
                                | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__au2Db << 2U))) 
                    | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__ryh2dbh << 1U) | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                       .__PVT__rxh2dbh)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1353: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1353, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                .__PVT__alu2Abd << 3U) 
                               | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__dbin2Abd 
                                  << 2U)) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd))))))) {
        if ((0U != (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                      .__PVT__alu2Abd << 3U) | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                .__PVT__dbin2Abd 
                                                << 2U)) 
                    | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd) 
                        << 1U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1362: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1362, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__atl2Abl << 3U) 
                                 | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                    .__PVT__aob2Ab 
                                    << 2U)) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                .__PVT__au2Ab 
                                                << 1U) 
                                               | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                               .__PVT__ftu2Abl)) 
                               << 3U) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl) 
                                           << 1U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)))))))) {
        if ((0U != (((((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__atl2Abl << 3U) | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__aob2Ab 
                                                  << 2U)) 
                      | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                          .__PVT__au2Ab << 1U) | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                         .__PVT__ftu2Abl)) << 3U) | 
                    (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl) 
                      << 2U) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl) 
                                 << 1U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1370: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1370, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                .__PVT__ath2Abh << 5U) 
                               | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__aob2Ab << 4U) 
                                  | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                     .__PVT__au2Ab 
                                     << 3U))) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__ryh2abh 
                                                  << 2U) 
                                                 | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                     .__PVT__rxh2abh 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)))))))) {
        if ((0U != (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                      .__PVT__ath2Abh << 5U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__aob2Ab 
                                                 << 4U) 
                                                | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__au2Ab 
                                                   << 3U))) 
                    | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__ryh2abh << 2U) | ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__rxh2abh 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: fx68k.sv:1381: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_sounds_good.dut.cpu.excUnit", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../modules/cpu-fx68k/../../modules/cpu-fx68k/fx68k.sv", 1381, "");
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablMux 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)
                           ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcL)
                           : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)
                               ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                   ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                  [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                   : 0U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)
                                             ? ((0x11U 
                                                 >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                 ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                                [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                 : 0U)
                                             : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                .__PVT__ftu2Abl
                                                 ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu)
                                                 : 
                                                (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__au2Ab
                                                  ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg
                                                  : 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__aob2Ab
                                                   ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob
                                                   : 
                                                  (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__atl2Abl
                                                    ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                    : 0U))))))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb 
        = (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)
                  ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue) 
                     >> 0x0000000fU) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                                         ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                            >> 7U) : 
                                        ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                         >> 0x0000000fU))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busEnding 
        = ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next) 
           | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin 
        = (1U & ((~ ((0x10U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | ((0x0dU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))))) 
                 & (((0x11U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | (0x0eU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                     ? (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb)
                     : ((0x12U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                         ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)
                         : (((0x13U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                             | (0x14U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                             ? ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                 ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rIrd8)
                                     ? (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                         >> 3U) ^ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                                   >> 1U))
                                     : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))
                                 : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                                    >> 4U)) : ((0x15U 
                                                == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                               & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__aluColumn 
                                                  >> 1U)))))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
        = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand));
    if (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte) 
         & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))) {
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffffeffU & tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                  << 8U));
    } else if (((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)) 
                & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))) {
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
            = ((0xfffeffffU & tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata) 
               | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                  << 0x00000010U));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult 
        = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords) 
            & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight))
            ? ((((0x00008000U & (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                 << 0x0000000fU)) | 
                 (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                  >> 0x00000011U)) << 0x00000010U) 
               | (((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                   << 0x0000000fU) | (0x00007fffU & 
                                      (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                       >> 1U)))) : 
           ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords)
             ? ((((0x0000fffeU & (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                  >> 0x0000000fU)) 
                  | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin)) 
                 << 0x00000010U) | ((0x0000fffeU & 
                                     (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                      << 1U)) | (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                 >> 0x0000001fU)))
             : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight)
                 ? (((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin) 
                     << 0x0000001fU) | (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                        >> 1U)) : (
                                                   (tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata 
                                                    << 1U) 
                                                   | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftCin)))));
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd 
        = (((4U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
            | (0x0bU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
           | (0x0cU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)));
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin 
        = (1U & ((~ ((4U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     | (2U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
                 & ((7U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    | (((0x0bU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                        | (0x0aU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                        ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore)
                        : (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                            >> 4U) & ((0x0cU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                      | (3U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))))))));
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand;
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand;
    if (__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__isByte) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                               ? (((0x000000ffU & (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                                   + (0x000000ffU & (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa))) 
                                  + (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))
                               : (((0x000000ffU & (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                                   - (0x000000ffU & (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa))) 
                                  - (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))));
        vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result 
            = ((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                                                 >> 7U)))) 
                               << 8U)) | (0x000000ffU 
                                          & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp));
        vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout 
            = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 8U));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 7U));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                     >> 7U));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                     >> 7U));
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
            = (0x0001ffffU & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                               ? (((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                                   + (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa)) 
                                  + (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))
                               : (((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                                   - (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa)) 
                                  - (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cin))));
        vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result 
            = (0x0000ffffU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp);
        vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout 
            = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x10U));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm 
            = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp 
                     >> 0x0fU));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm 
            = (1U & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb) 
                     >> 0x0fU));
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm 
            = (1U & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                     >> 0x0fU));
    }
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm 
        = (1U & ((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__bAdd)
                  ? (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm)
                  : (~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm))));
    __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov 
        = ((((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm) 
             & (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm)) 
            & (~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm))) 
           | (((~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm)) 
               & (~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm))) 
              & (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subHcarry 
        = (1U & ((((IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpa) 
                   ^ (IData)(__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__inpb)) 
                  ^ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp) 
                 >> 4U));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult 
        = vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout 
        = vlSelfRef.__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv 
        = __Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__ov;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                           ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                              & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                           : ((8U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                               ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                  | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                               : ((9U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                                   ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                      ^ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand))
                                   : ((5U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
                                       ? ((0x0000ff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)))
                                       : ((((((((((0x15U 
                                                   == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                  || (0x0dU 
                                                      == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0eU 
                                                     == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                || (0x0fU 
                                                    == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                               || (0x10U 
                                                   == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                              || (0x11U 
                                                  == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                             || (0x12U 
                                                 == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                            || (0x13U 
                                                == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                           || (0x14U 
                                               == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                           ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult
                                           : ((((((
                                                   ((4U 
                                                     == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                    || (0x0bU 
                                                        == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                   || (0x0cU 
                                                       == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                  || (2U 
                                                      == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                 || (0x0aU 
                                                     == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                                || (7U 
                                                    == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                                               || (3U 
                                                   == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                               ? (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subResult)
                                               : ((
                                                   (0x16U 
                                                    == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                   || (6U 
                                                       == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))
                                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdLatch)
                                                   : 0U))))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (0x00000010U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = (0x1cU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x1bU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (4U & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                      ? (~ (0U != (0x000000ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result))))
                      : (~ (0U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result)))) 
                    << 2U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
        = ((0x17U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
           | (8U & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                      ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result) 
                         >> 7U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result) 
                                   >> 0x0fU)) << 3U)));
    if (((((((((5U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
               | (((7U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                   || (8U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                  || (9U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
              | (1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
             | (0x15U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
            | ((0x0fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
               || (0x13U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
           | ((0x10U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
              || (0x14U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) 
          | (0x0dU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
         | (0x0eU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        if ((5U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            if ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                 .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                    = (0x0000000aU | (0x11U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)));
            }
        } else if ((((7U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                     || (8U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                    || (9U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1cU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn) & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0900U 
                                                       & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))))) 
                      & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr) 
                         >> 4U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x15U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                            >> 0x0fU)));
        } else if (((0x0fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x13U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if (((0x10U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x14U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & ((~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                >> 7U)) & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand))));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = (0x1dU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp));
        } else if ((0x0dU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                      << 4U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1dU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)) 
                            | (((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb) 
                                ^ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong)
                                    ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue) 
                                       >> 0x0eU) : 
                                   ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte)
                                     ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                        >> 6U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                                  >> 0x0eU)))) 
                               << 1U))));
        } else {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (0x00000010U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand) 
                                     << 4U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
                = ((0x1cU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
                   | (1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)));
        }
    } else if ((0x11U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftMsb));
    } else if ((0x12U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand)));
    } else if (((((((4U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                    || (0x0bU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                   || (0x0cU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                  || (2U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                 || (0x0aU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                || (3U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subCout) 
                  << 4U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1dU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subOv) 
                  << 1U));
    } else if (((0x16U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                || (6U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x0fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry) 
                  << 4U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp 
            = ((0x1cU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp)) 
               | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdOverf) 
                   << 1U) | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry)));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp) 
                                                 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                | ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                   & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sounds_good___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);
VL_ATTR_COLD void Vtb_sounds_good___024root___stl_sequent__TOP__0(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___act_sequent__TOP__0(Vtb_sounds_good___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sounds_good___024root___eval_phase__stl(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_phase__stl\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
        vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0) 
                                                          << 1U) 
                                                         | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod 
                                                            != vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sounds_good___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sounds_good___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
                Vtb_sounds_good___024root___stl_sequent__TOP__0(vlSelf);
                Vtb_sounds_good___024root___stl_sequent__TOP__1(vlSelf);
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VstlTriggered[0U]))) {
                Vtb_sounds_good___024root___act_sequent__TOP__0(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__2
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updSsw 
                        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aob2Ab;
                }
            }
            if ((1ULL & (vlSelfRef.__VstlTriggered[1U] 
                         | vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__1
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish 
                        = (1U & (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[2U] 
                                   >> 2U) | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                             >> 0x0000001cU)) 
                                 | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__isWrite));
                }
            }
            if ((3ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__3
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel 
                        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                           .__PVT__isPcRel & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__rz));
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (3ULL & vlSelfRef.__VstlTriggered[0U]))) {
                Vtb_sounds_good___024root___stl_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_sounds_good___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sounds_good___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( cmd)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( cmd_send)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_sounds_good___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sounds_good___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_sounds_good.dut.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_sounds_good.dut.cpu.Irdecod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_sounds_good.dut.cpu.Clks.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge tb_sounds_good.dut.cpu.__Vcellinp__nanoRom__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([initial_nba])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sounds_good___024root___ctor_var_reset(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___ctor_var_reset\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4759173320218931530ull);
    vlSelf->cmd_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13429712928269478927ull);
    vlSelf->dac = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11786998382292935251ull);
    vlSelf->status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14822974759303984767ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10477851367568190118ull);
    }
    vlSelf->tb_sounds_good__DOT__rom_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7625880062844085726ull);
    vlSelf->tb_sounds_good__DOT__rom_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7802211489924580054ull);
    vlSelf->tb_sounds_good__DOT__cmd_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16008202225999774749ull);
    vlSelf->tb_sounds_good__DOT__cmd_strobe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3401114610617381729ull);
    vlSelf->tb_sounds_good__DOT__send_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9107413552052003834ull);
    vlSelf->tb_sounds_good__DOT__tx_timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5852056780430681693ull);
    vlSelf->tb_sounds_good__DOT__tx_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 683925950686298025ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2988343892332607049ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__sel_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5455431222117664478ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__sel_pia = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17292873629595031521ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__sel_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2595088912778088709ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2432116730074228364ull);
    }
    vlSelf->tb_sounds_good__DOT__dut__DOT__ram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17108801313956717477ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia_cs_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2559471687916960107ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6890803487201443847ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT____Vcellinp__pia__rs = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__ram_dtack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14597869742003006420ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999291585972714104ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__extReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999291585972714104ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__pwrUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999291585972714104ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999291585972714104ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999291585972714104ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__wClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17439253929184068888ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159145569921043148ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11039735679342421299ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4000582888450161551ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10582536178714241574ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rDtack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14543346915419950860ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rBerr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13622061816081051955ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11781821100888458484ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2014515911783935541ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Vpai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7991131098120619938ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3739181207851737743ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Halti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2303893665687556987ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5009883600015493723ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16518406859301683035ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeiDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12530453478898802717ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch, __VscopeHash, 1836882268643638251ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoOutput, __VscopeHash, 7165205395003559392ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7013367940821270991ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__microOutput = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14364483360662614431ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__microAddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5685085843101643897ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5895103946770359563ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoAddr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18244822983685156088ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rstUrom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674747524035653487ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__permStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__busByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__isRmc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__noLowByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__noHighByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__clrTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__tvn2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__const2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2Pren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updPren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__inl2psw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Sr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__sr2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Ccr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pswIToFtu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ird2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ssw2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__initST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__Ir2Ird = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__auClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__noSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__auCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__todbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__toIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__atl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__atl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ath2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ath2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__db2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ab2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aob2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updSsw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ssp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pchdbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pcldbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pclabl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pchabh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ryl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ryl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ryh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ryh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxlDbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluColumn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluDctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluActrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluInit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abd2Dcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dcr2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbd2Alue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__alue2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__alu2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__alu2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbin2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbin2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__extDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__extAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ablAbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ablAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dblDbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dblDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 598435187385224960ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isTas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__implicitSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__toCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ryIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsUsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsMovem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__movemPreDecr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isMovep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ftuConst = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__macroTvn = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__inhibitCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385815380936158758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Tpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10934467800129167148ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__intPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258327688435888067ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3660632076188349656ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10439109354777085904ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswI = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9872615853192793123ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14341361454359720137ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16468241358510079618ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10180219486843129074ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15453198402171771758ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6213643201612015736ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3615723949696232857ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__dcr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583834322650626134ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__isLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1495987078546923629ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__isLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10558162441167739012ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__tvn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2131794061323833422ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565909274603167741ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10985596253383856543ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__addrOe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16836671355889190518ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iStop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7206215276860248060ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__A0Err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6804792129497925280ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8074104454209872376ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__BerrA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9205439258718787479ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Spuria = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16621128034253810527ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Avia = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9957359471893376027ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8356088527687781071ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5356831640854725910ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__Err6591 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5124480078695360358ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17962045099737478497ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__enErrClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6676127037248997443ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rFC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15756567636509252549ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__inl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3124219142506746540ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__updIll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7040603092964955835ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__prevNmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9746584370450309985ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iplStable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11770010476585729869ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__iplComp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 527665192753305555ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__eCntr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17233617005552796592ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__rVma = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3945320242423406490ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdToCcr_t4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9848780798798652709ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__ssw = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8556088968631998163ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__tvnLatch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6928275151426540967ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__inExcept01 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7463272149908891292ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11438039298758490281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14614961444081632271ull);
    }
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbin = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18370069059437845513ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dcrOutput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8128082150489655670ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcL = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17446909637069105107ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcH = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1971485873699992032ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13641420412203301180ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1086425558752961244ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Ath = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9851516906131931145ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Atl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12390231278327867508ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15294133646113500935ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 670675541665369105ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7513652223928761898ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16123133877281964153ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2098729466342953139ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6574300095776496295ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8545850314881397643ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5343035414596131373ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14612718970540584743ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6212800809344979497ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16187859711305434273ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17684916899991761047ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770781324148760636ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4038532941640064859ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9063225488544066002ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2727346344943036784ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15675022010034867139ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13252731695321185915ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13517093503050514703ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__movemRx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14496265030175643890ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11385946152052034239ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9664125088285610421ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10244013853168104854ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9160779143081779385ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3382024883522805512ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8345478262332663405ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9762980366718851347ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16216450672496206739ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8743443678587975020ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3957043394909354934ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14117294649147251477ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1492903643248677243ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5720848014534552891ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13028453280995656306ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6724473085462594223ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 907714060943880905ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5676671330585074298ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 100053977321540027ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4925604514902507800ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16028065165780543669ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4201643699949157117ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11199500967597304043ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3882640925346481036ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preAbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15649548960661067761ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preAbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11486352259120859154ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preAbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16100715789787753200ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preDbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 277827042969614958ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preDbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9359641800209391571ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__preDbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12593607638000426167ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auInpMux = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10589898054363599866ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aulow = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1223394892346315485ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7549786902321669058ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934367102905649509ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11113987293043679354ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217584483551791727ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6874801257224473560ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8856546165623873306ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alub = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5852290799480967364ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dobInput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6760764414524967098ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13089864999546352461ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13310911852969193644ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5720695359031103812ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13739157954447639265ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14482422314372503562ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__coreH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16609329898555050724ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subHcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13507820605359426456ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2988518263452531023ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isArX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5166806706327517629ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__noCcrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8427175923255153064ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6538353943624355139ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17066840810284321373ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3530578252888016339ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13711776457139172989ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16830431093494679237ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10877377291736199004ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5628308217688495562ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10658053947484124925ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9008575189134244513ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdLatch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4209637920185312300ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11529721401384910388ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdOverf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071906193932281548ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368742307702170815ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rIrd8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17078665830561287174ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8201362922990127777ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7099723764521534471ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4491189056155139823ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1950277411011339366ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8553546371938003089ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToDbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3629352879203693930ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6791136764011674435ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10242593752683922445ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18051878545522917126ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteMux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9251615696814919307ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__isByte_T4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7731740458392448796ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteCycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11878028844875006562ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11735464439792605771ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3666752831872808893ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17995141973731044241ull);
    }
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14753739310845426304ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10175813359981819091ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__rGranted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3177298810315858777ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rAS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16159507977788727382ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rLDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16453586676684237252ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rUDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075531675373309264ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rRWn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8559717718248667101ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5505351618780894382ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isWriteReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9681001850938019408ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bciByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5347354824695802543ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isRmcReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517585716839230343ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__wendReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3482176014097395449ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__addrOeDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8104774282990644212ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isByteT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10813097840114984421ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375490719611693559ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next = 0;
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busEnding = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15944928933333401941ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16712159722219099771ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16378730522904745256ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dblSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721297399672831276ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2906157680301388109ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ablSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842228995959732357ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__abhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14288354862207483711ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9929519847616323971ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18128851533593734119ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1Nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10354058590838466648ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17407768993331990969ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__a0Rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7858347630819729741ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__enl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18024990650391729442ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15218443076743996514ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5246112770891048861ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rTrace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12928769096098499029ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17509904613589003433ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rIllegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8312356357618189796ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rPriv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11102434551253628148ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6327460954101185041ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16994890359727789011ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10150872182468604801ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10049583133384846985ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7330272461438029521ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rSpurious = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17184536814655285393ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rAutovec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8934752715748381624ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14948549761791578313ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6808425475549286365ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__uRom__DOT__uRam[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12357157915378176669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 336; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoRom__DOT__nRam[__Vi0], __VscopeHash, 4587619696027531923ull);
    }
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__ora = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17108557264696480968ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16459252914419941762ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__orb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14995440237215759675ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6966416706867162507ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__cra = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13795164728116539321ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__crb = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4051958720929551918ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__irqa1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12490506431034065423ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__irqb1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1277765563568336466ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__ca1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624378081611155520ull);
    vlSelf->tb_sounds_good__DOT__dut__DOT__pia__DOT__cb1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11242233206766031219ull);
    vlSelf->__VcaseDecoderOut0 = 0;
    vlSelf->__VcaseDecoderOut1 = 0;
    vlSelf->__VcaseDecoderOut2 = 0;
    vlSelf->__VcaseDecoderOut3 = 0;
    vlSelf->__VcaseDecoderOut4 = 0;
    vlSelf->__VcaseDecoderOut5 = 0;
    vlSelf->__VcaseDecoderOut6 = 0;
    vlSelf->__VcaseDecoderOut7 = 0;
    vlSelf->__VcaseDecoderOut8 = 0;
    vlSelf->__VcaseDecoderOut9 = 0;
    vlSelf->__VcaseDecoderOut10 = 0;
    vlSelf->__VcaseDecoderOut11 = 0;
    vlSelf->__VcaseDecoderOut12 = 0;
    vlSelf->__VcaseDecoderOut13 = 0;
    vlSelf->__VcaseDecoderOut14 = 0;
    vlSelf->__VcaseDecoderOut15 = 0;
    vlSelf->__VcaseDecoderOut16 = 0;
    vlSelf->__VcaseDecoderOut17 = 0;
    vlSelf->__VcaseDecoderOut18 = 0;
    vlSelf->__VcaseDecoderOut19 = 0;
    vlSelf->__VcaseDecoderOut20 = 0;
    vlSelf->__VcaseDecoderOut21 = 0;
    vlSelf->__VcaseDecoderOut22 = 0;
    vlSelf->__VcaseDecoderOut23 = 0;
    vlSelf->__VcaseDecoderOut24 = 0;
    vlSelf->__VcaseDecoderOut25 = 0;
    vlSelf->__VcaseDecoderOut26 = 0;
    vlSelf->__VcaseDecoderOut27 = 0;
    vlSelf->__VcaseDecoderOut28 = 0;
    vlSelf->__VcaseDecoderOut29 = 0;
    vlSelf->__VcaseDecoderOut30 = 0;
    vlSelf->__VcaseDecoderOut31 = 0;
    vlSelf->__VcaseDecoderOut32 = 0;
    vlSelf->__VcaseDecoderOut33 = 0;
    vlSelf->__VcaseDecoderOut34 = 0;
    vlSelf->__VcaseDecoderOut35 = 0;
    vlSelf->__VcaseDecoderOut36 = 0;
    vlSelf->__VcaseDecoderOut37 = 0;
    vlSelf->__VcaseDecoderOut38 = 0;
    vlSelf->__VcaseDecoderOut39 = 0;
    vlSelf->__VcaseDecoderOut40 = 0;
    vlSelf->__VcaseDecoderOut41 = 0;
    vlSelf->__VcaseDecoderOut42 = 0;
    vlSelf->__VcaseDecoderOut43 = 0;
    vlSelf->__VcaseDecoderOut44 = 0;
    vlSelf->__VcaseDecoderOut45 = 0;
    vlSelf->__VcaseDecoderOut46 = 0;
    vlSelf->__VcaseDecoderOut47 = 0;
    vlSelf->__VcaseDecoderOut48 = 0;
    vlSelf->__VcaseDecoderOut49 = 0;
    vlSelf->__VcaseDecoderOut50 = 0;
    vlSelf->__VcaseDecoderOut51 = 0;
    vlSelf->__VcaseDecoderOut52 = 0;
    vlSelf->__VcaseDecoderOut53 = 0;
    vlSelf->__VcaseDecoderOut54 = 0;
    vlSelf->__VcaseDecoderOut55 = 0;
    vlSelf->__VcaseDecoderOut56 = 0;
    vlSelf->__VcaseDecoderOut57 = 0;
    vlSelf->__VcaseDecoderOut58 = 0;
    vlSelf->__VcaseDecoderOut59 = 0;
    vlSelf->__VcaseDecoderOut60 = 0;
    vlSelf->__VcaseDecoderOut61 = 0;
    vlSelf->__VcaseDecoderOut62 = 0;
    vlSelf->__VcaseDecoderOut63 = 0;
    vlSelf->__VcaseDecoderOut64 = 0;
    vlSelf->__VcaseDecoderOut65 = 0;
    vlSelf->__VcaseDecoderOut66 = 0;
    vlSelf->__VcaseDecoderOut67 = 0;
    vlSelf->__VcaseDecoderOut68 = 0;
    vlSelf->__VcaseDecoderOut69 = 0;
    vlSelf->__VcaseDecoderOut70 = 0;
    vlSelf->__VcaseDecoderOut71 = 0;
    vlSelf->__VcaseDecoderOut72 = 0;
    vlSelf->__VcaseDecoderOut73 = 0;
    vlSelf->__VcaseDecoderOut74 = 0;
    vlSelf->__VcaseDecoderOut75 = 0;
    vlSelf->__VcaseDecoderOut76 = 0;
    vlSelf->__VcaseDecoderOut77 = 0;
    vlSelf->__VcaseDecoderOut78 = 0;
    vlSelf->__VcaseDecoderOut79 = 0;
    vlSelf->__VcaseDecoderOut80 = 0;
    vlSelf->__VcaseDecoderOut81 = 0;
    vlSelf->__VcaseDecoderOut82 = 0;
    vlSelf->__VcaseDecoderOut83 = 0;
    vlSelf->__VcaseDecoderOut84 = 0;
    vlSelf->__VcaseDecoderOut85 = 0;
    vlSelf->__VcaseDecoderOut86 = 0;
    vlSelf->__VcaseDecoderOut87 = 0;
    vlSelf->__VcaseDecoderOut88 = 0;
    vlSelf->__VcaseDecoderOut89 = 0;
    vlSelf->__VcaseDecoderOut90 = 0;
    vlSelf->__VcaseDecoderOut91 = 0;
    vlSelf->__VcaseDecoderOut92 = 0;
    vlSelf->__VcaseDecoderOut93 = 0;
    vlSelf->__VcaseDecoderOut94 = 0;
    vlSelf->__VcaseDecoderOut95 = 0;
    vlSelf->__VcaseDecoderOut96 = 0;
    vlSelf->__VcaseDecoderOut97 = 0;
    vlSelf->__VcaseDecoderOut98 = 0;
    vlSelf->__VcaseDecoderOut99 = 0;
    vlSelf->__VcaseDecoderOut100 = 0;
    vlSelf->__VcaseDecoderOut101 = 0;
    vlSelf->__VcaseDecoderOut102 = 0;
    vlSelf->__VcaseDecoderOut103 = 0;
    vlSelf->__VcaseDecoderOut104 = 0;
    vlSelf->__VcaseDecoderOut105 = 0;
    vlSelf->__VcaseDecoderOut106 = 0;
    vlSelf->__VcaseDecoderOut107 = 0;
    vlSelf->__VcaseDecoderOut108 = 0;
    vlSelf->__VcaseDecoderOut109 = 0;
    vlSelf->__VcaseDecoderOut110 = 0;
    vlSelf->__VcaseDecoderOut111 = 0;
    vlSelf->__VcaseDecoderOut112 = 0;
    vlSelf->__VcaseDecoderOut113 = 0;
    vlSelf->__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result = 0;
    vlSelf->__Vtask_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__Vdly__tb_sounds_good__DOT__tx_state = 0;
    vlSelf->__Vdly__tb_sounds_good__DOT__tx_timer = 0;
    vlSelf->__Vdly__tb_sounds_good__DOT__send_byte = 0;
    vlSelf->__Vdly__tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v0 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v0 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v1 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v1 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v2 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v2 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v3 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v3 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v4 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v4 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v5 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v5 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v6 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v6 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v7 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v7 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v8 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v8 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v9 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v9 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v10 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v10 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v11 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v11 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v12 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v12 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v13 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v13 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v14 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v14 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v15 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v15 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v16 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v16 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v17 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v17 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlyDim0__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v0 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v0 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v1 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v1 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v2 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v2 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v3 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v3 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v4 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v4 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v5 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v5 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v6 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v6 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v7 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v7 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v8 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v8 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v9 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v9 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v10 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v10 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v11 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v11 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v12 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v12 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v13 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v13 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v14 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v14 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v15 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v15 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v16 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v16 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v17 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v17 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v18 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v18 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v19 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v19 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v20 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v20 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v21 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v21 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v22 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v22 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v23 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v23 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v24 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v24 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v25 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v25 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v26 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v26 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v27 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v27 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v28 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v28 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v29 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v29 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v30 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v30 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v31 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v31 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v32 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v32 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v33 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v33 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v34 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v34 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v35 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v35 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v36 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v36 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v37 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v37 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v38 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v38 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v39 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v39 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v40 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v40 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v41 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v41 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v42 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v42 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v43 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v43 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v44 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v44 = 0;
    vlSelf->__VdlyVal__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v45 = 0;
    vlSelf->__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__v45 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0.__PVT__inhibitCcr = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cmd__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cmd_send__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1.__PVT__inhibitCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr_hacef62ad__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
