// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

extern const VlWide<20>/*639:0*/ Vtb_system__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_system__ConstPool__TABLE_ha56e5a24_0;

VL_ATTR_COLD void Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__main_board__DOT__cpu__2(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__main_board__DOT__cpu__2\n"); );
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

VL_ATTR_COLD void Vtb_system_fx68k___ctor_var_reset(Vtb_system_fx68k* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_system_fx68k___ctor_var_reset\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->HALTn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9795232572360174383ull);
    vlSelf->extReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950859862429072102ull);
    vlSelf->pwrUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4382283862304443330ull);
    vlSelf->enPhi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 975284416636512314ull);
    vlSelf->enPhi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1512607101456256034ull);
    vlSelf->eRWn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 794774062733605332ull);
    vlSelf->ASn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8342795911457846734ull);
    vlSelf->LDSn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18295185653031223759ull);
    vlSelf->UDSn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9603937416699509488ull);
    vlSelf->E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3929483993944067416ull);
    vlSelf->__PVT__VMAn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16521434296185709424ull);
    vlSelf->FC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9149584261947154503ull);
    vlSelf->FC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 188301915533045279ull);
    vlSelf->FC2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8272433485309414617ull);
    vlSelf->__PVT__BGn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3277206689328664760ull);
    vlSelf->__PVT__oRESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13847733961560949196ull);
    vlSelf->__PVT__oHALTEDn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602387927842805283ull);
    vlSelf->DTACKn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16231648768065167506ull);
    vlSelf->VPAn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14309238469969814955ull);
    vlSelf->BERRn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10728684054510727944ull);
    vlSelf->BRn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6231624831819732428ull);
    vlSelf->BGACKn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206018357600281122ull);
    vlSelf->IPL0n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18068820601571829774ull);
    vlSelf->IPL1n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278039740811799375ull);
    vlSelf->IPL2n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17218232394044267898ull);
    vlSelf->iEdb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2077784593263468498ull);
    vlSelf->oEdb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 475105659094989537ull);
    vlSelf->eab = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11345633537339416488ull);
    vlSelf->__PVT__Clks.__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691836062364779169ull);
    vlSelf->__PVT__Clks.__PVT__extReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691836062364779169ull);
    vlSelf->__PVT__Clks.__PVT__pwrUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691836062364779169ull);
    vlSelf->__PVT__Clks.__PVT__enPhi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691836062364779169ull);
    vlSelf->__PVT__Clks.__PVT__enPhi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691836062364779169ull);
    vlSelf->__PVT__wClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15553238148693144902ull);
    vlSelf->__PVT__tState = 0;
    vlSelf->__PVT__enT1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13470144808522179444ull);
    vlSelf->__PVT__enT2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12107469403747386015ull);
    vlSelf->__PVT__enT3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13157177021679001801ull);
    vlSelf->__PVT__enT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11458917379828879298ull);
    vlSelf->__PVT__rDtack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15645445903098174487ull);
    vlSelf->__PVT__rBerr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3742187939721077868ull);
    vlSelf->__PVT__rIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4622482927173618563ull);
    vlSelf->__PVT__iIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8824726295430076773ull);
    vlSelf->__PVT__Vpai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10746965851881382419ull);
    vlSelf->__PVT__BeI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10312579945064660097ull);
    vlSelf->__PVT__Halti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12945953787755193809ull);
    vlSelf->__PVT__BRi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14007159571531135441ull);
    vlSelf->__PVT__BgackI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4808708230357296493ull);
    vlSelf->__PVT__BeiDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894635434478222637ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__nanoLatch, __VscopeHash, 9479609860199668073ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__nanoOutput, __VscopeHash, 14713785667065908814ull);
    vlSelf->__PVT__microLatch = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16657222417503468546ull);
    vlSelf->__PVT__microOutput = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3600385743099945414ull);
    vlSelf->__PVT__microAddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11492213481815360589ull);
    vlSelf->__PVT__nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12503787410125600258ull);
    vlSelf->__PVT__nanoAddr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8259000132514613024ull);
    vlSelf->__PVT__rstUrom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15004443202466244551ull);
    vlSelf->__Vcellinp__nanoRom__clk = 0;
    vlSelf->__PVT__Nanod.__PVT__permStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__waitBusFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__busByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__isRmc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__noLowByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__noHighByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__updTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__clrTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__tvn2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__const2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ftu2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ftu2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abl2Pren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__updPren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__inl2psw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ftu2Sr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__sr2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ftu2Ccr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__pswIToFtu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ird2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ssw2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__initST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__Ir2Ird = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__auClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__noSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__auCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__todbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__toIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__atl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__atl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ath2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ath2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__db2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ab2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__au2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aob2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__updSsw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__reg2abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__reg2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__reg2dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__reg2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ssp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__pchdbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__pcldbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__pclabl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__pchabh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rxh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rxh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rxl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rxl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ryl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ryl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ryh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ryh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__rxlDbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aluColumn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aluDctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aluActrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aluInit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__aluFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abd2Dcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dcr2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbd2Alue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__alue2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__alu2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__alu2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__au2Db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__au2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__au2Pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbin2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dbin2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__extDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__extAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ablAbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__ablAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dblDbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__dblDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Nanod.__PVT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526800767805830848ull);
    vlSelf->__PVT__Irdecod.__PVT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__isTas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__implicitSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__toCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__rxIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__ryIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__rxIsUsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__rxIsMovem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__movemPreDecr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__isMovep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__rx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__ry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__ftuConst = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__macroTvn = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Irdecod.__PVT__inhibitCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924992210403260944ull);
    vlSelf->__PVT__Tpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9515474085164913207ull);
    vlSelf->__PVT__intPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 473916863295050069ull);
    vlSelf->__PVT__pswT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2541195091096012837ull);
    vlSelf->__PVT__pswS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 152861153908400251ull);
    vlSelf->__PVT__pswI = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5759928902335717155ull);
    vlSelf->__PVT__psw = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7116864152513488594ull);
    vlSelf->__PVT__ftu = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2442154933829497090ull);
    vlSelf->__PVT__Irc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10953650038699088559ull);
    vlSelf->__PVT__Ir = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12744446475616754422ull);
    vlSelf->__PVT__Ird = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8766049647996871450ull);
    vlSelf->__PVT__alue = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12762678859067943909ull);
    vlSelf->__PVT__dcr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776622490333889318ull);
    vlSelf->__PVT__isLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11538076698810824595ull);
    vlSelf->__PVT__isLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17247077703787076488ull);
    vlSelf->__PVT__tvn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6940856033427397302ull);
    vlSelf->__PVT__busAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7696070999580933337ull);
    vlSelf->__PVT__addrOe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11462508160627625641ull);
    vlSelf->__PVT__iStop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4925009526050038395ull);
    vlSelf->__PVT__A0Err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18306069637020990467ull);
    vlSelf->__PVT__excRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2786389015038463726ull);
    vlSelf->__PVT__BerrA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1076180628311918892ull);
    vlSelf->__PVT__Spuria = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12401216231109710884ull);
    vlSelf->__PVT__Avia = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443174775647866284ull);
    vlSelf->__PVT__rAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830844322573540199ull);
    vlSelf->__PVT__iBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10372891854929874150ull);
    vlSelf->__PVT__Err6591 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13653084506443098352ull);
    vlSelf->__PVT__iAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14674694085182637547ull);
    vlSelf->__PVT__enErrClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11006427611435131157ull);
    vlSelf->__PVT__rFC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2071366744487856283ull);
    vlSelf->__PVT__inl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8984949429200318925ull);
    vlSelf->__PVT__updIll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10709784639797975999ull);
    vlSelf->__PVT__prevNmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6311336172328087255ull);
    vlSelf->__PVT__iplStable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3836209703923713208ull);
    vlSelf->__PVT__iplComp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11351615308425358500ull);
    vlSelf->__PVT__eCntr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1409283025524327646ull);
    vlSelf->__PVT__rVma = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15890269063833610600ull);
    vlSelf->__PVT__irdToCcr_t4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10508055067202242081ull);
    vlSelf->__PVT__ssw = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12025815453234316461ull);
    vlSelf->__PVT__tvnLatch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16792681100746798286ull);
    vlSelf->__PVT__inExcept01 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6651129518713707695ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->__PVT__excUnit__DOT__regs68L[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14215026325752408238ull);
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->__PVT__excUnit__DOT__regs68H[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17116773612468944120ull);
    }
    vlSelf->__PVT__excUnit__DOT__dbin = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1225911170302535871ull);
    vlSelf->__PVT__excUnit__DOT__dcrOutput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8228398160579042767ull);
    vlSelf->__PVT__excUnit__DOT__PcL = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11657865845471518210ull);
    vlSelf->__PVT__excUnit__DOT__PcH = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15600921358481392212ull);
    vlSelf->__PVT__excUnit__DOT__auReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5983129862449210737ull);
    vlSelf->__PVT__excUnit__DOT__aob = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 63788901586908118ull);
    vlSelf->__PVT__excUnit__DOT__Ath = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9538145736905583744ull);
    vlSelf->__PVT__excUnit__DOT__Atl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10195096380445846591ull);
    vlSelf->__PVT__excUnit__DOT__Dbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18091060670460281696ull);
    vlSelf->__PVT__excUnit__DOT__Dbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12849653010608014001ull);
    vlSelf->__PVT__excUnit__DOT__Abh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3590917467231207307ull);
    vlSelf->__PVT__excUnit__DOT__Abl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10285416102289470417ull);
    vlSelf->__PVT__excUnit__DOT__Abd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9650942780044971246ull);
    vlSelf->__PVT__excUnit__DOT__Dbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12340447031390589014ull);
    vlSelf->__PVT__excUnit__DOT__dblMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4112511579411310415ull);
    vlSelf->__PVT__excUnit__DOT__dbhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10727518913511252172ull);
    vlSelf->__PVT__excUnit__DOT__abhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5774565421666361629ull);
    vlSelf->__PVT__excUnit__DOT__ablMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10323388668267354012ull);
    vlSelf->__PVT__excUnit__DOT__abdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 974361977563528061ull);
    vlSelf->__PVT__excUnit__DOT__dbdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12960802436391069048ull);
    vlSelf->__PVT__excUnit__DOT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17757363504244021646ull);
    vlSelf->__PVT__excUnit__DOT__Pcl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10881348300505528830ull);
    vlSelf->__PVT__excUnit__DOT__Pch2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014236758575243677ull);
    vlSelf->__PVT__excUnit__DOT__Pcl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12578793197466941682ull);
    vlSelf->__PVT__excUnit__DOT__Pch2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071388263285368388ull);
    vlSelf->__PVT__excUnit__DOT__actualRx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17339138617772023247ull);
    vlSelf->__PVT__excUnit__DOT__actualRy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1308705315681950223ull);
    vlSelf->__PVT__excUnit__DOT__movemRx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10949730601740698253ull);
    vlSelf->__PVT__excUnit__DOT__byteNotSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10512085803141679411ull);
    vlSelf->__PVT__excUnit__DOT__rxMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10178436793495279772ull);
    vlSelf->__PVT__excUnit__DOT__ryMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14525458109322173904ull);
    vlSelf->__PVT__excUnit__DOT__rxReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2668143747844430318ull);
    vlSelf->__PVT__excUnit__DOT__ryReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17594621184019762234ull);
    vlSelf->__PVT__excUnit__DOT__rxIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10630217847161638823ull);
    vlSelf->__PVT__excUnit__DOT__ryIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5145426317969500376ull);
    vlSelf->__PVT__excUnit__DOT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199946886870141518ull);
    vlSelf->__PVT__excUnit__DOT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9679518230320341290ull);
    vlSelf->__PVT__excUnit__DOT__ryl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15672131698306932106ull);
    vlSelf->__PVT__excUnit__DOT__ryl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8729361814553311566ull);
    vlSelf->__PVT__excUnit__DOT__ryl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4644589233758560218ull);
    vlSelf->__PVT__excUnit__DOT__ryl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13799473764187172288ull);
    vlSelf->__PVT__excUnit__DOT__rxl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13331039244555430117ull);
    vlSelf->__PVT__excUnit__DOT__rxl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14186150459046213065ull);
    vlSelf->__PVT__excUnit__DOT__rxl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7609551778528431675ull);
    vlSelf->__PVT__excUnit__DOT__rxl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2427115001501318595ull);
    vlSelf->__PVT__excUnit__DOT__abhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11521456184014737053ull);
    vlSelf->__PVT__excUnit__DOT__ablIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15476716583533706404ull);
    vlSelf->__PVT__excUnit__DOT__abdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10900339793923142521ull);
    vlSelf->__PVT__excUnit__DOT__dbhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5227420494223949707ull);
    vlSelf->__PVT__excUnit__DOT__dblIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9899861622849526163ull);
    vlSelf->__PVT__excUnit__DOT__dbdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 134014931335034971ull);
    vlSelf->__PVT__excUnit__DOT__preAbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8578833251560060124ull);
    vlSelf->__PVT__excUnit__DOT__preAbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16812341148237887513ull);
    vlSelf->__PVT__excUnit__DOT__preAbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5809969532733856156ull);
    vlSelf->__PVT__excUnit__DOT__preDbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 592717368476843108ull);
    vlSelf->__PVT__excUnit__DOT__preDbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7355393819238887225ull);
    vlSelf->__PVT__excUnit__DOT__preDbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11119294616489494922ull);
    vlSelf->__PVT__excUnit__DOT__auInpMux = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7774399447024193819ull);
    vlSelf->__PVT__excUnit__DOT__aulow = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6512293859413435368ull);
    vlSelf->__PVT__excUnit__DOT__dbl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3520611850389190515ull);
    vlSelf->__PVT__excUnit__DOT__dbh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12270710688163317831ull);
    vlSelf->__PVT__excUnit__DOT__abh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522598359993888109ull);
    vlSelf->__PVT__excUnit__DOT__abl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5915706991057891916ull);
    vlSelf->__PVT__excUnit__DOT__prHbit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3709938465268422750ull);
    vlSelf->__PVT__excUnit__DOT__prenLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6630234417401130144ull);
    vlSelf->__PVT__excUnit__DOT__alub = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6626873927492975375ull);
    vlSelf->__PVT__excUnit__DOT__dobInput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8921257348010004124ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__aluLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14169299629514718268ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__pswCcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 898352650822525380ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__ccrCore = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8825247940899265491ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16037559231913035171ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__ccrTemp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14888918217055130318ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__coreH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12311589530685040962ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__subHcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12656874620980488387ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__row = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17873283815503777064ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__isArX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12379418983521078365ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__noCcrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13813554140083360790ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6915319212702313148ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__ccrMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5045922069768944837ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__oper = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16461227853386006282ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__aOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13830816191649822615ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__dOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8806171396002901249ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__cRow = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16982678880184272601ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__cMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9894942575778128226ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__aluOp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8082806577699402118ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__shftResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2710488412090546658ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__bcdLatch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9529188777316407632ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__bcdCarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2203518466529769334ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__bcdOverf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550754763426404203ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__isLong = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10985509534271323560ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__rIrd8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6205944074865391015ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__isShift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3657859296843466296ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__shftRight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8040767508391499544ull);
    vlSelf->excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords = 0;
    vlSelf->__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18265473809231040635ull);
    vlSelf->__PVT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11686712153712379316ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__dob = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9853793339728502589ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__xToDbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10642020591719351744ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__xToIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6853194160881627896ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__dbinNoLow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10334756810981739947ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__dbinNoHigh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16300504286687176949ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__byteMux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6218874222930227160ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__isByte_T4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429185752715390228ull);
    vlSelf->__PVT__excUnit__DOT__dataIo__DOT__byteCycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14970327766231373220ull);
    vlSelf->__PVT__uaddrDecode__DOT__pla_lined__DOT__arIll = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10076444366704743538ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__uaddrDecode__DOT__pla_lined__DOT__arA1[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18000095758931261729ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__uaddrDecode__DOT__pla_lined__DOT__arA23[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 954879928560405404ull);
    }
    vlSelf->__PVT__uaddrDecode__DOT__pla_lined__DOT__scA3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 751766232301492724ull);
    vlSelf->__PVT__busArbiter__DOT__dmaPhase = 0;
    vlSelf->__PVT__busArbiter__DOT__next = 0;
    vlSelf->__PVT__busArbiter__DOT__rGranted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791667562793702131ull);
    vlSelf->__PVT__busControl__DOT__rAS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8666476146161495269ull);
    vlSelf->__PVT__busControl__DOT__rLDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16844119022776617289ull);
    vlSelf->__PVT__busControl__DOT__rUDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6154767519057945526ull);
    vlSelf->__PVT__busControl__DOT__rRWn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4533812824967813226ull);
    vlSelf->__PVT__busControl__DOT__bcPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1731562065807183596ull);
    vlSelf->__PVT__busControl__DOT__isWriteReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2019893207579941507ull);
    vlSelf->__PVT__busControl__DOT__bciByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2771615079466338711ull);
    vlSelf->__PVT__busControl__DOT__isRmcReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3699302771800019670ull);
    vlSelf->__PVT__busControl__DOT__wendReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12996600253125429579ull);
    vlSelf->__PVT__busControl__DOT__addrOeDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7088186550756388810ull);
    vlSelf->__PVT__busControl__DOT__isByteT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6980198727080923595ull);
    vlSelf->__PVT__busControl__DOT__bcReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 223166569626793007ull);
    vlSelf->__PVT__busControl__DOT__busPhase = 0;
    vlSelf->__PVT__busControl__DOT__next = 0;
    vlSelf->__PVT__busControl__DOT__busEnding = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4824611845493493489ull);
    vlSelf->__PVT__nDecoder__DOT__ftuCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 63926996070724218ull);
    vlSelf->__PVT__nDecoder__DOT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11138947145000144488ull);
    vlSelf->__PVT__nDecoder__DOT__dblSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4959668695347195818ull);
    vlSelf->__PVT__nDecoder__DOT__dbhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16179153754403713692ull);
    vlSelf->__PVT__nDecoder__DOT__ablSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4982533909097591606ull);
    vlSelf->__PVT__nDecoder__DOT__abhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6579322068217407523ull);
    vlSelf->__PVT__nDecoder__DOT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4891397355977353742ull);
    vlSelf->__PVT__sequencer__DOT__uNma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17537909151168833971ull);
    vlSelf->__PVT__sequencer__DOT__grp1Nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3681114957920320714ull);
    vlSelf->__PVT__sequencer__DOT__c0c1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3033903095648010359ull);
    vlSelf->__PVT__sequencer__DOT__a0Rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9299993515967088156ull);
    vlSelf->__PVT__sequencer__DOT__enl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9496455477569096454ull);
    vlSelf->__PVT__sequencer__DOT__ccTest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13650211390917737967ull);
    vlSelf->__PVT__sequencer__DOT__rTrace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15695026725156541591ull);
    vlSelf->__PVT__sequencer__DOT__rInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9070810647008118602ull);
    vlSelf->__PVT__sequencer__DOT__rIllegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16996348621195539422ull);
    vlSelf->__PVT__sequencer__DOT__rPriv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3222430646273420720ull);
    vlSelf->__PVT__sequencer__DOT__rLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16403898851777067157ull);
    vlSelf->__PVT__sequencer__DOT__rLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2589686096652407435ull);
    vlSelf->__PVT__sequencer__DOT__rExcRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1206705175361978008ull);
    vlSelf->__PVT__sequencer__DOT__rExcAdrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7005496218062072270ull);
    vlSelf->__PVT__sequencer__DOT__rExcBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 961181754116858455ull);
    vlSelf->__PVT__sequencer__DOT__rSpurious = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12362245658018280249ull);
    vlSelf->__PVT__sequencer__DOT__rAutovec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1908397744700763702ull);
    vlSelf->__PVT__sequencer__DOT__grp1LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5212451957694521878ull);
    vlSelf->__PVT__sequencer__DOT__grp0LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11997714449730765433ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__uRom__DOT__uRam[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5500803535123908739ull);
    }
    for (int __Vi0 = 0; __Vi0 < 336; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__nanoRom__DOT__nRam[__Vi0], __VscopeHash, 8515008715709669768ull);
    }
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
    vlSelf->__VcaseDecoderOut114 = 0;
    vlSelf->__VcaseDecoderOut115 = 0;
    vlSelf->__VcaseDecoderOut116 = 0;
    vlSelf->__VcaseDecoderOut117 = 0;
    vlSelf->__VcaseDecoderOut118 = 0;
    vlSelf->__VcaseDecoderOut119 = 0;
    vlSelf->__VcaseDecoderOut120 = 0;
    vlSelf->__VcaseDecoderOut121 = 0;
    vlSelf->__VcaseDecoderOut122 = 0;
    vlSelf->__VcaseDecoderOut123 = 0;
    vlSelf->__VcaseDecoderOut124 = 0;
    vlSelf->__VcaseDecoderOut125 = 0;
    vlSelf->__VcaseDecoderOut126 = 0;
    vlSelf->__VcaseDecoderOut127 = 0;
    vlSelf->__VcaseDecoderOut128 = 0;
    vlSelf->__VcaseDecoderOut129 = 0;
    vlSelf->__VcaseDecoderOut130 = 0;
    vlSelf->__VcaseDecoderOut131 = 0;
    vlSelf->__VcaseDecoderOut132 = 0;
    vlSelf->__VcaseDecoderOut133 = 0;
    vlSelf->__VcaseDecoderOut134 = 0;
    vlSelf->__VcaseDecoderOut135 = 0;
    vlSelf->__VcaseDecoderOut136 = 0;
    vlSelf->__VcaseDecoderOut137 = 0;
    vlSelf->__VcaseDecoderOut138 = 0;
    vlSelf->__VcaseDecoderOut139 = 0;
    vlSelf->__VcaseDecoderOut140 = 0;
    vlSelf->__VcaseDecoderOut141 = 0;
    vlSelf->__VcaseDecoderOut142 = 0;
    vlSelf->__VcaseDecoderOut143 = 0;
    vlSelf->__VcaseDecoderOut144 = 0;
    vlSelf->__VcaseDecoderOut145 = 0;
    vlSelf->__VcaseDecoderOut146 = 0;
    vlSelf->__VcaseDecoderOut147 = 0;
    vlSelf->__VcaseDecoderOut148 = 0;
    vlSelf->__VcaseDecoderOut149 = 0;
    vlSelf->__VcaseDecoderOut150 = 0;
    vlSelf->__VcaseDecoderOut151 = 0;
    vlSelf->__VcaseDecoderOut152 = 0;
    vlSelf->__VcaseDecoderOut153 = 0;
    vlSelf->__VcaseDecoderOut154 = 0;
    vlSelf->__VcaseDecoderOut155 = 0;
    vlSelf->__VcaseDecoderOut156 = 0;
    vlSelf->__VcaseDecoderOut157 = 0;
    vlSelf->__VcaseDecoderOut158 = 0;
    vlSelf->__VcaseDecoderOut159 = 0;
    vlSelf->__VcaseDecoderOut160 = 0;
    vlSelf->__VcaseDecoderOut161 = 0;
    vlSelf->__VcaseDecoderOut162 = 0;
    vlSelf->__VcaseDecoderOut163 = 0;
    vlSelf->__VcaseDecoderOut164 = 0;
    vlSelf->__VcaseDecoderOut165 = 0;
    vlSelf->__VcaseDecoderOut166 = 0;
    vlSelf->__VcaseDecoderOut167 = 0;
    vlSelf->__VcaseDecoderOut168 = 0;
    vlSelf->__VcaseDecoderOut169 = 0;
    vlSelf->__VcaseDecoderOut170 = 0;
    vlSelf->__VcaseDecoderOut171 = 0;
    vlSelf->__VcaseDecoderOut172 = 0;
    vlSelf->__VcaseDecoderOut173 = 0;
    vlSelf->__VcaseDecoderOut174 = 0;
    vlSelf->__VcaseDecoderOut175 = 0;
    vlSelf->__VcaseDecoderOut176 = 0;
    vlSelf->__VcaseDecoderOut177 = 0;
    vlSelf->__VcaseDecoderOut178 = 0;
    vlSelf->__VcaseDecoderOut179 = 0;
    vlSelf->__VcaseDecoderOut180 = 0;
    vlSelf->__VcaseDecoderOut181 = 0;
    vlSelf->__VcaseDecoderOut182 = 0;
    vlSelf->__VcaseDecoderOut183 = 0;
    vlSelf->__VcaseDecoderOut184 = 0;
    vlSelf->__VcaseDecoderOut185 = 0;
    vlSelf->__VcaseDecoderOut186 = 0;
    vlSelf->__VcaseDecoderOut187 = 0;
    vlSelf->__VcaseDecoderOut188 = 0;
    vlSelf->__VcaseDecoderOut189 = 0;
    vlSelf->__VcaseDecoderOut190 = 0;
    vlSelf->__VcaseDecoderOut191 = 0;
    vlSelf->__VcaseDecoderOut192 = 0;
    vlSelf->__VcaseDecoderOut193 = 0;
    vlSelf->__VcaseDecoderOut194 = 0;
    vlSelf->__VcaseDecoderOut195 = 0;
    vlSelf->__VcaseDecoderOut196 = 0;
    vlSelf->__VcaseDecoderOut197 = 0;
    vlSelf->__VcaseDecoderOut198 = 0;
    vlSelf->__VcaseDecoderOut199 = 0;
    vlSelf->__VcaseDecoderOut200 = 0;
    vlSelf->__VcaseDecoderOut201 = 0;
    vlSelf->__VcaseDecoderOut202 = 0;
    vlSelf->__VcaseDecoderOut203 = 0;
    vlSelf->__VcaseDecoderOut204 = 0;
    vlSelf->__VcaseDecoderOut205 = 0;
    vlSelf->__VcaseDecoderOut206 = 0;
    vlSelf->__VcaseDecoderOut207 = 0;
    vlSelf->__VcaseDecoderOut208 = 0;
    vlSelf->__VcaseDecoderOut209 = 0;
    vlSelf->__VcaseDecoderOut210 = 0;
    vlSelf->__VcaseDecoderOut211 = 0;
    vlSelf->__VcaseDecoderOut212 = 0;
    vlSelf->__VcaseDecoderOut213 = 0;
    vlSelf->__VcaseDecoderOut214 = 0;
    vlSelf->__VcaseDecoderOut215 = 0;
    vlSelf->__VcaseDecoderOut216 = 0;
    vlSelf->__VcaseDecoderOut217 = 0;
    vlSelf->__VcaseDecoderOut218 = 0;
    vlSelf->__VcaseDecoderOut219 = 0;
    vlSelf->__VcaseDecoderOut220 = 0;
    vlSelf->__VcaseDecoderOut221 = 0;
    vlSelf->__VcaseDecoderOut222 = 0;
    vlSelf->__VcaseDecoderOut223 = 0;
    vlSelf->__VcaseDecoderOut224 = 0;
    vlSelf->__VcaseDecoderOut225 = 0;
    vlSelf->__VcaseDecoderOut226 = 0;
    vlSelf->__VcaseDecoderOut227 = 0;
    vlSelf->__Vtask_excUnit__DOT__alu__DOT__mySubber__0__result = 0;
    vlSelf->__Vtask_excUnit__DOT__alu__DOT__mySubber__0__cout = 0;
    vlSelf->__Vtask_excUnit__DOT__alu__DOT__mySubber__5__result = 0;
    vlSelf->__Vtask_excUnit__DOT__alu__DOT__mySubber__5__cout = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_20 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_26 = 0;
    vlSelf->__Vdly__ftu = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68H__v0 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68H__v0 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v0 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68H__v1 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68H__v1 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v1 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v0 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v0 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v0 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v1 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v1 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v1 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v2 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v2 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v2 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v3 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v3 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v3 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v4 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v4 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v4 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v5 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v5 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v5 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v6 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v6 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v6 = 0;
    vlSelf->__VdlyVal__excUnit__DOT__regs68L__v7 = 0;
    vlSelf->__VdlyDim0__excUnit__DOT__regs68L__v7 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v7 = 0;
    vlSelf->__VdlyVal__Nanod__v0 = 0;
    vlSelf->__VdlySet__Nanod__v0 = 0;
    vlSelf->__VdlyVal__Nanod__v1 = 0;
    vlSelf->__VdlySet__Nanod__v1 = 0;
    vlSelf->__VdlyVal__Nanod__v2 = 0;
    vlSelf->__VdlySet__Nanod__v2 = 0;
    vlSelf->__VdlyVal__Nanod__v3 = 0;
    vlSelf->__VdlySet__Nanod__v3 = 0;
    vlSelf->__VdlyVal__Nanod__v4 = 0;
    vlSelf->__VdlySet__Nanod__v4 = 0;
    vlSelf->__VdlyVal__Nanod__v5 = 0;
    vlSelf->__VdlySet__Nanod__v5 = 0;
    vlSelf->__VdlyVal__Nanod__v6 = 0;
    vlSelf->__VdlySet__Nanod__v6 = 0;
    vlSelf->__VdlyVal__Nanod__v7 = 0;
    vlSelf->__VdlySet__Nanod__v7 = 0;
    vlSelf->__VdlyVal__Nanod__v8 = 0;
    vlSelf->__VdlySet__Nanod__v8 = 0;
    vlSelf->__VdlyVal__Nanod__v9 = 0;
    vlSelf->__VdlySet__Nanod__v9 = 0;
    vlSelf->__VdlyVal__Nanod__v10 = 0;
    vlSelf->__VdlySet__Nanod__v10 = 0;
    vlSelf->__VdlyVal__Nanod__v11 = 0;
    vlSelf->__VdlySet__Nanod__v11 = 0;
    vlSelf->__VdlyVal__Nanod__v12 = 0;
    vlSelf->__VdlySet__Nanod__v12 = 0;
    vlSelf->__VdlyVal__Nanod__v13 = 0;
    vlSelf->__VdlySet__Nanod__v13 = 0;
    vlSelf->__VdlyVal__Nanod__v14 = 0;
    vlSelf->__VdlySet__Nanod__v14 = 0;
    vlSelf->__VdlyVal__Nanod__v15 = 0;
    vlSelf->__VdlySet__Nanod__v15 = 0;
    vlSelf->__VdlyVal__Nanod__v16 = 0;
    vlSelf->__VdlySet__Nanod__v16 = 0;
    vlSelf->__VdlyVal__Nanod__v17 = 0;
    vlSelf->__VdlySet__Nanod__v17 = 0;
    vlSelf->__VdlyVal__Nanod__v18 = 0;
    vlSelf->__VdlySet__Nanod__v18 = 0;
    vlSelf->__VdlyVal__Nanod__v19 = 0;
    vlSelf->__VdlySet__Nanod__v19 = 0;
    vlSelf->__VdlyVal__Nanod__v20 = 0;
    vlSelf->__VdlySet__Nanod__v20 = 0;
    vlSelf->__VdlyVal__Nanod__v21 = 0;
    vlSelf->__VdlySet__Nanod__v21 = 0;
    vlSelf->__VdlyVal__Nanod__v22 = 0;
    vlSelf->__VdlySet__Nanod__v22 = 0;
    vlSelf->__VdlyVal__Nanod__v23 = 0;
    vlSelf->__VdlySet__Nanod__v23 = 0;
    vlSelf->__VdlyVal__Nanod__v24 = 0;
    vlSelf->__VdlySet__Nanod__v24 = 0;
    vlSelf->__VdlyVal__Nanod__v25 = 0;
    vlSelf->__VdlySet__Nanod__v25 = 0;
    vlSelf->__VdlyVal__Nanod__v26 = 0;
    vlSelf->__VdlySet__Nanod__v26 = 0;
    vlSelf->__VdlyVal__Nanod__v27 = 0;
    vlSelf->__VdlySet__Nanod__v27 = 0;
    vlSelf->__VdlyVal__Nanod__v28 = 0;
    vlSelf->__VdlySet__Nanod__v28 = 0;
    vlSelf->__VdlyVal__Nanod__v29 = 0;
    vlSelf->__VdlySet__Nanod__v29 = 0;
    vlSelf->__VdlyVal__Nanod__v30 = 0;
    vlSelf->__VdlySet__Nanod__v30 = 0;
    vlSelf->__VdlyVal__Nanod__v31 = 0;
    vlSelf->__VdlySet__Nanod__v31 = 0;
    vlSelf->__VdlyVal__Nanod__v32 = 0;
    vlSelf->__VdlySet__Nanod__v32 = 0;
    vlSelf->__VdlyVal__Nanod__v33 = 0;
    vlSelf->__VdlySet__Nanod__v33 = 0;
    vlSelf->__VdlyVal__Nanod__v34 = 0;
    vlSelf->__VdlySet__Nanod__v34 = 0;
    vlSelf->__VdlyVal__Nanod__v35 = 0;
    vlSelf->__VdlySet__Nanod__v35 = 0;
    vlSelf->__VdlyVal__Nanod__v36 = 0;
    vlSelf->__VdlySet__Nanod__v36 = 0;
    vlSelf->__VdlyVal__Nanod__v37 = 0;
    vlSelf->__VdlySet__Nanod__v37 = 0;
    vlSelf->__VdlyVal__Nanod__v38 = 0;
    vlSelf->__VdlySet__Nanod__v38 = 0;
    vlSelf->__VdlyVal__Nanod__v39 = 0;
    vlSelf->__VdlySet__Nanod__v39 = 0;
    vlSelf->__VdlyVal__Nanod__v40 = 0;
    vlSelf->__VdlySet__Nanod__v40 = 0;
    vlSelf->__VdlyVal__Nanod__v41 = 0;
    vlSelf->__VdlySet__Nanod__v41 = 0;
    vlSelf->__VdlyVal__Nanod__v42 = 0;
    vlSelf->__VdlySet__Nanod__v42 = 0;
    vlSelf->__VdlyVal__Nanod__v43 = 0;
    vlSelf->__VdlySet__Nanod__v43 = 0;
    vlSelf->__VdlyVal__Nanod__v44 = 0;
    vlSelf->__VdlySet__Nanod__v44 = 0;
    vlSelf->__VdlyVal__Nanod__v45 = 0;
    vlSelf->__VdlySet__Nanod__v45 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v8 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v2 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v9 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v3 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v10 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v4 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v11 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v5 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v12 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v6 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v13 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v7 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v14 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v8 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v15 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v9 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v16 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v10 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v17 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v11 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v12 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v13 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v14 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v15 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v16 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v17 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlySet__excUnit__DOT__regs68H__v19 = 0;
}
