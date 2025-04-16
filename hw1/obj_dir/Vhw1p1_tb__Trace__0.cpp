// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw1p1_tb__Syms.h"


void Vhw1p1_tb___024root__trace_chg_0_sub_0(Vhw1p1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhw1p1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root__trace_chg_0\n"); );
    // Init
    Vhw1p1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1p1_tb___024root*>(voidSelf);
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhw1p1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhw1p1_tb___024root__trace_chg_0_sub_0(Vhw1p1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.hw1p1_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.hw1p1_tb__DOT__reset));
    bufp->chgBit(oldp+2,(vlSelfRef.hw1p1_tb__DOT__x));
    bufp->chgBit(oldp+3,(vlSelfRef.hw1p1_tb__DOT__y));
    bufp->chgBit(oldp+4,((((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                           ^ (IData)(vlSelfRef.hw1p1_tb__DOT__y)) 
                          ^ (IData)(vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q))));
    bufp->chgBit(oldp+5,(vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q));
    bufp->chgBit(oldp+6,((((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                           & (IData)(vlSelfRef.hw1p1_tb__DOT__y)) 
                          | ((IData)(vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q) 
                             & ((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                                ^ (IData)(vlSelfRef.hw1p1_tb__DOT__y))))));
}

void Vhw1p1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root__trace_cleanup\n"); );
    // Init
    Vhw1p1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1p1_tb___024root*>(voidSelf);
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
