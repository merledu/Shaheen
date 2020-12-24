// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSHAHEEN_TOP_OPENRAM_CV__SYMS_H_
#define _VSHAHEEN_TOP_OPENRAM_CV__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VShaheen_top_openram_cv.h"

// SYMS CLASS
class VShaheen_top_openram_cv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VShaheen_top_openram_cv*       TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Shaheen_top_openram_cv__dccm;
    VerilatedScope __Vscope_Shaheen_top_openram_cv__iccm;
    
    // CREATORS
    VShaheen_top_openram_cv__Syms(VShaheen_top_openram_cv* topp, const char* namep);
    ~VShaheen_top_openram_cv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
