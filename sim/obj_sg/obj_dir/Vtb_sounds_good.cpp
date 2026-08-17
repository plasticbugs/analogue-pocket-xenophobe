// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sounds_good__pch.h"

//============================================================
// Constructors

Vtb_sounds_good::Vtb_sounds_good(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sounds_good__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cmd{vlSymsp->TOP.cmd}
    , cmd_send{vlSymsp->TOP.cmd_send}
    , status{vlSymsp->TOP.status}
    , busy{vlSymsp->TOP.busy}
    , dbg_as{vlSymsp->TOP.dbg_as}
    , dbg_rw{vlSymsp->TOP.dbg_rw}
    , dac{vlSymsp->TOP.dac}
    , dbg_addr{vlSymsp->TOP.dbg_addr}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sounds_good::Vtb_sounds_good(const char* _vcname__)
    : Vtb_sounds_good(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sounds_good::~Vtb_sounds_good() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sounds_good___024root___eval_debug_assertions(Vtb_sounds_good___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sounds_good___024root___eval_static(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___eval_initial(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___eval_settle(Vtb_sounds_good___024root* vlSelf);
void Vtb_sounds_good___024root___eval(Vtb_sounds_good___024root* vlSelf);

void Vtb_sounds_good::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sounds_good::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sounds_good___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sounds_good___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sounds_good___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sounds_good___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sounds_good___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sounds_good::eventsPending() { return false; }

uint64_t Vtb_sounds_good::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_sounds_good::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sounds_good___024root___eval_final(Vtb_sounds_good___024root* vlSelf);

VL_ATTR_COLD void Vtb_sounds_good::final() {
    contextp()->executingFinal(true);
    Vtb_sounds_good___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sounds_good::hierName() const { return vlSymsp->name(); }
const char* Vtb_sounds_good::modelName() const { return "Vtb_sounds_good"; }
unsigned Vtb_sounds_good::threads() const { return 1; }
void Vtb_sounds_good::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sounds_good::atClone() const {
    contextp()->threadPoolpOnClone();
}
