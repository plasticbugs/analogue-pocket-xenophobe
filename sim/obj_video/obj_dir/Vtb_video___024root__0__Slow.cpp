// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video.h for the primary calling header

#include "Vtb_video__pch.h"

VL_ATTR_COLD void Vtb_video___024root___eval_static(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_static\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_video__DOT__ce_div = 0U;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5875598205052955701ull);
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 548616831168668325ull);
        vlSelfRef.tb_video__DOT__video__DOT__unnamedblk3__DOT__hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6840177256552836595ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__refresh_count = 0x10bbU;
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18329831461049700265ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13306831229134890093ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4578600304165187859ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4318982908502428360ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16684219290164330225ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6669534316965207706ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12223611924059243838ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4502421127459708451ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18424310703193263112ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16952207318200859614ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2766003547807655412ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9077978386284094716ull);
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
        vlSelfRef.tb_video__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtb_video___024root___eval_initial(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_initial\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 16, 4096, 0, "vram_init.hex"s
                     ,  &(vlSelfRef.tb_video__DOT__video__DOT__vram)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 4096, 0, "sprram_init.hex"s
                     ,  &(vlSelfRef.tb_video__DOT__video__DOT__sprram)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 9, 64, 0, "pal_init.hex"s
                     ,  &(vlSelfRef.tb_video__DOT__video__DOT__palette)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 2097152, 0, "sdram_init.hex"s
                     ,  &(vlSelfRef.tb_video__DOT__sdram_chip__DOT__mem)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "bg_rom.hex"s
                     ,  &(vlSelfRef.tb_video__DOT__video__DOT__bg_rom)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_video___024root___eval_final(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_final\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_video___024root___eval_phase__stl(Vtb_video___024root* vlSelf);

VL_ATTR_COLD void Vtb_video___024root___eval_settle(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_settle\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb_video.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_video___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_video___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_video___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_video___024root___stl_sequent__TOP__0(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___stl_sequent__TOP__0\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_video__DOT__video__DOT__sp_row_w;
    tb_video__DOT__video__DOT__sp_row_w = 0;
    CData/*3:0*/ tb_video__DOT__video__DOT__sp_pen_v;
    tb_video__DOT__video__DOT__sp_pen_v = 0;
    CData/*5:0*/ tb_video__DOT__video__DOT__sp_px_src;
    tb_video__DOT__video__DOT__sp_px_src = 0;
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
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
    vlSelfRef.tb_video__DOT__sdram_chip__DOT__widx 
        = ((0x001ffe00U & ((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__row_open) 
                           << 9U)) | (0x000001ffU & (IData)(vlSelfRef.tb_video__DOT__sd_a)));
    vlSelfRef.tb_video__DOT__video__DOT__sp_code = 
        ((0x00000600U & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
                         << 3U)) | ((0x00000100U & 
                                     ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags) 
                                      << 5U)) | (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_code_lo)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_line) 
                                                   - 
                                                   (0x000003ffU 
                                                    & (((IData)(0x00f1U) 
                                                        - (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_y)) 
                                                       << 1U))));
    vlSelfRef.tb_video__DOT__sd_dq = ((IData)(vlSelfRef.tb_video__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                                      | ((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_out) 
                                         & (- (IData)((IData)(vlSelfRef.tb_video__DOT__sdram_chip__DOT__dq_oe)))));
    vlSelfRef.tb_video__DOT__video__DOT__sp_lbuf_bq 
        = ((((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bq_hi) 
             & (- (IData)((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bv_hi)))) 
            << 8U) | ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bq_lo) 
                      & (- (IData)((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_bv_lo)))));
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
    tb_video__DOT__video__DOT__sp_px_src = (0x0000003fU 
                                            & ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))
                                                ? ((IData)(0x1fU) 
                                                   - (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px))
                                                : (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_px)));
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
    tb_video__DOT__video__DOT__sp_pen_v = (0x0000000fU 
                                           & ((8U & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                               ? ((1U 
                                                   & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                   ? (IData)(tb_video__DOT__video__DOT__sp_row_w)
                                                   : 
                                                  ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                                   >> 4U))
                                               : ((1U 
                                                   & (IData)(tb_video__DOT__video__DOT__sp_px_src))
                                                   ? 
                                                  ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                                   >> 8U)
                                                   : 
                                                  ((IData)(tb_video__DOT__video__DOT__sp_row_w) 
                                                   >> 0x0cU))));
    vlSelfRef.tb_video__DOT__video__DOT__sp_wr_data 
        = ((((8U == (IData)(tb_video__DOT__video__DOT__sp_pen_v))
              ? 2U : 1U) << 6U) | ((0x00000030U & (
                                                   (~ (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags)) 
                                                   << 4U)) 
                                   | (IData)(tb_video__DOT__video__DOT__sp_pen_v)));
    if (vlSelfRef.tb_video__DOT__video__DOT__sp_wrbuf) {
        __Vtemp_1[0U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[3U];
        __Vtemp_1[4U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[4U];
        __Vtemp_1[5U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[5U];
        __Vtemp_1[6U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[6U];
        __Vtemp_1[7U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[7U];
        __Vtemp_1[8U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[8U];
        __Vtemp_1[9U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[9U];
        __Vtemp_1[10U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[10U];
        __Vtemp_1[11U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[11U];
        __Vtemp_1[12U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[12U];
        __Vtemp_1[13U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[13U];
        __Vtemp_1[14U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[14U];
        __Vtemp_1[15U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi1[15U];
        __Vtemp_2[0U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo1[15U];
    } else {
        __Vtemp_1[0U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[3U];
        __Vtemp_1[4U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[4U];
        __Vtemp_1[5U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[5U];
        __Vtemp_1[6U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[6U];
        __Vtemp_1[7U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[7U];
        __Vtemp_1[8U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[8U];
        __Vtemp_1[9U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[9U];
        __Vtemp_1[10U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[10U];
        __Vtemp_1[11U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[11U];
        __Vtemp_1[12U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[12U];
        __Vtemp_1[13U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[13U];
        __Vtemp_1[14U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[14U];
        __Vtemp_1[15U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_hi0[15U];
        __Vtemp_2[0U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[3U];
        __Vtemp_2[4U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[4U];
        __Vtemp_2[5U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[5U];
        __Vtemp_2[6U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[6U];
        __Vtemp_2[7U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[7U];
        __Vtemp_2[8U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[8U];
        __Vtemp_2[9U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[9U];
        __Vtemp_2[10U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[10U];
        __Vtemp_2[11U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[11U];
        __Vtemp_2[12U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[12U];
        __Vtemp_2[13U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[13U];
        __Vtemp_2[14U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[14U];
        __Vtemp_2[15U] = vlSelfRef.tb_video__DOT__video__DOT__sp_claim_lo0[15U];
    }
    vlSelfRef.tb_video__DOT__video__DOT__sp_blend_go 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs))) 
           & (VL_GTS_III(11, 0x0200U, (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)) 
              & ((~ (((4U & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_flags))
                       ? (__Vtemp_1[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)))
                       : (__Vtemp_2[(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_xs)))) 
                     | (0U == (IData)(tb_video__DOT__video__DOT__sp_pen_v)))) 
                 & (8U == (IData)(vlSelfRef.tb_video__DOT__video__DOT__sp_st)))));
}

VL_ATTR_COLD bool Vtb_video___024root___eval_phase__stl(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___eval_phase__stl\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_video___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_video___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_video___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_video___024root___ctor_var_reset(Vtb_video___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video___024root___ctor_var_reset\n"); );
    Vtb_video__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16978132545290669629ull);
    vlSelf->g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13110760720460257827ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16900879642891266615ull);
    vlSelf->hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3411606890003347522ull);
    vlSelf->vs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097102917493033199ull);
    vlSelf->de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418971983228644420ull);
    vlSelf->tb_video__DOT__sd_dq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7101305355592294267ull);
    vlSelf->tb_video__DOT__sd_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13286348003760033440ull);
    vlSelf->tb_video__DOT__sd_baddr = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9667562790302604810ull);
    vlSelf->tb_video__DOT__sd_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15717161621404159619ull);
    vlSelf->tb_video__DOT__sd_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8566676525115512350ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_video__DOT__sd_bdata, __VscopeHash, 538675959868710501ull);
    vlSelf->tb_video__DOT__sd_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17780246552545994529ull);
    vlSelf->tb_video__DOT__sd_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16662520733380140890ull);
    vlSelf->tb_video__DOT__sd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15029357323237930271ull);
    vlSelf->tb_video__DOT__sd_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15624466339995940587ull);
    vlSelf->tb_video__DOT__sd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1006397416881268164ull);
    vlSelf->tb_video__DOT__spr_fetch_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7031213076388599318ull);
    vlSelf->tb_video__DOT__spr_fetch_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14142980041258354957ull);
    vlSelf->tb_video__DOT__spr_fetch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4878124833504969841ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_video__DOT__spr_fetch_data, __VscopeHash, 15795361816733745570ull);
    vlSelf->tb_video__DOT__video__DOT__hcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1900811084688876790ull);
    vlSelf->tb_video__DOT__video__DOT__vcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17470844237233214158ull);
    vlSelf->tb_video__DOT__video__DOT__field = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1969827883999006045ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__vram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17567474734942562463ull);
    }
    vlSelf->tb_video__DOT__video__DOT__vram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15166760672327587024ull);
    vlSelf->tb_video__DOT__video__DOT__vram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18106124450985539748ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__sprram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12325150714267645948ull);
    }
    vlSelf->tb_video__DOT__video__DOT__sprram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16452563902932259856ull);
    vlSelf->tb_video__DOT__video__DOT__sprram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2955429647111048244ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__palette[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6189275515328935655ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__bg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16003272594035808866ull);
    }
    vlSelf->tb_video__DOT__video__DOT__bg_q0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15589796737212807911ull);
    vlSelf->tb_video__DOT__video__DOT__bg_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12109858939339409574ull);
    vlSelf->tb_video__DOT__video__DOT__bg_raddr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10321772611367623465ull);
    vlSelf->tb_video__DOT__video__DOT__bg_rhalf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1026592393053187178ull);
    vlSelf->tb_video__DOT__video__DOT__bg_rdata = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6348188627264108023ull);
    vlSelf->tb_video__DOT__video__DOT__bg_rhalf_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6375537948116481912ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__bg_lbuf[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9977299997308452033ull);
    }
    vlSelf->tb_video__DOT__video__DOT__lbuf_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9901524501501134477ull);
    vlSelf->tb_video__DOT__video__DOT__bg_wrbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6878401424370895072ull);
    vlSelf->tb_video__DOT__video__DOT__sp_wrbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17562721733951353163ull);
    vlSelf->tb_video__DOT__video__DOT__bg_disp_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17041541169694427891ull);
    vlSelf->tb_video__DOT__video__DOT__bg_st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1826882042962676655ull);
    vlSelf->tb_video__DOT__video__DOT__bg_cell = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18051438687532775848ull);
    vlSelf->tb_video__DOT__video__DOT__bg_d0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16614052905927658202ull);
    vlSelf->tb_video__DOT__video__DOT__bg_d1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14306292235579401850ull);
    vlSelf->tb_video__DOT__video__DOT__bg_px = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9137343479810998584ull);
    vlSelf->tb_video__DOT__video__DOT__bg_next_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4518548673815163810ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__sp_lbuf_lo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13690599513983259502ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_video__DOT__video__DOT__sp_lbuf_hi[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1362790078841622263ull);
    }
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_video__DOT__video__DOT__sp_claim_lo0, __VscopeHash, 9853973217734332894ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_video__DOT__video__DOT__sp_claim_lo1, __VscopeHash, 7896527966596043927ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_video__DOT__video__DOT__sp_claim_hi0, __VscopeHash, 14497840897840814115ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_video__DOT__video__DOT__sp_claim_hi1, __VscopeHash, 6435702451848272355ull);
    vlSelf->tb_video__DOT__video__DOT__sp_st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6012868864844099023ull);
    vlSelf->tb_video__DOT__video__DOT__sp_idx = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 565780840210659649ull);
    vlSelf->tb_video__DOT__video__DOT__sp_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13121497664678244012ull);
    vlSelf->tb_video__DOT__video__DOT__sp_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9407987858554851985ull);
    vlSelf->tb_video__DOT__video__DOT__sp_code_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11947149003469558317ull);
    vlSelf->tb_video__DOT__video__DOT__sp_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16212835426112257388ull);
    vlSelf->tb_video__DOT__video__DOT__sp_line = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 866931204212785443ull);
    vlSelf->tb_video__DOT__video__DOT__sp_fetch_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16315206060610481727ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_video__DOT__video__DOT__sp_row[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8725826301325067827ull);
        }
    }
    vlSelf->tb_video__DOT__video__DOT__sp_px = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1036400515746030545ull);
    vlSelf->tb_video__DOT__video__DOT__sp_code = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8455078652222063824ull);
    vlSelf->tb_video__DOT__video__DOT__yt_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13141769278787366339ull);
    vlSelf->tb_video__DOT__video__DOT__sp_xs = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14205890256982542254ull);
    vlSelf->tb_video__DOT__video__DOT__sp_blend_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100210168399736433ull);
    vlSelf->tb_video__DOT__video__DOT__sp_wr_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13238806188665120212ull);
    vlSelf->tb_video__DOT__video__DOT__sp_wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6292038629312620101ull);
    vlSelf->tb_video__DOT__video__DOT__sp_bq_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7586299916717000481ull);
    vlSelf->tb_video__DOT__video__DOT__sp_bq_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1084130906661566852ull);
    vlSelf->tb_video__DOT__video__DOT__sp_bv_lo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2428757244211352008ull);
    vlSelf->tb_video__DOT__video__DOT__sp_bv_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11358268941151743536ull);
    vlSelf->tb_video__DOT__video__DOT__sp_lbuf_bq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15976066570319172828ull);
    vlSelf->tb_video__DOT__video__DOT__rgb9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14659674694340952222ull);
    vlSelf->tb_video__DOT__video__DOT__de_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2734273231764771038ull);
    vlSelf->tb_video__DOT__video__DOT__hs_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10520434231658140163ull);
    vlSelf->tb_video__DOT__video__DOT__vs_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10339721421502525629ull);
    vlSelf->tb_video__DOT__rom_server__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11807839863264605938ull);
    vlSelf->tb_video__DOT__rom_server__DOT__ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13161828676657672873ull);
    vlSelf->tb_video__DOT__rom_server__DOT__bready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4991103455411420496ull);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->tb_video__DOT__sdram_chip__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5716939771695955249ull);
    }
    vlSelf->tb_video__DOT__sdram_chip__DOT__row_open = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2212582315131693845ull);
    vlSelf->tb_video__DOT__sdram_chip__DOT__pipe_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2167691352617542807ull);
    vlSelf->tb_video__DOT__sdram_chip__DOT__pipe_v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071538322613017190ull);
    vlSelf->tb_video__DOT__sdram_chip__DOT__dq_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13668606846076236809ull);
    vlSelf->tb_video__DOT__sdram_chip__DOT__dq_oe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5590383354291419757ull);
    vlSelf->tb_video__DOT__sdram_chip__DOT__widx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11868741121525084638ull);
    vlSelf->tb_video__DOT__sdram16__DOT__command = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6316812583098155692ull);
    vlSelf->tb_video__DOT__sdram16__DOT__save_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2065772272846731278ull);
    vlSelf->tb_video__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
