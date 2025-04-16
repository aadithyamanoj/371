// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsign_mag_add_tb__pch.h"
#include "Vsign_mag_add_tb.h"
#include "Vsign_mag_add_tb___024root.h"

// FUNCTIONS
Vsign_mag_add_tb__Syms::~Vsign_mag_add_tb__Syms()
{
}

Vsign_mag_add_tb__Syms::Vsign_mag_add_tb__Syms(VerilatedContext* contextp, const char* namep, Vsign_mag_add_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(48);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
