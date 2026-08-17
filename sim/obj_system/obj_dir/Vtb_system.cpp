// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_system__pch.h"

//============================================================
// Constructors

Vtb_system::Vtb_system(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_system__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , b{vlSymsp->TOP.b}
    , hs{vlSymsp->TOP.hs}
    , vs{vlSymsp->TOP.vs}
    , de{vlSymsp->TOP.de}
    , wdt{vlSymsp->TOP.wdt}
    , snd_status{vlSymsp->TOP.snd_status}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , dsw{vlSymsp->TOP.dsw}
    , ctrl{vlSymsp->TOP.ctrl}
    , dac{vlSymsp->TOP.dac}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__tb_system__DOT__snd__DOT__cpu{vlSymsp->TOP.__PVT__tb_system__DOT__snd__DOT__cpu}
    , __PVT__tb_system__DOT__main_board__DOT__cpu{vlSymsp->TOP.__PVT__tb_system__DOT__main_board__DOT__cpu}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_system::Vtb_system(const char* _vcname__)
    : Vtb_system(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_system::~Vtb_system() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_system___024root___eval_debug_assertions(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_system___024root___eval_static(Vtb_system___024root* vlSelf);
void Vtb_system___024root___eval_initial(Vtb_system___024root* vlSelf);
void Vtb_system___024root___eval_settle(Vtb_system___024root* vlSelf);
void Vtb_system___024root___eval(Vtb_system___024root* vlSelf);

void Vtb_system::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_system::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_system___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_system___024root___eval_static(&(vlSymsp->TOP));
        Vtb_system___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_system___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_system___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_system::eventsPending() { return false; }

uint64_t Vtb_system::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_system::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_system___024root___eval_final(Vtb_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_system::final() {
    contextp()->executingFinal(true);
    Vtb_system___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_system::hierName() const { return vlSymsp->name(); }
const char* Vtb_system::modelName() const { return "Vtb_system"; }
unsigned Vtb_system::threads() const { return 1; }
void Vtb_system::prepareClone() const { contextp()->prepareClone(); }
void Vtb_system::atClone() const {
    contextp()->threadPoolpOnClone();
}
