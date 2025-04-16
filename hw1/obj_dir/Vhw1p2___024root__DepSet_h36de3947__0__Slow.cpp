// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p2.h for the primary calling header

#include "Vhw1p2__pch.h"
#include "Vhw1p2__Syms.h"
#include "Vhw1p2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p2___024root___dump_triggers__stl(Vhw1p2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhw1p2___024root___eval_triggers__stl(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhw1p2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
