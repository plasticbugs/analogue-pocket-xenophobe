// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sounds_good.h for the primary calling header

#include "Vtb_sounds_good__pch.h"

void Vtb_sounds_good___024root___nba_sequent__TOP__1(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_sequent__TOP__2(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_sequent__TOP__3(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_sequent__TOP__4(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_sequent__TOP__5(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_comb__TOP__0(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___act_sequent__TOP__0(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_comb__TOP__3(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___nba_comb__TOP__4(Vtb_sounds_good___024root* vlSelf);

void Vtb_sounds_good___024root___eval_nba(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_nba\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v0 = 0;
            SData/*10:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v1 = 0;
            SData/*10:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v1 = 0;
            vlSelfRef.__Vdly__tb_sounds_good__DOT__tx_timer 
                = vlSelfRef.tb_sounds_good__DOT__tx_timer;
            vlSelfRef.__Vdly__tb_sounds_good__DOT__send_byte 
                = vlSelfRef.tb_sounds_good__DOT__send_byte;
            vlSelfRef.__Vdly__tb_sounds_good__DOT__tx_state 
                = vlSelfRef.tb_sounds_good__DOT__tx_state;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v1 = 0U;
            vlSelfRef.tb_sounds_good__DOT__phase = 
                (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sounds_good__DOT__phase)));
            if (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_ram) 
                 & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rRWn)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rUDS)))) {
                    __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v0 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                                          >> 8U));
                    __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v0 
                        = (0x000007ffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                          >> 1U));
                    __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v0 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rLDS)))) {
                    __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v1 
                        = (0x000000ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob));
                    __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v1 
                        = (0x000007ffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                          >> 1U));
                    __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v1 = 1U;
                }
            }
            vlSelfRef.tb_sounds_good__DOT__rom_q = vlSelfRef.tb_sounds_good__DOT__rom
                [(0x0001ffffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                 >> 1U))];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram_q 
                = vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram
                [(0x000007ffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                 >> 1U))];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia_cs_q 
                = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_pia) 
                   & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rUDS)));
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v0) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v0] 
                    = ((0x00ffU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v0]) 
                       | ((SData)(__Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v0) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sounds_good__DOT__dut__DOT__ram__v1) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v1] 
                    = ((0xff00U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__ram
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sounds_good__DOT__dut__DOT__ram__v1]) 
                       | __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sounds_good__DOT__dut__DOT__ram__v1);
            }
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000028ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
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
                    = (0xffU | (0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                                 ? 
                                                ((4U 
                                                  & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                                  ? 
                                                 (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__irqb1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__crb))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__crb))
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                                                   | ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb)) 
                                                      & (0x000000f0U 
                                                         | (IData)(vlSelfRef.tb_sounds_good__DOT__cmd_data))))
                                                   : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb)))
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)
                                                  ? 
                                                 (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__irqa1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__cra))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__cra))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)) 
                                                   | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ora) 
                                                      & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)))
                                                   : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddra)))) 
                                               << 8U)));
            }
        }
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microOutput 
                = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uRom__DOT__uRam
                [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microAddr];
        }
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                .__PVT__pwrUp) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microAddr = 2U;
            } else if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT1) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microAddr 
                    = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nma;
            }
        }
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sounds_good___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
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
                       .__PVT__implicitSp ? 0x0fU : 
                       (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                        .__PVT__rxIsMovem ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__movemRx)
                         : ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                             .__PVT__rxIsAreg << 3U) 
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
                                      .__PVT__rz ? 
                                      ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irc) 
                                       >> 0x0cU) : 
                                      ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
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
        }
    }
    if ((0x0000000000000029ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dbhMux 
                = (0x0000ffffU & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                  .__PVT__rxh2dbh ? 
                                  ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                    ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                   [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                    : 0U) : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                             .__PVT__ryh2dbh
                                              ? ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                                 [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                                              : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__au2Db
                                                  ? 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__ath2Dbh
                                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                   : 
                                                  ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh)
                                                    ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcH)
                                                    : 0U))))));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__abhMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pch2Abh)
                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcH)
                                   : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                      .__PVT__rxh2abh
                                       ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                           ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                          [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                           : 0U) : 
                                      (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                       .__PVT__ryh2abh
                                        ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                            ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H
                                           [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                            : 0U) : 
                                       (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                        .__PVT__au2Ab
                                         ? (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg 
                                            >> 0x10U)
                                         : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__aob2Ab
                                             ? (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                                                >> 0x10U)
                                             : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                .__PVT__ath2Abh
                                                 ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Ath)
                                                 : 0U)))))));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dblMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl)
                                   ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                       ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                      [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                       : 0U) : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl)
                                                 ? 
                                                ((0x11U 
                                                  >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                                  ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                                 [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__ftu2Dbl
                                                  ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu)
                                                  : 
                                                 (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                  .__PVT__au2Db
                                                   ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg
                                                   : 
                                                  (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                   .__PVT__atl2Dbl
                                                    ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                    : 
                                                   ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl)
                                                     ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcL)
                                                     : 0U)))))));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ablMux 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl)
                                   ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__PcL)
                                   : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__rxl2Abl)
                                       ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx))
                                           ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                          [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRx]
                                           : 0U) : 
                                      ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__ryl2Abl)
                                        ? ((0x11U >= (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy))
                                            ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L
                                           [vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__actualRy]
                                            : 0U) : 
                                       (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                        .__PVT__ftu2Abl
                                         ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__ftu)
                                         : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                            .__PVT__au2Ab
                                             ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__auReg
                                             : (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                .__PVT__aob2Ab
                                                 ? vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob
                                                 : 
                                                (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                 .__PVT__atl2Abl
                                                  ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Atl)
                                                  : 0U))))))));
        }
    }
    if ((0x0000000000000039ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
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
                                                    : 
                                                   (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                    .__PVT__alu2Dbd
                                                     ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                                                     : 
                                                    (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                                     .__PVT__dcr2Dbd
                                                      ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dcrOutput)
                                                      : 0U))))));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nma 
                = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__A0Err)
                    ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__a0Rst)
                        ? 2U : (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst) 
                                 | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                                    | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr)))
                                 ? 1U : 3U)) : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma));
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi1 
                = (0U == (IData)(vlSelfRef.tb_sounds_good__DOT__phase));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi2 
                = (2U == (IData)(vlSelfRef.tb_sounds_good__DOT__phase));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk 
                = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                .__PVT__clk;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT2 
                = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2 & (1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT3 
                = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1 & (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT4 
                = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                   .__PVT__enPhi2 & ((0U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState) 
                                     | (3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rstUrom 
                = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                   .__PVT__enPhi1 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enErrClk));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset 
                = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                   .__PVT__extReset | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__addrOeDelay) 
                                        & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeI) 
                                              | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeiDelay)))) 
                                       & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Vpai)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT1 
                = ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
                    .__PVT__enPhi1 & (4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState)) 
                   & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__wClk)));
        }
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__10
            IData/*31:0*/ __Vinline_0__nba_comb__TOP__10___VdfgRegularize_hebeb780c_0_1;
            __Vinline_0__nba_comb__TOP__10___VdfgRegularize_hebeb780c_0_1 = 0;
            __Vinline_0__nba_comb__TOP__10___VdfgRegularize_hebeb780c_0_1 
                = (((((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                      & ((IData)(vlSelfRef.dbg_as) 
                         & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isRmcReg))) 
                     | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi) 
                        & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI) 
                           & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__rGranted)) 
                              & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Halti))))) 
                    & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset)) 
                       & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                          .__PVT__permStart | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcPend))))
                    ? 2U : 1U);
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next 
                = ((0U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                    ? 1U : ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                             ? 1U : ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                      ? 3U : ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                               ? 4U
                                               : ((4U 
                                                   == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rDtack)) 
                                                       | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iStop)))
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((5U 
                                                    == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                    ? 
                                                   (((5U 
                                                      == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset) 
                                                        & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__isRmcReg)))
                                                     ? 6U
                                                     : __Vinline_0__nba_comb__TOP__10___VdfgRegularize_hebeb780c_0_1)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __Vinline_0__nba_comb__TOP__10___VdfgRegularize_hebeb780c_0_1
                                                     : 1U)))))));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busEnding 
                = ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next) 
                   | (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__next));
        }
    }
}

void Vtb_sounds_good___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_sounds_good___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_sounds_good___024root___act_comb__TOP__0(Vtb_sounds_good___024root* vlSelf);

bool Vtb_sounds_good___024root___eval_phase__act(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_phase__act\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hacef62ad__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hacef62ad__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hacef62ad__0 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
            .__PVT__clk;
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0))) 
                                                          << 4U) 
                                                         | ((((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hacef62ad__0 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hacef62ad__1))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))) 
                                                                << 2U)) 
                                                            | (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1) 
                                                                << 1U) 
                                                               | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr_hacef62ad__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hacef62ad__0;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 
            = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk;
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
        Vtb_sounds_good___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sounds_good___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sounds_good___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_sounds_good___024root___act_sequent__TOP__0(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__1
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updSsw 
                        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aob2Ab;
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish 
                        = (1U & (((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[2U] 
                                   >> 2U) | (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                             >> 0x0000001cU)) 
                                 | vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                 .__PVT__isWrite));
                }
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__2
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel 
                        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod
                           .__PVT__isPcRel & (~ vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                              .__PVT__rz));
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pcldbl 
                        = (1U & ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                  >> 7U) | ((~ (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                                >> 8U)) 
                                            & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel))));
                    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pchdbh 
                        = ((1U == (3U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U])) 
                           | ((~ (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                                  >> 0x00000016U)) 
                              & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__isPcRel)));
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
                }
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_sounds_good___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

void Vtb_sounds_good___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_sounds_good___024root___eval_phase__nba(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_phase__nba\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sounds_good___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_sounds_good___024root___eval_nba(vlSelf);
        Vtb_sounds_good___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_sounds_good___024root___eval_phase__ico(Vtb_sounds_good___024root* vlSelf);

void Vtb_sounds_good___024root___eval(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sounds_good___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../tb_sounds_good.sv", 6, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_sounds_good___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sounds_good___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb_sounds_good.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_sounds_good___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb_sounds_good.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_sounds_good___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sounds_good___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_sounds_good___024root___eval_debug_assertions(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_debug_assertions\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.cmd_send & 0xfeU)))) {
        Verilated::overWidthError("cmd_send");
    }
}
#endif  // VL_DEBUG
