// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p1_tb.h for the primary calling header

#include "Vhw1p1_tb__pch.h"
#include "Vhw1p1_tb__Syms.h"
#include "Vhw1p1_tb___024root.h"

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_initial__TOP(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hw1p1_tb__DOT__clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__stl(Vhw1p1_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_triggers__stl(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhw1p1_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
