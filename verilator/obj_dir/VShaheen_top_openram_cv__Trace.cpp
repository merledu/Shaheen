// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShaheen_top_openram_cv__Syms.h"


void VShaheen_top_openram_cv::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VShaheen_top_openram_cv::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp139[3];
    WData/*95:0*/ __Vtemp140[3];
    WData/*95:0*/ __Vtemp141[3];
    WData/*95:0*/ __Vtemp142[3];
    WData/*95:0*/ __Vtemp143[3];
    WData/*95:0*/ __Vtemp144[3];
    WData/*95:0*/ __Vtemp145[3];
    WData/*95:0*/ __Vtemp146[3];
    WData/*95:0*/ __Vtemp147[3];
    WData/*95:0*/ __Vtemp148[3];
    WData/*95:0*/ __Vtemp149[3];
    WData/*95:0*/ __Vtemp150[3];
    WData/*95:0*/ __Vtemp151[3];
    WData/*95:0*/ __Vtemp152[3];
    WData/*95:0*/ __Vtemp153[3];
    WData/*95:0*/ __Vtemp154[3];
    WData/*95:0*/ __Vtemp155[3];
    WData/*95:0*/ __Vtemp156[3];
    WData/*95:0*/ __Vtemp157[3];
    WData/*95:0*/ __Vtemp158[3];
    WData/*95:0*/ __Vtemp159[3];
    WData/*95:0*/ __Vtemp160[3];
    WData/*95:0*/ __Vtemp161[3];
    WData/*95:0*/ __Vtemp162[3];
    WData/*95:0*/ __Vtemp163[3];
    WData/*95:0*/ __Vtemp164[3];
    WData/*95:0*/ __Vtemp165[3];
    WData/*95:0*/ __Vtemp166[3];
    WData/*95:0*/ __Vtemp167[3];
    WData/*95:0*/ __Vtemp168[3];
    WData/*95:0*/ __Vtemp169[3];
    WData/*95:0*/ __Vtemp170[3];
    WData/*95:0*/ __Vtemp171[3];
    WData/*95:0*/ __Vtemp172[3];
    WData/*95:0*/ __Vtemp173[3];
    WData/*95:0*/ __Vtemp174[3];
    WData/*95:0*/ __Vtemp175[3];
    WData/*95:0*/ __Vtemp176[3];
    WData/*95:0*/ __Vtemp177[3];
    WData/*95:0*/ __Vtemp178[3];
    WData/*95:0*/ __Vtemp179[3];
    WData/*95:0*/ __Vtemp180[3];
    WData/*95:0*/ __Vtemp181[3];
    WData/*95:0*/ __Vtemp182[3];
    WData/*95:0*/ __Vtemp183[3];
    WData/*95:0*/ __Vtemp184[3];
    WData/*95:0*/ __Vtemp185[3];
    WData/*95:0*/ __Vtemp186[3];
    WData/*95:0*/ __Vtemp187[3];
    WData/*95:0*/ __Vtemp188[3];
    // Body
    {
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgIData(oldp+0,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm_io_rdata_o),32);
            tracep->chgCData(oldp+1,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__dout)),8);
            tracep->chgCData(oldp+2,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                               >> 8U))),8);
            tracep->chgCData(oldp+3,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                               >> 0x10U))),8);
            tracep->chgCData(oldp+4,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                               >> 0x18U))),8);
            tracep->chgIData(oldp+5,(vlTOPp->Shaheen_top_openram_cv__DOT__dout),32);
            tracep->chgIData(oldp+6,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding)
                                       ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__error)
                                           ? 0xffffffffU
                                           : vlTOPp->Shaheen_top_openram_cv__DOT__dout)
                                       : 0U)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+7,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+8,((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q)),32);
            tracep->chgBit(oldp+9,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                    | ((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                       | (2U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))))));
            tracep->chgIData(oldp+10,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_data_reg),32);
            tracep->chgBit(oldp+11,((1U & (~ (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                               & ((0U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                                  | (1U 
                                                     == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
                                              & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T))))));
            tracep->chgCData(oldp+12,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)),8);
            tracep->chgCData(oldp+13,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 8U))),8);
            tracep->chgCData(oldp+14,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+15,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x18U))),8);
            tracep->chgBit(oldp+16,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                           >> 2U))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                           >> 3U))));
            tracep->chgCData(oldp+20,((0x3fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                                >> 2U))),8);
            tracep->chgBit(oldp+21,(((0U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT___GEN_16))));
            tracep->chgIData(oldp+22,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regFinalData),32);
            tracep->chgCData(oldp+23,((0xffU & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regAddr))),8);
            tracep->chgBit(oldp+24,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regValid));
            tracep->chgBit(oldp+25,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regDone));
            tracep->chgBit(oldp+26,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready));
            tracep->chgBit(oldp+27,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid));
            tracep->chgBit(oldp+28,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_data_req_o));
            tracep->chgBit(oldp+29,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
            tracep->chgBit(oldp+30,(((0U == (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                     | ((1U != (3U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                        & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_2)))));
            tracep->chgBit(oldp+31,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                      ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                      : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                          ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                          : ((0U != 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_6))))));
            tracep->chgBit(oldp+32,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                      ? ((0U == (3U 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                      : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                          ? ((0U != 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                          : ((0U != 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & ((1U 
                                                 != 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                                & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_3)))))));
            tracep->chgBit(oldp+33,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7) 
                                     | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                         ? ((0U != 
                                             (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & (1U != 
                                               (3U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))
                                         : ((0U != 
                                             (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & ((1U 
                                                != 
                                                (3U 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                               & (2U 
                                                  != 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))))))));
            tracep->chgIData(oldp+34,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output),32);
            tracep->chgCData(oldp+35,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x18U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 0x18U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x18U)
                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2)))))),8);
            tracep->chgCData(oldp+36,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 8U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 0x10U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 8U))))))),8);
            tracep->chgCData(oldp+37,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x10U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 8U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 8U)
                                                    : 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x10U))))))),8);
            tracep->chgCData(oldp+38,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x18U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 8U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                    : 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x18U))))))),8);
            tracep->chgBit(oldp+39,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__iccm_tl_device__DOT__outstanding));
            tracep->chgBit(oldp+40,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i));
            tracep->chgBit(oldp+41,((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6)));
            tracep->chgBit(oldp+42,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid));
            tracep->chgCData(oldp+43,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode),3);
            tracep->chgIData(oldp+44,((0xfffffffcU 
                                       & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),32);
            tracep->chgCData(oldp+45,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask),4);
            tracep->chgIData(oldp+46,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i),32);
            tracep->chgBit(oldp+47,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding));
            tracep->chgIData(oldp+48,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q),32);
            tracep->chgBit(oldp+49,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)))));
            tracep->chgIData(oldp+50,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+51,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6),32);
            tracep->chgCData(oldp+52,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_be_i),4);
            tracep->chgBit(oldp+53,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid));
            tracep->chgBit(oldp+54,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding));
            tracep->chgBit(oldp+55,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding)))));
            tracep->chgBit(oldp+56,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                      & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                         | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T))));
            tracep->chgCData(oldp+57,((0xfcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),8);
            tracep->chgCData(oldp+58,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_dev_sel),2);
            tracep->chgIData(oldp+59,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg),32);
            tracep->chgBit(oldp+60,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__reset_reg));
            tracep->chgCData(oldp+61,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg),2);
            tracep->chgBit(oldp+62,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__validReg));
            tracep->chgCData(oldp+63,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg),8);
            tracep->chgCData(oldp+64,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__count),3);
            tracep->chgSData(oldp+65,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regAddr),14);
            tracep->chgCData(oldp+66,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__dataReg),8);
            tracep->chgCData(oldp+67,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB1),8);
            tracep->chgCData(oldp+68,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB2),8);
            tracep->chgCData(oldp+69,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regMSB1),8);
            tracep->chgCData(oldp+70,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg),3);
            tracep->chgCData(oldp+71,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount),8);
            tracep->chgCData(oldp+72,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex),4);
            tracep->chgBit(oldp+73,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg));
            tracep->chgIData(oldp+74,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg),32);
            tracep->chgIData(oldp+75,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg),32);
            tracep->chgCData(oldp+76,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+77,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+78,(((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                         & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                            == (0x1fU 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xfU)))) 
                                        & (0x37U != 
                                           (0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_45
                                        : ((0x37U != 
                                            (0x7fU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                            ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                            : 0U))),32);
            tracep->chgIData(oldp+79,(((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                         & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                            == (0x1fU 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)))) 
                                        & (0x37U != 
                                           (0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_45
                                        : ((0x37U != 
                                            (0x7fU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                            ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
                                            : 0U))),32);
            tracep->chgIData(oldp+80,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm
                                        : ((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                            ? ((((0x80000000U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 7U))))
                                            : ((2U 
                                                == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                                ? (IData)(
                                                          ((QData)((IData)(
                                                                           ((((0x80000000U 
                                                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                               ? 0xfffU
                                                                               : 0U) 
                                                                             << 0x14U) 
                                                                            | (0xfffffU 
                                                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0xcU))))) 
                                                           << 0xcU))
                                                : 0U)))),32);
            tracep->chgCData(oldp+81,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 7U))),5);
            tracep->chgCData(oldp+82,((7U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+83,((0x7fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x19U))),7);
            tracep->chgBit(oldp+84,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                           & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type))))));
            tracep->chgBit(oldp+85,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead))));
            tracep->chgBit(oldp+86,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen))));
            tracep->chgBit(oldp+87,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
                                        | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                           | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                                              & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                                 & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                    | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
                                                       | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type) 
                                                          | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                             | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                                | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply) 
                                                                   | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4))))))))))))));
            tracep->chgBit(oldp+88,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                        & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)))));
            tracep->chgCData(oldp+89,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                        ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply)
                                                          ? 9U
                                                          : 
                                                         ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type)
                                                            ? 8U
                                                            : 0xcU)))))))))))))),4);
            tracep->chgCData(oldp+90,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                        ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                        ? 3U
                                                        : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc))))))))))),2);
            tracep->chgBit(oldp+91,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                        & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                           | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                              | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                                 & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                    | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                       & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                          & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                             | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                                | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9)))))))))))));
            tracep->chgCData(oldp+92,((0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),7);
            tracep->chgIData(oldp+93,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata),32);
            tracep->chgBit(oldp+94,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX_io_stall));
            tracep->chgIData(oldp+95,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc_reg),32);
            tracep->chgIData(oldp+96,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc4_reg),32);
            tracep->chgIData(oldp+97,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_reg),32);
            tracep->chgIData(oldp+98,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_reg),32);
            tracep->chgIData(oldp+99,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__imm_reg),32);
            tracep->chgCData(oldp+100,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func3_reg),3);
            tracep->chgCData(oldp+101,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func7_reg),7);
            tracep->chgCData(oldp+102,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg),7);
            tracep->chgCData(oldp+103,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg),5);
            tracep->chgCData(oldp+104,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg),5);
            tracep->chgCData(oldp+105,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg),5);
            tracep->chgBit(oldp+106,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg));
            tracep->chgBit(oldp+107,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg));
            tracep->chgBit(oldp+108,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg));
            tracep->chgBit(oldp+109,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg));
            tracep->chgBit(oldp+110,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg));
            tracep->chgCData(oldp+111,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg),4);
            tracep->chgCData(oldp+112,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg),2);
            tracep->chgBit(oldp+113,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg));
            tracep->chgIData(oldp+114,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg),32);
            tracep->chgIData(oldp+115,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT___GEN_7),32);
            tracep->chgIData(oldp+116,((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)),32);
            tracep->chgBit(oldp+117,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
            tracep->chgBit(oldp+118,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr));
            tracep->chgBit(oldp+119,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen));
            tracep->chgBit(oldp+120,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg));
            tracep->chgIData(oldp+121,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2),32);
            tracep->chgCData(oldp+122,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel),5);
            tracep->chgCData(oldp+123,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_func3),3);
            tracep->chgIData(oldp+124,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data),32);
            tracep->chgBit(oldp+125,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr));
            tracep->chgBit(oldp+126,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen));
            tracep->chgBit(oldp+127,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg));
            tracep->chgBit(oldp+128,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
            tracep->chgCData(oldp+129,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel),5);
            tracep->chgIData(oldp+130,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data),32);
            tracep->chgIData(oldp+131,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output),32);
            tracep->chgIData(oldp+132,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data),32);
            tracep->chgBit(oldp+133,(((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U))));
            tracep->chgBit(oldp+134,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))));
            tracep->chgIData(oldp+135,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q),32);
            tracep->chgBit(oldp+136,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i)))));
            tracep->chgBit(oldp+137,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o));
            tracep->chgBit(oldp+138,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31))));
            tracep->chgCData(oldp+139,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                         ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 0x2bU
                                                  : 0U))),6);
            tracep->chgIData(oldp+140,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q),32);
            tracep->chgIData(oldp+141,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm),32);
            tracep->chgIData(oldp+142,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm),32);
            tracep->chgCData(oldp+143,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out),2);
            tracep->chgBit(oldp+144,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch))));
            tracep->chgIData(oldp+145,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg),32);
            tracep->chgBit(oldp+146,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward));
            tracep->chgBit(oldp+147,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o));
            tracep->chgBit(oldp+148,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_core_stall_i));
            tracep->chgIData(oldp+149,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__writeback_io_write_data),32);
            tracep->chgIData(oldp+150,((0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),32);
            tracep->chgBit(oldp+151,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_stall));
            tracep->chgIData(oldp+152,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_),32);
            tracep->chgIData(oldp+153,(((IData)(4U) 
                                        + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)),32);
            tracep->chgBit(oldp+154,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__handle_irq));
            tracep->chgBit(oldp+155,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead));
            tracep->chgBit(oldp+156,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                         & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)))));
            tracep->chgBit(oldp+157,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch));
            tracep->chgBit(oldp+158,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
                                      | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                         | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                               & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                  | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
                                                     | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type) 
                                                        | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                           | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                              | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply) 
                                                                 | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4)))))))))))));
            tracep->chgBit(oldp+159,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen));
            tracep->chgBit(oldp+160,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type));
            tracep->chgCData(oldp+161,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op),2);
            tracep->chgBit(oldp+162,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type))));
            tracep->chgCData(oldp+163,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply)
                                                          ? 9U
                                                          : 
                                                         ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type)
                                                            ? 8U
                                                            : 0xcU))))))))))))),4);
            tracep->chgCData(oldp+164,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                        ? 3U
                                                        : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)))))))))),2);
            tracep->chgBit(oldp+165,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                         | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                            | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                               & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                  | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                        & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                           | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                              | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9))))))))))));
            tracep->chgCData(oldp+166,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel),2);
            tracep->chgCData(oldp+167,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 2U
                                                       : 0U)))))))),2);
            tracep->chgCData(oldp+168,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1),4);
            tracep->chgCData(oldp+169,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34),4);
            tracep->chgIData(oldp+170,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData),32);
            tracep->chgIData(oldp+171,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1),32);
            tracep->chgIData(oldp+172,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2),32);
            tracep->chgIData(oldp+173,(((((0x80000000U 
                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0xfe0U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+174,((IData)(((QData)((IData)(
                                                                ((((0x80000000U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                    ? 0xfffU
                                                                    : 0U) 
                                                                  << 0x14U) 
                                                                 | (0xfffffU 
                                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                       >> 0xcU))))) 
                                                << 0xcU))),32);
            tracep->chgIData(oldp+175,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm),32);
            tracep->chgBit(oldp+176,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                       & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                          == (0x1fU 
                                              & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xfU)))) 
                                      & (0x37U != (0x7fU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
            tracep->chgBit(oldp+177,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                       & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                          == (0x1fU 
                                              & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))) 
                                      & (0x37U != (0x7fU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
            tracep->chgSData(oldp+178,((0xfffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U))),12);
            tracep->chgBit(oldp+179,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                      & (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd) 
                                          & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)) 
                                         | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)) 
                                            & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)))))));
            tracep->chgCData(oldp+180,((((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                         & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 2U)) 
                                        << 2U)),3);
            tracep->chgBit(oldp+181,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                      & ((((0xf14U 
                                            != (0xfffU 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U))) 
                                           & ((0x300U 
                                               != (0xfffU 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))) 
                                              & ((0x301U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))) 
                                                 & ((0x304U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U))) 
                                                    & ((0x340U 
                                                        != 
                                                        (0xfffU 
                                                         & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                            >> 0x14U))) 
                                                       & ((0x305U 
                                                           != 
                                                           (0xfffU 
                                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                               >> 0x14U))) 
                                                          & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99))))))) 
                                          | ((3U & 
                                              (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1cU)) 
                                             > (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))) 
                                         | ((3U == 
                                             (3U & 
                                              (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1eU))) 
                                            & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))))));
            tracep->chgCData(oldp+182,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1),3);
            tracep->chgBit(oldp+183,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type));
            tracep->chgBit(oldp+184,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type));
            tracep->chgBit(oldp+185,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type));
            tracep->chgBit(oldp+186,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type));
            tracep->chgBit(oldp+187,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type));
            tracep->chgBit(oldp+188,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type));
            tracep->chgBit(oldp+189,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type));
            tracep->chgBit(oldp+190,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type));
            tracep->chgBit(oldp+191,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc));
            tracep->chgBit(oldp+192,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply));
            tracep->chgBit(oldp+193,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type));
            tracep->chgIData(oldp+194,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0),32);
            tracep->chgIData(oldp+195,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1),32);
            tracep->chgIData(oldp+196,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2),32);
            tracep->chgIData(oldp+197,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3),32);
            tracep->chgIData(oldp+198,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4),32);
            tracep->chgIData(oldp+199,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5),32);
            tracep->chgIData(oldp+200,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6),32);
            tracep->chgIData(oldp+201,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7),32);
            tracep->chgIData(oldp+202,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8),32);
            tracep->chgIData(oldp+203,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9),32);
            tracep->chgIData(oldp+204,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10),32);
            tracep->chgIData(oldp+205,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11),32);
            tracep->chgIData(oldp+206,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12),32);
            tracep->chgIData(oldp+207,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13),32);
            tracep->chgIData(oldp+208,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14),32);
            tracep->chgIData(oldp+209,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15),32);
            tracep->chgIData(oldp+210,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16),32);
            tracep->chgIData(oldp+211,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17),32);
            tracep->chgIData(oldp+212,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18),32);
            tracep->chgIData(oldp+213,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19),32);
            tracep->chgIData(oldp+214,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20),32);
            tracep->chgIData(oldp+215,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21),32);
            tracep->chgIData(oldp+216,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22),32);
            tracep->chgIData(oldp+217,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23),32);
            tracep->chgIData(oldp+218,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24),32);
            tracep->chgIData(oldp+219,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25),32);
            tracep->chgIData(oldp+220,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26),32);
            tracep->chgIData(oldp+221,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27),32);
            tracep->chgIData(oldp+222,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28),32);
            tracep->chgIData(oldp+223,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29),32);
            tracep->chgIData(oldp+224,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30),32);
            tracep->chgIData(oldp+225,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31),32);
            tracep->chgSData(oldp+226,(((0xfe0U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 7U)))),12);
            tracep->chgCData(oldp+227,((0xfU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 8U))),4);
            tracep->chgCData(oldp+228,((0x3fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x19U))),6);
            tracep->chgBit(oldp+229,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 7U))));
            tracep->chgBit(oldp+230,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x1fU))));
            tracep->chgSData(oldp+231,(((0x1000U & 
                                         (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 7U)))))),13);
            tracep->chgIData(oldp+232,(((((0x80000000U 
                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0x7ffffU
                                           : 0U) << 0xdU) 
                                        | ((0x1000U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+233,((0xfffffU & 
                                        (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0xcU))),20);
            tracep->chgIData(oldp+234,(((((0x80000000U 
                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0xfffU
                                           : 0U) << 0x14U) 
                                        | (0xfffffU 
                                           & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0xcU)))),32);
            tracep->chgSData(oldp+235,((0x3ffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x15U))),10);
            tracep->chgBit(oldp+236,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))));
            tracep->chgCData(oldp+237,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU))),8);
            tracep->chgIData(oldp+238,(((0x100000U 
                                         & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                           | ((0x800U 
                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))))),21);
            tracep->chgIData(oldp+239,(((((0x80000000U 
                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0x7ffU
                                           : 0U) << 0x15U) 
                                        | ((0x100000U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                              | ((0x800U 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0x14U))))))),32);
            tracep->chgBit(oldp+240,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                      | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                         | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)))));
            tracep->chgCData(oldp+241,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q),6);
            tracep->chgBit(oldp+242,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)))))));
            tracep->chgBit(oldp+243,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315))));
            tracep->chgCData(oldp+244,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q),3);
            tracep->chgBit(oldp+245,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)))));
            tracep->chgIData(oldp+246,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q),32);
            tracep->chgBit(oldp+247,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321))))))));
            tracep->chgCData(oldp+248,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q),6);
            tracep->chgBit(oldp+249,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)))))))));
            tracep->chgIData(oldp+250,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q),32);
            tracep->chgIData(oldp+251,(((0xfffff80U 
                                         & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                        | ((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                           | ((0x20U 
                                               & (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                    ? 
                                                   (1U 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                       >> 5U))
                                                    : 
                                                   (1U 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                       >> 5U))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                 | ((8U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                    | ((4U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                       | ((2U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                          | (1U 
                                                             & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                                 ? 
                                                                (1U 
                                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                                                 : 
                                                                (1U 
                                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q))))))))))),28);
            tracep->chgIData(oldp+252,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q),28);
            tracep->chgIData(oldp+253,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q),32);
            tracep->chgBit(oldp+254,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)))))))))));
            tracep->chgIData(oldp+255,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q),32);
            tracep->chgBit(oldp+256,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                              & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354))))))))))));
            tracep->chgIData(oldp+257,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q),32);
            tracep->chgBit(oldp+258,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)));
            tracep->chgBit(oldp+259,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312)));
            tracep->chgQData(oldp+260,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q),64);
            tracep->chgBit(oldp+262,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 2U))));
            tracep->chgBit(oldp+263,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 2U))));
            tracep->chgQData(oldp+264,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q),64);
            tracep->chgBit(oldp+266,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 3U))));
            tracep->chgBit(oldp+267,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 3U))));
            VL_EXTEND_WQ(80,40, __Vtemp139, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         __Vtemp139[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp139[0U])))),64);
            tracep->chgBit(oldp+270,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 4U))));
            tracep->chgBit(oldp+271,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 4U))));
            VL_EXTEND_WQ(80,40, __Vtemp140, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgQData(oldp+272,((((QData)((IData)(
                                                         __Vtemp140[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp140[0U])))),64);
            tracep->chgBit(oldp+274,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 5U))));
            tracep->chgBit(oldp+275,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 5U))));
            VL_EXTEND_WQ(80,40, __Vtemp141, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgQData(oldp+276,((((QData)((IData)(
                                                         __Vtemp141[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp141[0U])))),64);
            tracep->chgBit(oldp+278,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 6U))));
            tracep->chgBit(oldp+279,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 6U))));
            VL_EXTEND_WQ(80,40, __Vtemp142, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         __Vtemp142[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp142[0U])))),64);
            tracep->chgBit(oldp+282,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 7U))));
            tracep->chgBit(oldp+283,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 7U))));
            VL_EXTEND_WQ(80,40, __Vtemp143, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         __Vtemp143[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp143[0U])))),64);
            tracep->chgBit(oldp+286,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 8U))));
            tracep->chgBit(oldp+287,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 8U))));
            VL_EXTEND_WQ(80,40, __Vtemp144, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         __Vtemp144[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp144[0U])))),64);
            tracep->chgBit(oldp+290,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 9U))));
            tracep->chgBit(oldp+291,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 9U))));
            VL_EXTEND_WQ(80,40, __Vtemp145, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         __Vtemp145[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp145[0U])))),64);
            tracep->chgBit(oldp+294,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xaU))));
            tracep->chgBit(oldp+295,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xaU))));
            VL_EXTEND_WQ(80,40, __Vtemp146, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         __Vtemp146[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp146[0U])))),64);
            tracep->chgBit(oldp+298,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xbU))));
            tracep->chgBit(oldp+299,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xbU))));
            VL_EXTEND_WQ(80,40, __Vtemp147, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         __Vtemp147[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp147[0U])))),64);
            tracep->chgBit(oldp+302,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xcU))));
            tracep->chgBit(oldp+303,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xcU))));
            VL_EXTEND_WQ(80,40, __Vtemp148, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         __Vtemp148[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp148[0U])))),64);
            tracep->chgCData(oldp+306,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q),2);
            tracep->chgSData(oldp+307,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+308,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0),64);
            tracep->chgQData(oldp+310,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1),64);
            tracep->chgQData(oldp+312,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2),64);
            tracep->chgQData(oldp+314,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3),64);
            tracep->chgQData(oldp+316,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4),64);
            tracep->chgQData(oldp+318,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5),64);
            tracep->chgQData(oldp+320,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6),64);
            tracep->chgQData(oldp+322,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7),64);
            tracep->chgQData(oldp+324,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8),64);
            tracep->chgQData(oldp+326,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9),64);
            tracep->chgQData(oldp+328,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10),64);
            tracep->chgQData(oldp+330,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11),64);
            tracep->chgQData(oldp+332,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12),64);
            tracep->chgQData(oldp+334,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13),64);
            tracep->chgQData(oldp+336,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14),64);
            tracep->chgQData(oldp+338,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15),64);
            tracep->chgQData(oldp+340,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16),64);
            tracep->chgQData(oldp+342,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17),64);
            tracep->chgQData(oldp+344,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18),64);
            tracep->chgQData(oldp+346,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19),64);
            tracep->chgQData(oldp+348,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20),64);
            tracep->chgQData(oldp+350,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21),64);
            tracep->chgQData(oldp+352,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22),64);
            tracep->chgQData(oldp+354,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23),64);
            tracep->chgQData(oldp+356,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24),64);
            tracep->chgQData(oldp+358,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25),64);
            tracep->chgQData(oldp+360,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26),64);
            tracep->chgQData(oldp+362,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27),64);
            tracep->chgQData(oldp+364,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28),64);
            tracep->chgQData(oldp+366,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29),64);
            tracep->chgQData(oldp+368,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30),64);
            tracep->chgQData(oldp+370,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31),64);
            tracep->chgIData(oldp+372,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0),32);
            tracep->chgIData(oldp+373,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1),32);
            tracep->chgIData(oldp+374,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2),32);
            tracep->chgIData(oldp+375,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3),32);
            tracep->chgIData(oldp+376,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4),32);
            tracep->chgIData(oldp+377,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5),32);
            tracep->chgIData(oldp+378,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6),32);
            tracep->chgIData(oldp+379,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7),32);
            tracep->chgIData(oldp+380,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8),32);
            tracep->chgIData(oldp+381,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9),32);
            tracep->chgIData(oldp+382,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10),32);
            tracep->chgIData(oldp+383,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11),32);
            tracep->chgIData(oldp+384,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12),32);
            tracep->chgIData(oldp+385,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13),32);
            tracep->chgIData(oldp+386,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14),32);
            tracep->chgIData(oldp+387,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15),32);
            tracep->chgIData(oldp+388,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16),32);
            tracep->chgIData(oldp+389,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17),32);
            tracep->chgIData(oldp+390,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18),32);
            tracep->chgIData(oldp+391,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19),32);
            tracep->chgIData(oldp+392,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20),32);
            tracep->chgIData(oldp+393,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21),32);
            tracep->chgIData(oldp+394,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22),32);
            tracep->chgIData(oldp+395,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23),32);
            tracep->chgIData(oldp+396,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24),32);
            tracep->chgIData(oldp+397,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25),32);
            tracep->chgIData(oldp+398,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26),32);
            tracep->chgIData(oldp+399,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27),32);
            tracep->chgIData(oldp+400,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28),32);
            tracep->chgIData(oldp+401,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29),32);
            tracep->chgIData(oldp+402,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30),32);
            tracep->chgIData(oldp+403,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31),32);
            tracep->chgBit(oldp+404,(((3U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x1cU)) 
                                      > (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))));
            tracep->chgBit(oldp+405,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq));
            tracep->chgBit(oldp+406,(((3U == (3U & 
                                              (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1eU))) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))));
            tracep->chgBit(oldp+407,(((0xf14U != (0xfffU 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U))) 
                                      & ((0x300U != 
                                          (0xfffU & 
                                           (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                                         & ((0x301U 
                                             != (0xfffU 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U))) 
                                            & ((0x304U 
                                                != 
                                                (0xfffU 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U))) 
                                               & ((0x340U 
                                                   != 
                                                   (0xfffU 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0x14U))) 
                                                  & ((0x305U 
                                                      != 
                                                      (0xfffU 
                                                       & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U))) 
                                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99)))))))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+409,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 4U))));
            tracep->chgCData(oldp+410,((3U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                              >> 2U))),2);
            tracep->chgBit(oldp+411,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+412,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q))));
            tracep->chgBit(oldp+413,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+414,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+415,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+416,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 1U))));
            tracep->chgBit(oldp+417,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)));
            tracep->chgBit(oldp+418,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 4U))));
            tracep->chgBit(oldp+419,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 3U))));
            tracep->chgBit(oldp+420,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 6U))));
            tracep->chgBit(oldp+421,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 5U))));
            tracep->chgBit(oldp+422,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 9U))));
            tracep->chgBit(oldp+423,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 8U))));
            tracep->chgBit(oldp+424,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 7U))));
            tracep->chgBit(oldp+425,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 0xbU))));
            tracep->chgBit(oldp+426,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 0xaU))));
            tracep->chgCData(oldp+427,((0xfU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                >> 0x18U))),4);
            tracep->chgSData(oldp+428,((0xfffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                  >> 0xcU))),12);
            tracep->chgCData(oldp+429,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+430,((0x2000U | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),32);
            tracep->chgBit(oldp+431,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301));
            tracep->chgBit(oldp+432,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (1U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                             : (1U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)))));
            tracep->chgBit(oldp+433,((1U & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                            & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                               >> 4U)))));
            tracep->chgBit(oldp+434,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (1U 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))
                                             : (1U 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))))));
            tracep->chgBit(oldp+435,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                              & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)) 
                                                                 & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)))))))))))));
            tracep->chgIData(oldp+436,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313),32);
            tracep->chgIData(oldp+437,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312),32);
            tracep->chgBit(oldp+438,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))));
            tracep->chgQData(oldp+439,((1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)),64);
            tracep->chgBit(oldp+441,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 2U))));
            tracep->chgQData(oldp+442,((1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)),64);
            tracep->chgBit(oldp+444,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 3U))));
            tracep->chgQData(oldp+445,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q),40);
            tracep->chgQData(oldp+447,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q))),40);
            tracep->chgBit(oldp+449,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 4U))));
            tracep->chgQData(oldp+450,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q),40);
            tracep->chgQData(oldp+452,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q))),40);
            tracep->chgBit(oldp+454,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 5U))));
            tracep->chgQData(oldp+455,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q),40);
            tracep->chgQData(oldp+457,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q))),40);
            tracep->chgBit(oldp+459,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 6U))));
            tracep->chgQData(oldp+460,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q),40);
            tracep->chgQData(oldp+462,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q))),40);
            tracep->chgBit(oldp+464,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 7U))));
            tracep->chgQData(oldp+465,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q),40);
            tracep->chgQData(oldp+467,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q))),40);
            tracep->chgBit(oldp+469,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 8U))));
            tracep->chgQData(oldp+470,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q),40);
            tracep->chgQData(oldp+472,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q))),40);
            tracep->chgBit(oldp+474,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 9U))));
            tracep->chgQData(oldp+475,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q),40);
            tracep->chgQData(oldp+477,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q))),40);
            tracep->chgBit(oldp+479,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xaU))));
            tracep->chgQData(oldp+480,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q),40);
            tracep->chgQData(oldp+482,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q))),40);
            tracep->chgBit(oldp+484,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+485,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q),40);
            tracep->chgQData(oldp+487,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q))),40);
            tracep->chgBit(oldp+489,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xcU))));
            tracep->chgQData(oldp+490,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q),40);
            tracep->chgQData(oldp+492,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q))),40);
            tracep->chgBit(oldp+494,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute));
            tracep->chgBit(oldp+495,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory));
            tracep->chgBit(oldp+496,((((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                         & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
                                        & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory))) 
                                       & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen))) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
            tracep->chgBit(oldp+497,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute));
            tracep->chgBit(oldp+498,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory));
            tracep->chgBit(oldp+499,((((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                         & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)) 
                                        & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
                                       & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory))) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
            tracep->chgCData(oldp+500,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a),2);
            tracep->chgCData(oldp+501,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b),2);
            tracep->chgIData(oldp+502,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_a),32);
            tracep->chgIData(oldp+503,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_b),32);
            tracep->chgCData(oldp+504,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control_io_output),5);
            tracep->chgCData(oldp+505,((3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),2);
            tracep->chgIData(oldp+506,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+507,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg),32);
            tracep->chgBit(oldp+508,((((8U == (0x3cU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+509,((((0x10U == (0x3cU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgSData(oldp+510,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)),16);
            tracep->chgBit(oldp+511,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgSData(oldp+512,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                   >> 0x10U))),16);
            tracep->chgBit(oldp+513,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+514,((((0x1cU == (0x3cU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+515,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+516,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgIData(oldp+517,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+518,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+519,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+520,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg),32);
            tracep->chgSData(oldp+521,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q)),16);
            tracep->chgSData(oldp+522,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+523,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q)),16);
            tracep->chgSData(oldp+524,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+525,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q),32);
            tracep->chgBit(oldp+526,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
            tracep->chgCData(oldp+527,((0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),6);
            tracep->chgIData(oldp+528,(((0U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg
                                         : ((4U == 
                                             (0x3cU 
                                              & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg
                                             : ((8U 
                                                 == 
                                                 (0x3cU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 0U
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x3cU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg
                                                  : 
                                                 ((0x10U 
                                                   == 
                                                   (0x3cU 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q
                                                   : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8)))))),32);
            tracep->chgBit(oldp+529,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we));
            tracep->chgBit(oldp+530,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we));
            tracep->chgIData(oldp+531,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg),32);
            tracep->chgBit(oldp+532,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we));
            tracep->chgBit(oldp+533,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we));
            tracep->chgBit(oldp+534,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we));
            tracep->chgBit(oldp+535,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we));
            tracep->chgBit(oldp+536,((0U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+537,((4U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+538,((8U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+539,((0xcU == (0x3cU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+540,((0x10U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+541,((0x14U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+542,((0x18U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+543,((0x1cU == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+544,((0x20U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+545,((0x24U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+546,((0x28U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+547,((0x2cU == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+548,((0x30U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+549,((0x34U == (0x3cU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+550,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err));
            tracep->chgBit(oldp+551,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T)))));
            tracep->chgBit(oldp+552,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack));
            tracep->chgBit(oldp+553,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
                                      & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                         | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
            tracep->chgBit(oldp+554,((4U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+555,((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+556,((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+557,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                      | (0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
            tracep->chgBit(oldp+558,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                      & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
            tracep->chgBit(oldp+559,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                         | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                            & (0xfU 
                                               == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
            tracep->chgBit(oldp+560,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T)))));
            tracep->chgBit(oldp+561,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__error));
            tracep->chgBit(oldp+562,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack));
            tracep->chgBit(oldp+563,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                      & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                         | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
            tracep->chgBit(oldp+564,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                      | (0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
            tracep->chgBit(oldp+565,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                      & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
            tracep->chgBit(oldp+566,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                         | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                            & (0xfU 
                                               == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
            tracep->chgBit(oldp+567,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_data_req_o) 
                                      & (2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_dev_sel)))));
            tracep->chgBit(oldp+568,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending));
            tracep->chgBit(oldp+569,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__csb0_reg));
            tracep->chgBit(oldp+570,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__web0_reg));
            tracep->chgCData(oldp+571,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__wmask0_reg),4);
            tracep->chgCData(oldp+572,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__addr0_reg),8);
            tracep->chgIData(oldp+573,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__din0_reg),32);
            tracep->chgBit(oldp+574,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__csb0_reg));
            tracep->chgBit(oldp+575,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__web0_reg));
            tracep->chgCData(oldp+576,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__wmask0_reg),4);
            tracep->chgCData(oldp+577,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__addr0_reg),8);
            tracep->chgIData(oldp+578,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__din0_reg),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+579,((0xffU & ((0U 
                                                  == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                                  ? 
                                                 (0x3fU 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg
                                                   : 
                                                  (0x3fU 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                      >> 2U)))))),8);
            tracep->chgIData(oldp+580,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                         ? (0x3fU & 
                                            (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                             >> 2U))
                                         : ((2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                             ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg
                                             : (0x3fU 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                   >> 2U))))),32);
            tracep->chgIData(oldp+581,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                                         ? ((0U == 
                                             (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? ((((0x80U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                   ? 0xffffffU
                                                   : 0U) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                ((((0x8000U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 ((((0x800000U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                        >> 0x10U)))
                                                  : 
                                                 ((((0x80000000U 
                                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                        >> 0x18U))))))
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24)),32);
            tracep->chgIData(oldp+582,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                         ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                     : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                  : 0U))),32);
            tracep->chgBit(oldp+583,(((0U == (7U & 
                                              (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xcU)))
                                       ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                          == vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                       : ((1U == (7U 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0xcU)))
                                           ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                              != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                           : ((4U == 
                                               (7U 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xcU)))
                                               ? VL_LTS_III(1,32,32, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(1,32,32, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                                    < vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0xcU))) 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                                       >= vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)))))))));
            tracep->chgIData(oldp+584,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                         : ((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                             ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                             : ((2U 
                                                 == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                 ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                  ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                    ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                     ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                       ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1)))))))))))),32);
            tracep->chgCData(oldp+585,((((0x20U & (
                                                   ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                    & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                        ? 
                                                       (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                        >> 0x15U)
                                                        : 
                                                       ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                        >> 5U))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                 << 4U) 
                                                & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))) 
                                            | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368) 
                                               << 2U))) 
                                        | ((2U & (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                                   | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                       ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                                       : 
                                                      ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                        ? 
                                                       (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                        >> 7U)
                                                        : 
                                                       ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                        >> 1U)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                                ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                   >> 1U)
                                                : (
                                                   (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                   & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                       ? 
                                                      (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                       >> 3U)
                                                       : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))))),6);
            tracep->chgIData(oldp+586,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                                 & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31))
                                                 ? 
                                                ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                   : 0U))
                                                 : 0U)
                                             : 0U) : 
                                        (0xfffffffeU 
                                         & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))),32);
            tracep->chgIData(oldp+587,(((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372)),32);
            tracep->chgCData(oldp+588,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                             ? 0U : 
                                            ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                              ? 0x2bU
                                              : 0U))
                                         : ((0x20U 
                                             & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                >> 0x1aU)) 
                                            | (0x1fU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)))),6);
            tracep->chgIData(oldp+589,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? 0U : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
            tracep->chgIData(oldp+590,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i)
                                         ? (1U | (0x7fffff80U 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                     >> 1U)))
                                         : 1U)),32);
            tracep->chgIData(oldp+591,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? (((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                             & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31))
                                             ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                     : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                  : 0U))
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+592,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                            | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                                : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                    >> 1U)))))));
            tracep->chgBit(oldp+593,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                             ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                >> 1U)
                                             : ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                    ? 
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                    >> 3U)
                                                    : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))));
            tracep->chgBit(oldp+594,((1U & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                            & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                   >> 0x15U)
                                                : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                   >> 5U))))));
            tracep->chgSData(oldp+595,((((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                           & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                              & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                                 & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)) 
                                                                    & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)))))))))))
                                         ? (2U | (0x1ffdU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))
                                         : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),13);
            tracep->chgIData(oldp+596,(((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                         : (IData)(
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+597,(((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val)),32);
            tracep->chgQData(oldp+598,((((QData)((IData)(
                                                         ((1U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                                           : (IData)(
                                                                     (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val))))),64);
            tracep->chgIData(oldp+600,(((4U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                         : (IData)(
                                                   (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+601,(((4U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val)),32);
            tracep->chgQData(oldp+602,((((QData)((IData)(
                                                         ((4U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                                           : (IData)(
                                                                     (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((4U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp149, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgIData(oldp+604,(((8U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                         : __Vtemp149[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp150, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgIData(oldp+605,(((8U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp150[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp151, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp152, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgQData(oldp+606,((((QData)((IData)(
                                                         ((8U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                                           : 
                                                          __Vtemp151[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((8U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp152[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp153, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgIData(oldp+608,(((0x10U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                         : __Vtemp153[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp154, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgIData(oldp+609,(((0x10U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp154[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp155, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp156, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgQData(oldp+610,((((QData)((IData)(
                                                         ((0x10U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                                           : 
                                                          __Vtemp155[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x10U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp156[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp157, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgIData(oldp+612,(((0x20U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                         : __Vtemp157[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp158, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgIData(oldp+613,(((0x20U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp158[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp159, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp160, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgQData(oldp+614,((((QData)((IData)(
                                                         ((0x20U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                                           : 
                                                          __Vtemp159[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x20U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp160[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp161, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgIData(oldp+616,(((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                         : __Vtemp161[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp162, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgIData(oldp+617,(((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp162[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp163, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp164, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgQData(oldp+618,((((QData)((IData)(
                                                         ((0x40U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                                           : 
                                                          __Vtemp163[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x40U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp164[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp165, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgIData(oldp+620,(((0x80U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                         : __Vtemp165[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp166, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgIData(oldp+621,(((0x80U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp166[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp167, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp168, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgQData(oldp+622,((((QData)((IData)(
                                                         ((0x80U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                                           : 
                                                          __Vtemp167[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x80U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp168[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp169, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgIData(oldp+624,(((0x100U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                         : __Vtemp169[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp170, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgIData(oldp+625,(((0x100U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp170[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp171, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp172, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgQData(oldp+626,((((QData)((IData)(
                                                         ((0x100U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                                           : 
                                                          __Vtemp171[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x100U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp172[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp173, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgIData(oldp+628,(((0x200U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                         : __Vtemp173[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp174, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgIData(oldp+629,(((0x200U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp174[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp175, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp176, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgQData(oldp+630,((((QData)((IData)(
                                                         ((0x200U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                                           : 
                                                          __Vtemp175[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x200U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp176[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp177, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgIData(oldp+632,(((0x400U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                         : __Vtemp177[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp178, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgIData(oldp+633,(((0x400U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp178[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp179, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp180, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgQData(oldp+634,((((QData)((IData)(
                                                         ((0x400U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                                           : 
                                                          __Vtemp179[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x400U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp180[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp181, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgIData(oldp+636,(((0x800U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                         : __Vtemp181[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp182, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgIData(oldp+637,(((0x800U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp182[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp183, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp184, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgQData(oldp+638,((((QData)((IData)(
                                                         ((0x800U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                                           : 
                                                          __Vtemp183[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x800U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp184[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))))),64);
            VL_EXTEND_WQ(80,40, __Vtemp185, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgIData(oldp+640,(((0x1000U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                         : __Vtemp185[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp186, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgIData(oldp+641,(((0x1000U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp186[0U]
                                         : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp187, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp188, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgQData(oldp+642,((((QData)((IData)(
                                                         ((0x1000U 
                                                           & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                                           : 
                                                          __Vtemp187[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x1000U 
                                                            & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp188[0U]
                                                            : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))))),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+644,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data),32);
            tracep->chgIData(oldp+645,((0x3fffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
            tracep->chgIData(oldp+646,((0x3ffcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
            tracep->chgCData(oldp+647,((0xfcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),8);
            tracep->chgIData(oldp+648,((0xfffffffeU 
                                        & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))),32);
            tracep->chgIData(oldp+649,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in),32);
            tracep->chgIData(oldp+650,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1),32);
            tracep->chgIData(oldp+651,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2),32);
            tracep->chgIData(oldp+652,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata),32);
            tracep->chgIData(oldp+653,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum),32);
            tracep->chgCData(oldp+654,(((4U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 9U)) 
                                        | ((2U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                  >> 6U)) 
                                           | (1U & 
                                              (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 3U))))),3);
            tracep->chgIData(oldp+655,((0xfffffffeU 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
            tracep->chgIData(oldp+656,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val),32);
            tracep->chgIData(oldp+657,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val),32);
            tracep->chgIData(oldp+658,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val),32);
            tracep->chgIData(oldp+659,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val),32);
            tracep->chgIData(oldp+660,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val),32);
            tracep->chgIData(oldp+661,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val),32);
            tracep->chgIData(oldp+662,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val),32);
            tracep->chgIData(oldp+663,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val),32);
            tracep->chgIData(oldp+664,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val),32);
            tracep->chgIData(oldp+665,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val),32);
            tracep->chgIData(oldp+666,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val),32);
            tracep->chgIData(oldp+667,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val),32);
            tracep->chgIData(oldp+668,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int),32);
            tracep->chgCData(oldp+669,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368),2);
            tracep->chgBit(oldp+670,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 0xbU))));
            tracep->chgBit(oldp+671,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 7U))));
            tracep->chgBit(oldp+672,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 3U))));
            tracep->chgBit(oldp+673,(((3U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)) 
                                      & (0U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)))));
            tracep->chgCData(oldp+674,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),8);
            tracep->chgSData(oldp+675,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),16);
        }
        tracep->chgBit(oldp+676,(vlTOPp->clock));
        tracep->chgBit(oldp+677,(vlTOPp->reset));
        tracep->chgBit(oldp+678,(vlTOPp->io_rx_i));
        tracep->chgSData(oldp+679,(vlTOPp->io_CLK_PER_BIT),16);
        tracep->chgIData(oldp+680,(vlTOPp->io_gpio_i),30);
        tracep->chgIData(oldp+681,(vlTOPp->io_gpio_o),30);
        tracep->chgIData(oldp+682,(vlTOPp->io_gpio_en_o),30);
        tracep->chgIData(oldp+683,(vlTOPp->io_gpio_i),32);
        tracep->chgIData(oldp+684,(vlTOPp->io_CLK_PER_BIT),32);
        tracep->chgIData(oldp+685,((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                    | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)),32);
        tracep->chgBit(oldp+686,((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event)));
        tracep->chgIData(oldp+687,(((((((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q) 
                                        & vlTOPp->io_gpio_i) 
                                       & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg) 
                                      | ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q 
                                          & (~ vlTOPp->io_gpio_i)) 
                                         & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)) 
                                     | (vlTOPp->io_gpio_i 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg)) 
                                    | ((~ vlTOPp->io_gpio_i) 
                                       & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg))),32);
        tracep->chgIData(oldp+688,((((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q) 
                                     & vlTOPp->io_gpio_i) 
                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg)),32);
        tracep->chgIData(oldp+689,(((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q 
                                     & (~ vlTOPp->io_gpio_i)) 
                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)),32);
        tracep->chgIData(oldp+690,((vlTOPp->io_gpio_i 
                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg)),32);
        tracep->chgIData(oldp+691,(((~ vlTOPp->io_gpio_i) 
                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg)),32);
        tracep->chgBit(oldp+692,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we) 
                                  | (0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event))));
        tracep->chgIData(oldp+693,((((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
                                      ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                         | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
                                    & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
                                        ? (~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)
                                        : 0xffffffffU))),32);
        tracep->chgIData(oldp+694,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event),32);
    }
}

void VShaheen_top_openram_cv::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
