// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_mag_add_tb.h for the primary calling header

#include "Vsign_mag_add_tb__pch.h"
#include "Vsign_mag_add_tb__Syms.h"
#include "Vsign_mag_add_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__act(Vsign_mag_add_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsign_mag_add_tb___024root___eval_triggers__act(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.sign_mag_add_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sign_mag_add_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__sign_mag_add_tb__DOT__clk__0 
        = vlSelfRef.sign_mag_add_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsign_mag_add_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
