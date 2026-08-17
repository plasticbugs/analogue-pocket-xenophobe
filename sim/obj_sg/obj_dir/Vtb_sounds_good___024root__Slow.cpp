// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sounds_good.h for the primary calling header

#include "Vtb_sounds_good__pch.h"

void Vtb_sounds_good___024root___ctor_var_reset(Vtb_sounds_good___024root* vlSelf);

Vtb_sounds_good___024root::Vtb_sounds_good___024root(Vtb_sounds_good__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_sounds_good___024root___ctor_var_reset(this);
}

void Vtb_sounds_good___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sounds_good___024root::~Vtb_sounds_good___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
