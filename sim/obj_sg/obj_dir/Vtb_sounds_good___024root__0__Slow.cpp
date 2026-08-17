// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sounds_good.h for the primary calling header

#include "Vtb_sounds_good__pch.h"

VL_ATTR_COLD void Vtb_sounds_good___024root___eval_static(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_static\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
        vlSelfRef.tb_sounds_good__DOT__phase = 0U;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18089234870713807499ull);
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6001485399174814801ull);
        __Vinline_0__eval_static__TOP_tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__0 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__0 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__cmd__0 = vlSelfRef.cmd;
    vlSelfRef.__Vtrigprevexpr___TOP__cmd_send__0 = vlSelfRef.cmd_send;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod__1 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod__1 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr_hacef62ad__1 = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
        .__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk;
}

VL_ATTR_COLD void Vtb_sounds_good___024root___eval_initial(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_initial\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[6U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[7U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[10U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[15U] = 0U;
        VL_READMEM_N(true, 16, 131072, 0, "xeno_snd.hex"s
                     ,  &(vlSelfRef.tb_sounds_good__DOT__rom)
                     , 0, ~0ULL);
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v0 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v0 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v1 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v1 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v2 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v2 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v3 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v3 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v4 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v4 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v5 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v5 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v6 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v6 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v7 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v7 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v8 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v8 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v9 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v9 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v10 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v10 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v11 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v11 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v12 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v12 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v13 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v13 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v14 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v14 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v15 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v15 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v16 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v16 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68L__v17 = 1U;
        vlSelfRef.__VdlySet__tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__regs68H__v17 = 1U;
        VL_READMEM_N(false, 17, 1024, 0, "microrom.mem"s
                     ,  &(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uRom__DOT__uRam)
                     , 0, ~0ULL);
        VL_READMEM_N(false, 68, 336, 0, "nanorom.mem"s
                     ,  &(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoRom__DOT__nRam)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_sounds_good___024root___eval_final(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_final\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sounds_good___024root___eval_phase__stl(Vtb_sounds_good___024root* vlSelf);

VL_ATTR_COLD void Vtb_sounds_good___024root___eval_settle(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___eval_settle\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sounds_good___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb_sounds_good.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sounds_good___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_sounds_good___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sounds_good___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sounds_good___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_sounds_good.dut.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_sounds_good.dut.cpu.Irdecod)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sounds_good___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<SData/*15:0*/, 16> Vtb_sounds_good__ConstPool__TABLE_he204aa36_0;
extern const VlWide<20>/*639:0*/ Vtb_sounds_good__ConstPool__CONST_h79f0020d_0;
extern const VlUnpacked<CData/*0:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_h163a3758_0;
extern const VlWide<16>/*511:0*/ Vtb_sounds_good__ConstPool__CONST_he0dc4311_0;
extern const VlUnpacked<SData/*10:0*/, 8> Vtb_sounds_good__ConstPool__TABLE_h911422d5_0;
extern const VlWide<26>/*831:0*/ Vtb_sounds_good__ConstPool__CONST_he4e93662_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h7dd77d9e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hbae207b6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h68e348e7_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h9e077beb_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h9856367f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h32fa7448_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h43eeafa8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hac4b9c1a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hb2f687d9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hbe127729_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h7b3264b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h6d6f8a73_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hd082d1c8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h0f86901e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hfef82f04_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h2697a45d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h8df97df5_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h0088877f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hcd9cce84_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h38dd4db7_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_he5a4ad0d_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_he13c6a00_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h7e3d08c6_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_ha137bec4_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hacf0eeca_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_haf34f21f_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_ha4b3081e_0;
extern const VlUnpacked<IData/*30:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hccb66154_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h9cd354aa_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h3e2181b8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hd2959be6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h13aa4342_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h89c98bd1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h8c87e397_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h076b5ef1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h5fe6edae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h057bcb4f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hdb878943_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hb9b985c2_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hc118f1ba_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hbc774d6a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h9f4d8f37_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hc90e0332_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h6c6b9226_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h4d8af2d8_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hc2184f42_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h512d5c40_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h68d6d722_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hb4efbd7e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hcad3a1c4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h48910ea9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h2334f8f1_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h6feb013a_0;
extern const VlWide<20>/*639:0*/ Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_h6c931bbf_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h3327f4a6_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_haf48ddb4_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_he9046c6e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h6d5e945a_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_hea13bce5_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hdb962c9f_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h4df1601b_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hd7dd2a27_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h4fe821f2_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_h17c67228_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h1bf8d03a_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hfb8ce208_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hb29b6323_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h8b5ab276_0;
extern const VlUnpacked<IData/*20:0*/, 10> Vtb_sounds_good__ConstPool__TABLE_h139a610e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h4474e570_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h1e53f1ae_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hadebe4a9_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hb343e8cc_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h5679d896_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_heae1ca30_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_h4971b97e_0;
extern const VlUnpacked<IData/*20:0*/, 13> Vtb_sounds_good__ConstPool__TABLE_hdc124375_0;
extern const VlWide<18>/*575:0*/ Vtb_sounds_good__ConstPool__CONST_h2ec8fa17_0;
extern const VlUnpacked<CData/*1:0*/, 9> Vtb_sounds_good__ConstPool__TABLE_h4bf1d606_0;

VL_ATTR_COLD void Vtb_sounds_good___024root___stl_sequent__TOP__0(Vtb_sounds_good___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sounds_good___024root___stl_sequent__TOP__0\n"); );
    Vtb_sounds_good__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock = 0;
    CData/*3:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol = 0;
    CData/*3:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0;
    SData/*9:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift = 0;
    CData/*0:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
    CData/*1:0*/ tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0;
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
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
    IData/*31:0*/ __Vtemp_116;
    // Body
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = 0U;
    if ((1U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
        if ((8U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
            if ((9U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
                if ((5U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) {
                    if ((((((((((0x15U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                || (0x0dU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                               || (0x0eU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                              || (0x0fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                             || (0x10U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                            || (0x11U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                           || (0x12U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                          || (0x13U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))) 
                         || (0x14U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)))) {
                        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0fU;
    }
    if ((0x00004000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0eU;
    }
    if ((0x00002000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0dU;
    }
    if ((0x00001000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0cU;
    }
    if ((0x00000800U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0bU;
    }
    if ((0x00000400U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0x0aU;
    }
    if ((0x00000200U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 9U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 8U;
    }
    if ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 7U;
    }
    if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 6U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 5U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 4U;
    }
    if ((8U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 3U;
    }
    if ((4U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 2U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prHbit = 0U;
    }
    vlSelfRef.dbg_addr = (0x00fffffeU & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob);
    vlSelfRef.dbg_rw = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rRWn;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT____Vcellinp__pia__rs 
        = ((2U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob) 
           | (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                    >> 2U)));
    vlSelfRef.busy = (0U != (IData)(vlSelfRef.tb_sounds_good__DOT__tx_state));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
           & (0x00000010U != (0x00000012U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn 
        = (IData)((0x00000010U == (0x00000012U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch)));
    vlSelfRef.dac = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ora) 
                      << 2U) | (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__orb) 
                                      >> 6U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busAddrErr 
        = (1U & ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                 & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__isLineA 
        = (1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                 [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                  >> 0x0000000cU))] 
                 >> 0x0000000aU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__isLineF 
        = (1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                 [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                  >> 0x0000000cU))] 
                 >> 0x0000000fU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iplStable 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iIpl) 
           == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rIpl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iplComp 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iIpl) 
           > (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswI));
    if (((((((((4U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU))) | 
               (0U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU)))) 
              | (((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU))) 
                  || (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 0x0cU)))) 
                 || (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 0x0cU))))) 
             | (5U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU)))) 
            | (6U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                     >> 0x0cU)))) | 
           (7U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                  >> 0x0cU)))) | (8U 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 0x0cU)))) 
         | (9U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                  >> 0x0cU))))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((4U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 0x0cU))) ? 
               ((0x00000100U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                 ? 0x0040U : ((0U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 9U)))
                               ? 0x0400U : ((1U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 9U)))
                                             ? 0x0010U
                                             : ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                     >> 9U)))
                                                 ? 0x0020U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 9U)))
                                                  ? 0x0800U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                                                    ? 0x0100U
                                                    : 0x0200U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                        >> 9U)))
                                                    ? 0x8000U
                                                    : 0U)))))))
                : ((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 0x0cU)))
                    ? ((0x00000100U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                        ? ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                            ? 0x4000U : 0x2000U) : 
                       ((0U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 9U))) ? 0x4000U
                         : ((1U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 9U))) ? 0x0010U
                             : ((2U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                              >> 9U)))
                                 ? 0x0020U : ((3U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                   >> 9U)))
                                               ? 4U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                       >> 9U)))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                                                    ? 0x4000U
                                                    : 0x2000U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                        >> 9U)))
                                                    ? 0x2000U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                         >> 9U)))
                                                     ? 0x0040U
                                                     : 0U))))))))
                    : ((((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                >> 0x0cU))) 
                         || (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                   >> 0x0cU)))) 
                        || (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 0x0cU))))
                        ? 4U : ((5U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 0x0cU)))
                                 ? ((3U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 6U)))
                                     ? 0x8000U : ((0x00000100U 
                                                   & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                                                   ? 0x0020U
                                                   : 4U))
                                 : ((6U == (0x0000000fU 
                                            & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 0x0cU)))
                                     ? 0U : ((7U == 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 0x0cU)))
                                              ? 4U : 
                                             ((8U == 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                   >> 0x0cU)))
                                               ? ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                       >> 6U)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))))
                                                    ? 0x0200U
                                                    : 0x4000U))
                                               : ((IData)(
                                                          ((0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                                                           & (~ 
                                                              (3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                   >> 6U))))))
                                                   ? 0x0400U
                                                   : 0x0020U))))))));
    } else if ((0x0bU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = (((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                  >> 8U) & (~ (3U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 6U))))) 
                & (1U != (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                >> 3U)))) ? 0x2000U
                : 0x0040U);
    } else if ((0x0cU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((3U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                             >> 6U))) ? 0x0080U : ((IData)(
                                                           (0x0100U 
                                                            == 
                                                            (0x0130U 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))))
                                                    ? 8U
                                                    : 0x0010U));
    } else if ((0x0dU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
            = ((IData)(((0x0100U == (0x0130U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                        & (~ (3U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 6U))))))
                ? 0x1000U : 4U);
    } else if ((0x0eU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 0x0cU)))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype 
            = (3U & ((3U == (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                   >> 6U))) ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 9U)
                      : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                         >> 3U)));
        if (((((((((0U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 8U)))) 
                   | (1U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                              << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                              >> 8U))))) 
                  | (2U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                             << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                             >> 8U))))) 
                 | (3U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 8U))))) 
                | (4U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                           << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 8U))))) 
               | (5U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                          << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 8U))))) 
              | (6U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                         << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                         >> 8U))))) 
             | (7U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                        << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                        >> 8U)))))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow 
                = ((0U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                            << 1U) | (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 8U))))
                    ? 4U : ((1U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                >> 8U))))
                             ? 8U : ((2U == (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                   >> 8U))))
                                      ? 0x0020U : (
                                                   (3U 
                                                    == 
                                                    (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                           >> 8U))))
                                                    ? 0x0010U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                            >> 8U))))
                                                     ? 0x0100U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                             >> 8U))))
                                                      ? 0x0800U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                              >> 8U))))
                                                       ? 0x0400U
                                                       : 0x0200U)))))));
        }
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow = 0U;
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = ((0xff3fU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
           | (0x00000080U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 1U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00000400U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00008000U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock 
        = ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
           | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rAS) 
              & (2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tvn 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst)
            ? 0U : (0x0000000fU & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                                    | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))
                                    ? (2U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))
                                    : (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rSpurious) 
                                        | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rAutovec))
                                        ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rSpurious)
                                            ? 0x0000000cU
                                            : 0x0000000dU)
                                        : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rTrace)
                                            ? 9U : 
                                           ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rInterrupt)
                                             ? 0x0fU
                                             : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rIllegal)
                                                 ? 4U
                                                 : 
                                                ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rPriv)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineA)
                                                   ? 0x0aU
                                                   : 
                                                  ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rLineF)
                                                    ? 0x0bU
                                                    : 1U))))))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iAddrErr 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__addrOe) 
           & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rAddrErr));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__orb) 
                                                & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__pia__DOT__ddrb));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[6U] 
        = (0x000003ffU & ((1U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                                 >> 8U)))
                           ? ((0U != (0x000000ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir)))
                               ? 0x00000089U : 0x000000a9U)
                           : ((0U != (0x000000ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir)))
                               ? 0x00000308U : 0x00000068U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[7U] = 0x023bU;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[10U] = 0U;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[15U] = 0U;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1Nma = 0x01c0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                      | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr))))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rSpurious) 
                          | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rAutovec))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rTrace)))) {
                    if (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rInterrupt) {
                        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__grp1Nma = 0x01c4U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rx 
        = (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                 >> 9U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ry 
        = (7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isTas 
        = (IData)(((0x0ac0U == (0x0fc0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsDt 
        = (1U & ((Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                  [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                   >> 0x0000000cU))] 
                  >> 5U) | (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                            [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                             >> 0x0000000cU))] 
                            & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                  >> 8U)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__rxIsUsp 
        = (IData)(((0x0e60U == (0x0ff0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isMovep 
        = (IData)(((0x0108U == (0x0138U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                   [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                    >> 0x0000000cU))]));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__implicitSp 
        = ((0x00000040U & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? (1U 
                                                   == 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                       >> 8U)))
            : ((1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                      >> 4U)) && ((0x0eU == (0x0000000fU 
                                             & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                >> 8U))) 
                                  | (0x21U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 6U))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__toCcr 
        = (((Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
             [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                              >> 0x0000000cU))] >> 4U) 
            & ((0x0e77U == (0x00000fffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
               | (0x13U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 6U))))) 
           | (IData)(((0U == (0x01c0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                      & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                      [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))])));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__macroTvn 
        = ((0x00000010U & Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
            [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                             >> 0x0000000cU))]) ? (
                                                   (0x00000040U 
                                                    & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                                                    ? 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))
                                                     ? 7U
                                                     : 
                                                    (0x00000020U 
                                                     | (0x0000000fU 
                                                        & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))))
                                                    : 6U)
            : 5U);
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__inhibitCcr 
        = (((IData)(((0x00c0U == (0x00c0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                     & ((Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 9U) | (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                   [(0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 0x0000000cU))] 
                                   >> 0x0dU)))) | (IData)(
                                                          ((8U 
                                                            == 
                                                            (0x0038U 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                                                           & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                                              [
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                  >> 0x0000000cU))] 
                                                              >> 5U)))) 
           | (IData)(((0x0040U == (0x01c0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                      & ((Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                          [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                           >> 0x0000000cU))] 
                          >> 2U) | (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                    [(0x0000000fU & 
                                      ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 0x0000000cU))] 
                                    >> 3U)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__enl 
        = ((2U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                  >> 5U)) | (1U & (~ (0U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__prenLatch)))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0 
        = ((2U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                  >> 7U)) | (1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__alue)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__clk 
        = vlSelfRef.clk;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__extReset 
        = vlSelfRef.reset;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__pwrUp 
        = vlSelfRef.reset;
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi1 
        = (0U == (IData)(vlSelfRef.tb_sounds_good__DOT__phase));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks.__PVT__enPhi2 
        = (2U == (IData)(vlSelfRef.tb_sounds_good__DOT__phase));
    __VdfgRegularize_hebeb780c_0_11 = (6U & (- (IData)(
                                                       ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__coreH) 
                                                        | ((6U 
                                                            != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper)) 
                                                           & (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                                                               >> 3U) 
                                                              & (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch) 
                                                                     >> 1U)))))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw 
        = (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswT) 
            << 0x0000000fU) | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswS) 
                                << 0x0000000dU) | (
                                                   ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__pswI) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))));
    vlSelfRef.dbg_as = (1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rAS)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords 
        = (IData)((0U != (0x0082U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
            if ((8U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
                tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc = 0U;
            } else if ((4U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir)))) {
                        tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc = 1U;
                    }
                }
                tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                        ? ((1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                            ? 0x012aU : 0x006dU) : 
                       ((1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                         ? 0x0126U : 0U));
            } else {
                tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                    = ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                        ? ((1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                            ? 0x012aU : 0x03a2U) : 
                       ((1U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                         ? 0x0363U : 0x03a6U));
            }
        } else {
            tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
                = ((8U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                    ? 0x0230U : 0x02f5U);
        }
    } else {
        tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc 
            = ((0x00000010U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                ? ((8U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                    ? 0x0119U : 0x030bU) : 0x01d0U);
    }
    __VdfgRegularize_hebeb780c_0_8 = (1U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                            [(0x0000000fU 
                                              & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                 >> 0x0000000cU))] 
                                            >> 0x0000000eU));
    __Vtemp_1 = VL_MATCHMASKED_I(32, (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper), Vtb_sounds_good__ConstPool__CONST_h79f0020d_0);
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight 
        = Vtb_sounds_good__ConstPool__TABLE_h163a3758_0
        [__Vtemp_1];
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa 
        = (0x0000000fU & ((7U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                        >> 6U))) ? 
                          (0xcccba987U >> (0x0000001cU 
                                           & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                              >> 7U)))
                           : (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                    >> 6U))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol 
        = (0x0000000fU & ((7U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                        >> 3U))) ? 
                          (0xcccba987U >> (0x0000001cU 
                                           & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                              << 2U)))
                           : (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                    >> 3U))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[14U] 
        = ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))))
            ? 0x03c7U : 0U);
    if ((IData)((0x00c0U == (0x08c0U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))))) {
        __Vtemp_2 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he0dc4311_0);
        vlSelfRef.__VcaseDecoderOut0 = Vtb_sounds_good__ConstPool__TABLE_h911422d5_0
            [__Vtemp_2];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xbfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00004000U & ((IData)(vlSelfRef.__VcaseDecoderOut0) 
                                 << 0x0000000eU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = (0x000003ffU & ((IData)(vlSelfRef.__VcaseDecoderOut0) 
                              >> 1U));
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00004000U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] = 0U;
        } else {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0xbfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
                = ((0x00000020U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                    ? 0x00000386U : 0x00000385U);
        }
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (0xbfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14U] 
            = ((0x00000020U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))
                ? 0x00000382U : 0x00000381U);
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updTpend 
        = (1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__clrTpend 
        = (0x0eU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__tvn2Ftu 
        = (0x0dU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__const2Ftu 
        = (1U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Dbl 
        = ((4U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)) 
           | (6U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Abl 
        = (8U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__inl2psw 
        = (6U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__pswIToFtu 
        = (5U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Sr 
        = (2U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__sr2Ftu 
        = (7U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ird2Ftu 
        = (9U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ssw2Ftu 
        = (0x0bU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__initST 
        = (((6U == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)) 
            | (0x0eU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl))) 
           | (0x0fU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2Pren 
        = (0x0cU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__updPren 
        = (0x0aU == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__Ir2Ird 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[2U] 
                 >> 3U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluDctrl 
        = (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000013U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluActrl 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000012U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluColumn 
        = ((4U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 0x0000001dU)) | ((2U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[2U] 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[2U] 
                                               >> 1U))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluFinish 
        = (2U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__aluInit 
        = (1U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ftu2Ccr 
        = (3U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                        >> 0x0000001dU)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abdIsByte 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 6U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Db 
        = (1U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Ab 
        = (2U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Pc 
        = (3U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 0x00000014U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__db2Aob 
        = (2U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ab2Aob 
        = (1U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__au2Aob 
        = (3U == (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbin2Abd 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000eU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbin2Dbd 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000fU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__permStart 
        = (0U != (3U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                        >> 3U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__busByte 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__noLowByte 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000017U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__noHighByte 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x00000016U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abl2reg 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 4U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__abh2reg 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 7U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbl2reg 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 1U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__dbh2reg 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 5U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2dbl 
        = (1U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U]);
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2dbh 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 6U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2abl 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 5U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__reg2abh 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 8U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__ssp 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[0U] 
                 >> 0x00000018U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rz 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 0x0000000bU));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__rxlDbl 
        = (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                 >> 8U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dobCtrl 
        = ((2U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 0x00000017U)) | (1U & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nanoLatch[1U] 
                                            >> 0x00000015U)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__next 
        = ((0U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
            ? 1U : ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                     ? ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock)
                         ? 1U : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI)
                                  ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi)
                                      ? 1U : 2U) : 4U))
                     : ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                         ? (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi) 
                             | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock))
                             ? (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI) 
                                 | (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__bgBlock))
                                 ? 1U : 4U) : 6U) : 
                        ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                          ? 3U : ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                   ? (((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi)) 
                                       & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI))
                                       ? 3U : 4U) : 
                                  ((6U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                    ? 5U : ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                             ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BgackI)
                                                 ? 
                                                ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi)
                                                  ? 1U
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BRi)
                                                  ? 7U
                                                  : 5U))
                                             : ((7U 
                                                 == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busArbiter__DOT__dmaPhase)
                                                 ? 4U
                                                 : 1U))))))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enErrClk 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iBusErr) 
           | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iAddrErr));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__wClk 
        = (1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__iAddrErr) 
                 | (((5U != vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                     & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__wendReg)) 
                    | ((~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeI)) 
                       | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Err6591)))));
    vlSelfRef.status = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                              >> 4U));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT____Vcellinp__nanoRom__clk 
        = vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
        .__PVT__clk;
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
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__bcReset 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
           .__PVT__extReset | (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__addrOeDelay) 
                                & (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeI) 
                                      | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__BeiDelay)))) 
                               & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Vpai)));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffU & 
                                      ((0x000000ffU 
                                        & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)) 
                                       - (IData)(__VdfgRegularize_hebeb780c_0_11)));
    __VdfgRegularize_hebeb780c_0_12 = (0x000001ffU 
                                       & ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                                          + (0x000000ffU 
                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch))));
    if (((((((((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 8U))) | (1U 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))) 
              | (2U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                       >> 8U)))) | 
             (3U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                    >> 8U)))) | (4U 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))) 
           | (5U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                    >> 8U)))) | (6U 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))) 
         | (7U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                  >> 8U))))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest 
            = ((0U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                      >> 8U))) || (
                                                   (1U 
                                                    != 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                        >> 8U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           == 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                               >> 8U)))
                                                           ? (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (5U 
                                                                       & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw))))
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x0000000fU 
                                                             & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                >> 8U)))
                                                            ? 
                                                           ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                            | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                               >> 2U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x0000000fU 
                                                              & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                 >> 8U)))
                                                             ? 
                                                            (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw))
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                  >> 8U)))
                                                              ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)
                                                              : 
                                                             ((6U 
                                                               == 
                                                               (0x0000000fU 
                                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                                   >> 8U)))
                                                               ? 
                                                              (~ 
                                                               ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                                >> 2U))
                                                               : 
                                                              ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                               >> 2U)))))))));
    } else if (((((((((8U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                             >> 8U))) 
                      | (9U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 8U)))) 
                     | (0x0aU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                 >> 8U)))) 
                    | (0x0bU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                >> 8U)))) 
                   | (0x0cU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 8U)))) 
                  | (0x0dU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                              >> 8U)))) 
                 | (0x0eU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                             >> 8U)))) 
                | (0x0fU == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 8U))))) {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest 
            = (1U & ((8U == (0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 8U)))
                      ? (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                            >> 1U)) : ((9U == (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                  >> 8U)))
                                        ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                           >> 1U) : 
                                       ((0x0aU == (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))
                                         ? (~ ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                               >> 3U))
                                         : ((0x0bU 
                                             == (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                    >> 8U)))
                                             ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                >> 3U)
                                             : ((0x0cU 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                     >> 8U)))
                                                 ? 
                                                ((IData)(
                                                         (0x000aU 
                                                          == 
                                                          (0x000aU 
                                                           & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))) 
                                                 | (IData)(
                                                           (0U 
                                                            == 
                                                            (0x000aU 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))))
                                                 : 
                                                ((0x0dU 
                                                  == 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 8U)))
                                                  ? 
                                                 ((IData)(
                                                          (8U 
                                                           == 
                                                           (0x000aU 
                                                            & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))) 
                                                  | (IData)(
                                                            (2U 
                                                             == 
                                                             (0x000aU 
                                                              & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))))
                                                  : 
                                                 ((0x0eU 
                                                   == 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                       >> 8U)))
                                                   ? 
                                                  ((IData)(
                                                           (0x000aU 
                                                            == 
                                                            (0x000eU 
                                                             & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))) 
                                                   | (IData)(
                                                             (0U 
                                                              == 
                                                              (0x000eU 
                                                               & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))))
                                                   : 
                                                  ((((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw) 
                                                     >> 2U) 
                                                    | (IData)(
                                                              (8U 
                                                               == 
                                                               (0x000aU 
                                                                & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw))))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (0x000aU 
                                                               & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__psw)))))))))))));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.dbg_as) 
                                                & (7U 
                                                   == (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rFC)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ftuConst 
        = ((0U != (3U & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 6U))) ? ((0x0000ff00U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                      >> 7U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird)))
            : ((1U & ((IData)(__VdfgRegularize_hebeb780c_0_8) 
                      | (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                         [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                         >> 5U))) ? ((0U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                   >> 9U)))
                                      ? 8U : (7U & 
                                              ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                               >> 9U)))
                : ((1U & ((Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                           [(0x0000000fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                            >> 0x0000000cU))] 
                           >> 8U) | (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                          >> 0x0000000cU))] 
                                     >> 0x0000000cU)))
                    ? 0x000fU : (0x0080U & (- (IData)(
                                                      (1U 
                                                       & (Vtb_sounds_good__ConstPool__TABLE_he204aa36_0
                                                          [
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                                                              >> 0x0000000cU))] 
                                                          >> 4U))))))));
    tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift 
        = ((IData)(__VdfgRegularize_hebeb780c_0_8) 
           & (3U != (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                           >> 6U))));
    if ((0U == (0x00000027U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                               >> 6U)))) {
        __Vtemp_3 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut21 = Vtb_sounds_good__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_3];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut21 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut21 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut21 
                              >> 0x0000000bU));
    } else if ((1U == (0x00000027U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_4 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut22 = Vtb_sounds_good__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_4];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut22 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut22 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut22 
                              >> 0x0000000bU));
    } else if ((2U == (0x00000027U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_5 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut23 = Vtb_sounds_good__ConstPool__TABLE_hbae207b6_0
            [__Vtemp_5];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut23 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut23 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut23 
                              >> 0x0000000bU));
    } else if ((3U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_6 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut24 = Vtb_sounds_good__ConstPool__TABLE_h68e348e7_0
            [__Vtemp_6];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut24 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut24 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut24 
                              >> 0x0000000bU));
    } else if ((0x13U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_7 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut25 = Vtb_sounds_good__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_7];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut25 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut25 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut25 
                              >> 0x0000000bU));
    } else if ((0x1bU == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_8 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut26 = Vtb_sounds_good__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_8];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut26 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut26 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut26 
                              >> 0x0000000bU));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_9 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut27 = Vtb_sounds_good__ConstPool__TABLE_h9856367f_0
            [__Vtemp_9];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut27 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut27 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut27 
                              >> 0x0000000bU));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_10 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut28 = Vtb_sounds_good__ConstPool__TABLE_h32fa7448_0
            [__Vtemp_10];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut28 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut28 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut28 
                              >> 0x0000000bU));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_11 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut29 = Vtb_sounds_good__ConstPool__TABLE_h43eeafa8_0
            [__Vtemp_11];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut29 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut29 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut29 
                              >> 0x0000000bU));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_12 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut30 = Vtb_sounds_good__ConstPool__TABLE_hac4b9c1a_0
            [__Vtemp_12];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut30 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut30 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut30 
                              >> 0x0000000bU));
    } else if ((0x28U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_13 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut31 = Vtb_sounds_good__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_13];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut31 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut31 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut31 
                              >> 0x0000000bU));
    } else if ((0x29U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_14 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut32 = Vtb_sounds_good__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_14];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut32 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut32 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut32 
                              >> 0x0000000bU));
    } else if ((0x2aU == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_15 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut33 = Vtb_sounds_good__ConstPool__TABLE_hbe127729_0
            [__Vtemp_15];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut33 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut33 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut33 
                              >> 0x0000000bU));
    } else if ((0x2bU == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_16 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut34 = Vtb_sounds_good__ConstPool__TABLE_h7b3264b8_0
            [__Vtemp_16];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut34 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut34 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut34 
                              >> 0x0000000bU));
    } else if ((0x00000032U == (0x0000003eU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_17 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut35 = Vtb_sounds_good__ConstPool__TABLE_h6d6f8a73_0
            [__Vtemp_17];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut35 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut35 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut35 
                              >> 0x0000000bU));
    } else if ((6U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_18 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut36 = Vtb_sounds_good__ConstPool__TABLE_hd082d1c8_0
            [__Vtemp_18];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut36 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut36 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut36 
                              >> 0x0000000bU));
    } else if ((7U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_19 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut37 = Vtb_sounds_good__ConstPool__TABLE_h0f86901e_0
            [__Vtemp_19];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut37 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut37 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut37 
                              >> 0x0000000bU));
    } else if ((0x3aU == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_20 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut38 = Vtb_sounds_good__ConstPool__TABLE_hfef82f04_0
            [__Vtemp_20];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut38 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut38 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut38 
                              >> 0x0000000bU));
    } else if ((0x3bU == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_21 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut39 = Vtb_sounds_good__ConstPool__TABLE_h2697a45d_0
            [__Vtemp_21];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000010U & (vlSelfRef.__VcaseDecoderOut39 
                                 << 4U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut39 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut39 
                              >> 0x0000000bU));
    } else {
        if ((0x39U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffefU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | ((IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc) 
                      << 4U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] 
                = tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
        } else {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = (0x00000010U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4U] = 0U;
        }
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4U] = 0U;
    }
    if ((8U == (0x0000001fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                               >> 6U)))) {
        __Vtemp_22 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut1 = Vtb_sounds_good__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_22];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut1));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut1 
                              >> 0x00000015U));
    } else if ((0U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_23 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut2 = Vtb_sounds_good__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_23];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut2));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut2 
                              >> 0x00000015U));
    } else if ((9U == (0x0000001fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_24 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut3 = Vtb_sounds_good__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_24];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut3));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut3 
                              >> 0x00000015U));
    } else if ((1U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_25 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut4 = Vtb_sounds_good__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_25];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut4));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut4 
                              >> 0x00000015U));
    } else if ((0x0000000aU == (0x0000001fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_26 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut5 = Vtb_sounds_good__ConstPool__TABLE_h0088877f_0
            [__Vtemp_26];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut5));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut5 
                              >> 0x00000015U));
    } else if ((2U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                      >> 6U)))) {
        __Vtemp_27 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut6 = Vtb_sounds_good__ConstPool__TABLE_h0088877f_0
            [__Vtemp_27];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut6));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut6 
                              >> 0x00000015U));
    } else if ((0x00000010U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_28 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut7 = Vtb_sounds_good__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_28];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut7));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut7 
                              >> 0x00000015U));
    } else if ((0x00000011U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_29 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut8 = Vtb_sounds_good__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_29];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut8));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut8 
                              >> 0x00000015U));
    } else if ((0x00000012U == (0x00000037U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                               >> 6U)))) {
        __Vtemp_30 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut9 = Vtb_sounds_good__ConstPool__TABLE_h0088877f_0
            [__Vtemp_30];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut9));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut9 
                              >> 0x00000015U));
    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_31 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut10 = Vtb_sounds_good__ConstPool__TABLE_h38dd4db7_0
            [__Vtemp_31];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut10));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut10 
                              >> 0x00000015U));
    } else if ((5U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_32 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut11 = Vtb_sounds_good__ConstPool__TABLE_he5a4ad0d_0
            [__Vtemp_32];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut11));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut11 
                              >> 0x00000015U));
    } else if ((7U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_33 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut12 = Vtb_sounds_good__ConstPool__TABLE_he13c6a00_0
            [__Vtemp_33];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut12));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut12 
                              >> 0x00000015U));
    } else if ((6U == (7U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                             >> 6U)))) {
        __Vtemp_34 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut13 = Vtb_sounds_good__ConstPool__TABLE_h7e3d08c6_0
            [__Vtemp_34];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut13));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut13 
                              >> 0x00000015U));
    } else if ((0x20U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_35 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut14 = Vtb_sounds_good__ConstPool__TABLE_ha137bec4_0
            [__Vtemp_35];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut14));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut14 
                              >> 0x00000015U));
    } else if ((0x21U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_36 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut15 = Vtb_sounds_good__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_36];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut15));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut15 
                              >> 0x00000015U));
    } else if ((0x23U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_37 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut16 = Vtb_sounds_good__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_37];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut16));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut16 
                              >> 0x00000015U));
    } else if ((0x22U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_38 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut17 = Vtb_sounds_good__ConstPool__TABLE_haf34f21f_0
            [__Vtemp_38];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut17));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut17 
                              >> 0x00000015U));
    } else if ((0x30U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_39 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut18 = Vtb_sounds_good__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_39];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut18));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut18 
                              >> 0x00000015U));
    } else if ((0x31U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_40 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut19 = Vtb_sounds_good__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_40];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut19));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut19 
                              >> 0x00000015U));
    } else if ((0x32U == (0x0000003fU & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir) 
                                         >> 6U)))) {
        __Vtemp_41 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut20 = Vtb_sounds_good__ConstPool__TABLE_hccb66154_0
            [__Vtemp_41];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffeU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (1U & vlSelfRef.__VcaseDecoderOut20));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 0x0000000bU));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut20 
                              >> 0x00000015U));
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (1U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 = 0U;
    }
    if (((((((((0U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa)) 
               | (2U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
              | (3U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
             | (4U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
            | (5U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
           | (6U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
          | (7U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
         | (8U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_42 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut40 = Vtb_sounds_good__ConstPool__TABLE_h9cd354aa_0
                [__Vtemp_42];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut40 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut40 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut40 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_43 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut41 = Vtb_sounds_good__ConstPool__TABLE_h3e2181b8_0
                [__Vtemp_43];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut41 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut41 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut41 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_44 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut42 = Vtb_sounds_good__ConstPool__TABLE_hd2959be6_0
                [__Vtemp_44];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut42 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut42 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut42 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_45 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut43 = Vtb_sounds_good__ConstPool__TABLE_h13aa4342_0
                [__Vtemp_45];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut43 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut43 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut43 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_46 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut44 = Vtb_sounds_good__ConstPool__TABLE_h89c98bd1_0
                [__Vtemp_46];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut44 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut44 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut44 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_47 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut45 = Vtb_sounds_good__ConstPool__TABLE_h8c87e397_0
                [__Vtemp_47];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut45 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut45 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut45 
                                  >> 0x0000000bU));
        } else if ((7U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_48 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut46 = Vtb_sounds_good__ConstPool__TABLE_h076b5ef1_0
                [__Vtemp_48];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut46 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut46 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut46 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_49 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut47 = Vtb_sounds_good__ConstPool__TABLE_h5fe6edae_0
                [__Vtemp_49];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffdU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (2U & (vlSelfRef.__VcaseDecoderOut47 
                            << 1U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut47 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut47 
                                  >> 0x0000000bU));
        }
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (2U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1U] = 0U;
    }
    if (((((((((0U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa)) 
               | (1U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
              | (2U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
             | (3U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
            | (4U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
           | (5U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
          | (6U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) 
         | (7U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa)))) {
        if ((0U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_50 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut48 = Vtb_sounds_good__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_50];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut48 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut48 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut48 
                                  >> 0x0000000bU));
            __Vtemp_59 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut57 = Vtb_sounds_good__ConstPool__TABLE_hdb878943_0
                [__Vtemp_59];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut57 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut57 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut57 
                                  >> 0x0000000bU));
        } else if ((1U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_51 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut49 = Vtb_sounds_good__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_51];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut49 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut49 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut49 
                                  >> 0x0000000bU));
            __Vtemp_60 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut58 = Vtb_sounds_good__ConstPool__TABLE_hb9b985c2_0
                [__Vtemp_60];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut58 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut58 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut58 
                                  >> 0x0000000bU));
        } else if ((2U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_52 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut50 = Vtb_sounds_good__ConstPool__TABLE_hc118f1ba_0
                [__Vtemp_52];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut50 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut50 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut50 
                                  >> 0x0000000bU));
            __Vtemp_61 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut59 = Vtb_sounds_good__ConstPool__TABLE_hbc774d6a_0
                [__Vtemp_61];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut59 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut59 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut59 
                                  >> 0x0000000bU));
        } else if ((3U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_53 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut51 = Vtb_sounds_good__ConstPool__TABLE_h9f4d8f37_0
                [__Vtemp_53];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut51 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut51 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut51 
                                  >> 0x0000000bU));
            __Vtemp_62 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut60 = Vtb_sounds_good__ConstPool__TABLE_hc90e0332_0
                [__Vtemp_62];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut60 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut60 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut60 
                                  >> 0x0000000bU));
        } else if ((4U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_54 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut52 = Vtb_sounds_good__ConstPool__TABLE_h6c6b9226_0
                [__Vtemp_54];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut52 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut52 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut52 
                                  >> 0x0000000bU));
            __Vtemp_63 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut61 = Vtb_sounds_good__ConstPool__TABLE_h4d8af2d8_0
                [__Vtemp_63];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut61 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut61 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut61 
                                  >> 0x0000000bU));
        } else if ((5U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_55 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut53 = Vtb_sounds_good__ConstPool__TABLE_hc2184f42_0
                [__Vtemp_55];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut53 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut53 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut53 
                                  >> 0x0000000bU));
            __Vtemp_64 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut62 = Vtb_sounds_good__ConstPool__TABLE_h512d5c40_0
                [__Vtemp_64];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut62 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut62 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut62 
                                  >> 0x0000000bU));
        } else if ((6U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
            __Vtemp_56 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut54 = Vtb_sounds_good__ConstPool__TABLE_h68d6d722_0
                [__Vtemp_56];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut54 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut54 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut54 
                                  >> 0x0000000bU));
            __Vtemp_65 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut63 = Vtb_sounds_good__ConstPool__TABLE_hb4efbd7e_0
                [__Vtemp_65];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut63 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut63 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut63 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_57 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut55 = Vtb_sounds_good__ConstPool__TABLE_hcad3a1c4_0
                [__Vtemp_57];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (4U & (vlSelfRef.__VcaseDecoderOut55 
                            << 2U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut55 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut55 
                                  >> 0x0000000bU));
            __Vtemp_66 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut64 = Vtb_sounds_good__ConstPool__TABLE_h48910ea9_0
                [__Vtemp_66];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (8U & (vlSelfRef.__VcaseDecoderOut64 
                            << 3U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut64 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut64 
                                  >> 0x0000000bU));
        }
    } else if ((8U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__movEa))) {
        __Vtemp_58 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut56 = Vtb_sounds_good__ConstPool__TABLE_h2334f8f1_0
            [__Vtemp_58];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfffbU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (4U & (vlSelfRef.__VcaseDecoderOut56 
                        << 2U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut56 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut56 
                              >> 0x0000000bU));
        __Vtemp_67 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut65 = Vtb_sounds_good__ConstPool__TABLE_h6feb013a_0
            [__Vtemp_67];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfff7U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (8U & (vlSelfRef.__VcaseDecoderOut65 
                        << 3U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut65 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut65 
                              >> 0x0000000bU));
    } else {
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (4U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = (8U | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3U] = 0U;
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3U] = 0U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
        if ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
            if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
                __Vtemp_68 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut73 = Vtb_sounds_good__ConstPool__TABLE_h6c931bbf_0
                    [__Vtemp_68];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut73 
                                         << 5U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut73 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut73 
                                      >> 0x0000000bU));
                __Vtemp_76 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut81 = Vtb_sounds_good__ConstPool__TABLE_h3327f4a6_0
                    [__Vtemp_76];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut81 
                                         << 8U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut81 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut81 
                                      >> 0x0000000bU));
                __Vtemp_84 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut89 = Vtb_sounds_good__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_84];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut89 
                                         << 9U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut89 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut89 
                                      >> 0x0000000bU));
                __Vtemp_92 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut97 = Vtb_sounds_good__ConstPool__TABLE_he9046c6e_0
                    [__Vtemp_92];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut97 
                                         << 0x0000000bU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut97 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut97 
                                      >> 0x0000000bU));
                __Vtemp_100 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut105 = Vtb_sounds_good__ConstPool__TABLE_h6d5e945a_0
                    [__Vtemp_100];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut105 
                                         << 0x0000000cU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut105 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut105 
                                      >> 0x0000000bU));
                __Vtemp_108 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut113 = Vtb_sounds_good__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_108];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut113 
                                         << 0x0000000dU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut113 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut113 
                                      >> 0x0000000bU));
            } else {
                __Vtemp_69 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut72 = Vtb_sounds_good__ConstPool__TABLE_hea13bce5_0
                    [__Vtemp_69];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000020U & (vlSelfRef.__VcaseDecoderOut72 
                                         << 5U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut72 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut72 
                                      >> 0x0000000bU));
                __Vtemp_77 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut80 = Vtb_sounds_good__ConstPool__TABLE_hdb962c9f_0
                    [__Vtemp_77];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000100U & (vlSelfRef.__VcaseDecoderOut80 
                                         << 8U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut80 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut80 
                                      >> 0x0000000bU));
                __Vtemp_85 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut88 = Vtb_sounds_good__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_85];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000200U & (vlSelfRef.__VcaseDecoderOut88 
                                         << 9U)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut88 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut88 
                                      >> 0x0000000bU));
                __Vtemp_93 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut96 = Vtb_sounds_good__ConstPool__TABLE_hd7dd2a27_0
                    [__Vtemp_93];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00000800U & (vlSelfRef.__VcaseDecoderOut96 
                                         << 0x0000000bU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut96 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut96 
                                      >> 0x0000000bU));
                __Vtemp_101 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut104 = Vtb_sounds_good__ConstPool__TABLE_h4fe821f2_0
                    [__Vtemp_101];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00001000U & (vlSelfRef.__VcaseDecoderOut104 
                                         << 0x0000000cU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut104 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut104 
                                      >> 0x0000000bU));
                __Vtemp_109 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut112 = Vtb_sounds_good__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_109];
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                    = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                       | (0x00002000U & (vlSelfRef.__VcaseDecoderOut112 
                                         << 0x0000000dU)));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut112 
                                      >> 1U));
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                    = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut112 
                                      >> 0x0000000bU));
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
            __Vtemp_70 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut71 = Vtb_sounds_good__ConstPool__TABLE_h17c67228_0
                [__Vtemp_70];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut71 
                                     << 5U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut71 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut71 
                                  >> 0x0000000bU));
            __Vtemp_78 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut79 = Vtb_sounds_good__ConstPool__TABLE_h1bf8d03a_0
                [__Vtemp_78];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut79 
                                     << 8U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut79 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut79 
                                  >> 0x0000000bU));
            __Vtemp_86 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut87 = Vtb_sounds_good__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_86];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut87 
                                     << 9U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut87 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut87 
                                  >> 0x0000000bU));
            __Vtemp_94 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut95 = Vtb_sounds_good__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_94];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut95 
                                     << 0x0000000bU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut95 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut95 
                                  >> 0x0000000bU));
            __Vtemp_102 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut103 = Vtb_sounds_good__ConstPool__TABLE_h8b5ab276_0
                [__Vtemp_102];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut103 
                                     << 0x0000000cU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut103 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut103 
                                  >> 0x0000000bU));
            __Vtemp_110 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut111 = Vtb_sounds_good__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_110];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut111 
                                     << 0x0000000dU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut111 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut111 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_71 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut70 = Vtb_sounds_good__ConstPool__TABLE_h139a610e_0
                [__Vtemp_71];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut70 
                                     << 5U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut70 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut70 
                                  >> 0x0000000bU));
            __Vtemp_79 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut78 = Vtb_sounds_good__ConstPool__TABLE_h4474e570_0
                [__Vtemp_79];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut78 
                                     << 8U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut78 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut78 
                                  >> 0x0000000bU));
            __Vtemp_87 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut86 = Vtb_sounds_good__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_87];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut86 
                                     << 9U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut86 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut86 
                                  >> 0x0000000bU));
            __Vtemp_95 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut94 = Vtb_sounds_good__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_95];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut94 
                                     << 0x0000000bU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut94 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut94 
                                  >> 0x0000000bU));
            __Vtemp_103 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut102 = Vtb_sounds_good__ConstPool__TABLE_h4474e570_0
                [__Vtemp_103];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut102 
                                     << 0x0000000cU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut102 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut102 
                                  >> 0x0000000bU));
            __Vtemp_111 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut110 = Vtb_sounds_good__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_111];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut110 
                                     << 0x0000000dU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut110 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut110 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
        if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
            __Vtemp_72 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut69 = Vtb_sounds_good__ConstPool__TABLE_h6c931bbf_0
                [__Vtemp_72];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut69 
                                     << 5U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut69 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut69 
                                  >> 0x0000000bU));
            __Vtemp_80 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut77 = Vtb_sounds_good__ConstPool__TABLE_h1e53f1ae_0
                [__Vtemp_80];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut77 
                                     << 8U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut77 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut77 
                                  >> 0x0000000bU));
            __Vtemp_88 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut85 = Vtb_sounds_good__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_88];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut85 
                                     << 9U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut85 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut85 
                                  >> 0x0000000bU));
            __Vtemp_96 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut93 = Vtb_sounds_good__ConstPool__TABLE_hb343e8cc_0
                [__Vtemp_96];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut93 
                                     << 0x0000000bU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut93 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut93 
                                  >> 0x0000000bU));
            __Vtemp_104 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut101 = Vtb_sounds_good__ConstPool__TABLE_h6d5e945a_0
                [__Vtemp_104];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut101 
                                     << 0x0000000cU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut101 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut101 
                                  >> 0x0000000bU));
            __Vtemp_112 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut109 = Vtb_sounds_good__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_112];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut109 
                                     << 0x0000000dU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut109 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut109 
                                  >> 0x0000000bU));
        } else {
            __Vtemp_73 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut68 = Vtb_sounds_good__ConstPool__TABLE_hea13bce5_0
                [__Vtemp_73];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000020U & (vlSelfRef.__VcaseDecoderOut68 
                                     << 5U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut68 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut68 
                                  >> 0x0000000bU));
            __Vtemp_81 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut76 = Vtb_sounds_good__ConstPool__TABLE_h5679d896_0
                [__Vtemp_81];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000100U & (vlSelfRef.__VcaseDecoderOut76 
                                     << 8U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut76 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut76 
                                  >> 0x0000000bU));
            __Vtemp_89 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut84 = Vtb_sounds_good__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_89];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000200U & (vlSelfRef.__VcaseDecoderOut84 
                                     << 9U)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut84 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut84 
                                  >> 0x0000000bU));
            __Vtemp_97 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut92 = Vtb_sounds_good__ConstPool__TABLE_he9046c6e_0
                [__Vtemp_97];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00000800U & (vlSelfRef.__VcaseDecoderOut92 
                                     << 0x0000000bU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut92 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut92 
                                  >> 0x0000000bU));
            __Vtemp_105 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut100 = Vtb_sounds_good__ConstPool__TABLE_h5679d896_0
                [__Vtemp_105];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00001000U & (vlSelfRef.__VcaseDecoderOut100 
                                     << 0x0000000cU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut100 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut100 
                                  >> 0x0000000bU));
            __Vtemp_113 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut108 = Vtb_sounds_good__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_113];
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
                = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
                   | (0x00002000U & (vlSelfRef.__VcaseDecoderOut108 
                                     << 0x0000000dU)));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut108 
                                  >> 1U));
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
                = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut108 
                                  >> 0x0000000bU));
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ir))) {
        __Vtemp_74 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut67 = Vtb_sounds_good__ConstPool__TABLE_h17c67228_0
            [__Vtemp_74];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut67 
                                 << 5U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut67 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut67 
                              >> 0x0000000bU));
        __Vtemp_82 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut75 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_82];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut75 
                                 << 8U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut75 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut75 
                              >> 0x0000000bU));
        __Vtemp_90 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut83 = Vtb_sounds_good__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_90];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut83 
                                 << 9U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut83 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut83 
                              >> 0x0000000bU));
        __Vtemp_98 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut91 = Vtb_sounds_good__ConstPool__TABLE_h4971b97e_0
            [__Vtemp_98];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut91 
                                 << 0x0000000bU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut91 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut91 
                              >> 0x0000000bU));
        __Vtemp_106 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut99 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_106];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut99 
                                 << 0x0000000cU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut99 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut99 
                              >> 0x0000000bU));
        __Vtemp_114 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut107 = Vtb_sounds_good__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_114];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut107 
                                 << 0x0000000dU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut107 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut107 
                              >> 0x0000000bU));
    } else {
        __Vtemp_75 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut66 = Vtb_sounds_good__ConstPool__TABLE_h139a610e_0
            [__Vtemp_75];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xffdfU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000020U & (vlSelfRef.__VcaseDecoderOut66 
                                 << 5U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut66 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut66 
                              >> 0x0000000bU));
        __Vtemp_83 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut74 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_83];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfeffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000100U & (vlSelfRef.__VcaseDecoderOut74 
                                 << 8U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut74 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut74 
                              >> 0x0000000bU));
        __Vtemp_91 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut82 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_91];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xfdffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000200U & (vlSelfRef.__VcaseDecoderOut82 
                                 << 9U)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut82 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut82 
                              >> 0x0000000bU));
        __Vtemp_99 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut90 = Vtb_sounds_good__ConstPool__TABLE_hdc124375_0
            [__Vtemp_99];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00000800U & (vlSelfRef.__VcaseDecoderOut90 
                                 << 0x0000000bU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut90 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut90 
                              >> 0x0000000bU));
        __Vtemp_107 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut98 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_107];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xefffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00001000U & (vlSelfRef.__VcaseDecoderOut98 
                                 << 0x0000000cU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut98 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut98 
                              >> 0x0000000bU));
        __Vtemp_115 = VL_MATCHMASKED_I(32, (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_sounds_good__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut106 = Vtb_sounds_good__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_115];
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
            = ((0xdfffU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
               | (0x00002000U & (vlSelfRef.__VcaseDecoderOut106 
                                 << 0x0000000dU)));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut106 
                              >> 1U));
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13U] 
            = (0x000003ffU & (vlSelfRef.__VcaseDecoderOut106 
                              >> 0x0000000bU));
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod.__PVT__isWrite 
        = (0U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nDecoder__DOT__dobCtrl));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__rstUrom 
        = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
           .__PVT__enPhi1 & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enErrClk));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__enT1 
        = ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Clks
            .__PVT__enPhi1 & (4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__tState)) 
           & (~ (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__wClk)));
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
            if (((2U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0)) 
                 || (0U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0)))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 3U;
            } else if ((1U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 1U;
            } else if ((3U == (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ms0))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__c0c1 = 2U;
            }
        } else {
            __Vtemp_116 = VL_MATCHMASKED_I(32, ((8U 
                                                 & ((~ 
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
                   [__Vtemp_116] : ((9U == (0x0000001fU 
                                            & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                               >> 2U)))
                                     ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                         ? 3U : 1U)
                                     : ((0x19U == (0x0000001fU 
                                                   & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                      >> 2U)))
                                         ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                             ? 3U : 2U)
                                         : ((0x0cU 
                                             == (0x0000001fU 
                                                 & (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__microLatch 
                                                    >> 2U)))
                                             ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__dcr4)
                                                 ? 1U
                                                 : 3U)
                                             : ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__dcr4)
                                                 ? 2U
                                                 : 3U)))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3) 
                                                | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rAS) 
                                                   | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rLDS) 
                                                      & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__rUDS))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__isPcRel 
        = (IData)(((0x003aU == (0x003eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (~ (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird) 
                          >> 5U) & (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Irdecod.__PVT__ryIsDt 
        = (IData)(((0x0038U == (0x003aU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Ird))) 
                   & (~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift))));
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
                          ? (~ (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__isRegShift))
                          : (IData)(tb_sounds_good__DOT__dut__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg)))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp 
        = ((6U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(__VdfgRegularize_hebeb780c_0_12)
            : (IData)(__VdfgRegularize_hebeb780c_0_6));
    __VdfgRegularize_hebeb780c_0_10 = (6U & (- (IData)(
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
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_rom 
        = (1U & (~ ((vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob 
                     >> 0x00000012U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_ram 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
           & (0x00070000U == (0x00070000U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__sel_pia 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
           & (0x00060000U == (0x00070000U & vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__aob)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x0000001fU 
                                                & (((IData)(__VdfgRegularize_hebeb780c_0_6) 
                                                    >> 4U) 
                                                   - (IData)(__VdfgRegularize_hebeb780c_0_10)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (0x0000001fU 
                                                & (((IData)(__VdfgRegularize_hebeb780c_0_12) 
                                                    >> 4U) 
                                                   + (IData)(__VdfgRegularize_hebeb780c_0_10)));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib 
        = ((6U != (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__nma 
        = ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__A0Err)
            ? ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__a0Rst)
                ? 2U : (((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcRst) 
                         | ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                            | (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr)))
                         ? 1U : 3U)) : (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__sequencer__DOT__uNma));
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
                                                ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
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
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
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
        vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
            = (vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
               .__PVT__aluFinish ? ((0x00000080U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                     ? 0x0fU : 0x0cU)
                : ((0U != (3U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                 >> 0x0000000dU))) ? 4U
                    : 0x0fU));
    } else {
        if ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
             .__PVT__aluColumn)) {
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 5U;
        } else if ((1U & ((0U != (0x039eU & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) 
                          | ((1U & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                    >> 5U)) || (1U 
                                                & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
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
            } else if ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 3U;
            } else if ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 6U;
            } else if ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                        .__PVT__aluColumn)) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = 0x11U;
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
        if (((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
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
                                   >> 0x0aU))) || (1U 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
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
                                   >> 0x0dU))) || (1U 
                                                   & ((IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row) 
                                                      >> 0x0eU)))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0x0fU;
            } else if ((0x00008000U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))) {
                vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = 0U;
            }
        } else {
            __Vtemp_1 = VL_MATCHMASKED_I(16, (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row), Vtb_sounds_good__ConstPool__CONST_h1b96ab98_0);
            vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask 
                = ((4U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__aluColumn) ? Vtb_sounds_good__ConstPool__TABLE_ha56e5a24_0
                   [__Vtemp_1] : ((5U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                                   .__PVT__aluColumn)
                                   ? ((2U & (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))
                                       ? 0x0fU : 0U)
                                   : 0U));
        }
    }
    vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__dobInput 
        = ((2U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
            .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Abd)
            : ((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__Dbd)
                : ((3U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__Nanod
                    .__PVT__dobCtrl) ? (IData)(vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)
                    : 0U)));
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
    __VdfgRegularize_hebeb780c_0_1 = (((((1U == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                         & ((IData)(vlSelfRef.dbg_as) 
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
                                                     : __VdfgRegularize_hebeb780c_0_1)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_sounds_good__DOT__dut__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __VdfgRegularize_hebeb780c_0_1
                                                     : 1U)))))));
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
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VstlTriggered[0U]))) {
                Vtb_sounds_good___024root___act_sequent__TOP__0(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__1
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
                    // Inlined CFunc: _stl_sequent__TOP__2
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
    vlSelf->dbg_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10106814393097140953ull);
    vlSelf->dbg_as = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1221284467513802497ull);
    vlSelf->dbg_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8962888031690699103ull);
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
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
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
