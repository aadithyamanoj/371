// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p1_tb.h for the primary calling header

#include "Vhw1p1_tb__pch.h"
#include "Vhw1p1_tb___024root.h"

VL_ATTR_COLD void Vhw1p1_tb___024root___eval_initial__TOP(Vhw1p1_tb___024root* vlSelf);
VlCoroutine Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__0(Vhw1p1_tb___024root* vlSelf);
VlCoroutine Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__1(Vhw1p1_tb___024root* vlSelf);

void Vhw1p1_tb___024root___eval_initial(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhw1p1_tb___024root___eval_initial__TOP(vlSelf);
    Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__hw1p1_tb__DOT__clk__0 
        = vlSelfRef.hw1p1_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__0(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hw1p1_tb__DOT__reset = 1U;
    vlSelfRef.hw1p1_tb__DOT__x = 0U;
    vlSelfRef.hw1p1_tb__DOT__y = 0U;
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         16);
    vlSelfRef.hw1p1_tb__DOT__reset = 0U;
    vlSelfRef.hw1p1_tb__DOT__x = 0U;
    vlSelfRef.hw1p1_tb__DOT__y = 0U;
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         17);
    vlSelfRef.hw1p1_tb__DOT__reset = 0U;
    vlSelfRef.hw1p1_tb__DOT__x = 0U;
    vlSelfRef.hw1p1_tb__DOT__y = 1U;
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         18);
    vlSelfRef.hw1p1_tb__DOT__reset = 0U;
    vlSelfRef.hw1p1_tb__DOT__x = 1U;
    vlSelfRef.hw1p1_tb__DOT__y = 0U;
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         19);
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         22);
    vlSelfRef.hw1p1_tb__DOT__reset = 0U;
    vlSelfRef.hw1p1_tb__DOT__x = 1U;
    vlSelfRef.hw1p1_tb__DOT__y = 1U;
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         23);
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         24);
    co_await vlSelfRef.__VtrigSched_h186368f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hw1p1_tb.clk)", 
                                                         "hw1p1_tb.sv", 
                                                         25);
    VL_FINISH_MT("hw1p1_tb.sv", 26, "");
}

VL_INLINE_OPT VlCoroutine Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__1(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "hw1p1_tb.sv", 
                                             13);
        vlSelfRef.__VdlyVal__hw1p1_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.hw1p1_tb__DOT__clk)));
        vlSelfRef.__VdlySet__hw1p1_tb__DOT__clk__v0 = 1U;
    }
}

void Vhw1p1_tb___024root___act_sequent__TOP__0(Vhw1p1_tb___024root* vlSelf);

void Vhw1p1_tb___024root___eval_act(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhw1p1_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhw1p1_tb___024root___act_sequent__TOP__0(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hw1p1_tb__DOT__dut__DOT__C = (((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                                             & (IData)(vlSelfRef.hw1p1_tb__DOT__y)) 
                                            | ((IData)(vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q) 
                                               & ((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                                                  ^ (IData)(vlSelfRef.hw1p1_tb__DOT__y))));
}

void Vhw1p1_tb___024root___nba_sequent__TOP__0(Vhw1p1_tb___024root* vlSelf);
void Vhw1p1_tb___024root___nba_sequent__TOP__1(Vhw1p1_tb___024root* vlSelf);

void Vhw1p1_tb___024root___eval_nba(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhw1p1_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhw1p1_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vhw1p1_tb___024root___nba_sequent__TOP__0(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__hw1p1_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__hw1p1_tb__DOT__clk__v0 = 0U;
        vlSelfRef.hw1p1_tb__DOT__clk = vlSelfRef.__VdlyVal__hw1p1_tb__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vhw1p1_tb___024root___nba_sequent__TOP__1(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q = ((~ (IData)(vlSelfRef.hw1p1_tb__DOT__reset)) 
                                            & (IData)(vlSelfRef.hw1p1_tb__DOT__dut__DOT__C));
    vlSelfRef.hw1p1_tb__DOT__dut__DOT__C = (((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                                             & (IData)(vlSelfRef.hw1p1_tb__DOT__y)) 
                                            | ((IData)(vlSelfRef.hw1p1_tb__DOT__dut__DOT__Q) 
                                               & ((IData)(vlSelfRef.hw1p1_tb__DOT__x) 
                                                  ^ (IData)(vlSelfRef.hw1p1_tb__DOT__y))));
}

void Vhw1p1_tb___024root___timing_commit(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h186368f3__0.commit(
                                                   "@(posedge hw1p1_tb.clk)");
    }
}

void Vhw1p1_tb___024root___timing_resume(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h186368f3__0.resume(
                                                   "@(posedge hw1p1_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhw1p1_tb___024root___eval_triggers__act(Vhw1p1_tb___024root* vlSelf);

bool Vhw1p1_tb___024root___eval_phase__act(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhw1p1_tb___024root___eval_triggers__act(vlSelf);
    Vhw1p1_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhw1p1_tb___024root___timing_resume(vlSelf);
        Vhw1p1_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhw1p1_tb___024root___eval_phase__nba(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhw1p1_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__nba(Vhw1p1_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p1_tb___024root___dump_triggers__act(Vhw1p1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhw1p1_tb___024root___eval(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval\n"); );
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
            Vhw1p1_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hw1p1_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhw1p1_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hw1p1_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhw1p1_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhw1p1_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhw1p1_tb___024root___eval_debug_assertions(Vhw1p1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p1_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
