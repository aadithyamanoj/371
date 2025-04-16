// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsign_mag_add_tb__pch.h"

//============================================================
// Constructors

Vsign_mag_add_tb::Vsign_mag_add_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsign_mag_add_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsign_mag_add_tb::Vsign_mag_add_tb(const char* _vcname__)
    : Vsign_mag_add_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsign_mag_add_tb::~Vsign_mag_add_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsign_mag_add_tb___024root___eval_debug_assertions(Vsign_mag_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsign_mag_add_tb___024root___eval_static(Vsign_mag_add_tb___024root* vlSelf);
void Vsign_mag_add_tb___024root___eval_initial(Vsign_mag_add_tb___024root* vlSelf);
void Vsign_mag_add_tb___024root___eval_settle(Vsign_mag_add_tb___024root* vlSelf);
void Vsign_mag_add_tb___024root___eval(Vsign_mag_add_tb___024root* vlSelf);

void Vsign_mag_add_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsign_mag_add_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsign_mag_add_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsign_mag_add_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsign_mag_add_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsign_mag_add_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsign_mag_add_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsign_mag_add_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsign_mag_add_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsign_mag_add_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsign_mag_add_tb___024root___eval_final(Vsign_mag_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vsign_mag_add_tb::final() {
    Vsign_mag_add_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsign_mag_add_tb::hierName() const { return vlSymsp->name(); }
const char* Vsign_mag_add_tb::modelName() const { return "Vsign_mag_add_tb"; }
unsigned Vsign_mag_add_tb::threads() const { return 1; }
void Vsign_mag_add_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsign_mag_add_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
