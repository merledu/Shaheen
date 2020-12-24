// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VShaheen_top_openram_cv__Syms.h"
#include "VShaheen_top_openram_cv.h"



// FUNCTIONS
VShaheen_top_openram_cv__Syms::VShaheen_top_openram_cv__Syms(VShaheen_top_openram_cv* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Shaheen_top_openram_cv__dccm.configure(this, name(), "Shaheen_top_openram_cv.dccm", "dccm", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Shaheen_top_openram_cv__iccm.configure(this, name(), "Shaheen_top_openram_cv.iccm", "iccm", -12, VerilatedScope::SCOPE_OTHER);
}
