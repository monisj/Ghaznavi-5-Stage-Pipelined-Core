// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTop2__Syms_H_
#define _VTop2__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTop2.h"
#include "VTop2___024unit.h"

// SYMS CLASS
class VTop2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTop2*                         TOPp;
    
    // CREATORS
    VTop2__Syms(VTop2* topp, const char* namep);
    ~VTop2__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
