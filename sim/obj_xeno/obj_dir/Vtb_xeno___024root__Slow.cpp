// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xeno.h for the primary calling header

#include "Vtb_xeno__pch.h"

void Vtb_xeno___024root___ctor_var_reset(Vtb_xeno___024root* vlSelf);

Vtb_xeno___024root::Vtb_xeno___024root(Vtb_xeno__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_xeno___024root___ctor_var_reset(this);
}

void Vtb_xeno___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_xeno___024root::~Vtb_xeno___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
