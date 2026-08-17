// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"

void Vtb_system_fx68k___ctor_var_reset(Vtb_system_fx68k* vlSelf);

Vtb_system_fx68k::Vtb_system_fx68k() = default;
Vtb_system_fx68k::~Vtb_system_fx68k() = default;

void Vtb_system_fx68k::ctor(Vtb_system__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_system_fx68k___ctor_var_reset(this);
}

void Vtb_system_fx68k::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_system_fx68k::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
