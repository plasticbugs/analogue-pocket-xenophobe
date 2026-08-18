// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

VL_ATTR_COLD void Vtb_system_fx68k___eval_static__TOP__tb_system__DOT__snd__DOT__cpu(Vtb_system_fx68k* vlSelf);

VL_ATTR_COLD void Vtb_system___024root___eval_static(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_static\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
        __Vinline_0__eval_static__TOP_tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
        vlSelfRef.tb_system__DOT__ce_div = 0U;
        vlSelfRef.tb_system__DOT__acc_m = 0U;
        vlSelfRef.tb_system__DOT__tog_m = 0U;
        vlSelfRef.tb_system__DOT__acc_s = 0U;
        vlSelfRef.tb_system__DOT__tog_s = 0U;
        __Vinline_0__eval_static__TOP_tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5327923038731643963ull);
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12223209200829293157ull);
        vlSelfRef.tb_system__DOT__video__DOT__unnamedblk3__DOT__hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 567608294047859094ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__refresh_count = 0x10bbU;
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10330222456137936411ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446179931641593987ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7430365498075693846ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1347610750288017881ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6489371089447689326ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1663701779221326446ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7625103804702122064ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12979275081926309769ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8216719910791582258ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15310182630443362731ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700204808206340297ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3493405684526831147ull);
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
        vlSelfRef.tb_system__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0U;
    }
    Vtb_system_fx68k___eval_static__TOP__tb_system__DOT__snd__DOT__cpu((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    Vtb_system_fx68k___eval_static__TOP__tb_system__DOT__snd__DOT__cpu((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0 
        = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0 
        = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__in0__0 = vlSelfRef.in0;
    vlSelfRef.__Vtrigprevexpr___TOP__in1__0 = vlSelfRef.in1;
    vlSelfRef.__Vtrigprevexpr___TOP__dsw__0 = vlSelfRef.dsw;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1 
        = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1 
        = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr_hcd2bfade__1 = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Clks
        .__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0 
        = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__Vcellinp__nanoRom__clk;
    vlSelfRef.__Vtrigprevexpr_h80e5c8f0__1 = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Clks
        .__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0 
        = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__Vcellinp__nanoRom__clk;
}

VL_ATTR_COLD void Vtb_system_fx68k___eval_initial__TOP__tb_system__DOT__snd__DOT__cpu(Vtb_system_fx68k* vlSelf);

VL_ATTR_COLD void Vtb_system___024root___eval_initial(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 16, 2097152, 0, "sdram_init.hex"s
                     ,  &(vlSelfRef.tb_system__DOT__sdram_chip__DOT__mem)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "bg_rom.hex"s
                     ,  &(vlSelfRef.tb_system__DOT__video__DOT__bg_rom)
                     , 0, ~0ULL);
    }
    Vtb_system_fx68k___eval_initial__TOP__tb_system__DOT__snd__DOT__cpu((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    Vtb_system_fx68k___eval_initial__TOP__tb_system__DOT__snd__DOT__cpu((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
}

VL_ATTR_COLD void Vtb_system___024root___eval_final(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_final\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_system___024root___eval_phase__stl(Vtb_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_system___024root___eval_settle(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_settle\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb_system.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_system___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_system___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_system.snd.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_system.snd.cpu.Irdecod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] tb_system.main_board.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] tb_system.main_board.cpu.Irdecod)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_system___024root___stl_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___stl_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
    tb_system__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
    SData/*15:0*/ tb_system__DOT__video__DOT__sp_row_w;
    tb_system__DOT__video__DOT__sp_row_w = 0;
    CData/*3:0*/ tb_system__DOT__video__DOT__sp_pen_v;
    tb_system__DOT__video__DOT__sp_pen_v = 0;
    CData/*5:0*/ tb_system__DOT__video__DOT__sp_px_src;
    tb_system__DOT__video__DOT__sp_px_src = 0;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    vlSelfRef.tb_system__DOT__snd__DOT____Vcellinp__pia__rs 
        = ((2U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob) 
           | (1U & (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                    >> 2U)));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset 
        = (1U & vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__cr[0U]);
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
    vlSelfRef.dac = (((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ora) 
                      << 2U) | (3U & ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb) 
                                      >> 6U)));
    vlSelfRef.tb_system__DOT__main_board__DOT____Vcellinp__ptm__din 
        = (0x000000ffU & ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rUDS)
                           ? (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob)
                           : ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U)));
    vlSelfRef.tb_system__DOT__sdram_chip__DOT__widx 
        = ((0x001ffe00U & ((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__row_open) 
                           << 9U)) | (0x000001ffU & (IData)(vlSelfRef.tb_system__DOT__sda)));
    vlSelfRef.tb_system__DOT__video__DOT__sp_code = 
        ((0x00000600U & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
                         << 3U)) | ((0x00000100U & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags) 
                                      << 5U)) | (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_code_lo)));
    vlSelfRef.tb_system__DOT__video__DOT__yt_hit = 
        (0x0020U > (0x000003ffU & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_line) 
                                   - (((IData)(0x00f1U) 
                                       - (0x000000ffU 
                                          & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sprram_rq))) 
                                      << 1U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_line) 
                                                    - 
                                                    (0x000003ffU 
                                                     & (((IData)(0x00f1U) 
                                                         - (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_y)) 
                                                        << 1U))));
    vlSelfRef.tb_system__DOT__sdq = ((IData)(vlSelfRef.tb_system__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                                     | ((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_out) 
                                        & (- (IData)((IData)(vlSelfRef.tb_system__DOT__sdram_chip__DOT__dq_oe)))));
    vlSelfRef.tb_system__DOT__video__DOT__sp_lbuf_bq 
        = ((((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bq_hi) 
             & (- (IData)((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bv_hi)))) 
            << 8U) | ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bq_lo) 
                      & (- (IData)((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_bv_lo)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm__DOT__c_in 
        = ((((IData)(vlSelfRef.tb_system__DOT__hsync_pulse) 
             & (IData)(vlSelfRef.tb_system__DOT__video__DOT__field)) 
            << 2U) | (IData)(vlSelfRef.tb_system__DOT__vsync30));
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
    tb_system__DOT__video__DOT__sp_px_src = (0x0000003fU 
                                             & ((0x00000010U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))
                                                 ? 
                                                ((IData)(0x1fU) 
                                                 - (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px))
                                                 : (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_px)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__orb) 
                                                & (IData)(vlSelfRef.tb_system__DOT__snd__DOT__pia__DOT__ddrb));
    vlSelfRef.tb_system__DOT__main_board__DOT__vpa_n 
        = (1U & (~ ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rAS)) 
                    & (7U == (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__rFC)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__bus_cycle 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rAS)) 
                 & ((~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rUDS)) 
                    | (~ (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rLDS)))));
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
    vlSelfRef.snd_status = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                  >> 4U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_system__DOT__main_board__DOT__vpa_n) 
                                                & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__bus_cycle));
    vlSelfRef.tb_system__DOT__video__DOT__sp_wr_data 
        = ((((8U == (IData)(tb_system__DOT__video__DOT__sp_pen_v))
              ? 2U : 1U) << 6U) | ((0x00000030U & (
                                                   (~ (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags)) 
                                                   << 4U)) 
                                   | (IData)(tb_system__DOT__video__DOT__sp_pen_v)));
    if (vlSelfRef.tb_system__DOT__video__DOT__sp_wrbuf) {
        __Vtemp_2[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi1[15U];
        __Vtemp_3[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[0U];
        __Vtemp_3[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[1U];
        __Vtemp_3[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[2U];
        __Vtemp_3[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[3U];
        __Vtemp_3[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[4U];
        __Vtemp_3[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[5U];
        __Vtemp_3[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[6U];
        __Vtemp_3[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[7U];
        __Vtemp_3[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[8U];
        __Vtemp_3[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[9U];
        __Vtemp_3[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[10U];
        __Vtemp_3[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[11U];
        __Vtemp_3[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[12U];
        __Vtemp_3[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[13U];
        __Vtemp_3[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[14U];
        __Vtemp_3[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo1[15U];
    } else {
        __Vtemp_2[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_hi0[15U];
        __Vtemp_3[0U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[0U];
        __Vtemp_3[1U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[1U];
        __Vtemp_3[2U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[2U];
        __Vtemp_3[3U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[3U];
        __Vtemp_3[4U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[4U];
        __Vtemp_3[5U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[5U];
        __Vtemp_3[6U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[6U];
        __Vtemp_3[7U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[7U];
        __Vtemp_3[8U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[8U];
        __Vtemp_3[9U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[9U];
        __Vtemp_3[10U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[10U];
        __Vtemp_3[11U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[11U];
        __Vtemp_3[12U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[12U];
        __Vtemp_3[13U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[13U];
        __Vtemp_3[14U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[14U];
        __Vtemp_3[15U] = vlSelfRef.tb_system__DOT__video__DOT__sp_claim_lo0[15U];
    }
    vlSelfRef.tb_system__DOT__video__DOT__sp_blend_go 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs))) 
           & (VL_GTS_III(11, 0x0200U, (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)) 
              & ((~ (((4U & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_flags))
                       ? (__Vtemp_2[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)))
                       : (__Vtemp_3[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_xs)))) 
                     | (0U == (IData)(tb_system__DOT__video__DOT__sp_pen_v)))) 
                 & (8U == (IData)(vlSelfRef.tb_system__DOT__video__DOT__sp_st)))));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_pal 
        = (IData)(((0x00090000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_wdt 
        = (IData)(((0x000b0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_ram 
        = (IData)(((0x00060000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_ctl 
        = (IData)(((0x000c0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_in0 
        = (IData)(((0x000d0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_in1 
        = (IData)(((0x000e0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_dsw 
        = (IData)(((0x000f0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom 
        = (IData)(((0U == (0x00fc0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm 
        = (IData)(((0x000a0000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram 
        = (IData)(((0x00070000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr 
        = (IData)(((0x00080000U == (0x000f0000U & vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_system__DOT__mrom_req = ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__busControl__DOT__rRWn) 
                                          & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_rom));
    vlSelfRef.tb_system__DOT__main_board__DOT__ptm_stb 
        = ((~ (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__ptm_cs_q)) 
           & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_ptm));
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
}

VL_ATTR_COLD void Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
void Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__snd__DOT__cpu__1(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__snd__DOT__cpu__2(Vtb_system_fx68k* vlSelf);
VL_ATTR_COLD void Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__main_board__DOT__cpu__2(Vtb_system_fx68k* vlSelf);

VL_ATTR_COLD void Vtb_system___024root___eval_stl(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_stl\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtb_system___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__main_board__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
        {
            // Inlined CFunc: _stl_sequent__TOP__1
            vlSelfRef.tb_system__DOT__snd__DOT__sel_ram 
                = ((~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13)) 
                   & (0x00070000U == (0x00070000U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)));
            vlSelfRef.tb_system__DOT__snd__DOT__sel_rom 
                = (1U & (~ ((vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob 
                             >> 0x00000012U) | (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13))));
            vlSelfRef.tb_system__DOT__snd__DOT__sel_pia 
                = ((~ (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__VdfgRegularize_hebeb780c_0_13)) 
                   & (0x00060000U == (0x00070000U & vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__excUnit__DOT__aob)));
            vlSelfRef.tb_system__DOT__vram_we = ((- (IData)(
                                                            ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_2) 
                                                             & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_vram)))) 
                                                 & (IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_9));
            vlSelfRef.tb_system__DOT__sprram_we = ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_9) 
                                                   & (- (IData)(
                                                                ((IData)(vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__VdfgRegularize_hebeb780c_0_2) 
                                                                 & (IData)(vlSelfRef.tb_system__DOT__main_board__DOT__sel_spr)))));
            vlSelfRef.tb_system__DOT__srom_req = ((IData)(vlSelfRef.tb_system__DOT__snd__DOT__sel_rom) 
                                                  & (IData)(vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__busControl__DOT__rRWn));
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
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___act_sequent__TOP__tb_system__DOT__snd__DOT__cpu__0((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((4ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__snd__DOT__cpu__1((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if ((3ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if ((0x000000000000000cULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_system_fx68k___stl_sequent__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__snd__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu));
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000cULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_system_fx68k___stl_comb__TOP__tb_system__DOT__main_board__DOT__cpu__2((&vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu));
    }
}

VL_ATTR_COLD bool Vtb_system___024root___eval_phase__stl(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__stl\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                        ((((vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod 
                                                            != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0) 
                                                           << 3U) 
                                                          | ((vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0) 
                                                             << 2U)) 
                                                         | (((vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0) 
                                                             << 1U) 
                                                            | (vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0 
            = vlSymsp->TOP__tb_system__DOT__snd__DOT__cpu.__PVT__Irdecod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0 
            = vlSymsp->TOP__tb_system__DOT__main_board__DOT__cpu.__PVT__Irdecod;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_system___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_system___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_system___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( in0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( in1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( dsw)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_system___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_system.snd.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_system.snd.cpu.Irdecod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] tb_system.main_board.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] tb_system.main_board.cpu.Irdecod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge tb_system.snd.cpu.Clks.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge tb_system.snd.cpu.__Vcellinp__nanoRom__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge tb_system.main_board.cpu.Clks.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge tb_system.main_board.cpu.__Vcellinp__nanoRom__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @([initial_nba])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_system___024root___ctor_var_reset(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___ctor_var_reset\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->in0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8091406170039428016ull);
    vlSelf->in1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15347402500067000120ull);
    vlSelf->dsw = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10793067836874855607ull);
    vlSelf->r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16978132545290669629ull);
    vlSelf->g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13110760720460257827ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16900879642891266615ull);
    vlSelf->hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3411606890003347522ull);
    vlSelf->vs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097102917493033199ull);
    vlSelf->de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418971983228644420ull);
    vlSelf->ctrl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10440442894316637683ull);
    vlSelf->wdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14173959881752473474ull);
    vlSelf->dac = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11786998382292935251ull);
    vlSelf->snd_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13995713652470280958ull);
    vlSelf->tb_system__DOT__m_phi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2644012631706062247ull);
    vlSelf->tb_system__DOT__m_phi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14242335630766919023ull);
    vlSelf->tb_system__DOT__s_phi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693550794820314539ull);
    vlSelf->tb_system__DOT__s_phi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2691037059859079345ull);
    vlSelf->tb_system__DOT__mrom_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8885336900962198436ull);
    vlSelf->tb_system__DOT__mrom_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8934872393991815004ull);
    vlSelf->tb_system__DOT__mrom_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13594050505507521319ull);
    vlSelf->tb_system__DOT__srom_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942619712382989777ull);
    vlSelf->tb_system__DOT__srom_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3240991644425396718ull);
    vlSelf->tb_system__DOT__srom_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14365978773114136929ull);
    vlSelf->tb_system__DOT__vram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17154648499924278009ull);
    vlSelf->tb_system__DOT__vram_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13738388149868061472ull);
    vlSelf->tb_system__DOT__sprram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 597382108555311818ull);
    vlSelf->tb_system__DOT__sprram_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2974467667231953746ull);
    vlSelf->tb_system__DOT__hsync_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9360636882188352845ull);
    vlSelf->tb_system__DOT__vsync30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11640399550192499795ull);
    vlSelf->tb_system__DOT__sdq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8146314985778224139ull);
    vlSelf->tb_system__DOT__sda = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17081297709804824952ull);
    vlSelf->tb_system__DOT__sd_baddr = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 1559836062894268799ull);
    vlSelf->tb_system__DOT__sd_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 950382973888529854ull);
    vlSelf->tb_system__DOT__sd_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 455470540618445386ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_system__DOT__sd_bdata, __VscopeHash, 5252032932558944452ull);
    vlSelf->tb_system__DOT__sd_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13916146682219607107ull);
    vlSelf->tb_system__DOT__sd_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2048651879136454717ull);
    vlSelf->tb_system__DOT__sd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14641635029384142860ull);
    vlSelf->tb_system__DOT__sd_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12582922895917901924ull);
    vlSelf->tb_system__DOT__sd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15813046293551213063ull);
    vlSelf->tb_system__DOT__spr_fetch_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16931625859860185274ull);
    vlSelf->tb_system__DOT__spr_fetch_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2526234400379182704ull);
    vlSelf->tb_system__DOT__spr_fetch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2581417892805490254ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_system__DOT__spr_fetch_data, __VscopeHash, 12381349582291755924ull);
    vlSelf->tb_system__DOT__snd__DOT__cpu_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8772597638440895881ull);
    vlSelf->tb_system__DOT__snd__DOT__sel_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12288808097179363202ull);
    vlSelf->tb_system__DOT__snd__DOT__sel_pia = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13351415509985932467ull);
    vlSelf->tb_system__DOT__snd__DOT__sel_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15315150720099109138ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_system__DOT__snd__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13272882112681329422ull);
    }
    vlSelf->tb_system__DOT__snd__DOT__ram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10824828763040825809ull);
    vlSelf->tb_system__DOT__snd__DOT__pia_cs_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740349756187144782ull);
    vlSelf->tb_system__DOT__snd__DOT__pia_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7717159856529052467ull);
    vlSelf->tb_system__DOT__snd__DOT____Vcellinp__pia__rs = 0;
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__ora = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14954793552870321953ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__ddra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5077663022663022068ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__orb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18006584404693681434ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__ddrb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17002372571230012220ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__cra = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14963074263309425819ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__crb = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2487272897413119193ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__irqa1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4724996944364155040ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__irqb1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1907814514872329393ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__ca1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334364998448714490ull);
    vlSelf->tb_system__DOT__snd__DOT__pia__DOT__cb1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12647185057726671974ull);
    vlSelf->tb_system__DOT__main_board__DOT__cpu_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15554393896578238202ull);
    vlSelf->tb_system__DOT__main_board__DOT__vpa_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2588300771627960598ull);
    vlSelf->tb_system__DOT__main_board__DOT__e_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18387844612783950402ull);
    vlSelf->tb_system__DOT__main_board__DOT__e_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11851091031636330364ull);
    vlSelf->tb_system__DOT__main_board__DOT__bus_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2095615276685314466ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12323900531215737045ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15842445580946268820ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_vram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18290214720392883027ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_spr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9456701702421830771ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_pal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8020707064686734771ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_ptm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5648441635610836164ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_wdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6919173900456213162ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_ctl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651513379986078236ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_in0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8202755816232492533ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_in1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4194173883487735349ull);
    vlSelf->tb_system__DOT__main_board__DOT__sel_dsw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14743399316958844921ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_system__DOT__main_board__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8580396425443072558ull);
    }
    vlSelf->tb_system__DOT__main_board__DOT__ram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15718735925283229004ull);
    vlSelf->tb_system__DOT__main_board__DOT__wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13204186567216669010ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886676958089957048ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm_cs_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16102855789774748633ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6302645940320123444ull);
    vlSelf->tb_system__DOT__main_board__DOT____Vcellinp__ptm__din = 0;
    vlSelf->tb_system__DOT__main_board__DOT__wdt_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16982720508543715228ull);
    vlSelf->tb_system__DOT__main_board__DOT__line_cnt = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1445167289189712924ull);
    vlSelf->tb_system__DOT__main_board__DOT__irq493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7424209764758125317ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__cr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11312057283436279720ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__latch[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12746277141140139179ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10514882006208854647ull);
    }
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__flag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14780727006996680320ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__flag_read = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7655838026557983849ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__msb_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5779039818555815176ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__lsb_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12526404919846568315ull);
    }
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__c_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9130988329549379266ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__t3_pre = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7954761392036208037ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__oneshot_done = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14294972160512224500ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__c_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7523008094786332353ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__t1_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13384912286223394742ull);
    vlSelf->tb_system__DOT__main_board__DOT__ptm__DOT__tick = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11156981268971351783ull);
    vlSelf->tb_system__DOT__video__DOT__hcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15862336867615553845ull);
    vlSelf->tb_system__DOT__video__DOT__vcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10169856295037775436ull);
    vlSelf->tb_system__DOT__video__DOT__field = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16621395929436077641ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__vram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6324637700213806596ull);
    }
    vlSelf->tb_system__DOT__video__DOT__vram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12320718686262260077ull);
    vlSelf->tb_system__DOT__video__DOT__vram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16217926726652203840ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__sprram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9290815175114900436ull);
    }
    vlSelf->tb_system__DOT__video__DOT__sprram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1433021866996352895ull);
    vlSelf->tb_system__DOT__video__DOT__sprram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3031659666186741444ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__palette[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6193665046094212179ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__bg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13882792201234929066ull);
    }
    vlSelf->tb_system__DOT__video__DOT__bg_q0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11310830562438381480ull);
    vlSelf->tb_system__DOT__video__DOT__bg_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 582697659276143840ull);
    vlSelf->tb_system__DOT__video__DOT__bg_raddr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1227796343114923136ull);
    vlSelf->tb_system__DOT__video__DOT__bg_rhalf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 987839881941219260ull);
    vlSelf->tb_system__DOT__video__DOT__bg_rdata = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14741160163698411015ull);
    vlSelf->tb_system__DOT__video__DOT__bg_rhalf_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18136484277429401446ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__bg_lbuf[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18326600537733297254ull);
    }
    vlSelf->tb_system__DOT__video__DOT__lbuf_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769595617219396481ull);
    vlSelf->tb_system__DOT__video__DOT__bg_wrbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2886014069292035540ull);
    vlSelf->tb_system__DOT__video__DOT__sp_wrbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1989308794250370380ull);
    vlSelf->tb_system__DOT__video__DOT__bg_disp_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13014004640706164699ull);
    vlSelf->tb_system__DOT__video__DOT__bg_st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13726483599819754517ull);
    vlSelf->tb_system__DOT__video__DOT__bg_cell = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 539773565331818979ull);
    vlSelf->tb_system__DOT__video__DOT__bg_d0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18026167636331610466ull);
    vlSelf->tb_system__DOT__video__DOT__bg_d1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3748461001216843855ull);
    vlSelf->tb_system__DOT__video__DOT__bg_px = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17995908604526644400ull);
    vlSelf->tb_system__DOT__video__DOT__bg_next_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9670530601986045480ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__sp_lbuf_lo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16941643561750257873ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_system__DOT__video__DOT__sp_lbuf_hi[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17605883192567463389ull);
    }
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_system__DOT__video__DOT__sp_claim_lo0, __VscopeHash, 5329807257388403497ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_system__DOT__video__DOT__sp_claim_lo1, __VscopeHash, 15107320571582655139ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_system__DOT__video__DOT__sp_claim_hi0, __VscopeHash, 2743137852884765352ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_system__DOT__video__DOT__sp_claim_hi1, __VscopeHash, 10784596224833481078ull);
    vlSelf->tb_system__DOT__video__DOT__sp_st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6749959989081845508ull);
    vlSelf->tb_system__DOT__video__DOT__sp_idx = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16883641915360836685ull);
    vlSelf->tb_system__DOT__video__DOT__sp_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1687267089058562856ull);
    vlSelf->tb_system__DOT__video__DOT__sp_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7590272387902346498ull);
    vlSelf->tb_system__DOT__video__DOT__sp_code_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1916742034086796340ull);
    vlSelf->tb_system__DOT__video__DOT__sp_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14546812033041419880ull);
    vlSelf->tb_system__DOT__video__DOT__sp_line = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13252646852165410357ull);
    vlSelf->tb_system__DOT__video__DOT__sp_fetch_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16254051051049547283ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_system__DOT__video__DOT__sp_row[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9904505628371219858ull);
        }
    }
    vlSelf->tb_system__DOT__video__DOT__sp_px = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17874336427781738970ull);
    vlSelf->tb_system__DOT__video__DOT__sp_code = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1275703510789901672ull);
    vlSelf->tb_system__DOT__video__DOT__yt_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10283066940965812190ull);
    vlSelf->tb_system__DOT__video__DOT__sp_xs = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3805704810631726270ull);
    vlSelf->tb_system__DOT__video__DOT__sp_blend_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16511748149646001480ull);
    vlSelf->tb_system__DOT__video__DOT__sp_wr_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6737694214848288811ull);
    vlSelf->tb_system__DOT__video__DOT__sp_wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6180175579747271773ull);
    vlSelf->tb_system__DOT__video__DOT__sp_bq_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17537400723318649607ull);
    vlSelf->tb_system__DOT__video__DOT__sp_bq_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8141534770933332329ull);
    vlSelf->tb_system__DOT__video__DOT__sp_bv_lo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516303485965140379ull);
    vlSelf->tb_system__DOT__video__DOT__sp_bv_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2695443318559490954ull);
    vlSelf->tb_system__DOT__video__DOT__sp_lbuf_bq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 799522724034320915ull);
    vlSelf->tb_system__DOT__video__DOT__rgb9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 576680006110818107ull);
    vlSelf->tb_system__DOT__video__DOT__de_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17839508826807321809ull);
    vlSelf->tb_system__DOT__video__DOT__hs_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10315056890493379961ull);
    vlSelf->tb_system__DOT__video__DOT__vs_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6112137849318822880ull);
    vlSelf->tb_system__DOT__rom_srv__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5463323251651204176ull);
    vlSelf->tb_system__DOT__rom_srv__DOT__cur = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1473323691154953446ull);
    vlSelf->tb_system__DOT__rom_srv__DOT__wcnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1924194539253288179ull);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->tb_system__DOT__sdram_chip__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9534511665973444821ull);
    }
    vlSelf->tb_system__DOT__sdram_chip__DOT__row_open = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16393777700320434228ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__row_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6452962787832558118ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__pipe_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13700832056245026385ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__pipe_v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11177459439521980616ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__dq_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6253378684884177368ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__dq_oe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17470530311359875481ull);
    vlSelf->tb_system__DOT__sdram_chip__DOT__widx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12490369363618516058ull);
    vlSelf->tb_system__DOT__sdram16__DOT__command = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9306387371267257776ull);
    vlSelf->tb_system__DOT__sdram16__DOT__save_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16945753586882713067ull);
    vlSelf->tb_system__DOT__sdram16__DOT__data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3530886700244575621ull);
    vlSelf->tb_system__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_15 = 0;
    vlSelf->__Vdly__tb_system__DOT__ce_div = 0;
    vlSelf->__Vdly__tb_system__DOT__main_board__DOT__line_cnt = 0;
    vlSelf->__Vdly__tb_system__DOT__video__DOT__hcnt = 0;
    vlSelf->__Vdly__tb_system__DOT__video__DOT__field = 0;
    vlSelf->__Vdly__tb_system__DOT__video__DOT__vcnt = 0;
    vlSelf->__Vdly__tb_system__DOT__mrom_ack = 0;
    vlSelf->__Vdly__tb_system__DOT__srom_ack = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__0.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__0.__PVT__inhibitCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__0.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__0.__PVT__inhibitCcr = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__in0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__in1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsw__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Nanod__1.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____PVT__Irdecod__1.__PVT__inhibitCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Nanod__1.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____PVT__Irdecod__1.__PVT__inhibitCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr_hcd2bfade__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__snd__DOT__cpu____Vcellinp__nanoRom__clk__0 = 0;
    vlSelf->__Vtrigprevexpr_h80e5c8f0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_system__DOT__main_board__DOT__cpu____Vcellinp__nanoRom__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
