// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhw1p2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhw1p2::Vhw1p2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhw1p2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhw1p2::Vhw1p2(const char* _vcname__)
    : Vhw1p2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhw1p2::~Vhw1p2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhw1p2___024root___eval_debug_assertions(Vhw1p2___024root* vlSelf);
#endif  // VL_DEBUG
void Vhw1p2___024root___eval_static(Vhw1p2___024root* vlSelf);
void Vhw1p2___024root___eval_initial(Vhw1p2___024root* vlSelf);
void Vhw1p2___024root___eval_settle(Vhw1p2___024root* vlSelf);
void Vhw1p2___024root___eval(Vhw1p2___024root* vlSelf);

void Vhw1p2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhw1p2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhw1p2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhw1p2___024root___eval_static(&(vlSymsp->TOP));
        Vhw1p2___024root___eval_initial(&(vlSymsp->TOP));
        Vhw1p2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhw1p2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhw1p2::eventsPending() { return false; }

uint64_t Vhw1p2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhw1p2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhw1p2___024root___eval_final(Vhw1p2___024root* vlSelf);

VL_ATTR_COLD void Vhw1p2::final() {
    Vhw1p2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhw1p2::hierName() const { return vlSymsp->name(); }
const char* Vhw1p2::modelName() const { return "Vhw1p2"; }
unsigned Vhw1p2::threads() const { return 1; }
void Vhw1p2::prepareClone() const { contextp()->prepareClone(); }
void Vhw1p2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhw1p2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhw1p2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhw1p2___024root__trace_init_top(Vhw1p2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhw1p2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1p2___024root*>(voidSelf);
    Vhw1p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhw1p2___024root__trace_decl_types(tracep);
    Vhw1p2___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhw1p2___024root__trace_register(Vhw1p2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw1p2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhw1p2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhw1p2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
