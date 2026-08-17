// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_video__pch.h"

Vtb_video__Syms::Vtb_video__Syms(VerilatedContext* contextp, const char* namep, Vtb_video* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(958);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_video__sdram_chip = new VerilatedScope{this, "tb_video.sdram_chip", "sdram_chip", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_video__video = new VerilatedScope{this, "tb_video.video", "video", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_video__sdram_chip->varInsert("mem", &(TOP.tb_video__DOT__sdram_chip__DOT__mem), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,2097151 ,15,0);
    __Vscopep_tb_video__video->varInsert("palette", &(TOP.tb_video__DOT__video__DOT__palette), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 1 ,0,63 ,8,0);
    __Vscopep_tb_video__video->varInsert("sprram", &(TOP.tb_video__DOT__video__DOT__sprram), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 2 ,0,4095 ,1,0 ,7,0);
    __Vscopep_tb_video__video->varInsert("vram", &(TOP.tb_video__DOT__video__DOT__vram), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 2 ,0,4095 ,1,0 ,7,0);
}

Vtb_video__Syms::~Vtb_video__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_video__sdram_chip, __Vscopep_tb_video__sdram_chip = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_video__video, __Vscopep_tb_video__video = nullptr);
    // Tear down sub module instances
}
