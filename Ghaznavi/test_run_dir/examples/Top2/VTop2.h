// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTop2_H_
#define _VTop2_H_

#include "verilated.h"

class VTop2__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTop2) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(io_instruction,31,0);
    VL_OUT(io_reg_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Top2__DOT__alucontrol_io_control,4,0);
    VL_SIG8(Top2__DOT__forward_io_forward_a,1,0);
    VL_SIG8(Top2__DOT__forward_io_forward_b,1,0);
    VL_SIG8(Top2__DOT__hazardDetection_io_ctrl_forward,0,0);
    VL_SIG8(Top2__DOT__branchforward_io_forward_a,3,0);
    VL_SIG8(Top2__DOT___T_79,0,0);
    VL_SIG8(Top2__DOT___T_86,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_Load,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_Store,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_Branch,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_I_Type,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_JALR,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_JAL,0,0);
    VL_SIG8(Top2__DOT__control__DOT__InstDecode_io_LUI,0,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode_io_Branch2,0,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel,1,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode_io_extend_sel,1,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel,1,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12,0,0);
    VL_SIG8(Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45,0,0);
    VL_SIG8(Top2__DOT__alu__DOT___T_32,0,0);
    VL_SIG8(Top2__DOT__alu__DOT___T_78,0,0);
    VL_SIG8(Top2__DOT__alu__DOT___GEN_11,1,0);
    VL_SIG8(Top2__DOT__alu__DOT___GEN_12,4,0);
    VL_SIG8(Top2__DOT__alucontrol__DOT___T_18,4,0);
    VL_SIG8(Top2__DOT__mem_wb__DOT__Regwr_Reg,0,0);
    VL_SIG8(Top2__DOT__mem_wb__DOT__MemtoReg_Reg,0,0);
    VL_SIG8(Top2__DOT__mem_wb__DOT__Rd_sel_Reg,4,0);
    VL_SIG8(Top2__DOT__ex_mem__DOT__Memwr_Reg,0,0);
    VL_SIG8(Top2__DOT__ex_mem__DOT__Regwr_Reg,0,0);
    VL_SIG8(Top2__DOT__ex_mem__DOT__MemtoReg_Reg,0,0);
    VL_SIG8(Top2__DOT__ex_mem__DOT__Rd_sel_Reg,4,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__rd_sel_r,4,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__rs1_sel_r,4,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__rs2_sel_r,4,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__func3_r,2,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__func7_r,0,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__MemWr_r,0,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__MemRd_r,0,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__RegWr_r,0,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__AluOp_r,2,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__OpA_sel_r,1,0);
    VL_SIG8(Top2__DOT__id_ex__DOT__OpB_sel_r,1,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_29,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_30,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_31,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_32,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___GEN_5,1,0);
    VL_SIG8(Top2__DOT__forward__DOT___GEN_6,1,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_43,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_44,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_45,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_53,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_54,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_57,0,0);
    VL_SIG8(Top2__DOT__forward__DOT___T_69,0,0);
    VL_SIG8(Top2__DOT__hazardDetection__DOT___T_37,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_41,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_42,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_43,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_44,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_45,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___GEN_3,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___GEN_4,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_68,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_72,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_74,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_77,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_79,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_80,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_91,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_95,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_109,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_115,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_127,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_142,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___GEN_14,2,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_177,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_182,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_184,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_185,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_209,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___T_229,0,0);
    VL_SIG8(Top2__DOT__branchforward__DOT___GEN_34,2,0);
    VL_SIG(Top2__DOT__register_io_WriteData,31,0);
    VL_SIG(Top2__DOT__register_io_rs1,31,0);
    VL_SIG(Top2__DOT__register_io_rs2,31,0);
    VL_SIG(Top2__DOT__alu_io_A,31,0);
    VL_SIG(Top2__DOT__alu_io_B,31,0);
    VL_SIG(Top2__DOT__immediate_io_I_Immediate,31,0);
    VL_SIG(Top2__DOT__PC_io_input,31,0);
    VL_SIG(Top2__DOT__DataMemory_io_Data,31,0);
    VL_SIG(Top2__DOT__JALR_io_A,31,0);
    VL_SIG(Top2__DOT__branchlogic_io_rs1_in,31,0);
    VL_SIG(Top2__DOT__branchlogic_io_rs2_in,31,0);
    VL_SIG(Top2__DOT___GEN_32,31,0);
    VL_SIG(Top2__DOT___GEN_33,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_0,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_1,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_2,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_3,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_4,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_5,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_6,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_7,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_8,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_9,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_10,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_11,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_12,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_13,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_14,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_15,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_16,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_17,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_18,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_19,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_20,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_21,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_22,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_23,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_24,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_25,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_26,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_27,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_28,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_29,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_30,31,0);
    VL_SIG(Top2__DOT__register__DOT__registers_c_31,31,0);
    VL_SIG(Top2__DOT__alu__DOT___GEN_20,31,0);
    VL_SIG(Top2__DOT__immediate__DOT__output2,30,0);
    VL_SIG(Top2__DOT__immediate__DOT__sbt13,31,0);
    VL_SIG(Top2__DOT__immediate__DOT__sbt19,31,0);
    VL_SIG(Top2__DOT__PC__DOT__pc1,31,0);
    VL_SIG(Top2__DOT__mem_wb__DOT__data_mem_Reg,31,0);
    VL_SIG(Top2__DOT__mem_wb__DOT__Aluout_Reg,31,0);
    VL_SIG(Top2__DOT__ex_mem__DOT__Rs2_Reg,31,0);
    VL_SIG(Top2__DOT__ex_mem__DOT__Alu_out_Reg,31,0);
    VL_SIG(Top2__DOT__id_ex__DOT__pcr,31,0);
    VL_SIG(Top2__DOT__id_ex__DOT__pc4r,31,0);
    VL_SIG(Top2__DOT__id_ex__DOT__rs1r,31,0);
    VL_SIG(Top2__DOT__id_ex__DOT__rs2r,31,0);
    VL_SIG(Top2__DOT__id_ex__DOT__immr,31,0);
    VL_SIG(Top2__DOT__if_id__DOT__pc_reg,31,0);
    VL_SIG(Top2__DOT__if_id__DOT__pc4_reg,31,0);
    VL_SIG(Top2__DOT__if_id__DOT__inst_reg,31,0);
    VL_SIG64(Top2__DOT__alu__DOT___GEN_22,62,0);
    VL_SIG(Top2__DOT__instmem__DOT__mem[1024],31,0);
    VL_SIG(Top2__DOT__DataMemory__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop2__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTop2& operator= (const VTop2&);  ///< Copying not allowed
    VTop2(const VTop2&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTop2(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop2();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop2__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop2__Syms* symsp, bool first);
  private:
    static QData _change_request(VTop2__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VTop2__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTop2__Syms* __restrict vlSymsp);
    static void _eval_settle(VTop2__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VTop2__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTop2__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTop2__Syms* __restrict vlSymsp);
    static void traceChgThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
