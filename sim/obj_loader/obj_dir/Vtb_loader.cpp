// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_loader__pch.h"

//============================================================
// Constructors

Vtb_loader::Vtb_loader(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_loader__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , dl_active{vlSymsp->TOP.dl_active}
    , dl_data{vlSymsp->TOP.dl_data}
    , dl_wr{vlSymsp->TOP.dl_wr}
    , rd0_req{vlSymsp->TOP.rd0_req}
    , rd0_done{vlSymsp->TOP.rd0_done}
    , rd1_req{vlSymsp->TOP.rd1_req}
    , rd1_done{vlSymsp->TOP.rd1_done}
    , spr_req{vlSymsp->TOP.spr_req}
    , spr_done{vlSymsp->TOP.spr_done}
    , rd0_q{vlSymsp->TOP.rd0_q}
    , rd1_q{vlSymsp->TOP.rd1_q}
    , spr_addr{vlSymsp->TOP.spr_addr}
    , dl_addr{vlSymsp->TOP.dl_addr}
    , rd0_addr{vlSymsp->TOP.rd0_addr}
    , rd1_addr{vlSymsp->TOP.rd1_addr}
    , spr_data{vlSymsp->TOP.spr_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_loader::Vtb_loader(const char* _vcname__)
    : Vtb_loader(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_loader::~Vtb_loader() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_loader___024root___eval_debug_assertions(Vtb_loader___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_loader___024root___eval_static(Vtb_loader___024root* vlSelf);
void Vtb_loader___024root___eval_initial(Vtb_loader___024root* vlSelf);
void Vtb_loader___024root___eval_settle(Vtb_loader___024root* vlSelf);
void Vtb_loader___024root___eval(Vtb_loader___024root* vlSelf);

void Vtb_loader::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_loader::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_loader___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_loader___024root___eval_static(&(vlSymsp->TOP));
        Vtb_loader___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_loader___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_loader___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_loader::eventsPending() { return false; }

uint64_t Vtb_loader::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_loader::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_loader___024root___eval_final(Vtb_loader___024root* vlSelf);

VL_ATTR_COLD void Vtb_loader::final() {
    contextp()->executingFinal(true);
    Vtb_loader___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_loader::hierName() const { return vlSymsp->name(); }
const char* Vtb_loader::modelName() const { return "Vtb_loader"; }
unsigned Vtb_loader::threads() const { return 1; }
void Vtb_loader::prepareClone() const { contextp()->prepareClone(); }
void Vtb_loader::atClone() const {
    contextp()->threadPoolpOnClone();
}
