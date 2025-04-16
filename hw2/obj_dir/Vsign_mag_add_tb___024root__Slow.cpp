// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_mag_add_tb.h for the primary calling header

#include "Vsign_mag_add_tb__pch.h"
#include "Vsign_mag_add_tb__Syms.h"
#include "Vsign_mag_add_tb___024root.h"

void Vsign_mag_add_tb___024root___ctor_var_reset(Vsign_mag_add_tb___024root* vlSelf);

Vsign_mag_add_tb___024root::Vsign_mag_add_tb___024root(Vsign_mag_add_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsign_mag_add_tb___024root___ctor_var_reset(this);
}

void Vsign_mag_add_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsign_mag_add_tb___024root::~Vsign_mag_add_tb___024root() {
}
