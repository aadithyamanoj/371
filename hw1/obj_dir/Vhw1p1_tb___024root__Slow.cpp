// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p1_tb.h for the primary calling header

#include "Vhw1p1_tb__pch.h"
#include "Vhw1p1_tb__Syms.h"
#include "Vhw1p1_tb___024root.h"

void Vhw1p1_tb___024root___ctor_var_reset(Vhw1p1_tb___024root* vlSelf);

Vhw1p1_tb___024root::Vhw1p1_tb___024root(Vhw1p1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhw1p1_tb___024root___ctor_var_reset(this);
}

void Vhw1p1_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhw1p1_tb___024root::~Vhw1p1_tb___024root() {
}
