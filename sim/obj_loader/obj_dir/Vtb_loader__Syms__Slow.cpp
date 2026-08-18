// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_loader__pch.h"

Vtb_loader__Syms::Vtb_loader__Syms(VerilatedContext* contextp, const char* namep, Vtb_loader* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(296);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_loader__chip = new VerilatedScope{this, "tb_loader.chip", "chip", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_loader__chip->varInsert("mem", &(TOP.tb_loader__DOT__chip__DOT__mem), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,2097151 ,15,0);
}

Vtb_loader__Syms::~Vtb_loader__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_loader__chip, __Vscopep_tb_loader__chip = nullptr);
    // Tear down sub module instances
}
