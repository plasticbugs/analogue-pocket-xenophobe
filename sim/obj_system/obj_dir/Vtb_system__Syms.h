// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SYSTEM__SYMS_H_
#define VERILATED_VTB_SYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_system.h"

// INCLUDE MODULE CLASSES
#include "Vtb_system___024root.h"
#include "Vtb_system___024unit.h"
#include "Vtb_system_fx68k.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_system__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_system* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_system___024root           TOP;
    Vtb_system_fx68k               TOP__tb_system__DOT__main_board__DOT__cpu;
    Vtb_system_fx68k               TOP__tb_system__DOT__snd__DOT__cpu;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_system__sdram_chip;
    VerilatedScope* __Vscopep_tb_system__video;

    // CONSTRUCTORS
    Vtb_system__Syms(VerilatedContext* contextp, const char* namep, Vtb_system* modelp);
    ~Vtb_system__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
