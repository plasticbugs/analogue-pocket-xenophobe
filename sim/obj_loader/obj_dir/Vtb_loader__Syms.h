// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_LOADER__SYMS_H_
#define VERILATED_VTB_LOADER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_loader.h"

// INCLUDE MODULE CLASSES
#include "Vtb_loader___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_loader__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_loader* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_loader___024root           TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_loader__chip;

    // CONSTRUCTORS
    Vtb_loader__Syms(VerilatedContext* contextp, const char* namep, Vtb_loader* modelp);
    ~Vtb_loader__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
