// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p1_tb.h for the primary calling header

#include "Vhw1p1_tb__pch.h"
#include "Vhw1p1_tb__Syms.h"
#include "Vhw1p1_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__act(Vhw1p1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhw1p1_tb___024root___eval_triggers__act(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.hw1p1_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hw1p1_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__hw1p1_tb__DOT__clk__0 
        = vlSelfRef.hw1p1_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhw1p1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
