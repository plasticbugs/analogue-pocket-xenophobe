// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sounds_good.h for the primary calling header

#include "Vtb_sounds_good__pch.h"


Vtb_sounds_good___024unit::Vtb_sounds_good___024unit() = default;
Vtb_sounds_good___024unit::~Vtb_sounds_good___024unit() = default;

void Vtb_sounds_good___024unit::ctor(Vtb_sounds_good__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_sounds_good___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_sounds_good___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
