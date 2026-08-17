// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_xeno__pch.h"

//============================================================
// Constructors

Vtb_xeno::Vtb_xeno(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_xeno__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , b{vlSymsp->TOP.b}
    , hs{vlSymsp->TOP.hs}
    , vs{vlSymsp->TOP.vs}
    , de{vlSymsp->TOP.de}
    , wdt{vlSymsp->TOP.wdt}
    , dbg_as{vlSymsp->TOP.dbg_as}
    , dbg_irq493{vlSymsp->TOP.dbg_irq493}
    , dbg_ptm_irq{vlSymsp->TOP.dbg_ptm_irq}
    , dbg_iack{vlSymsp->TOP.dbg_iack}
    , dbg_phi1{vlSymsp->TOP.dbg_phi1}
    , dbg_wdt_kick{vlSymsp->TOP.dbg_wdt_kick}
    , dbg_vsync30{vlSymsp->TOP.dbg_vsync30}
    , dbg_pal_we{vlSymsp->TOP.dbg_pal_we}
    , dbg_pal_addr{vlSymsp->TOP.dbg_pal_addr}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , dsw{vlSymsp->TOP.dsw}
    , ctrl{vlSymsp->TOP.ctrl}
    , dbg_palw{vlSymsp->TOP.dbg_palw}
    , dbg_vramw{vlSymsp->TOP.dbg_vramw}
    , dbg_sprw{vlSymsp->TOP.dbg_sprw}
    , dbg_sphit{vlSymsp->TOP.dbg_sphit}
    , dbg_spblend{vlSymsp->TOP.dbg_spblend}
    , dbg_pal_data{vlSymsp->TOP.dbg_pal_data}
    , dbg_addr{vlSymsp->TOP.dbg_addr}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_xeno::Vtb_xeno(const char* _vcname__)
    : Vtb_xeno(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_xeno::~Vtb_xeno() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_xeno___024root___eval_debug_assertions(Vtb_xeno___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_xeno___024root___eval_static(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___eval_initial(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___eval_settle(Vtb_xeno___024root* vlSelf);
void Vtb_xeno___024root___eval(Vtb_xeno___024root* vlSelf);

void Vtb_xeno::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_xeno::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_xeno___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_xeno___024root___eval_static(&(vlSymsp->TOP));
        Vtb_xeno___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_xeno___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_xeno___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_xeno::eventsPending() { return false; }

uint64_t Vtb_xeno::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_xeno::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_xeno___024root___eval_final(Vtb_xeno___024root* vlSelf);

VL_ATTR_COLD void Vtb_xeno::final() {
    contextp()->executingFinal(true);
    Vtb_xeno___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_xeno::hierName() const { return vlSymsp->name(); }
const char* Vtb_xeno::modelName() const { return "Vtb_xeno"; }
unsigned Vtb_xeno::threads() const { return 1; }
void Vtb_xeno::prepareClone() const { contextp()->prepareClone(); }
void Vtb_xeno::atClone() const {
    contextp()->threadPoolpOnClone();
}
