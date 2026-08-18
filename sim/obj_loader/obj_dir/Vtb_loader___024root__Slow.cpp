// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_loader.h for the primary calling header

#include "Vtb_loader__pch.h"

void Vtb_loader___024root___ctor_var_reset(Vtb_loader___024root* vlSelf);

Vtb_loader___024root::Vtb_loader___024root(Vtb_loader__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_loader___024root___ctor_var_reset(this);
}

void Vtb_loader___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_loader___024root::~Vtb_loader___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
