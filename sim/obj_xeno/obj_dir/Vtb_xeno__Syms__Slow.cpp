// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_xeno__pch.h"

Vtb_xeno__Syms::Vtb_xeno__Syms(VerilatedContext* contextp, const char* namep, Vtb_xeno* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(2950);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_xeno__video = new VerilatedScope{this, "tb_xeno.video", "video", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_xeno__video->varInsert("palette", &(TOP.tb_xeno__DOT__video__DOT__palette), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 1 ,0,63 ,8,0);
    __Vscopep_tb_xeno__video->varInsert("vram", &(TOP.tb_xeno__DOT__video__DOT__vram), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 1 ,0,4095 ,15,0);
}

Vtb_xeno__Syms::~Vtb_xeno__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_xeno__video, __Vscopep_tb_xeno__video = nullptr);
    // Tear down sub module instances
}
