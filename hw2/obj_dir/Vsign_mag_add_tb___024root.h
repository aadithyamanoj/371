// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsign_mag_add_tb.h for the primary calling header

#ifndef VERILATED_VSIGN_MAG_ADD_TB___024ROOT_H_
#define VERILATED_VSIGN_MAG_ADD_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsign_mag_add_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsign_mag_add_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sign_mag_add_tb__DOT__clk;
    CData/*3:0*/ sign_mag_add_tb__DOT__sum;
    CData/*3:0*/ sign_mag_add_tb__DOT__data;
    CData/*3:0*/ sign_mag_add_tb__DOT__a;
    CData/*3:0*/ sign_mag_add_tb__DOT__b;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__max;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__min;
    CData/*0:0*/ sign_mag_add_tb__DOT__dut1__DOT__sign_sum;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sign_mag_add_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 256> sign_mag_add_tb__DOT__dut2__DOT__rom;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7f4328da__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsign_mag_add_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsign_mag_add_tb___024root(Vsign_mag_add_tb__Syms* symsp, const char* v__name);
    ~Vsign_mag_add_tb___024root();
    VL_UNCOPYABLE(Vsign_mag_add_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
