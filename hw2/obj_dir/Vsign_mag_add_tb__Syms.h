// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIGN_MAG_ADD_TB__SYMS_H_
#define VERILATED_VSIGN_MAG_ADD_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsign_mag_add_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsign_mag_add_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsign_mag_add_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsign_mag_add_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsign_mag_add_tb___024root     TOP;

    // CONSTRUCTORS
    Vsign_mag_add_tb__Syms(VerilatedContext* contextp, const char* namep, Vsign_mag_add_tb* modelp);
    ~Vsign_mag_add_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
