// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1p2.h for the primary calling header

#include "Vhw1p2__pch.h"
#include "Vhw1p2___024root.h"

void Vhw1p2___024root___ico_sequent__TOP__0(Vhw1p2___024root* vlSelf);

void Vhw1p2___024root___eval_ico(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vhw1p2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> Vhw1p2__ConstPool__TABLE_h38fe9da8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vhw1p2__ConstPool__TABLE_hdf134e46_0;

VL_INLINE_OPT void Vhw1p2___024root___ico_sequent__TOP__0(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.in) << 3U) | (IData)(vlSelfRef.hw1p2__DOT__ps));
    vlSelfRef.hw1p2__DOT__ns = Vhw1p2__ConstPool__TABLE_h38fe9da8_0
        [__Vtableidx1];
    vlSelfRef.out = Vhw1p2__ConstPool__TABLE_hdf134e46_0
        [__Vtableidx1];
}

void Vhw1p2___024root___eval_triggers__ico(Vhw1p2___024root* vlSelf);

bool Vhw1p2___024root___eval_phase__ico(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhw1p2___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vhw1p2___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhw1p2___024root___eval_act(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vhw1p2___024root___nba_sequent__TOP__0(Vhw1p2___024root* vlSelf);

void Vhw1p2___024root___eval_nba(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhw1p2___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhw1p2___024root___nba_sequent__TOP__0(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.hw1p2__DOT__ps = ((IData)(vlSelfRef.reset)
                                 ? 0U : (IData)(vlSelfRef.hw1p2__DOT__ns));
    __Vtableidx1 = (((IData)(vlSelfRef.in) << 3U) | (IData)(vlSelfRef.hw1p2__DOT__ps));
    vlSelfRef.hw1p2__DOT__ns = Vhw1p2__ConstPool__TABLE_h38fe9da8_0
        [__Vtableidx1];
    vlSelfRef.out = Vhw1p2__ConstPool__TABLE_hdf134e46_0
        [__Vtableidx1];
}

void Vhw1p2___024root___eval_triggers__act(Vhw1p2___024root* vlSelf);

bool Vhw1p2___024root___eval_phase__act(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhw1p2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhw1p2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhw1p2___024root___eval_phase__nba(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhw1p2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p2___024root___dump_triggers__ico(Vhw1p2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p2___024root___dump_triggers__nba(Vhw1p2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1p2___024root___dump_triggers__act(Vhw1p2___024root* vlSelf);
#endif  // VL_DEBUG

void Vhw1p2___024root___eval(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vhw1p2___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("hw1p2.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vhw1p2___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhw1p2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hw1p2.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhw1p2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hw1p2.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhw1p2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhw1p2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhw1p2___024root___eval_debug_assertions(Vhw1p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1p2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.in & 0xfeU))) {
        Verilated::overWidthError("in");}
}
#endif  // VL_DEBUG
