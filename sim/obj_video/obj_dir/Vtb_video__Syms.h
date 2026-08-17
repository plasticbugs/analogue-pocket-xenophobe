// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_VIDEO__SYMS_H_
#define VERILATED_VTB_VIDEO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_video.h"

// INCLUDE MODULE CLASSES
#include "Vtb_video___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_video__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_video* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_video___024root            TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_video__video;

    // CONSTRUCTORS
    Vtb_video__Syms(VerilatedContext* contextp, const char* namep, Vtb_video* modelp);
    ~Vtb_video__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
