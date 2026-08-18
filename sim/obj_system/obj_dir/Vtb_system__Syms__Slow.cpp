// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_system__pch.h"

Vtb_system__Syms::Vtb_system__Syms(VerilatedContext* contextp, const char* namep, Vtb_system* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(5767);
    // Setup sub module instances
    TOP__tb_system__DOT__main_board__DOT__cpu.ctor(this, "tb_system.main_board.cpu");
    TOP__tb_system__DOT__snd__DOT__cpu.ctor(this, "tb_system.snd.cpu");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_system__DOT__main_board__DOT__cpu = &TOP__tb_system__DOT__main_board__DOT__cpu;
    TOP.__PVT__tb_system__DOT__snd__DOT__cpu = &TOP__tb_system__DOT__snd__DOT__cpu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_system__DOT__main_board__DOT__cpu.__Vconfigure(true);
    TOP__tb_system__DOT__snd__DOT__cpu.__Vconfigure(false);
    // Setup scopes
    __Vscopep_tb_system__sdram_chip = new VerilatedScope{this, "tb_system.sdram_chip", "sdram_chip", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_system__video = new VerilatedScope{this, "tb_system.video", "video", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_system__sdram_chip->varInsert("mem", &(TOP.tb_system__DOT__sdram_chip__DOT__mem), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,2097151 ,15,0);
    __Vscopep_tb_system__video->varInsert("palette", &(TOP.tb_system__DOT__video__DOT__palette), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 1 ,0,63 ,8,0);
    __Vscopep_tb_system__video->varInsert("sprram", &(TOP.tb_system__DOT__video__DOT__sprram), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 2 ,0,4095 ,1,0 ,7,0);
    __Vscopep_tb_system__video->varInsert("vram", &(TOP.tb_system__DOT__video__DOT__vram), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RD, 1, 2 ,0,4095 ,1,0 ,7,0);
}

Vtb_system__Syms::~Vtb_system__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_system__sdram_chip, __Vscopep_tb_system__sdram_chip = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_system__video, __Vscopep_tb_system__video = nullptr);
    // Tear down sub module instances
    TOP__tb_system__DOT__snd__DOT__cpu.dtor();
    TOP__tb_system__DOT__main_board__DOT__cpu.dtor();
}
