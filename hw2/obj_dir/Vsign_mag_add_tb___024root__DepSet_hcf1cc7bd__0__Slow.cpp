// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_mag_add_tb.h for the primary calling header

#include "Vsign_mag_add_tb__pch.h"
#include "Vsign_mag_add_tb___024root.h"

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_static(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<16>/*511:0*/ Vsign_mag_add_tb__ConstPool__CONST_h6f284765_0;

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_initial__TOP(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 4, 256, 0, VL_CVT_PACK_STR_NW(16, Vsign_mag_add_tb__ConstPool__CONST_h6f284765_0)
                 ,  &(vlSelfRef.sign_mag_add_tb__DOT__dut2__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_final(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__stl(Vsign_mag_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsign_mag_add_tb___024root___eval_phase__stl(Vsign_mag_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_settle(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_settle\n"); );
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
            Vsign_mag_add_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sign_mag_add_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsign_mag_add_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__stl(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___dump_triggers__stl\n"); );
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

void Vsign_mag_add_tb___024root___act_sequent__TOP__0(Vsign_mag_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_stl(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsign_mag_add_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_triggers__stl(Vsign_mag_add_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsign_mag_add_tb___024root___eval_phase__stl(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsign_mag_add_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsign_mag_add_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__act(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sign_mag_add_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__nba(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sign_mag_add_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsign_mag_add_tb___024root___ctor_var_reset(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->sign_mag_add_tb__DOT__sum = VL_RAND_RESET_I(4);
    vlSelf->sign_mag_add_tb__DOT__data = VL_RAND_RESET_I(4);
    vlSelf->sign_mag_add_tb__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sign_mag_add_tb__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sign_mag_add_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sign_mag_add_tb__DOT__dut1__DOT__max = VL_RAND_RESET_I(3);
    vlSelf->sign_mag_add_tb__DOT__dut1__DOT__min = VL_RAND_RESET_I(3);
    vlSelf->sign_mag_add_tb__DOT__dut1__DOT__sign_sum = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->sign_mag_add_tb__DOT__dut2__DOT__rom[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vtrigprevexpr___TOP__sign_mag_add_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
