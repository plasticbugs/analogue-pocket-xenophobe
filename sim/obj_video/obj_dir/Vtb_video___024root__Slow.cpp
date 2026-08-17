// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video.h for the primary calling header

#include "Vtb_video__pch.h"

void Vtb_video___024root___ctor_var_reset(Vtb_video___024root* vlSelf);

Vtb_video___024root::Vtb_video___024root(Vtb_video__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_video___024root___ctor_var_reset(this);
}

void Vtb_video___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_video___024root::~Vtb_video___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
