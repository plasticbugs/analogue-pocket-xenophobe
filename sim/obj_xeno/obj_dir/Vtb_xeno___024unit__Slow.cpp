// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xeno.h for the primary calling header

#include "Vtb_xeno__pch.h"


Vtb_xeno___024unit::Vtb_xeno___024unit() = default;
Vtb_xeno___024unit::~Vtb_xeno___024unit() = default;

void Vtb_xeno___024unit::ctor(Vtb_xeno__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_xeno___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_xeno___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
