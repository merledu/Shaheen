// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSHAHEEN_TOP_OPENRAM_CV_H_
#define _VSHAHEEN_TOP_OPENRAM_CV_H_  // guard

#include "verilated_heavy.h"

//==========

class VShaheen_top_openram_cv__Syms;
class VShaheen_top_openram_cv_VerilatedVcd;


//----------

VL_MODULE(VShaheen_top_openram_cv) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_rx_i,0,0);
    VL_IN16(io_CLK_PER_BIT,15,0);
    VL_IN(io_gpio_i,29,0);
    VL_OUT(io_gpio_o,29,0);
    VL_OUT(io_gpio_en_o,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_be_i;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_dev_sel;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__reset_reg;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT___T_1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT___T_7;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT___T_10;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT___T_11;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT___GEN_16;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regDone;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__count;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regValid;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__dataReg;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB1;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB2;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regMSB1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___T_1;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___T_4;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___GEN_6;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___T_15;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__validReg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_7;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_10;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_11;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_14;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_18;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_19;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_21;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_22;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT___T_28;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX_io_stall;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_core_stall_i;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_data_req_o;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_stall;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func3_reg;
        CData/*6:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func7_reg;
        CData/*6:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg;
    };
    struct {
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_func3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__handle_irq;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_26;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_4;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_8;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_21;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_24;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_27;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_7;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_4;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_31;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_41;
    };
    struct {
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_51;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_65;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_75;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_102;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_108;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_119;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_123;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_138;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_159;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_174;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34;
        CData/*5:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS_io_i_wrdata;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_129;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_157;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_186;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_216;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_249;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_279;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_418;
        CData/*5:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q;
        CData/*2:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q;
        CData/*5:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_4;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_7;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_14;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_19;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a;
        CData/*1:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control_io_output;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4;
    };
    struct {
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_13;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_15;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___GEN_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_54;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_2;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_93;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_98;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_8;
        CData/*4:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_17;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_2;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_3;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_6;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_7;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_10;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT___GEN_1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__iccm_tl_device__DOT__outstanding;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__error;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT___GEN_1;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__csb0_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__web0_reg;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__wmask0_reg;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__addr0_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__csb0_reg;
        CData/*0:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__web0_reg;
        CData/*3:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__wmask0_reg;
        CData/*7:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__addr0_reg;
        SData/*13:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regAddr;
        SData/*13:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___T_14;
        SData/*12:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q;
        SData/*12:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_374;
        SData/*15:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT___T_6;
        SData/*15:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT___T_12;
    };
    struct {
        SData/*15:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT___T_20;
        SData/*15:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT___T_26;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__iccm_io_rdata_o;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__dout;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_data_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regFinalData;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT___T_11;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__writeback_io_write_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc4_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__imm_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___GEN_0;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_45;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21;
    };
    struct {
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_13;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_26;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_45;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_58;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_13;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_26;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_92;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_108;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
    };
    struct {
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q;
        IData/*27:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_a;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_b;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT___T_5;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT___GEN_7;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_3;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_17;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_22;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_25;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_28;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_32;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_12;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_13;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__wr_data;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__din0_reg;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__din0_reg;
        QData/*32:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21;
    };
    struct {
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_45;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_58;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_63;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_load;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_load;
        QData/*39:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_load;
        QData/*62:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_6;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___T_49;
        QData/*32:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_13;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_20;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_27;
        QData/*63:0*/ Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30;
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__iccm__DOT__mem[256];
        IData/*31:0*/ Shaheen_top_openram_cv__DOT__dccm__DOT__mem[256];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VShaheen_top_openram_cv__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VShaheen_top_openram_cv);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VShaheen_top_openram_cv(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VShaheen_top_openram_cv();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
    void __Vconfigure(VShaheen_top_openram_cv__Syms* symsp, bool first);
  private:
    static QData _change_request(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
    static QData _change_request_1(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VShaheen_top_openram_cv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VShaheen_top_openram_cv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__4(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VShaheen_top_openram_cv__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VShaheen_top_openram_cv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
