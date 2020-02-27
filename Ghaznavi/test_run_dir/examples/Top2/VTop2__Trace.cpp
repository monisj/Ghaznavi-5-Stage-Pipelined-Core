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
	vcdp->chgBit  (c+3,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead));
	vcdp->chgBit  (c+4,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
			     | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
				| ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
				   & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
				      & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
					 | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
					    | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
					       | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI))))))))));
	vcdp->chgBit  (c+5,(((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
			     & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load))));
	vcdp->chgBus  (c+6,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
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
	vcdp->chgBus  (c+7,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel),2);
	vcdp->chgBit  (c+8,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45));
	vcdp->chgBus  (c+9,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel),2);
	vcdp->chgBus  (c+10,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel),2);
	vcdp->chgBus  (c+11,(vlTOPp->Top2__DOT__register_io_WriteData),32);
	vcdp->chgBus  (c+12,(vlTOPp->Top2__DOT__register_io_rs1),32);
	vcdp->chgBus  (c+13,(vlTOPp->Top2__DOT__register_io_rs2),32);
	vcdp->chgBus  (c+14,(vlTOPp->Top2__DOT__alu_io_A),32);
	vcdp->chgBus  (c+15,(vlTOPp->Top2__DOT__alu_io_B),32);
	vcdp->chgBus  (c+16,((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBus  (c+17,((0x1fU & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))),5);
	vcdp->chgBus  (c+18,(vlTOPp->Top2__DOT__immediate_io_I_Immediate),32);
	vcdp->chgBus  (c+19,(((0x80000000U & (vlTOPp->Top2__DOT__immediate__DOT__output2 
					      << 1U)) 
			      | vlTOPp->Top2__DOT__immediate__DOT__output2)),32);
	vcdp->chgBus  (c+20,(vlTOPp->Top2__DOT__immediate__DOT__output5),32);
	vcdp->chgBus  (c+21,((vlTOPp->Top2__DOT__immediate__DOT__sbt19 
			      + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)),32);
	vcdp->chgBus  (c+22,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_82)
				       ? vlTOPp->Top2__DOT__immediate__DOT__output5
				       : ((IData)(vlTOPp->Top2__DOT___T_91)
					   ? vlTOPp->Top2__DOT__immediate__DOT__output5
					   : ((IData)(4U) 
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
	vcdp->chgBus  (c+23,(vlTOPp->Top2__DOT__instmem__DOT__mem
			     [(0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					 >> 2U))]),32);
	vcdp->chgBus  (c+24,(vlTOPp->Top2__DOT__DataMemory_io_Data),32);
	vcdp->chgBus  (c+25,(((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
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
	vcdp->chgBus  (c+26,(((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
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
	vcdp->chgBus  (c+27,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0xfU))))
			       ? vlTOPp->Top2__DOT__register_io_WriteData
			       : vlTOPp->Top2__DOT__register_io_rs1)),32);
	vcdp->chgBus  (c+28,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U))))
			       ? vlTOPp->Top2__DOT__register_io_WriteData
			       : vlTOPp->Top2__DOT__register_io_rs2)),32);
	vcdp->chgBit  (c+29,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
				    & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store))))));
	vcdp->chgBit  (c+30,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead))));
	vcdp->chgBit  (c+31,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
				    | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
				       & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
					  & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
					     | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
						| ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
						   | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)))))))))));
	vcdp->chgBit  (c+32,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
				 & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)))));
	vcdp->chgBus  (c+33,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
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
	vcdp->chgBus  (c+34,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? 0U : (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))),2);
	vcdp->chgBit  (c+35,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
			      & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45))));
	vcdp->chgBus  (c+36,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT___GEN_33
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_82)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_33))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_33))))),32);
	vcdp->chgBus  (c+37,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? ((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_82)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
					        ? 0U
					        : ((IData)(4U) 
						   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : ((IData)(4U) 
						   + vlTOPp->Top2__DOT__PC__DOT__pc1)))))),32);
	vcdp->chgBus  (c+38,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
			       ? vlTOPp->Top2__DOT___GEN_32
			       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				   ? ((IData)(vlTOPp->Top2__DOT___T_82)
				       ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_32))
				   : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					        ? 0U
					        : vlTOPp->Top2__DOT___GEN_32))))),32);
	vcdp->chgBus  (c+39,(vlTOPp->Top2__DOT__JALR_io_A),32);
	vcdp->chgBus  (c+40,((0xfffffffeU & (vlTOPp->Top2__DOT__JALR_io_A 
					     + vlTOPp->Top2__DOT__immediate_io_I_Immediate))),32);
	vcdp->chgBus  (c+41,(vlTOPp->Top2__DOT__forward_io_forward_a),2);
	vcdp->chgBus  (c+42,(vlTOPp->Top2__DOT__forward_io_forward_b),2);
	vcdp->chgBit  (c+43,(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward));
	vcdp->chgBus  (c+44,(vlTOPp->Top2__DOT__branchlogic_io_rs1_in),32);
	vcdp->chgBus  (c+45,(vlTOPp->Top2__DOT__branchlogic_io_rs2_in),32);
	vcdp->chgBit  (c+46,(((0U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
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
	vcdp->chgBus  (c+47,(vlTOPp->Top2__DOT__branchforward_io_forward_a),4);
	vcdp->chgBus  (c+48,(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34),4);
	vcdp->chgBit  (c+49,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load));
	vcdp->chgBit  (c+50,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store));
	vcdp->chgBit  (c+51,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch));
	vcdp->chgBit  (c+52,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type));
	vcdp->chgBit  (c+53,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR));
	vcdp->chgBit  (c+54,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL));
	vcdp->chgBit  (c+55,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI));
	vcdp->chgBus  (c+56,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45),2);
	vcdp->chgBus  (c+57,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+58,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+59,(vlTOPp->Top2__DOT__immediate__DOT__sbt13),32);
	vcdp->chgBus  (c+60,(vlTOPp->Top2__DOT__immediate__DOT__output5),32);
	vcdp->chgBus  (c+61,(vlTOPp->Top2__DOT__immediate__DOT__sbt19),32);
	vcdp->chgBus  (c+62,((vlTOPp->Top2__DOT__JALR_io_A 
			      + vlTOPp->Top2__DOT__immediate_io_I_Immediate)),32);
	vcdp->chgQuad (c+63,((VL_ULL(0xfffffffe) & 
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
	vcdp->chgBus  (c+65,((0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)),7);
	vcdp->chgBit  (c+66,(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg));
	vcdp->chgBus  (c+67,(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg),5);
	vcdp->chgBus  (c+68,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+69,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+70,(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r),3);
	vcdp->chgBus  (c+71,(vlTOPp->Top2__DOT__id_ex__DOT__func7_r),7);
	vcdp->chgBus  (c+72,(vlTOPp->Top2__DOT__id_ex__DOT__func3_r),3);
	vcdp->chgBus  (c+73,(vlTOPp->Top2__DOT__if_id__DOT__inst_reg),32);
	vcdp->chgBus  (c+74,(vlTOPp->Top2__DOT__if_id__DOT__pc_reg),32);
	vcdp->chgBus  (c+75,((IData)((VL_ULL(0x3fffffffffff) 
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
	vcdp->chgBus  (c+76,(vlTOPp->Top2__DOT__PC__DOT__pc1),32);
	vcdp->chgBus  (c+77,(((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)),32);
	vcdp->chgBus  (c+78,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					>> 2U))),32);
	vcdp->chgBus  (c+79,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
				       >> 2U))),8);
	vcdp->chgBus  (c+80,(vlTOPp->Top2__DOT__ex_mem__DOT__Rs2_Reg),32);
	vcdp->chgBit  (c+81,(vlTOPp->Top2__DOT__ex_mem__DOT__Memrd_Reg));
	vcdp->chgBit  (c+82,(vlTOPp->Top2__DOT__ex_mem__DOT__Memwr_Reg));
	vcdp->chgBit  (c+83,(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg));
	vcdp->chgBit  (c+84,(vlTOPp->Top2__DOT__ex_mem__DOT__MemtoReg_Reg));
	vcdp->chgBus  (c+85,(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg),5);
	vcdp->chgBus  (c+86,(vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg),32);
	vcdp->chgBit  (c+87,(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg));
	vcdp->chgBus  (c+88,(vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg),32);
	vcdp->chgBus  (c+89,(vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg),32);
	vcdp->chgBit  (c+90,(vlTOPp->Top2__DOT__id_ex__DOT__MemWr_r));
	vcdp->chgBit  (c+91,(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
	vcdp->chgBit  (c+92,(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r));
	vcdp->chgBit  (c+93,(vlTOPp->Top2__DOT__id_ex__DOT__MemToReg_r));
	vcdp->chgBus  (c+94,(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r),5);
	vcdp->chgBus  (c+95,(vlTOPp->Top2__DOT__if_id__DOT__pc4_reg),32);
	vcdp->chgBus  (c+96,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 7U))),5);
	vcdp->chgBus  (c+97,((7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				    >> 0xcU))),3);
	vcdp->chgBus  (c+98,((0x7fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 0x19U))),7);
	vcdp->chgBus  (c+99,(vlTOPp->Top2__DOT__id_ex__DOT__pcr),32);
	vcdp->chgBus  (c+100,(vlTOPp->Top2__DOT__id_ex__DOT__pc4r),32);
	vcdp->chgBus  (c+101,(vlTOPp->Top2__DOT__id_ex__DOT__rs1r),32);
	vcdp->chgBus  (c+102,(vlTOPp->Top2__DOT__id_ex__DOT__rs2r),32);
	vcdp->chgBus  (c+103,(vlTOPp->Top2__DOT__id_ex__DOT__immr),32);
	vcdp->chgBus  (c+104,(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r),2);
	vcdp->chgBit  (c+105,((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))));
	vcdp->chgBus  (c+106,(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r),5);
	vcdp->chgBus  (c+107,(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r),5);
	vcdp->chgBit  (c+108,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0xfU))))));
	vcdp->chgBit  (c+109,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
			       & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
				  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U))))));
	vcdp->chgBit  (c+110,((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))));
	vcdp->chgBus  (c+111,(vlTOPp->Top2__DOT__register__DOT__registers_c_0),32);
	vcdp->chgBus  (c+112,(vlTOPp->Top2__DOT__register__DOT__registers_c_1),32);
	vcdp->chgBus  (c+113,(vlTOPp->Top2__DOT__register__DOT__registers_c_2),32);
	vcdp->chgBus  (c+114,(vlTOPp->Top2__DOT__register__DOT__registers_c_3),32);
	vcdp->chgBus  (c+115,(vlTOPp->Top2__DOT__register__DOT__registers_c_4),32);
	vcdp->chgBus  (c+116,(vlTOPp->Top2__DOT__register__DOT__registers_c_5),32);
	vcdp->chgBus  (c+117,(vlTOPp->Top2__DOT__register__DOT__registers_c_6),32);
	vcdp->chgBus  (c+118,(vlTOPp->Top2__DOT__register__DOT__registers_c_7),32);
	vcdp->chgBus  (c+119,(vlTOPp->Top2__DOT__register__DOT__registers_c_8),32);
	vcdp->chgBus  (c+120,(vlTOPp->Top2__DOT__register__DOT__registers_c_9),32);
	vcdp->chgBus  (c+121,(vlTOPp->Top2__DOT__register__DOT__registers_c_10),32);
	vcdp->chgBus  (c+122,(vlTOPp->Top2__DOT__register__DOT__registers_c_11),32);
	vcdp->chgBus  (c+123,(vlTOPp->Top2__DOT__register__DOT__registers_c_12),32);
	vcdp->chgBus  (c+124,(vlTOPp->Top2__DOT__register__DOT__registers_c_13),32);
	vcdp->chgBus  (c+125,(vlTOPp->Top2__DOT__register__DOT__registers_c_14),32);
	vcdp->chgBus  (c+126,(vlTOPp->Top2__DOT__register__DOT__registers_c_15),32);
	vcdp->chgBus  (c+127,(vlTOPp->Top2__DOT__register__DOT__registers_c_16),32);
	vcdp->chgBus  (c+128,(vlTOPp->Top2__DOT__register__DOT__registers_c_17),32);
	vcdp->chgBus  (c+129,(vlTOPp->Top2__DOT__register__DOT__registers_c_18),32);
	vcdp->chgBus  (c+130,(vlTOPp->Top2__DOT__register__DOT__registers_c_19),32);
	vcdp->chgBus  (c+131,(vlTOPp->Top2__DOT__register__DOT__registers_c_20),32);
	vcdp->chgBus  (c+132,(vlTOPp->Top2__DOT__register__DOT__registers_c_21),32);
	vcdp->chgBus  (c+133,(vlTOPp->Top2__DOT__register__DOT__registers_c_22),32);
	vcdp->chgBus  (c+134,(vlTOPp->Top2__DOT__register__DOT__registers_c_23),32);
	vcdp->chgBus  (c+135,(vlTOPp->Top2__DOT__register__DOT__registers_c_24),32);
	vcdp->chgBus  (c+136,(vlTOPp->Top2__DOT__register__DOT__registers_c_25),32);
	vcdp->chgBus  (c+137,(vlTOPp->Top2__DOT__register__DOT__registers_c_26),32);
	vcdp->chgBus  (c+138,(vlTOPp->Top2__DOT__register__DOT__registers_c_27),32);
	vcdp->chgBus  (c+139,(vlTOPp->Top2__DOT__register__DOT__registers_c_28),32);
	vcdp->chgBus  (c+140,(vlTOPp->Top2__DOT__register__DOT__registers_c_29),32);
	vcdp->chgBus  (c+141,(vlTOPp->Top2__DOT__register__DOT__registers_c_30),32);
	vcdp->chgBus  (c+142,(vlTOPp->Top2__DOT__register__DOT__registers_c_31),32);
	vcdp->chgBus  (c+143,((0xfffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					 >> 0x14U))),12);
	vcdp->chgBus  (c+144,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
				  ? 0x7ffffU : 0U) 
				<< 0xcU) | (0xfffU 
					    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					       >> 0x14U)))),31);
	vcdp->chgBus  (c+145,(((0xfe0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					  >> 0x14U)) 
			       | (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 7U)))),12);
	vcdp->chgBus  (c+146,((0xfffffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 0xcU))),20);
	vcdp->chgBus  (c+147,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
				  ? 0x7ffU : 0U) << 0x14U) 
			       | (0xfffffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					      >> 0xcU)))),31);
	vcdp->chgQuad (c+148,((VL_ULL(0x3fffffffffff) 
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
	vcdp->chgBit  (c+150,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 7U))));
	vcdp->chgBus  (c+151,((0xfU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				       >> 8U))),4);
	vcdp->chgBus  (c+152,((0x3fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					>> 0x19U))),6);
	vcdp->chgBit  (c+153,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 0x1fU))));
	vcdp->chgBus  (c+154,(((0x1000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					   >> 0x13U)) 
			       | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					     << 4U)) 
				  | ((0x7e0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						>> 0x14U)) 
				     | (0x1eU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						 >> 7U)))))),13);
	vcdp->chgBus  (c+155,((0xffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					>> 0xcU))),8);
	vcdp->chgBit  (c+156,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
				     >> 0x14U))));
	vcdp->chgBus  (c+157,((0x3ffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					 >> 0x15U))),10);
	vcdp->chgBus  (c+158,(((0x100000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
					     >> 0xbU)) 
			       | ((0xff000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg) 
				  | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						>> 9U)) 
				     | (0x7feU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
						  >> 0x14U)))))),21);
	vcdp->chgBus  (c+159,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
					 >> 2U))),14);
	vcdp->chgBus  (c+160,(vlTOPp->Top2__DOT__DataMemory__DOT__mem
			      [(0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
					 >> 2U))]),32);
	vcdp->chgBus  (c+161,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
					>> 2U))),14);
	vcdp->chgBus  (c+162,(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r),2);
    }
}

void VTop2::traceChgThis__4(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+163,(vlTOPp->clock));
	vcdp->chgBit  (c+164,(vlTOPp->reset));
	vcdp->chgBus  (c+165,(vlTOPp->io_instruction),32);
	vcdp->chgBus  (c+166,(vlTOPp->io_reg_out),32);
	vcdp->chgBit  (c+167,(vlTOPp->io_branch_stall));
    }
}
