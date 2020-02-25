// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop2.h for the primary calling header

#ifndef _VTop2___024unit_H_
#define _VTop2___024unit_H_

#include "verilated.h"

class VTop2__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTop2___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VTop2__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTop2___024unit& operator= (const VTop2___024unit&);  ///< Copying not allowed
    VTop2___024unit(const VTop2___024unit&);  ///< Copying not allowed
  public:
    VTop2___024unit(const char* name="TOP");
    ~VTop2___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTop2__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
