// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop2__Syms.h"


//======================

void VTop2::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop2* t=(VTop2*)userthis;
    VTop2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop2::traceChgThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop2::traceChgThis__2(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
			     & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
				& (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)))));
	vcdp->chgBit  (c+2,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2));
	vcdp->chgBit  (c+3,(((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
			     & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load))));
	vcdp->chgBit  (c+4,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
			     | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
				| ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
				   & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
				      & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
					 | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
					    | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
					       | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI))))))))));
	vcdp->chgBus  (c+5,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
			      ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
				       ? 4U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
					        ? 5U
					        : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
						       ? 3U
						       : 
						      ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
						        ? 6U
						        : 0U))))))))),3);
	vcdp->chgBus  (c+6,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel),2);
	vcdp->chgBit  (c+7,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45));
	vcdp->chgBus  (c+8,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel),2);
	vcdp->chgBus  (c+9,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel),2);
	vcdp->chgBus  (c+10,(vlTOPp->Top2__DOT__register_io_WriteData),32);
	vcdp->chgBus  (c+11,(vlTOPp->Top2__DOT__register_io_rs1),32);
	vcdp->chgBus  (c+12,(vlTOPp->Top2__DOT__register_io_rs2),32);
	vcdp->chgBus  (c+13,(vlTOPp->Top2__DOT__alu_io_A),32);
	vcdp->chgBus  (c+14,(vlTOPp->Top2__DOT__alu_io_B),32);
	vcdp->chgBus  (c+15,((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBus  (c+16,(vlTOPp->Top2__DOT__alucontrol_io_control),5);
	vcdp->chgBus  (c+17,(vlTOPp->Top2__DOT__immediate_io_I_Immediate),32);
	vcdp->chgBus  (c+18,(((0x80000000U & (vlTOPp->Top2__DOT__immediate__DOT__output2 
					      << 1U)) 
			      | vlTOPp->Top2__DOT__immediate__DOT__output2)),32);
	vcdp->chgBus  (c+19,((vlTOPp->Top2__DOT__immediate__DOT__sbt13 
			      + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)),32);
	vcdp->chgBus  (c+20,((vlTOPp->Top2__DOT__immediate__DOT__sbt19 
			      + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)),32);
	vcdp->chgBus  (c+21,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_79)
				       ? (vlTOPp->Top2__DOT__immediate__DOT__sbt13 
					  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)
				       : ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
					   ? 0U : ((IData)(4U) 
						   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? (vlTOPp->Top2__DOT__immediate__DOT__sbt19 
					  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)
				       : ((3U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					   ? (0xfffffffeU 
					      & (vlTOPp->Top2__DOT__JALR_io_A 
						 + vlTOPp->Top2__DOT__immediate_io_I_Immediate))
					   : ((0U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					       ? ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
						   ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
						   : 
						  ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
						    ? 0U
						    : 
						   ((IData)(4U) 
						    + vlTOPp->Top2__DOT__PC__DOT__pc1)))
					       : 0U)))))),32);
	vcdp->chgBus  (c+22,(vlTOPp->Top2__DOT__instmem__DOT__mem
			     [(0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					 >> 2U))]),32);
	vcdp->chgBus  (c+23,(vlTOPp->Top2__DOT__DataMemory_io_Data),32);
	vcdp->chgBus  (c+24,(((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
			       ? ((1U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
				   ? vlTOPp->Top2__DOT__register_io_WriteData
				   : ((2U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
				       ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
				       : vlTOPp->Top2__DOT__id_ex__DOT__rs2r))
			       : ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
				   ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
				   : ((0U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
				       ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
				       : ((1U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
					   ? vlTOPp->Top2__DOT__register_io_WriteData
					   : ((2U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
					       ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
					       : vlTOPp->Top2__DOT__id_ex__DOT__rs2r)))))),32);
	vcdp->chgBus  (c+25,(((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
			       ? ((3U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				   ? ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45)
				       ? (IData)((VL_ULL(0x3fffffffffff) 
						  & ((QData)((IData)(
								     ((((0x80000000U 
									 & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
									 ? 0x7ffU
									 : 0U) 
								       << 0x14U) 
								      | (0xfffffU 
									 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
									    >> 0xcU))))) 
						     << 0xcU)))
				       : 0U) : 0U) : 
			      ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
			        ? ((0x80000000U & (vlTOPp->Top2__DOT__immediate__DOT__output2 
						   << 1U)) 
				   | vlTOPp->Top2__DOT__immediate__DOT__output2)
			        : vlTOPp->Top2__DOT__immediate_io_I_Immediate))),32);
	vcdp->chgBus  (c+26,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0xfU))))
			       ? vlTOPp->Top2__DOT__register_io_WriteData
			       : vlTOPp->Top2__DOT__register_io_rs1)),32);
	vcdp->chgBus  (c+27,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U))))
			       ? vlTOPp->Top2__DOT__register_io_WriteData
			       : vlTOPp->Top2__DOT__register_io_rs2)),32);
	vcdp->chgBit  (c+28,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
				    & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store))))));
	vcdp->chgBit  (c+29,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)))));
	vcdp->chgBit  (c+30,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
				    | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
				       & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
					  & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
					     | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
						| ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
						   | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)))))))))));
	vcdp->chgBus  (c+31,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? 0U : ((0x33U == (0x7fU 
						  & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
				        ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
						 ? 4U
						 : 
						((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
						  ? 5U
						  : 
						 ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
						   ? 2U
						   : 
						  ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
						       ? 6U
						       : 0U)))))))))),3);
	vcdp->chgBus  (c+32,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? 0U : (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))),2);
	vcdp->chgBit  (c+33,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45))));
	vcdp->chgBus  (c+34,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT___GEN_33
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_79)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
					        ? ((IData)(vlTOPp->Top2__DOT___T_86)
						    ? 0U
						    : vlTOPp->Top2__DOT___GEN_33)
					        : vlTOPp->Top2__DOT___GEN_33))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_33))))),32);
	vcdp->chgBus  (c+35,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? ((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_79)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
					        ? ((IData)(vlTOPp->Top2__DOT___T_86)
						    ? 0U
						    : 
						   ((IData)(4U) 
						    + vlTOPp->Top2__DOT__PC__DOT__pc1))
					        : ((IData)(4U) 
						   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : ((IData)(4U) 
						   + vlTOPp->Top2__DOT__PC__DOT__pc1)))))),32);
	vcdp->chgBus  (c+36,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT___GEN_32
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_79)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
					        ? ((IData)(vlTOPp->Top2__DOT___T_86)
						    ? 0U
						    : vlTOPp->Top2__DOT___GEN_32)
					        : vlTOPp->Top2__DOT___GEN_32))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_32))))),32);
	vcdp->chgBus  (c+37,(vlTOPp->Top2__DOT__JALR_io_A),32);
	vcdp->chgBus  (c+38,((0xfffffffeU & (vlTOPp->Top2__DOT__JALR_io_A 
					     + vlTOPp->Top2__DOT__immediate_io_I_Immediate))),32);
	vcdp->chgBus  (c+39,(vlTOPp->Top2__DOT__forward_io_forward_a),2);
	vcdp->chgBus  (c+40,(vlTOPp->Top2__DOT__forward_io_forward_b),2);
	vcdp->chgBit  (c+41,(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward));
	vcdp->chgBus  (c+42,(vlTOPp->Top2__DOT__branchlogic_io_rs1_in),32);
	vcdp->chgBus  (c+43,(vlTOPp->Top2__DOT__branchlogic_io_rs2_in),32);
	vcdp->chgBit  (c+44,(((0U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					    >> 0xcU)))
			       ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
				  == vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
			       : ((1U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						>> 0xcU)))
				   ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
				      != vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
				   : ((4U == (7U & 
					      (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0xcU)))
				       ? VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
				       : ((5U == (7U 
						  & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						     >> 0xcU)))
					   ? VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
					   : ((6U == 
					       (7U 
						& (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						   >> 0xcU)))
					       ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
						  < vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
					       : ((7U 
						   == 
						   (7U 
						    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						       >> 0xcU))) 
						  & (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
						     >= vlTOPp->Top2__DOT__branchlogic_io_rs2_in)))))))));
	vcdp->chgBus  (c+45,(vlTOPp->Top2__DOT__branchforward_io_forward_a),4);
	vcdp->chgBus  (c+46,(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34),4);
	vcdp->chgBit  (c+47,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load));
	vcdp->chgBit  (c+48,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store));
	vcdp->chgBit  (c+49,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch));
	vcdp->chgBit  (c+50,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type));
	vcdp->chgBit  (c+51,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR));
	vcdp->chgBit  (c+52,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL));
	vcdp->chgBit  (c+53,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI));
	vcdp->chgBus  (c+54,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45),2);
	vcdp->chgBus  (c+55,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+56,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+57,(vlTOPp->Top2__DOT__immediate__DOT__sbt13),32);
	vcdp->chgBus  (c+58,(vlTOPp->Top2__DOT__immediate__DOT__sbt19),32);
	vcdp->chgBus  (c+59,((vlTOPp->Top2__DOT__JALR_io_A 
			      + vlTOPp->Top2__DOT__immediate_io_I_Immediate)),32);
	vcdp->chgQuad (c+60,((VL_ULL(0xfffffffe) & 
			      (((QData)((IData)((1U 
						 & ((vlTOPp->Top2__DOT__JALR_io_A 
						     + vlTOPp->Top2__DOT__immediate_io_I_Immediate) 
						    >> 0x1fU)))) 
				<< 0x20U) | (QData)((IData)(
							    (vlTOPp->Top2__DOT__JALR_io_A 
							     + vlTOPp->Top2__DOT__immediate_io_I_Immediate)))))),33);
    }
}

void VTop2::traceChgThis__3(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+62,((0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)),7);
	vcdp->chgBit  (c+63,(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg));
	vcdp->chgBus  (c+64,(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg),5);
	vcdp->chgBus  (c+65,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+66,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+67,(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r),3);
	vcdp->chgBit  (c+68,(vlTOPp->Top2__DOT__id_ex__DOT__func7_r));
	vcdp->chgBus  (c+69,(vlTOPp->Top2__DOT__id_ex__DOT__func3_r),3);
	vcdp->chgBus  (c+70,(vlTOPp->Top2__DOT__if_id__DOT__inst_reg),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top2__DOT__if_id__DOT__pc_reg),32);
	vcdp->chgBus  (c+72,((IData)((VL_ULL(0x3fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
							     ? 0x7ffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+73,(vlTOPp->Top2__DOT__PC__DOT__pc1),32);
	vcdp->chgBus  (c+74,(((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)),32);
	vcdp->chgBus  (c+75,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					>> 2U))),32);
	vcdp->chgBus  (c+76,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
				       >> 2U))),8);
	vcdp->chgBus  (c+77,(vlTOPp->Top2__DOT__ex_mem__DOT__Rs2_Reg),32);
	vcdp->chgBit  (c+78,(vlTOPp->Top2__DOT__ex_mem__DOT__MemtoReg_Reg));
	vcdp->chgBit  (c+79,(vlTOPp->Top2__DOT__ex_mem__DOT__Memwr_Reg));
	vcdp->chgBit  (c+80,(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg));
	vcdp->chgBus  (c+81,(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg),5);
	vcdp->chgBus  (c+82,(vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg),32);
	vcdp->chgBit  (c+83,(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg));
	vcdp->chgBus  (c+84,(vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg),32);
	vcdp->chgBus  (c+85,(vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg),32);
	vcdp->chgBit  (c+86,(vlTOPp->Top2__DOT__id_ex__DOT__MemWr_r));
	vcdp->chgBit  (c+87,(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
	vcdp->chgBit  (c+88,(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r));
	vcdp->chgBus  (c+89,(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r),5);
	vcdp->chgBus  (c+90,(vlTOPp->Top2__DOT__if_id__DOT__pc4_reg),32);
	vcdp->chgBus  (c+91,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 7U))),5);
	vcdp->chgBus  (c+92,((7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+93,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				    >> 0x1eU))));
	vcdp->chgBus  (c+94,(vlTOPp->Top2__DOT__id_ex__DOT__pcr),32);
	vcdp->chgBus  (c+95,(vlTOPp->Top2__DOT__id_ex__DOT__pc4r),32);
	vcdp->chgBus  (c+96,(vlTOPp->Top2__DOT__id_ex__DOT__rs1r),32);
	vcdp->chgBus  (c+97,(vlTOPp->Top2__DOT__id_ex__DOT__rs2r),32);
	vcdp->chgBus  (c+98,(vlTOPp->Top2__DOT__id_ex__DOT__immr),32);
	vcdp->chgBus  (c+99,(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r),2);
	vcdp->chgBit  (c+100,((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))));
	vcdp->chgBus  (c+101,(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r),5);
	vcdp->chgBus  (c+102,(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r),5);
	vcdp->chgBit  (c+103,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0xfU))))));
	vcdp->chgBit  (c+104,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U))))));
	vcdp->chgBit  (c+105,((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))));
	vcdp->chgBus  (c+106,(vlTOPp->Top2__DOT__register__DOT__registers_c_0),32);
	vcdp->chgBus  (c+107,(vlTOPp->Top2__DOT__register__DOT__registers_c_1),32);
	vcdp->chgBus  (c+108,(vlTOPp->Top2__DOT__register__DOT__registers_c_2),32);
	vcdp->chgBus  (c+109,(vlTOPp->Top2__DOT__register__DOT__registers_c_3),32);
	vcdp->chgBus  (c+110,(vlTOPp->Top2__DOT__register__DOT__registers_c_4),32);
	vcdp->chgBus  (c+111,(vlTOPp->Top2__DOT__register__DOT__registers_c_5),32);
	vcdp->chgBus  (c+112,(vlTOPp->Top2__DOT__register__DOT__registers_c_6),32);
	vcdp->chgBus  (c+113,(vlTOPp->Top2__DOT__register__DOT__registers_c_7),32);
	vcdp->chgBus  (c+114,(vlTOPp->Top2__DOT__register__DOT__registers_c_8),32);
	vcdp->chgBus  (c+115,(vlTOPp->Top2__DOT__register__DOT__registers_c_9),32);
	vcdp->chgBus  (c+116,(vlTOPp->Top2__DOT__register__DOT__registers_c_10),32);
	vcdp->chgBus  (c+117,(vlTOPp->Top2__DOT__register__DOT__registers_c_11),32);
	vcdp->chgBus  (c+118,(vlTOPp->Top2__DOT__register__DOT__registers_c_12),32);
	vcdp->chgBus  (c+119,(vlTOPp->Top2__DOT__register__DOT__registers_c_13),32);
	vcdp->chgBus  (c+120,(vlTOPp->Top2__DOT__register__DOT__registers_c_14),32);
	vcdp->chgBus  (c+121,(vlTOPp->Top2__DOT__register__DOT__registers_c_15),32);
	vcdp->chgBus  (c+122,(vlTOPp->Top2__DOT__register__DOT__registers_c_16),32);
	vcdp->chgBus  (c+123,(vlTOPp->Top2__DOT__register__DOT__registers_c_17),32);
	vcdp->chgBus  (c+124,(vlTOPp->Top2__DOT__register__DOT__registers_c_18),32);
	vcdp->chgBus  (c+125,(vlTOPp->Top2__DOT__register__DOT__registers_c_19),32);
	vcdp->chgBus  (c+126,(vlTOPp->Top2__DOT__register__DOT__registers_c_20),32);
	vcdp->chgBus  (c+127,(vlTOPp->Top2__DOT__register__DOT__registers_c_21),32);
	vcdp->chgBus  (c+128,(vlTOPp->Top2__DOT__register__DOT__registers_c_22),32);
	vcdp->chgBus  (c+129,(vlTOPp->Top2__DOT__register__DOT__registers_c_23),32);
	vcdp->chgBus  (c+130,(vlTOPp->Top2__DOT__register__DOT__registers_c_24),32);
	vcdp->chgBus  (c+131,(vlTOPp->Top2__DOT__register__DOT__registers_c_25),32);
	vcdp->chgBus  (c+132,(vlTOPp->Top2__DOT__register__DOT__registers_c_26),32);
	vcdp->chgBus  (c+133,(vlTOPp->Top2__DOT__register__DOT__registers_c_27),32);
	vcdp->chgBus  (c+134,(vlTOPp->Top2__DOT__register__DOT__registers_c_28),32);
	vcdp->chgBus  (c+135,(vlTOPp->Top2__DOT__register__DOT__registers_c_29),32);
	vcdp->chgBus  (c+136,(vlTOPp->Top2__DOT__register__DOT__registers_c_30),32);
	vcdp->chgBus  (c+137,(vlTOPp->Top2__DOT__register__DOT__registers_c_31),32);
	vcdp->chgBus  (c+138,((0xfffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					 >> 0x14U))),12);
	vcdp->chgBus  (c+139,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
				  ? 0x7ffffU : 0U) 
				<< 0xcU) | (0xfffU 
					    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U)))),31);
	vcdp->chgBus  (c+140,((0x7fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					>> 0x19U))),7);
	vcdp->chgBus  (c+141,(((0xfe0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					  >> 0x14U)) 
			       | (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 7U)))),12);
	vcdp->chgBus  (c+142,((0xfffffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 0xcU))),20);
	vcdp->chgBus  (c+143,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
				  ? 0x7ffU : 0U) << 0x14U) 
			       | (0xfffffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					      >> 0xcU)))),31);
	vcdp->chgQuad (c+144,((VL_ULL(0x3fffffffffff) 
			       & ((QData)((IData)((
						   (((0x80000000U 
						      & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
						      ? 0x7ffU
						      : 0U) 
						    << 0x14U) 
						   | (0xfffffU 
						      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
							 >> 0xcU))))) 
				  << 0xcU))),46);
	vcdp->chgBit  (c+146,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 7U))));
	vcdp->chgBus  (c+147,((0xfU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 8U))),4);
	vcdp->chgBus  (c+148,((0x3fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					>> 0x19U))),6);
	vcdp->chgBit  (c+149,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 0x1fU))));
	vcdp->chgBus  (c+150,(((0x1000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 0x13U)) 
			       | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					     << 4U)) 
				  | ((0x7e0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						>> 0x14U)) 
				     | (0x1eU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						 >> 7U)))))),13);
	vcdp->chgBus  (c+151,((0xffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					>> 0xcU))),8);
	vcdp->chgBit  (c+152,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 0x14U))));
	vcdp->chgBus  (c+153,((0x3ffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					 >> 0x15U))),10);
	vcdp->chgBus  (c+154,(((0x100000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					     >> 0xbU)) 
			       | ((0xff000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg) 
				  | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						>> 9U)) 
				     | (0x7feU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						  >> 0x14U)))))),21);
	vcdp->chgBus  (c+155,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					 >> 2U))),10);
	vcdp->chgBus  (c+156,(vlTOPp->Top2__DOT__DataMemory__DOT__mem
			      [(0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
					 >> 2U))]),32);
	vcdp->chgBus  (c+157,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
					>> 2U))),10);
	vcdp->chgBus  (c+158,(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r),2);
    }
}

void VTop2::traceChgThis__4(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+159,(vlTOPp->clock));
	vcdp->chgBit  (c+160,(vlTOPp->reset));
	vcdp->chgBus  (c+161,(vlTOPp->io_instruction),32);
	vcdp->chgBus  (c+162,(vlTOPp->io_reg_out),32);
    }
}
