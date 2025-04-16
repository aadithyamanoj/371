// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p1_tb.h for the primary calling header

#include "Vhw1p1_tb__pch.h"
#include "Vhw1p1_tb___024root.h"

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_static(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_final(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__stl(Vhw1p1_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhw1p1_tb___024root___eval_phase__stl(Vhw1p1_tb___024root* vlSelf);

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_settle(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vhw1p1_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hw1p1_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhw1p1_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__stl(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vhw1p1_tb___024root___act_sequent__TOP__0(Vhw1p1_tb___024root* vlSelf);

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_stl(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhw1p1_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_triggers__stl(Vhw1p1_tb___024root* vlSelf);

VL_ATTR_COLD bool Vhw1p1_tb___024root___eval_phase__stl(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhw1p1_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vhw1p1_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__act(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hw1p1_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__nba(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hw1p1_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhw1p1_tb___024root___ctor_var_reset(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->hw1p1_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->hw1p1_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->hw1p1_tb__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->hw1p1_tb__DOT__y = VL_RAND_RESET_I(1);
    vlSelf->hw1p1_tb__DOT__dut__DOT__Q = VL_RAND_RESET_I(1);
    vlSelf->hw1p1_tb__DOT__dut__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__hw1p1_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__hw1p1_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__hw1p1_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
