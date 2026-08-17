// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SOUNDS_GOOD__SYMS_H_
#define VERILATED_VTB_SOUNDS_GOOD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sounds_good.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sounds_good___024root.h"
#include "Vtb_sounds_good___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_sounds_good__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sounds_good* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sounds_good___024root      TOP;

    // CONSTRUCTORS
    Vtb_sounds_good__Syms(VerilatedContext* contextp, const char* namep, Vtb_sounds_good* modelp);
    ~Vtb_sounds_good__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
