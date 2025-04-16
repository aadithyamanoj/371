// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_mag_add_tb.h for the primary calling header

#include "Vsign_mag_add_tb__pch.h"
#include "Vsign_mag_add_tb___024root.h"

VL_ATTR_COLD void Vsign_mag_add_tb___024root___eval_initial__TOP(Vsign_mag_add_tb___024root* vlSelf);
VlCoroutine Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__0(Vsign_mag_add_tb___024root* vlSelf);
VlCoroutine Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__1(Vsign_mag_add_tb___024root* vlSelf);

void Vsign_mag_add_tb___024root___eval_initial(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsign_mag_add_tb___024root___eval_initial__TOP(vlSelf);
    Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sign_mag_add_tb__DOT__clk__0 
        = vlSelfRef.sign_mag_add_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__0(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sign_mag_add_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "sign_mag_add_tb.sv", 
                                             13);
        vlSelfRef.sign_mag_add_tb__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.sign_mag_add_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__1(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Time\t\t a      b      sum\n",0);
    vlSelfRef.sign_mag_add_tb__DOT__a = 3U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0U;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         32);
    VL_WRITEF_NX("%3#\n[Test 1] +3 + 0          : a = %b, b = %b, sum = %b\n[Test 1] +3 + 0          : data = %b\n",0,
                 8,(((IData)(vlSelfRef.sign_mag_add_tb__DOT__a) 
                     << 4U) | (IData)(vlSelfRef.sign_mag_add_tb__DOT__b)),
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__a),
                 4,vlSelfRef.sign_mag_add_tb__DOT__b,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__sum),
                 4,vlSelfRef.sign_mag_add_tb__DOT__data);
    vlSelfRef.sign_mag_add_tb__DOT__a = 4U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0xcU;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         40);
    VL_WRITEF_NX("[Test 2] +4 + (-4) = 0    : a = %b, b = %b, sum = %b\n[Test 2] +4 + (-4) = 0    : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 6U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0xbU;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         47);
    VL_WRITEF_NX("[Test 3] +6 + (-3) > 0    : a = %b, b = %b, sum = %b\n[Test 3] +6 + (-3) > 0    : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 2U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0xdU;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         54);
    VL_WRITEF_NX("[Test 4] +2 + (-5) < 0    : a = %b, b = %b, sum = %b\n[Test 4] +2 + (-5) < 0    : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 2U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 3U;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         61);
    VL_WRITEF_NX("[Test 5] +2 + +3 (valid)   : a = %b, b = %b, sum = %b\n[Test 5] +2 + +3 (valid)   : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 6U;
    vlSelfRef.sign_mag_add_tb__DOT__b = 6U;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         68);
    VL_WRITEF_NX("[Test 6] +6 + +6 (overflow) : a = %b, b = %b, sum = %b\n[Test 6] +6 + +6 (overflow) : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 0xaU;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0xbU;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         75);
    VL_WRITEF_NX("[Test 7] -2 + (-3) valid  : a = %b, b = %b, sum = %b\n[Test 7] -2 + (-3) valid  : data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    vlSelfRef.sign_mag_add_tb__DOT__a = 0xeU;
    vlSelfRef.sign_mag_add_tb__DOT__b = 0xeU;
    co_await vlSelfRef.__VtrigSched_h7f4328da__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sign_mag_add_tb.clk)", 
                                                         "sign_mag_add_tb.sv", 
                                                         82);
    VL_WRITEF_NX("[Test 8] -6 + (-6) overflow: a = %b, b = %b, sum = %b\n[Test 8] -6 + (-6) overflow: data = %b\n",0,
                 4,vlSelfRef.sign_mag_add_tb__DOT__a,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__b),
                 4,vlSelfRef.sign_mag_add_tb__DOT__sum,
                 4,(IData)(vlSelfRef.sign_mag_add_tb__DOT__data));
    VL_FINISH_MT("sign_mag_add_tb.sv", 85, "");
}

void Vsign_mag_add_tb___024root___act_sequent__TOP__0(Vsign_mag_add_tb___024root* vlSelf);

void Vsign_mag_add_tb___024root___eval_act(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsign_mag_add_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsign_mag_add_tb___024root___act_sequent__TOP__0(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_a;
    sign_mag_add_tb__DOT__dut1__DOT__mag_a = 0;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_b;
    sign_mag_add_tb__DOT__dut1__DOT__mag_b = 0;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_sum;
    sign_mag_add_tb__DOT__dut1__DOT__mag_sum = 0;
    CData/*0:0*/ sign_mag_add_tb__DOT__dut1__DOT__sign_a;
    sign_mag_add_tb__DOT__dut1__DOT__sign_a = 0;
    CData/*0:0*/ sign_mag_add_tb__DOT__dut1__DOT__sign_b;
    sign_mag_add_tb__DOT__dut1__DOT__sign_b = 0;
    // Body
    sign_mag_add_tb__DOT__dut1__DOT__mag_a = (7U & (IData)(vlSelfRef.sign_mag_add_tb__DOT__a));
    sign_mag_add_tb__DOT__dut1__DOT__mag_b = (7U & (IData)(vlSelfRef.sign_mag_add_tb__DOT__b));
    sign_mag_add_tb__DOT__dut1__DOT__sign_a = (1U & 
                                               ((IData)(vlSelfRef.sign_mag_add_tb__DOT__a) 
                                                >> 3U));
    sign_mag_add_tb__DOT__dut1__DOT__sign_b = (1U & 
                                               ((IData)(vlSelfRef.sign_mag_add_tb__DOT__b) 
                                                >> 3U));
    if (((IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_a) 
         > (IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_b))) {
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_a;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_b;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum 
            = sign_mag_add_tb__DOT__dut1__DOT__sign_a;
    } else {
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_b;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_a;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum 
            = sign_mag_add_tb__DOT__dut1__DOT__sign_b;
    }
    sign_mag_add_tb__DOT__dut1__DOT__mag_sum = (7U 
                                                & (((IData)(sign_mag_add_tb__DOT__dut1__DOT__sign_a) 
                                                    == (IData)(sign_mag_add_tb__DOT__dut1__DOT__sign_b))
                                                    ? 
                                                   ((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max) 
                                                    + (IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min))
                                                    : 
                                                   ((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max) 
                                                    - (IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min))));
    vlSelfRef.sign_mag_add_tb__DOT__sum = (((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum) 
                                            << 3U) 
                                           | (IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_sum));
}

void Vsign_mag_add_tb___024root___nba_sequent__TOP__0(Vsign_mag_add_tb___024root* vlSelf);

void Vsign_mag_add_tb___024root___eval_nba(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsign_mag_add_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsign_mag_add_tb___024root___nba_sequent__TOP__0(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_a;
    sign_mag_add_tb__DOT__dut1__DOT__mag_a = 0;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_b;
    sign_mag_add_tb__DOT__dut1__DOT__mag_b = 0;
    CData/*2:0*/ sign_mag_add_tb__DOT__dut1__DOT__mag_sum;
    sign_mag_add_tb__DOT__dut1__DOT__mag_sum = 0;
    CData/*0:0*/ sign_mag_add_tb__DOT__dut1__DOT__sign_a;
    sign_mag_add_tb__DOT__dut1__DOT__sign_a = 0;
    CData/*0:0*/ sign_mag_add_tb__DOT__dut1__DOT__sign_b;
    sign_mag_add_tb__DOT__dut1__DOT__sign_b = 0;
    // Body
    sign_mag_add_tb__DOT__dut1__DOT__mag_a = (7U & (IData)(vlSelfRef.sign_mag_add_tb__DOT__a));
    sign_mag_add_tb__DOT__dut1__DOT__mag_b = (7U & (IData)(vlSelfRef.sign_mag_add_tb__DOT__b));
    sign_mag_add_tb__DOT__dut1__DOT__sign_a = (1U & 
                                               ((IData)(vlSelfRef.sign_mag_add_tb__DOT__a) 
                                                >> 3U));
    sign_mag_add_tb__DOT__dut1__DOT__sign_b = (1U & 
                                               ((IData)(vlSelfRef.sign_mag_add_tb__DOT__b) 
                                                >> 3U));
    if (((IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_a) 
         > (IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_b))) {
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_a;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_b;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum 
            = sign_mag_add_tb__DOT__dut1__DOT__sign_a;
    } else {
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_b;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min 
            = sign_mag_add_tb__DOT__dut1__DOT__mag_a;
        vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum 
            = sign_mag_add_tb__DOT__dut1__DOT__sign_b;
    }
    sign_mag_add_tb__DOT__dut1__DOT__mag_sum = (7U 
                                                & (((IData)(sign_mag_add_tb__DOT__dut1__DOT__sign_a) 
                                                    == (IData)(sign_mag_add_tb__DOT__dut1__DOT__sign_b))
                                                    ? 
                                                   ((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max) 
                                                    + (IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min))
                                                    : 
                                                   ((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__max) 
                                                    - (IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__min))));
    vlSelfRef.sign_mag_add_tb__DOT__sum = (((IData)(vlSelfRef.sign_mag_add_tb__DOT__dut1__DOT__sign_sum) 
                                            << 3U) 
                                           | (IData)(sign_mag_add_tb__DOT__dut1__DOT__mag_sum));
    vlSelfRef.sign_mag_add_tb__DOT__data = vlSelfRef.sign_mag_add_tb__DOT__dut2__DOT__rom
        [(((IData)(vlSelfRef.sign_mag_add_tb__DOT__a) 
           << 4U) | (IData)(vlSelfRef.sign_mag_add_tb__DOT__b))];
}

void Vsign_mag_add_tb___024root___timing_commit(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7f4328da__0.commit(
                                                   "@(posedge sign_mag_add_tb.clk)");
    }
}

void Vsign_mag_add_tb___024root___timing_resume(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7f4328da__0.resume(
                                                   "@(posedge sign_mag_add_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsign_mag_add_tb___024root___eval_triggers__act(Vsign_mag_add_tb___024root* vlSelf);

bool Vsign_mag_add_tb___024root___eval_phase__act(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsign_mag_add_tb___024root___eval_triggers__act(vlSelf);
    Vsign_mag_add_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsign_mag_add_tb___024root___timing_resume(vlSelf);
        Vsign_mag_add_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsign_mag_add_tb___024root___eval_phase__nba(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsign_mag_add_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__nba(Vsign_mag_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsign_mag_add_tb___024root___dump_triggers__act(Vsign_mag_add_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsign_mag_add_tb___024root___eval(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsign_mag_add_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sign_mag_add_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsign_mag_add_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sign_mag_add_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsign_mag_add_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsign_mag_add_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsign_mag_add_tb___024root___eval_debug_assertions(Vsign_mag_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsign_mag_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_mag_add_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
