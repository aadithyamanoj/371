// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw1p1_tb.h for the primary calling header

#ifndef VERILATED_VHW1P1_TB___024ROOT_H_
#define VERILATED_VHW1P1_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhw1p1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhw1p1_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hw1p1_tb__DOT__clk;
    CData/*0:0*/ hw1p1_tb__DOT__reset;
    CData/*0:0*/ hw1p1_tb__DOT__x;
    CData/*0:0*/ hw1p1_tb__DOT__y;
    CData/*0:0*/ hw1p1_tb__DOT__dut__DOT__Q;
    CData/*0:0*/ hw1p1_tb__DOT__dut__DOT__C;
    CData/*0:0*/ __VdlyVal__hw1p1_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__hw1p1_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hw1p1_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h186368f3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhw1p1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhw1p1_tb___024root(Vhw1p1_tb__Syms* symsp, const char* v__name);
    ~Vhw1p1_tb___024root();
    VL_UNCOPYABLE(Vhw1p1_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
