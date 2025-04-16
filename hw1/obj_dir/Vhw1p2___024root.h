// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw1p2.h for the primary calling header

#ifndef VERILATED_VHW1P2___024ROOT_H_
#define VERILATED_VHW1P2___024ROOT_H_  // guard

#include "verilated.h"


class Vhw1p2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhw1p2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(in,0,0);
    VL_OUT8(out,0,0);
    CData/*2:0*/ hw1p2__DOT__ps;
    CData/*2:0*/ hw1p2__DOT__ns;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhw1p2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhw1p2___024root(Vhw1p2__Syms* symsp, const char* v__name);
    ~Vhw1p2___024root();
    VL_UNCOPYABLE(Vhw1p2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
