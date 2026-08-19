// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_loader.h for the primary calling header

#include "Vtb_loader__pch.h"

VL_ATTR_COLD void Vtb_loader___024root___eval_static(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_static\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_loader__DOT__sdram16__DOT__refresh_count = 0x10bbU;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973266137979573945ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 599330214656746234ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__old_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8107494406358862308ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11941203665739110861ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2463633522874822005ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bcap = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18324457497508745596ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__data_ready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14812512759447640576ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__bready_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 294645708504185233ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17243495155489113391ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5307728672769936301ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5655334126396176185ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__new_waddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6973386093183182346ull);
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__save_we = 1U;
        vlSelfRef.tb_loader__DOT__sdram16__DOT__unnamedblk1__DOT__state = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtb_loader___024root___eval_initial(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_initial\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_loader___024root___eval_final(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_final\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_loader___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_loader___024root___eval_phase__stl(Vtb_loader___024root* vlSelf);

VL_ATTR_COLD void Vtb_loader___024root___eval_settle(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_settle\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_loader___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb_loader.sv", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_loader___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_loader___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_loader___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_loader___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_loader___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_loader___024root___eval_phase__stl(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___eval_phase__stl\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_loader___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_loader___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_loader__DOT__chip__DOT__widx 
                        = ((0x001ffe00U & ((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__row_open) 
                                           << 9U)) 
                           | (0x000001ffU & (IData)(vlSelfRef.tb_loader__DOT__a)));
                    vlSelfRef.tb_loader__DOT__srv__DOT__wf_empty 
                        = ((IData)(vlSelfRef.tb_loader__DOT__srv__DOT__wf_wp) 
                           == (IData)(vlSelfRef.tb_loader__DOT__srv__DOT__wf_rp));
                    vlSelfRef.tb_loader__DOT__dq = 
                        ((IData)(vlSelfRef.tb_loader__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1) 
                         | ((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__dq_out) 
                            & (- (IData)((IData)(vlSelfRef.tb_loader__DOT__chip__DOT__dq_oe)))));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_loader___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_loader___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_loader___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_loader___024root___ctor_var_reset(Vtb_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_loader___024root___ctor_var_reset\n"); );
    Vtb_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->dl_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16966849139728549327ull);
    vlSelf->dl_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5859826879386954887ull);
    vlSelf->dl_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6891131556200439257ull);
    vlSelf->dl_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9624864055451213588ull);
    vlSelf->rd0_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1609099923317899286ull);
    vlSelf->rd0_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12308242959343770023ull);
    vlSelf->rd0_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6907207272349819833ull);
    vlSelf->rd0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16624520906870651760ull);
    vlSelf->rd1_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1128064393676383842ull);
    vlSelf->rd1_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5893704363617726586ull);
    vlSelf->rd1_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10982503718448289089ull);
    vlSelf->rd1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4069822316971967060ull);
    vlSelf->spr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12748782831691541108ull);
    vlSelf->spr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6275736284305282102ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->spr_data, __VscopeHash, 2900066290057462573ull);
    vlSelf->spr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15277270205981686569ull);
    vlSelf->tb_loader__DOT__dq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13247804481409549681ull);
    vlSelf->tb_loader__DOT__a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16399767024052761070ull);
    vlSelf->tb_loader__DOT__sd_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13793090136855122993ull);
    vlSelf->tb_loader__DOT__sd_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15592010284812620124ull);
    vlSelf->tb_loader__DOT__sd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17497449521292107885ull);
    vlSelf->tb_loader__DOT__sd_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3742693254321032270ull);
    vlSelf->tb_loader__DOT__sd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837594597365510509ull);
    vlSelf->tb_loader__DOT__sd_baddr = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8208476783936408607ull);
    vlSelf->tb_loader__DOT__sd_brd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8868247144154533272ull);
    vlSelf->tb_loader__DOT__sd_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4068972052083595078ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_loader__DOT__sd_bdata, __VscopeHash, 16649941162913262770ull);
    vlSelf->tb_loader__DOT__srv__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10014543013631246417ull);
    vlSelf->tb_loader__DOT__srv__DOT__cur = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4381836364152132772ull);
    vlSelf->tb_loader__DOT__srv__DOT__wcnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3265089020836940606ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_loader__DOT__srv__DOT__wfifo[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 140026200676102650ull);
    }
    vlSelf->tb_loader__DOT__srv__DOT__wf_wp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8345878770909501523ull);
    vlSelf->tb_loader__DOT__srv__DOT__wf_rp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9588787598815436382ull);
    vlSelf->tb_loader__DOT__srv__DOT__wf_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 111183810074506565ull);
    vlSelf->tb_loader__DOT__srv__DOT__dlwr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14365572895513239058ull);
    vlSelf->tb_loader__DOT__srv__DOT__dl_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3305080412555617106ull);
    vlSelf->tb_loader__DOT__srv__DOT__dl_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7638006696412831357ull);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->tb_loader__DOT__chip__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5243306592898766234ull);
    }
    vlSelf->tb_loader__DOT__chip__DOT__row_open = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5268204727952557052ull);
    vlSelf->tb_loader__DOT__chip__DOT__row_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8403501584831932946ull);
    vlSelf->tb_loader__DOT__chip__DOT__pipe_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 259223861313484545ull);
    vlSelf->tb_loader__DOT__chip__DOT__pipe_v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7169745361255937713ull);
    vlSelf->tb_loader__DOT__chip__DOT__dq_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3863702336188828383ull);
    vlSelf->tb_loader__DOT__chip__DOT__dq_oe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12876442346093201741ull);
    vlSelf->tb_loader__DOT__chip__DOT__widx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6496017421815248110ull);
    vlSelf->tb_loader__DOT__sdram16__DOT__command = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16497328952084415003ull);
    vlSelf->tb_loader__DOT__sdram16__DOT__save_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10502802633916634232ull);
    vlSelf->tb_loader__DOT__sdram16__DOT__data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17316880624380162652ull);
    vlSelf->tb_loader__DOT__sdram16__DOT__SDRAM_DQ__out__strong__out1 = 0;
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
