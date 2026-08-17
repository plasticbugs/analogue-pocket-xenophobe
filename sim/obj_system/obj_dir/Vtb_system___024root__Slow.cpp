// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

void Vtb_system___024root___ctor_var_reset(Vtb_system___024root* vlSelf);

Vtb_system___024root::Vtb_system___024root(Vtb_system__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_system___024root___ctor_var_reset(this);
}

void Vtb_system___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_system___024root::~Vtb_system___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
