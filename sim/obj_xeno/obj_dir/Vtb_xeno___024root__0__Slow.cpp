// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xeno.h for the primary calling header

#include "Vtb_xeno__pch.h"

VL_ATTR_COLD void Vtb_xeno___024root___eval_static(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_static\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
        CData/*0:0*/ __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
        vlSelfRef.tb_xeno__DOT__ce_div = 0U;
        vlSelfRef.tb_xeno__DOT__acc = 0U;
        vlSelfRef.tb_xeno__DOT__phi_tog = 0U;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rtemp = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11367959201720701791ull);
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__rm = 0;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__sm = 0;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__dm = 0;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__Vstatic__tsm = 0;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 466385232438079143ull);
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg = 0;
        __Vinline_0__eval_static__TOP_tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk2__DOT__cur = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9707289834223702838ull);
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6700968375829129361ull);
        vlSelfRef.tb_xeno__DOT__video__DOT__unnamedblk3__DOT__sp_norm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17738947566865044509ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__in0__0 = vlSelfRef.in0;
    vlSelfRef.__Vtrigprevexpr___TOP__in1__0 = vlSelfRef.in1;
    vlSelfRef.__Vtrigprevexpr___TOP__dsw__0 = vlSelfRef.dsw;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr_h0102208c__1 = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
        .__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 
        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk;
}

VL_ATTR_COLD void Vtb_xeno___024root___eval_initial(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_initial\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[6U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[7U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[10U] = 0U;
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[15U] = 0U;
        VL_READMEM_N(true, 16, 131072, 0, "xeno_main.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__rom)
                     , 0, ~0ULL);
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v0 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v0 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v1 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v1 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v2 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v2 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v3 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v3 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v4 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v4 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v5 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v5 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v6 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v6 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v7 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v7 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v8 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v8 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v9 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v9 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v10 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v10 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v11 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v11 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v12 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v12 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v13 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v13 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v14 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v14 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v15 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v15 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v16 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v16 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v17 = 1U;
        vlSelfRef.__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v17 = 1U;
        VL_READMEM_N(false, 17, 1024, 0, "microrom.mem"s
                     ,  &(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uRom__DOT__uRam)
                     , 0, ~0ULL);
        VL_READMEM_N(false, 68, 336, 0, "nanorom.mem"s
                     ,  &(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoRom__DOT__nRam)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "bg_rom.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__video__DOT__bg_rom)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "spr_rom0.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom0)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "spr_rom1.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom1)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "spr_rom2.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom2)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 16, 32768, 0, "spr_rom3.hex"s
                     ,  &(vlSelfRef.tb_xeno__DOT__video__DOT__spr_rom3)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_xeno___024root___eval_final(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_final\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_xeno___024root___eval_phase__stl(Vtb_xeno___024root* vlSelf);

VL_ATTR_COLD void Vtb_xeno___024root___eval_settle(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_settle\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_xeno___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb_xeno.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_xeno___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_xeno___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_xeno___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_xeno.main_board.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_xeno.main_board.cpu.Irdecod)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_xeno___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<SData/*15:0*/, 16> Vtb_xeno__ConstPool__TABLE_he204aa36_0;
extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h79f0020d_0;
extern const VlUnpacked<CData/*0:0*/, 10> Vtb_xeno__ConstPool__TABLE_h163a3758_0;
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
extern const VlWide<18>/*575:0*/ Vtb_xeno__ConstPool__CONST_h2ec8fa17_0;
extern const VlUnpacked<CData/*1:0*/, 9> Vtb_xeno__ConstPool__TABLE_h4bf1d606_0;

VL_ATTR_COLD void Vtb_xeno___024root___stl_sequent__TOP__0(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___stl_sequent__TOP__0\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock = 0;
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
    CData/*1:0*/ tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0;
    tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0 = 0;
    CData/*0:0*/ tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src;
    tb_xeno__DOT__main_board__DOT__ptm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src = 0;
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
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    IData/*31:0*/ __Vtemp_1;
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
    IData/*31:0*/ __Vtemp_117;
    // Body
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset 
        = (1U & vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U]);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
           & (0x00000010U != (0x00000012U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn 
        = (IData)((0x00000010U == (0x00000012U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr 
        = (1U & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte)) 
                 & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob));
    vlSelfRef.tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)
                           ? (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob)
                           : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob) 
                              >> 8U)));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplStable 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl) 
           == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rIpl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iplComp 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl) 
           > (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI));
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_code = (
                                                   (0x00000600U 
                                                    & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                                       << 3U)) 
                                                   | ((0x00000100U 
                                                       & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_flags) 
                                                          << 5U)) 
                                                      | (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_code_lo)));
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
    vlSelfRef.tb_xeno__DOT__video__DOT__sp_xpos = (0x000003ffU 
                                                   & ((((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_x) 
                                                        << 1U) 
                                                       - (IData)(4U)) 
                                                      + (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_px)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_line) 
                                                    - 
                                                    (0x000003ffU 
                                                     & (((IData)(0x00f1U) 
                                                         - (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__sp_y)) 
                                                        << 1U))));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = ((0xff3fU & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll)) 
           | (0x00000080U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                             >> 1U)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00000400U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll 
        = (0x00008000U | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__bgBlock 
        = ((6U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
           | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS) 
              & (2U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in 
        = ((((IData)(vlSelfRef.tb_xeno__DOT__hsync_pulse) 
             & (IData)(vlSelfRef.tb_xeno__DOT__video__DOT__field)) 
            << 2U) | (IData)(vlSelfRef.tb_xeno__DOT__vsync30));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__wr_q) 
                                                    | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((2U 
                                                 & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS))));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe) 
           & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_irq 
        = (0U != ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__flag) 
                  & ((4U & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[2U] 
                             >> 6U) << 2U)) | ((2U 
                                                & ((vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[1U] 
                                                    >> 6U) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[0U] 
                                                     >> 6U))))));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl 
        = ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                  >> 5U)) | (1U & (~ (0U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch)))));
    tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ms0 
        = ((2U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                  >> 7U)) | (1U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__alue)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__clk 
        = vlSelfRef.clk;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__extReset 
        = vlSelfRef.reset;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__pwrUp 
        = vlSelfRef.reset;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi1 
        = vlSelfRef.tb_xeno__DOT__phi1;
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi2 
        = vlSelfRef.tb_xeno__DOT__phi2;
    __VdfgRegularize_hebeb780c_0_13 = (6U & (- (IData)(
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__psw 
        = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT) 
            << 0x0000000fU) | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS) 
                                << 0x0000000dU) | (
                                                   ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords 
        = (IData)((0U != (0x0082U & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row))));
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
    __VdfgRegularize_hebeb780c_0_10 = (1U & (Vtb_xeno__ConstPool__TABLE_he204aa36_0
                                             [(0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                                                  >> 0x0000000cU))] 
                                             >> 0x0000000eU));
    __Vtemp_1 = VL_MATCHMASKED_I(32, (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper), Vtb_xeno__ConstPool__CONST_h79f0020d_0);
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight 
        = Vtb_xeno__ConstPool__TABLE_h163a3758_0[__Vtemp_1];
    tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__movEa 
        = (0x0000000fU & ((7U == (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                        >> 6U))) ? 
                          (0xcccba987U >> (0x0000001cU 
                                           & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                              >> 7U)))
                           : (7U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                                    >> 6U))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__vpa_n 
        = (1U & (~ ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS)) 
                    & (7U == (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__bus_cycle 
        = (1U & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS)) 
                 & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS)) 
                    | (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS)))));
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
        __Vtemp_3 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he0dc4311_0);
        vlSelfRef.__VcaseDecoderOut0 = Vtb_xeno__ConstPool__TABLE_h911422d5_0
            [__Vtemp_3];
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl 
        = ((2U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                  >> 0x00000017U)) | (1U & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                            >> 0x00000015U)));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iBusErr) 
           | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk 
        = (1U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr) 
                 | (((5U != vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                     & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg)) 
                    | ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI)) 
                       | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Err6591)))));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
           .__PVT__extReset | (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__addrOeDelay) 
                                & (~ ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI) 
                                      | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__BeiDelay)))) 
                               & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai)));
    __VdfgRegularize_hebeb780c_0_8 = (0x000001ffU & 
                                      ((0x000000ffU 
                                        & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch)) 
                                       - (IData)(__VdfgRegularize_hebeb780c_0_13)));
    __VdfgRegularize_hebeb780c_0_14 = (0x000001ffU 
                                       & ((IData)(__VdfgRegularize_hebeb780c_0_13) 
                                          + (0x000000ffU 
                                             & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch))));
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
            : ((1U & ((IData)(__VdfgRegularize_hebeb780c_0_10) 
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
    tb_xeno__DOT__main_board__DOT__cpu__DOT__irdDecode__DOT__isRegShift 
        = ((IData)(__VdfgRegularize_hebeb780c_0_10) 
           & (3U != (3U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird) 
                           >> 6U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__vpa_n) 
                                                & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__bus_cycle));
    if ((0U == (0x00000027U & ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir) 
                               >> 6U)))) {
        __Vtemp_4 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut21 = Vtb_xeno__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_4];
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
        __Vtemp_5 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut22 = Vtb_xeno__ConstPool__TABLE_h7dd77d9e_0
            [__Vtemp_5];
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
        __Vtemp_6 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut23 = Vtb_xeno__ConstPool__TABLE_hbae207b6_0
            [__Vtemp_6];
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
        __Vtemp_7 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut24 = Vtb_xeno__ConstPool__TABLE_h68e348e7_0
            [__Vtemp_7];
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
        __Vtemp_8 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut25 = Vtb_xeno__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_8];
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
        __Vtemp_9 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut26 = Vtb_xeno__ConstPool__TABLE_h9e077beb_0
            [__Vtemp_9];
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
        __Vtemp_10 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut27 = Vtb_xeno__ConstPool__TABLE_h9856367f_0
            [__Vtemp_10];
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
        __Vtemp_11 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut28 = Vtb_xeno__ConstPool__TABLE_h32fa7448_0
            [__Vtemp_11];
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
        __Vtemp_12 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut29 = Vtb_xeno__ConstPool__TABLE_h43eeafa8_0
            [__Vtemp_12];
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
        __Vtemp_13 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut30 = Vtb_xeno__ConstPool__TABLE_hac4b9c1a_0
            [__Vtemp_13];
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
        __Vtemp_14 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut31 = Vtb_xeno__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_14];
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
        __Vtemp_15 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut32 = Vtb_xeno__ConstPool__TABLE_hb2f687d9_0
            [__Vtemp_15];
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
        __Vtemp_16 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut33 = Vtb_xeno__ConstPool__TABLE_hbe127729_0
            [__Vtemp_16];
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
        __Vtemp_17 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut34 = Vtb_xeno__ConstPool__TABLE_h7b3264b8_0
            [__Vtemp_17];
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
        __Vtemp_18 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut35 = Vtb_xeno__ConstPool__TABLE_h6d6f8a73_0
            [__Vtemp_18];
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
        __Vtemp_19 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut36 = Vtb_xeno__ConstPool__TABLE_hd082d1c8_0
            [__Vtemp_19];
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
        __Vtemp_20 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut37 = Vtb_xeno__ConstPool__TABLE_h0f86901e_0
            [__Vtemp_20];
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
        __Vtemp_21 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut38 = Vtb_xeno__ConstPool__TABLE_hfef82f04_0
            [__Vtemp_21];
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
        __Vtemp_22 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut39 = Vtb_xeno__ConstPool__TABLE_h2697a45d_0
            [__Vtemp_22];
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
        __Vtemp_23 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut1 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_23];
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
        __Vtemp_24 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut2 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_24];
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
        __Vtemp_25 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut3 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_25];
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
        __Vtemp_26 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut4 = Vtb_xeno__ConstPool__TABLE_h8df97df5_0
            [__Vtemp_26];
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
        __Vtemp_27 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut5 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_27];
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
        __Vtemp_28 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut6 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_28];
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
        __Vtemp_29 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut7 = Vtb_xeno__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_29];
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
        __Vtemp_30 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut8 = Vtb_xeno__ConstPool__TABLE_hcd9cce84_0
            [__Vtemp_30];
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
        __Vtemp_31 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut9 = Vtb_xeno__ConstPool__TABLE_h0088877f_0
            [__Vtemp_31];
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
        __Vtemp_32 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut10 = Vtb_xeno__ConstPool__TABLE_h38dd4db7_0
            [__Vtemp_32];
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
        __Vtemp_33 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut11 = Vtb_xeno__ConstPool__TABLE_he5a4ad0d_0
            [__Vtemp_33];
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
        __Vtemp_34 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut12 = Vtb_xeno__ConstPool__TABLE_he13c6a00_0
            [__Vtemp_34];
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
        __Vtemp_35 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut13 = Vtb_xeno__ConstPool__TABLE_h7e3d08c6_0
            [__Vtemp_35];
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
        __Vtemp_36 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut14 = Vtb_xeno__ConstPool__TABLE_ha137bec4_0
            [__Vtemp_36];
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
        __Vtemp_37 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut15 = Vtb_xeno__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_37];
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
        __Vtemp_38 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut16 = Vtb_xeno__ConstPool__TABLE_hacf0eeca_0
            [__Vtemp_38];
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
        __Vtemp_39 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut17 = Vtb_xeno__ConstPool__TABLE_haf34f21f_0
            [__Vtemp_39];
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
        __Vtemp_40 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut18 = Vtb_xeno__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_40];
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
        __Vtemp_41 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut19 = Vtb_xeno__ConstPool__TABLE_ha4b3081e_0
            [__Vtemp_41];
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
        __Vtemp_42 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut20 = Vtb_xeno__ConstPool__TABLE_hccb66154_0
            [__Vtemp_42];
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
            __Vtemp_43 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut40 = Vtb_xeno__ConstPool__TABLE_h9cd354aa_0
                [__Vtemp_43];
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
            __Vtemp_44 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut41 = Vtb_xeno__ConstPool__TABLE_h3e2181b8_0
                [__Vtemp_44];
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
            __Vtemp_45 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut42 = Vtb_xeno__ConstPool__TABLE_hd2959be6_0
                [__Vtemp_45];
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
            __Vtemp_46 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut43 = Vtb_xeno__ConstPool__TABLE_h13aa4342_0
                [__Vtemp_46];
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
            __Vtemp_47 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut44 = Vtb_xeno__ConstPool__TABLE_h89c98bd1_0
                [__Vtemp_47];
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
            __Vtemp_48 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut45 = Vtb_xeno__ConstPool__TABLE_h8c87e397_0
                [__Vtemp_48];
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
            __Vtemp_49 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut46 = Vtb_xeno__ConstPool__TABLE_h076b5ef1_0
                [__Vtemp_49];
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
            __Vtemp_50 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut47 = Vtb_xeno__ConstPool__TABLE_h5fe6edae_0
                [__Vtemp_50];
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
            __Vtemp_51 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut48 = Vtb_xeno__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_51];
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
            __Vtemp_60 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut57 = Vtb_xeno__ConstPool__TABLE_hdb878943_0
                [__Vtemp_60];
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
            __Vtemp_52 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut49 = Vtb_xeno__ConstPool__TABLE_h057bcb4f_0
                [__Vtemp_52];
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
            __Vtemp_61 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut58 = Vtb_xeno__ConstPool__TABLE_hb9b985c2_0
                [__Vtemp_61];
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
            __Vtemp_53 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut50 = Vtb_xeno__ConstPool__TABLE_hc118f1ba_0
                [__Vtemp_53];
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
            __Vtemp_62 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut59 = Vtb_xeno__ConstPool__TABLE_hbc774d6a_0
                [__Vtemp_62];
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
            __Vtemp_54 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut51 = Vtb_xeno__ConstPool__TABLE_h9f4d8f37_0
                [__Vtemp_54];
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
            __Vtemp_63 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut60 = Vtb_xeno__ConstPool__TABLE_hc90e0332_0
                [__Vtemp_63];
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
            __Vtemp_55 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut52 = Vtb_xeno__ConstPool__TABLE_h6c6b9226_0
                [__Vtemp_55];
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
            __Vtemp_64 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut61 = Vtb_xeno__ConstPool__TABLE_h4d8af2d8_0
                [__Vtemp_64];
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
            __Vtemp_56 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut53 = Vtb_xeno__ConstPool__TABLE_hc2184f42_0
                [__Vtemp_56];
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
            __Vtemp_65 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut62 = Vtb_xeno__ConstPool__TABLE_h512d5c40_0
                [__Vtemp_65];
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
            __Vtemp_57 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut54 = Vtb_xeno__ConstPool__TABLE_h68d6d722_0
                [__Vtemp_57];
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
            __Vtemp_66 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut63 = Vtb_xeno__ConstPool__TABLE_hb4efbd7e_0
                [__Vtemp_66];
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
            __Vtemp_58 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut55 = Vtb_xeno__ConstPool__TABLE_hcad3a1c4_0
                [__Vtemp_58];
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
            __Vtemp_67 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut64 = Vtb_xeno__ConstPool__TABLE_h48910ea9_0
                [__Vtemp_67];
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
        __Vtemp_59 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut56 = Vtb_xeno__ConstPool__TABLE_h2334f8f1_0
            [__Vtemp_59];
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
        __Vtemp_68 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut65 = Vtb_xeno__ConstPool__TABLE_h6feb013a_0
            [__Vtemp_68];
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
                __Vtemp_69 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut73 = Vtb_xeno__ConstPool__TABLE_h6c931bbf_0
                    [__Vtemp_69];
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
                __Vtemp_77 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut81 = Vtb_xeno__ConstPool__TABLE_h3327f4a6_0
                    [__Vtemp_77];
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
                __Vtemp_85 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut89 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_85];
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
                __Vtemp_93 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut97 = Vtb_xeno__ConstPool__TABLE_he9046c6e_0
                    [__Vtemp_93];
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
                __Vtemp_101 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut105 = Vtb_xeno__ConstPool__TABLE_h6d5e945a_0
                    [__Vtemp_101];
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
                __Vtemp_109 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut113 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                    [__Vtemp_109];
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
                __Vtemp_70 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
                vlSelfRef.__VcaseDecoderOut72 = Vtb_xeno__ConstPool__TABLE_hea13bce5_0
                    [__Vtemp_70];
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
                __Vtemp_78 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut80 = Vtb_xeno__ConstPool__TABLE_hdb962c9f_0
                    [__Vtemp_78];
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
                __Vtemp_86 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut88 = Vtb_xeno__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_86];
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
                __Vtemp_94 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut96 = Vtb_xeno__ConstPool__TABLE_hd7dd2a27_0
                    [__Vtemp_94];
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
                __Vtemp_102 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut104 = Vtb_xeno__ConstPool__TABLE_h4fe821f2_0
                    [__Vtemp_102];
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
                __Vtemp_110 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
                vlSelfRef.__VcaseDecoderOut112 = Vtb_xeno__ConstPool__TABLE_h4df1601b_0
                    [__Vtemp_110];
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
            __Vtemp_71 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut71 = Vtb_xeno__ConstPool__TABLE_h17c67228_0
                [__Vtemp_71];
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
            __Vtemp_79 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut79 = Vtb_xeno__ConstPool__TABLE_h1bf8d03a_0
                [__Vtemp_79];
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
            __Vtemp_87 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut87 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_87];
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
            __Vtemp_95 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut95 = Vtb_xeno__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_95];
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
            __Vtemp_103 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut103 = Vtb_xeno__ConstPool__TABLE_h8b5ab276_0
                [__Vtemp_103];
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
            __Vtemp_111 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut111 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_111];
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
            __Vtemp_72 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut70 = Vtb_xeno__ConstPool__TABLE_h139a610e_0
                [__Vtemp_72];
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
            __Vtemp_80 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut78 = Vtb_xeno__ConstPool__TABLE_h4474e570_0
                [__Vtemp_80];
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
            __Vtemp_88 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut86 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_88];
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
            __Vtemp_96 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut94 = Vtb_xeno__ConstPool__TABLE_hb29b6323_0
                [__Vtemp_96];
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
            __Vtemp_104 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut102 = Vtb_xeno__ConstPool__TABLE_h4474e570_0
                [__Vtemp_104];
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
            __Vtemp_112 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut110 = Vtb_xeno__ConstPool__TABLE_hfb8ce208_0
                [__Vtemp_112];
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
            __Vtemp_73 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut69 = Vtb_xeno__ConstPool__TABLE_h6c931bbf_0
                [__Vtemp_73];
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
            __Vtemp_81 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut77 = Vtb_xeno__ConstPool__TABLE_h1e53f1ae_0
                [__Vtemp_81];
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
            __Vtemp_89 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut85 = Vtb_xeno__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_89];
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
            __Vtemp_97 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut93 = Vtb_xeno__ConstPool__TABLE_hb343e8cc_0
                [__Vtemp_97];
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
            __Vtemp_105 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut101 = Vtb_xeno__ConstPool__TABLE_h6d5e945a_0
                [__Vtemp_105];
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
            __Vtemp_113 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut109 = Vtb_xeno__ConstPool__TABLE_hadebe4a9_0
                [__Vtemp_113];
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
            __Vtemp_74 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
            vlSelfRef.__VcaseDecoderOut68 = Vtb_xeno__ConstPool__TABLE_hea13bce5_0
                [__Vtemp_74];
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
            __Vtemp_82 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut76 = Vtb_xeno__ConstPool__TABLE_h5679d896_0
                [__Vtemp_82];
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
            __Vtemp_90 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut84 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_90];
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
            __Vtemp_98 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut92 = Vtb_xeno__ConstPool__TABLE_he9046c6e_0
                [__Vtemp_98];
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
            __Vtemp_106 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut100 = Vtb_xeno__ConstPool__TABLE_h5679d896_0
                [__Vtemp_106];
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
            __Vtemp_114 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
            vlSelfRef.__VcaseDecoderOut108 = Vtb_xeno__ConstPool__TABLE_haf48ddb4_0
                [__Vtemp_114];
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
        __Vtemp_75 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut67 = Vtb_xeno__ConstPool__TABLE_h17c67228_0
            [__Vtemp_75];
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
        __Vtemp_83 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut75 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_83];
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
        __Vtemp_91 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut83 = Vtb_xeno__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_91];
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
        __Vtemp_99 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut91 = Vtb_xeno__ConstPool__TABLE_h4971b97e_0
            [__Vtemp_99];
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
        __Vtemp_107 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut99 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_107];
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
        __Vtemp_115 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut107 = Vtb_xeno__ConstPool__TABLE_heae1ca30_0
            [__Vtemp_115];
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
        __Vtemp_76 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_h0c7e2d64_0);
        vlSelfRef.__VcaseDecoderOut66 = Vtb_xeno__ConstPool__TABLE_h139a610e_0
            [__Vtemp_76];
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
        __Vtemp_84 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut74 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_84];
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
        __Vtemp_92 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut82 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_92];
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
        __Vtemp_100 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut90 = Vtb_xeno__ConstPool__TABLE_hdc124375_0
            [__Vtemp_100];
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
        __Vtemp_108 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut98 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_108];
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
        __Vtemp_116 = VL_MATCHMASKED_I(32, (IData)(tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__eaCol), Vtb_xeno__ConstPool__CONST_he4e93662_0);
        vlSelfRef.__VcaseDecoderOut106 = Vtb_xeno__ConstPool__TABLE_hed5970b0_0
            [__Vtemp_116];
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__isWrite 
        = (0U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__rstUrom 
        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
           .__PVT__enPhi1 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1 
        = ((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks
            .__PVT__enPhi1 & (4U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__tState)) 
           & (~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk)));
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
            __Vtemp_117 = VL_MATCHMASKED_I(32, ((8U 
                                                 & ((~ 
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
                   [__Vtemp_117] : ((9U == (0x0000001fU 
                                            & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                               >> 2U)))
                                     ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                         ? 3U : 1U)
                                     : ((0x19U == (0x0000001fU 
                                                   & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                      >> 2U)))
                                         ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest)
                                             ? 3U : 2U)
                                         : ((0x0cU 
                                             == (0x0000001fU 
                                                 & (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch 
                                                    >> 2U)))
                                             ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4)
                                                 ? 1U
                                                 : 3U)
                                             : ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4)
                                                 ? 2U
                                                 : 3U)))));
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_pal 
        = (IData)(((0x00090000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_wdt 
        = (IData)(((0x000b0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_rom 
        = (IData)(((0U == (0x00fc0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ram 
        = (IData)(((0x00060000U == (0x000fc000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ctl 
        = (IData)(((0x000c0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in0 
        = (IData)(((0x000d0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_in1 
        = (IData)(((0x000e0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_dsw 
        = (IData)(((0x000f0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm 
        = (IData)(((0x000a0000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram 
        = (IData)(((0x00070000U == (0x000fe000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr 
        = (IData)(((0x00080000U == (0x000f0000U & vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp 
        = ((6U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(__VdfgRegularize_hebeb780c_0_14)
            : (IData)(__VdfgRegularize_hebeb780c_0_8));
    __VdfgRegularize_hebeb780c_0_12 = (6U & (- (IData)(
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
    vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_stb 
        = ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_cs_q)) 
           & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_ptm));
    vlSelfRef.tb_xeno__DOT__vram_we = ((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                                                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_vram)))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.tb_xeno__DOT__sprram_we = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                         & (- (IData)(
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                                                       & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_spr)))));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din = 0xffffU;
    if (vlSelfRef.tb_xeno__DOT__main_board__DOT__sel_rom) {
        vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu_din 
            = vlSelfRef.tb_xeno__DOT__rom_q;
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
                                                   ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_irq) 
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
                                                 ((((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__ptm_irq) 
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (0x0000001fU 
                                                & (((IData)(__VdfgRegularize_hebeb780c_0_8) 
                                                    >> 4U) 
                                                   - (IData)(__VdfgRegularize_hebeb780c_0_12)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x0000001fU 
                                                 & (((IData)(__VdfgRegularize_hebeb780c_0_14) 
                                                     >> 4U) 
                                                    + (IData)(__VdfgRegularize_hebeb780c_0_12)));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib 
        = ((6U != (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper))
            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)
            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nma 
        = ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err)
            ? ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__a0Rst)
                ? 2U : (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst) 
                         | ((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr) 
                            | (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr)))
                         ? 1U : 3U)) : (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma));
}

extern const VlWide<20>/*639:0*/ Vtb_xeno__ConstPool__CONST_h1b96ab98_0;
extern const VlUnpacked<CData/*4:0*/, 10> Vtb_xeno__ConstPool__TABLE_ha56e5a24_0;

VL_ATTR_COLD void Vtb_xeno___024root___stl_comb__TOP__2(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___stl_comb__TOP__2\n"); );
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
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
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
    __VdfgRegularize_hebeb780c_0_7 = (((((1U == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase) 
                                         & ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS)) 
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
                                                     : __VdfgRegularize_hebeb780c_0_7)
                                                    : 
                                                   ((1U 
                                                     == vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase)
                                                     ? __VdfgRegularize_hebeb780c_0_7
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (((IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp) 
                                                 & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                | ((~ (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask)) 
                                                   & (IData)(vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr)));
}

void Vtb_xeno___024root___act_sequent__TOP__0(Vtb_xeno___024root* vlSelf);

VL_ATTR_COLD bool Vtb_xeno___024root___eval_phase__stl(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___eval_phase__stl\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                        (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0) 
                                                          << 1U) 
                                                         | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod 
                                                            != vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0 
            = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xeno___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_xeno___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
                Vtb_xeno___024root___stl_sequent__TOP__0(vlSelf);
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VstlTriggered[0U]))) {
                Vtb_xeno___024root___act_sequent__TOP__0(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__1
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updSsw 
                        = vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                        .__PVT__aob2Ab;
                }
            }
            if ((1ULL & (vlSelfRef.__VstlTriggered[1U] 
                         | vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__1
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish 
                        = (1U & (((vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[2U] 
                                   >> 2U) | (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch[1U] 
                                             >> 0x0000001cU)) 
                                 | vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                 .__PVT__isWrite));
                }
            }
            if ((3ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__2
                    vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel 
                        = (vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod
                           .__PVT__isPcRel & (~ vlSelfRef.tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod
                                              .__PVT__rz));
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (3ULL & vlSelfRef.__VstlTriggered[0U]))) {
                Vtb_xeno___024root___stl_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_xeno___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_xeno___024root___trigger_anySet__ico(triggers))))) {
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

bool Vtb_xeno___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xeno___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_xeno___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_xeno.main_board.cpu.Nanod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_xeno.main_board.cpu.Irdecod)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_xeno.main_board.cpu.Clks.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge tb_xeno.main_board.cpu.__Vcellinp__nanoRom__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([initial_nba])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xeno___024root___ctor_var_reset(Vtb_xeno___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xeno___024root___ctor_var_reset\n"); );
    Vtb_xeno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->tb_xeno__DOT__phi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14695364496993123585ull);
    vlSelf->tb_xeno__DOT__phi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15984357640728202148ull);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->tb_xeno__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6620823213683239597ull);
    }
    vlSelf->tb_xeno__DOT__rom_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9490166256148067278ull);
    vlSelf->tb_xeno__DOT__rom_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10457373078569923514ull);
    vlSelf->tb_xeno__DOT__st_cnt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15563829523608429179ull);
    vlSelf->tb_xeno__DOT__vram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11534313206073229764ull);
    vlSelf->tb_xeno__DOT__vram_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 970732780566703006ull);
    vlSelf->tb_xeno__DOT__sprram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9039924918490471934ull);
    vlSelf->tb_xeno__DOT__sprram_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16902054447949551724ull);
    vlSelf->tb_xeno__DOT__hsync_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9275890700715396553ull);
    vlSelf->tb_xeno__DOT__vsync30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9819231710316658571ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14146256711350938076ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__vpa_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12587300004483822292ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__e_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255978684425092116ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__e_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5868240845291626764ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__e_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11411143450594724245ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__bus_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13697319445325974378ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16838702681633653936ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9743146836045744372ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_vram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12386643073570004648ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_spr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16221434887357470839ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_pal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152035645439281628ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_ptm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12148690772616912069ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_wdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11927337534363134248ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_ctl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16253523202089231621ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_in0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18030686557412890165ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_in1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5283103799334022499ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__sel_dsw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7787605290262130849ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1209903305565662257ull);
    }
    vlSelf->tb_xeno__DOT__main_board__DOT__ram_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5725949292632811285ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3906623326039218553ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1785660573093113562ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm_cs_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16533261242666943090ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2966386285928433683ull);
    vlSelf->tb_xeno__DOT__main_board__DOT____Vcellinp__ptm__din = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__wdt_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11288743731629159528ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__line_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13748056856933556914ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__irq493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7213102127062974162ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__slow_dtack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13911041839886398443ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651188931087054703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__extReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651188931087054703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__pwrUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651188931087054703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651188931087054703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Clks.__PVT__enPhi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651188931087054703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__wClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4317261079007676158ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__tState = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__enT1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6898195046579796863ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__enT2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10050788392066570208ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__enT3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5488654345371026797ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__enT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16793831584348191938ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rDtack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8893585096346759064ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rBerr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 91176968446910422ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6092879130875056280ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iIpl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5011429984180637484ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Vpai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2897984373487120952ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__BeI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6312637997070628935ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Halti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739412966950977922ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__BRi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9072672016065847848ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__BgackI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907750503876394536ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__BeiDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11028082488773101568ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoLatch, __VscopeHash, 17636295061269643540ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoOutput, __VscopeHash, 16728837517395657646ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__microLatch = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6718109144663391133ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__microOutput = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1332266920834034545ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__microAddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1516568284215765581ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8528164569026758946ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoAddr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2720176602773723851ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rstUrom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15932861011008334768ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__permStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__waitBusFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__busByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__isRmc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noLowByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noHighByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__clrTpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__tvn2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__const2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2Pren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updPren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__inl2psw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Sr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__sr2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ftu2Ccr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pswIToFtu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ird2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ssw2Ftu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__initST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__Ir2Ird = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__auClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__noSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__auCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__todbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__toIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2Atl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__atl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__atl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2Ath = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ath2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ath2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__db2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ab2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Aob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aob2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__updSsw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__reg2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ssp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pchdbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pcldbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pclabl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__pchabh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2rxl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2rxh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abh2ryh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryl2db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryl2ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryh2dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ryh2abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abl2ryl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__rxlDbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluColumn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluDctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluActrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluInit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__aluFinish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abd2Dcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dcr2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbd2Alue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alue2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abd2Alub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alu2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__alu2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Db = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Ab = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__au2Pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbin2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dbin2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__extDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__extAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ablAbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__ablAbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dblDbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__dblDbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod.__PVT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133497298209831551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isTas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__implicitSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__toCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ryIsDt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsUsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsMovem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__movemPreDecr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__isMovep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__ftuConst = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__macroTvn = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod.__PVT__inhibitCcr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940539742760679048ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Tpend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652988457150451163ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__intPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5078090088520869226ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__pswT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11151919550361799342ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__pswS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16267729298300306223ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__pswI = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 912815262723569923ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__psw = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7486159167812275394ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10093294846805391499ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Irc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2888822101204014880ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Ir = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2621961103816261206ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Ird = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4657639958540388975ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__alue = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10529708224130348406ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__dcr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17629306353081336932ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2643767926945619989ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__isLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14839877793098221714ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__tvn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8877136604134599432ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 823083900715450553ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__addrOe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6516118025924362435ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iStop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14196376247382656352ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__A0Err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13051224433779682086ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5893808548599503209ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__BerrA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3819651851845402357ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Spuria = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8003000542834590448ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Avia = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6123767632937362782ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3202149803270149016ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15599148276029599581ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__Err6591 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12466685686924330249ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iAddrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15433925833871470146ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__enErrClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2995887698707184682ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rFC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7656585510170522196ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__inl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 724266655677611332ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__updIll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 506863338108665570ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__prevNmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14814715848956709959ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iplStable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1364986791248007981ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__iplComp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4904828828248330946ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__eCntr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15774209860937126813ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__rVma = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047241174540025464ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__irdToCcr_t4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5456709061052786614ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__ssw = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16542029988341467747ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__tvnLatch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14904253676373639558ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__inExcept01 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3284113961867712971ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11923729870750510166ull);
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8420701857792760428ull);
    }
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbin = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11211474699859277646ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dcrOutput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7069989360004436952ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcL = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10488314654655243503ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__PcH = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14839467244926720661ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14421720245357385439ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aob = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11543462555396054491ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Ath = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10983570099310339665ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Atl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12532368031125888821ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6919855385208757819ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4527729293366062881ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17043253614255997837ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6485644613148257702ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Abd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15792503316796249964ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Dbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5326981720536229186ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3469765629848969928ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10407439589763766807ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7798397263405170792ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5858885342632804228ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15008165089904489956ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdMux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16531697616533075792ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIsByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6600864502183749192ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4093705541617094469ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Dbh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1277826891682979741ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pcl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12815063888656503896ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__Pch2Abh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16151162725535341424ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4641756682752690581ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__actualRy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7192118296963299889ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__movemRx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6972420223011996252ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__byteNotSpAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3198376547800259245ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4778486780856693796ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryMux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8290704513350614703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16925521007517192119ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15162676540003098285ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11071678289595861287ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsSp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3538669254594406929ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12946428582053373139ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryIsAreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13086976139213549830ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15874663991939747634ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7264284235473318740ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18042517127448274383ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ryl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18378624056327944414ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15778012575445531111ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Abd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161295559968625170ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15415978866656178781ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__rxl2Dbd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9591874376116855652ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12085211251945281689ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__ablIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18296799086744412765ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6193057371889028138ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbhIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11242913062165259015ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dblIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1749786962864822947ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbdIdle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 545712836961956516ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8549460453853066923ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13662937187931363113ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preAbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4251372772040157882ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbh = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6411276567515386358ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18314397550692543079ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__preDbd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1797465560005030666ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__auInpMux = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16515161817081418182ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__aulow = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14655764556085344718ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964983489635512428ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dbh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13304947752640217122ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abh2Pch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15737519792284935649ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__abl2Pcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13740789627869126846ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prHbit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3650713794026333412ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__prenLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 356039047397928321ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alub = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9919847046709294214ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dobInput = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16782521204827800967ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluLatch = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11723225200488924768ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__pswCcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18154145384295966824ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrCore = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5948820249464326035ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1381987343187117144ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrTemp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2881582676287872369ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__coreH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17140611799740543252ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__subHcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617346355624186020ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__row = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11781589719852203669ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isArX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16443032572832190193ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__noCcrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718072461639237500ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11163387907303606922ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__ccrMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2537634366415030899ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__oper = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2460464198307604094ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 106333531432808703ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__dOperand = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4171198600944796309ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cRow = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6399728652685372074ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__cMask = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2796372697634370853ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluOp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4438145485179684105ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8111560559129519155ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdLatch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5453799259187666178ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdCarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6566516527261207233ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__bcdOverf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16652021857451382678ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isLong = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6221297707963369441ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__rIrd8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2234297096135827232ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__isShift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18310367442791178758ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__shftRight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15324811478387332425ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13146131324462604652ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1761501290890043160ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dob = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6905788337496353955ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToDbin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4093928701575469607ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__xToIrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11746427804275805484ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6508440030978521688ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17797502975312204336ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteMux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12947874366473462198ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__isByte_T4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6570935841190000874ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__dataIo__DOT__byteCycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18195566870387569482ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3833882169178384868ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17250641298218882107ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5203905796963406822ull);
    }
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16376644492088059271ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__dmaPhase = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__next = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busArbiter__DOT__rGranted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14583722110710825298ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rAS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8405613528735283485ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rLDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13403775434869222464ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rUDS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1385831301247625905ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__rRWn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11792785344718448909ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcPend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 944863458806832738ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isWriteReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3198335527754476411ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bciByte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17862734467582141950ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isRmcReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5558737088672229052ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__wendReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7846221186229557497ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__addrOeDelay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1200226153041657276ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__isByteT4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18093911417426756105ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__bcReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5375418075106049593ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busPhase = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__next = 0;
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__busControl__DOT__busEnding = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14865700311530964384ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ftuCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7499213331833824023ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dobCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6758472074627238653ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dblSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643173401781021928ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__dbhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5015363315186499621ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__ablSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7478367043069785805ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__abhSpecial = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9947512783532321936ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nDecoder__DOT__isPcRel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 543209630167991519ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__uNma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12342778900016882429ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1Nma = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 478052274111913188ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__c0c1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3649629342992649652ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__a0Rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6197060379780990949ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__enl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5653780881802717551ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__ccTest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6765656476594256064ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rTrace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12428304419556765985ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17201311539789154074ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rIllegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4127747371011657288ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rPriv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12172442768993975313ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411622447877465938ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rLineF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12413870903363856820ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcRst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18078578463880461119ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcAdrErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6514917711013455152ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rExcBusErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11062241968418597914ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rSpurious = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16109585906593278160ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__rAutovec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5060985969740277132ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp1LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16393176074986190994ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__sequencer__DOT__grp0LatchEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1658173971542559874ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__uRom__DOT__uRam[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10454052736222820200ull);
    }
    for (int __Vi0 = 0; __Vi0 < 336; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(68, vlSelf->tb_xeno__DOT__main_board__DOT__cpu__DOT__nanoRom__DOT__nRam[__Vi0], __VscopeHash, 17376283205911466113ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__cr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235561972554914250ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__latch[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15890890304714979669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17784914552953320762ull);
    }
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__flag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13511841707821653406ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__flag_read = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9822985428501753219ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__msb_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11239623370357502697ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__lsb_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17391158103904775220ull);
    }
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__c_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4572781941380957253ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__t3_pre = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2965082226399953923ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__oneshot_done = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9812681878993969491ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__c_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11727219094707467585ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__t1_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14611897470550299537ull);
    vlSelf->tb_xeno__DOT__main_board__DOT__ptm__DOT__tick = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17483055172025572334ull);
    vlSelf->tb_xeno__DOT__video__DOT__hcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7540715532252890262ull);
    vlSelf->tb_xeno__DOT__video__DOT__vcnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9448988810522976271ull);
    vlSelf->tb_xeno__DOT__video__DOT__field = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192026403484867567ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__vram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9711124313549407239ull);
    }
    vlSelf->tb_xeno__DOT__video__DOT__vram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6610923664636401099ull);
    vlSelf->tb_xeno__DOT__video__DOT__vram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1500585807452873289ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__sprram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5507017410525205910ull);
    }
    vlSelf->tb_xeno__DOT__video__DOT__sprram_rq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5813128650942766790ull);
    vlSelf->tb_xeno__DOT__video__DOT__sprram_raddr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13332514482671217054ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__palette[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 782952451498737534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__bg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17545143724599648423ull);
    }
    vlSelf->tb_xeno__DOT__video__DOT__bg_q0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12517791493285823071ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5607156588924396307ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_raddr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4132848628627013548ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_rhalf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14780375267286512031ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__spr_rom0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10592276089950092710ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__spr_rom1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4532977372690935489ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__spr_rom2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15580771634452996546ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__spr_rom3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3712783916266205667ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_xeno__DOT__video__DOT__spr_q[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10881290104887346087ull);
    }
    vlSelf->tb_xeno__DOT__video__DOT__spr_raddr = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7045112649079325350ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 512; ++__Vi1) {
            vlSelf->tb_xeno__DOT__video__DOT__bg_lbuf[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9801613279251534163ull);
        }
    }
    vlSelf->tb_xeno__DOT__video__DOT__lbuf_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16412562556049861017ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_disp_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16092683739938650080ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1971985725039597603ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_cell = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3563612392113620826ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_d0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7150080586283183878ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_d1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 381298557797885696ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_px = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13843136670771180557ull);
    vlSelf->tb_xeno__DOT__video__DOT__bg_next_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13303221232246615112ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 512; ++__Vi1) {
            vlSelf->tb_xeno__DOT__video__DOT__sp_lbuf[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4342250890452181319ull);
        }
    }
    vlSelf->tb_xeno__DOT__video__DOT__sp_disp_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6955940525557840494ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10768204592071147337ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_idx = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5564337855607395409ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6883239624168025832ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2266811161898538528ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_code_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1275101238228035368ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8795557344387773847ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_line = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2336455372224677374ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_fetch_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14593401513571958074ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_xeno__DOT__video__DOT__sp_row[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17148373212324539458ull);
        }
    }
    vlSelf->tb_xeno__DOT__video__DOT__sp_px = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 495339695377693992ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_clr_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11448738420032171839ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_code = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5815582148159675023ull);
    vlSelf->tb_xeno__DOT__video__DOT__yt_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6925382741672409384ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_pval = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15424881984178101272ull);
    vlSelf->tb_xeno__DOT__video__DOT__sp_xpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15922615665508508948ull);
    vlSelf->tb_xeno__DOT__video__DOT__rgb9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9925163051991765184ull);
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
    vlSelf->__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__result = 0;
    vlSelf->__Vtask_tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__alu__DOT__mySubber__0__cout = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_11 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_15 = 0;
    vlSelf->__Vdly__tb_xeno__DOT__ce_div = 0;
    vlSelf->__Vdly__tb_xeno__DOT__main_board__DOT__line_cnt = 0;
    vlSelf->__Vdly__tb_xeno__DOT__video__DOT__hcnt = 0;
    vlSelf->__Vdly__tb_xeno__DOT__video__DOT__field = 0;
    vlSelf->__Vdly__tb_xeno__DOT__video__DOT__vcnt = 0;
    vlSelf->__Vdly__tb_xeno__DOT__main_board__DOT__cpu__DOT__ftu = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v0 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v0 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v1 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v1 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v2 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v2 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v3 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v3 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v4 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v4 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v5 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v5 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v6 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v6 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v7 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v7 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v8 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v8 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v9 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v9 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v10 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v10 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v11 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v11 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v12 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v12 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v13 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v13 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v14 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v14 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v15 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v15 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v16 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v16 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v17 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v17 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v18 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68H__v19 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v18 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v19 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v20 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v21 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v22 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v23 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v24 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlyDim0__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__excUnit__DOT__regs68L__v25 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v0 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v1 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v2 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v3 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v4 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v5 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v6 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v7 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v8 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v9 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v10 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v11 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v12 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v13 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v14 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v15 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v16 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v17 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v18 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v19 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v20 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v21 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v22 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v23 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v24 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v25 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v26 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v27 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v28 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v29 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v30 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v31 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v32 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v33 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v34 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v35 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v36 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v37 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v38 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v39 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v40 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v41 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v42 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v43 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v44 = 0;
    vlSelf->__VdlyVal__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45 = 0;
    vlSelf->__VdlySet__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__v45 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__0.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__0.__PVT__inhibitCcr = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__permStart = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__waitBusFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__isWrite = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__busByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__isRmc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__noLowByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__noHighByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__updTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__clrTpend = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__tvn2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__const2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abl2Pren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__updPren = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__inl2psw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Sr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__sr2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ftu2Ccr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__pswIToFtu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ird2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ssw2Ftu = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__initST = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__Ir2Ird = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__auClkEn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__noSpAlign = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__auCntrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__todbin = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__toIrc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abl2Atl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__atl2Abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__atl2Dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbh2Ath = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ath2Dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ath2Abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__db2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ab2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__au2Aob = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aob2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__updSsw = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dobCtrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__reg2abl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__reg2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbh2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbl2reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__reg2dbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__reg2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ssp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__pchdbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__pcldbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__pclabl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__pchabh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rxh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rxh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rxl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rxl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abl2rxl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abh2rxh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abh2ryh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ryl2db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ryl2ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ryh2dbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ryh2abh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abl2ryl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rz = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__rxlDbl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aluColumn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aluDctrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aluActrl = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aluInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__aluFinish = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abd2Dcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dcr2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbd2Alue = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__alue2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abd2Alub = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__alu2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__alu2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__au2Db = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__au2Ab = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__au2Pc = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbin2Abd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dbin2Dbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__extDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__extAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ablAbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__ablAbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dblDbd = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__dblDbh = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Nanod__1.__PVT__abdIsByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__isPcRel = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__isTas = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__implicitSp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__toCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__ryIsDt = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsUsp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsMovem = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__movemPreDecr = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__isByte = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__isMovep = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__rx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__ry = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__rxIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__ryIsAreg = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__ftuConst = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__macroTvn = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT__Irdecod__1.__PVT__inhibitCcr = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr_h0102208c__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xeno__DOT__main_board__DOT__cpu__DOT____Vcellinp__nanoRom__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
