// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShaheen_top_openram_cv__Syms.h"


//======================

void VShaheen_top_openram_cv::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VShaheen_top_openram_cv::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShaheen_top_openram_cv::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VShaheen_top_openram_cv::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VShaheen_top_openram_cv::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+677,"clock", false,-1);
        tracep->declBit(c+678,"reset", false,-1);
        tracep->declBit(c+679,"io_rx_i", false,-1);
        tracep->declBus(c+680,"io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+681,"io_gpio_i", false,-1, 29,0);
        tracep->declBus(c+682,"io_gpio_o", false,-1, 29,0);
        tracep->declBus(c+683,"io_gpio_en_o", false,-1, 29,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv reset", false,-1);
        tracep->declBit(c+679,"Shaheen_top_openram_cv io_rx_i", false,-1);
        tracep->declBus(c+680,"Shaheen_top_openram_cv io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+681,"Shaheen_top_openram_cv io_gpio_i", false,-1, 29,0);
        tracep->declBus(c+682,"Shaheen_top_openram_cv io_gpio_o", false,-1, 29,0);
        tracep->declBus(c+683,"Shaheen_top_openram_cv io_gpio_en_o", false,-1, 29,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop_reset", false,-1);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop_io_rx_i", false,-1);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop_io_gpio_i", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop_io_gpio_o", false,-1, 31,0);
        tracep->declBus(c+9,"Shaheen_top_openram_cv shaheenTop_io_gpio_en_o", false,-1, 31,0);
        tracep->declBit(c+10,"Shaheen_top_openram_cv shaheenTop_io_iccm_we_o", false,-1);
        tracep->declBus(c+11,"Shaheen_top_openram_cv shaheenTop_io_iccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+580,"Shaheen_top_openram_cv shaheenTop_io_iccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop_io_iccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+12,"Shaheen_top_openram_cv shaheenTop_io_dccm_we_o", false,-1);
        tracep->declBus(c+13,"Shaheen_top_openram_cv shaheenTop_io_dccm_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+14,"Shaheen_top_openram_cv shaheenTop_io_dccm_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+15,"Shaheen_top_openram_cv shaheenTop_io_dccm_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+16,"Shaheen_top_openram_cv shaheenTop_io_dccm_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+17,"Shaheen_top_openram_cv shaheenTop_io_dccm_wmask_o_0", false,-1);
        tracep->declBit(c+18,"Shaheen_top_openram_cv shaheenTop_io_dccm_wmask_o_1", false,-1);
        tracep->declBit(c+19,"Shaheen_top_openram_cv shaheenTop_io_dccm_wmask_o_2", false,-1);
        tracep->declBit(c+20,"Shaheen_top_openram_cv shaheenTop_io_dccm_wmask_o_3", false,-1);
        tracep->declBus(c+21,"Shaheen_top_openram_cv shaheenTop_io_dccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+2,"Shaheen_top_openram_cv shaheenTop_io_dccm_rdata_i_0", false,-1, 7,0);
        tracep->declBus(c+3,"Shaheen_top_openram_cv shaheenTop_io_dccm_rdata_i_1", false,-1, 7,0);
        tracep->declBus(c+4,"Shaheen_top_openram_cv shaheenTop_io_dccm_rdata_i_2", false,-1, 7,0);
        tracep->declBus(c+5,"Shaheen_top_openram_cv shaheenTop_io_dccm_rdata_i_3", false,-1, 7,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv iccm_clock", false,-1);
        tracep->declBit(c+10,"Shaheen_top_openram_cv iccm_io_we_i", false,-1);
        tracep->declBus(c+580,"Shaheen_top_openram_cv iccm_io_addr_i", false,-1, 7,0);
        tracep->declBus(c+11,"Shaheen_top_openram_cv iccm_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv iccm_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv dccm_clock", false,-1);
        tracep->declBit(c+12,"Shaheen_top_openram_cv dccm_io_we_i", false,-1);
        tracep->declBus(c+21,"Shaheen_top_openram_cv dccm_io_addr_i", false,-1, 7,0);
        tracep->declBus(c+13,"Shaheen_top_openram_cv dccm_io_wdata_i_0", false,-1, 7,0);
        tracep->declBus(c+14,"Shaheen_top_openram_cv dccm_io_wdata_i_1", false,-1, 7,0);
        tracep->declBus(c+15,"Shaheen_top_openram_cv dccm_io_wdata_i_2", false,-1, 7,0);
        tracep->declBus(c+16,"Shaheen_top_openram_cv dccm_io_wdata_i_3", false,-1, 7,0);
        tracep->declBit(c+17,"Shaheen_top_openram_cv dccm_io_wmask_i_0", false,-1);
        tracep->declBit(c+18,"Shaheen_top_openram_cv dccm_io_wmask_i_1", false,-1);
        tracep->declBit(c+19,"Shaheen_top_openram_cv dccm_io_wmask_i_2", false,-1);
        tracep->declBit(c+20,"Shaheen_top_openram_cv dccm_io_wmask_i_3", false,-1);
        tracep->declBus(c+2,"Shaheen_top_openram_cv dccm_io_rdata_o_0", false,-1, 7,0);
        tracep->declBus(c+3,"Shaheen_top_openram_cv dccm_io_rdata_o_1", false,-1, 7,0);
        tracep->declBus(c+4,"Shaheen_top_openram_cv dccm_io_rdata_o_2", false,-1, 7,0);
        tracep->declBus(c+5,"Shaheen_top_openram_cv dccm_io_rdata_o_3", false,-1, 7,0);
        tracep->declBus(c+6,"Shaheen_top_openram_cv dout", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop reset", false,-1);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop io_rx_i", false,-1);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop io_gpio_i", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop io_gpio_o", false,-1, 31,0);
        tracep->declBus(c+9,"Shaheen_top_openram_cv shaheenTop io_gpio_en_o", false,-1, 31,0);
        tracep->declBit(c+10,"Shaheen_top_openram_cv shaheenTop io_iccm_we_o", false,-1);
        tracep->declBus(c+11,"Shaheen_top_openram_cv shaheenTop io_iccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+580,"Shaheen_top_openram_cv shaheenTop io_iccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop io_iccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+12,"Shaheen_top_openram_cv shaheenTop io_dccm_we_o", false,-1);
        tracep->declBus(c+13,"Shaheen_top_openram_cv shaheenTop io_dccm_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+14,"Shaheen_top_openram_cv shaheenTop io_dccm_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+15,"Shaheen_top_openram_cv shaheenTop io_dccm_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+16,"Shaheen_top_openram_cv shaheenTop io_dccm_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+17,"Shaheen_top_openram_cv shaheenTop io_dccm_wmask_o_0", false,-1);
        tracep->declBit(c+18,"Shaheen_top_openram_cv shaheenTop io_dccm_wmask_o_1", false,-1);
        tracep->declBit(c+19,"Shaheen_top_openram_cv shaheenTop io_dccm_wmask_o_2", false,-1);
        tracep->declBit(c+20,"Shaheen_top_openram_cv shaheenTop io_dccm_wmask_o_3", false,-1);
        tracep->declBus(c+21,"Shaheen_top_openram_cv shaheenTop io_dccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+2,"Shaheen_top_openram_cv shaheenTop io_dccm_rdata_i_0", false,-1, 7,0);
        tracep->declBus(c+3,"Shaheen_top_openram_cv shaheenTop io_dccm_rdata_i_1", false,-1, 7,0);
        tracep->declBus(c+4,"Shaheen_top_openram_cv shaheenTop io_dccm_rdata_i_2", false,-1, 7,0);
        tracep->declBus(c+5,"Shaheen_top_openram_cv shaheenTop io_dccm_rdata_i_3", false,-1, 7,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop uart_ctrl_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop uart_ctrl_reset", false,-1);
        tracep->declBit(c+22,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_isStalled", false,-1);
        tracep->declBus(c+23,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_rx_data_o", false,-1, 31,0);
        tracep->declBus(c+24,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_addr_o", false,-1, 7,0);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_rxd", false,-1);
        tracep->declBit(c+25,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_valid", false,-1);
        tracep->declBit(c+26,"Shaheen_top_openram_cv shaheenTop uart_ctrl_io_done", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core_reset", false,-1);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core_io_data_gnt_i", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core_io_data_rvalid_i", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core_io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core_io_data_req_o", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core_io_data_we_o", false,-1);
        tracep->declBit(c+31,"Shaheen_top_openram_cv shaheenTop core_io_data_be_o_0", false,-1);
        tracep->declBit(c+32,"Shaheen_top_openram_cv shaheenTop core_io_data_be_o_1", false,-1);
        tracep->declBit(c+33,"Shaheen_top_openram_cv shaheenTop core_io_data_be_o_2", false,-1);
        tracep->declBit(c+34,"Shaheen_top_openram_cv shaheenTop core_io_data_be_o_3", false,-1);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core_io_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+36,"Shaheen_top_openram_cv shaheenTop core_io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+37,"Shaheen_top_openram_cv shaheenTop core_io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+38,"Shaheen_top_openram_cv shaheenTop core_io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+39,"Shaheen_top_openram_cv shaheenTop core_io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_io_instr_gnt_i", false,-1);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core_io_instr_rvalid_i", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core_io_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_io_instr_req_o", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core_io_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+41,"Shaheen_top_openram_cv shaheenTop core_io_stall_core_i", false,-1);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core_io_irq_external_i", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio_reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio_io_cio_gpio_i", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio_io_cio_gpio_o", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio_io_cio_gpio_en_o", false,-1, 31,0);
        tracep->declBus(c+52,"Shaheen_top_openram_cv shaheenTop gpio_io_intr_gpio_o", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_req_i", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_gnt_o", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_addr_i", false,-1, 31,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_we_i", false,-1);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_be_i", false,-1, 3,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_valid_o", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_o_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_i_d_valid", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host_io_tl_i_a_ready", false,-1);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_req_i", false,-1);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_gnt_o", false,-1);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_addr_i", false,-1, 31,0);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_we_i", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+53,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_be_i", false,-1, 3,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_valid_o", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_o_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_i_d_valid", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host_io_tl_i_a_ready", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_reset", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+648,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_addr_o", false,-1, 7,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop iccm_tl_device_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_reset", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+7,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+56,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_tl_o_a_ready", false,-1);
        tracep->declBit(c+57,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_we_o", false,-1);
        tracep->declBus(c+58,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_addr_o", false,-1, 7,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_wdata_o", false,-1, 31,0);
        tracep->declBit(c+17,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_wmask_o_0", false,-1);
        tracep->declBit(c+18,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_wmask_o_1", false,-1);
        tracep->declBit(c+19,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_wmask_o_2", false,-1);
        tracep->declBit(c+20,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_wmask_o_3", false,-1);
        tracep->declBus(c+6,"Shaheen_top_openram_cv shaheenTop dccm_tl_device_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_reset", false,-1);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_i_a_data", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_o_d_valid", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_o_d_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_h_o_a_ready", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_0_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_0_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_0_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_0_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_0_a_data", false,-1, 31,0);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_1_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_1_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_1_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_1_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_o_1_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_0_d_valid", false,-1);
        tracep->declBus(c+7,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_0_d_data", false,-1, 31,0);
        tracep->declBit(c+56,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_0_a_ready", false,-1);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_1_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_1_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_tl_d_i_1_a_ready", false,-1);
        tracep->declBus(c+59,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2_io_dev_sel", false,-1, 1,0);
        tracep->declBus(c+11,"Shaheen_top_openram_cv shaheenTop rx_data_reg", false,-1, 31,0);
        tracep->declBus(c+60,"Shaheen_top_openram_cv shaheenTop rx_addr_reg", false,-1, 31,0);
        tracep->declBit(c+61,"Shaheen_top_openram_cv shaheenTop reset_reg", false,-1);
        tracep->declBus(c+62,"Shaheen_top_openram_cv shaheenTop state_reg", false,-1, 1,0);
        tracep->declBus(c+581,"Shaheen_top_openram_cv shaheenTop instr_addr", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop uart_ctrl clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop uart_ctrl reset", false,-1);
        tracep->declBit(c+22,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_isStalled", false,-1);
        tracep->declBus(c+23,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_rx_data_o", false,-1, 31,0);
        tracep->declBus(c+24,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_addr_o", false,-1, 7,0);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_rxd", false,-1);
        tracep->declBit(c+25,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_valid", false,-1);
        tracep->declBit(c+26,"Shaheen_top_openram_cv shaheenTop uart_ctrl io_done", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_reset", false,-1);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_io_rxd", false,-1);
        tracep->declBit(c+63,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_io_valid", false,-1);
        tracep->declBus(c+64,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx_io_data", false,-1, 7,0);
        tracep->declBit(c+26,"Shaheen_top_openram_cv shaheenTop uart_ctrl regDone", false,-1);
        tracep->declBus(c+65,"Shaheen_top_openram_cv shaheenTop uart_ctrl count", false,-1, 2,0);
        tracep->declBus(c+23,"Shaheen_top_openram_cv shaheenTop uart_ctrl regFinalData", false,-1, 31,0);
        tracep->declBus(c+66,"Shaheen_top_openram_cv shaheenTop uart_ctrl regAddr", false,-1, 13,0);
        tracep->declBit(c+25,"Shaheen_top_openram_cv shaheenTop uart_ctrl regValid", false,-1);
        tracep->declBus(c+67,"Shaheen_top_openram_cv shaheenTop uart_ctrl dataReg", false,-1, 7,0);
        tracep->declBus(c+68,"Shaheen_top_openram_cv shaheenTop uart_ctrl regLSB1", false,-1, 7,0);
        tracep->declBus(c+69,"Shaheen_top_openram_cv shaheenTop uart_ctrl regLSB2", false,-1, 7,0);
        tracep->declBus(c+70,"Shaheen_top_openram_cv shaheenTop uart_ctrl regMSB1", false,-1, 7,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx reset", false,-1);
        tracep->declBus(c+680,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx io_rxd", false,-1);
        tracep->declBit(c+63,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx io_valid", false,-1);
        tracep->declBus(c+64,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx io_data", false,-1, 7,0);
        tracep->declBus(c+71,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx stateReg", false,-1, 2,0);
        tracep->declBus(c+72,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx clockCount", false,-1, 7,0);
        tracep->declBus(c+73,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx bitIndex", false,-1, 3,0);
        tracep->declBit(c+63,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx validReg", false,-1);
        tracep->declBit(c+74,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx rxReg", false,-1);
        tracep->declBus(c+64,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx shiftReg", false,-1, 7,0);
        tracep->declBus(c+685,"Shaheen_top_openram_cv shaheenTop uart_ctrl rx CLCK_PER_BIT", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core reset", false,-1);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core io_data_gnt_i", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core io_data_rvalid_i", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core io_data_req_o", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core io_data_we_o", false,-1);
        tracep->declBit(c+31,"Shaheen_top_openram_cv shaheenTop core io_data_be_o_0", false,-1);
        tracep->declBit(c+32,"Shaheen_top_openram_cv shaheenTop core io_data_be_o_1", false,-1);
        tracep->declBit(c+33,"Shaheen_top_openram_cv shaheenTop core io_data_be_o_2", false,-1);
        tracep->declBit(c+34,"Shaheen_top_openram_cv shaheenTop core io_data_be_o_3", false,-1);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core io_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+36,"Shaheen_top_openram_cv shaheenTop core io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+37,"Shaheen_top_openram_cv shaheenTop core io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+38,"Shaheen_top_openram_cv shaheenTop core io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+39,"Shaheen_top_openram_cv shaheenTop core io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core io_instr_gnt_i", false,-1);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core io_instr_rvalid_i", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core io_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core io_instr_req_o", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core io_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+41,"Shaheen_top_openram_cv shaheenTop core io_stall_core_i", false,-1);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core io_irq_external_i", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core ID_EX_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core ID_EX_reset", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_pc_in", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_pc4_in", false,-1, 31,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs1_sel_in", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs2_sel_in", false,-1, 4,0);
        tracep->declBus(c+79,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs1_in", false,-1, 31,0);
        tracep->declBus(c+80,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+81,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_imm", false,-1, 31,0);
        tracep->declBus(c+82,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_func3_in", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_func7_in", false,-1, 6,0);
        tracep->declBit(c+85,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+86,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+87,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+88,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+89,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+90,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_AluOp_in", false,-1, 3,0);
        tracep->declBus(c+91,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_OpA_sel_in", false,-1, 1,0);
        tracep->declBit(c+92,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_OpB_sel_in", false,-1);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_inst_op_in", false,-1, 6,0);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_stall", false,-1);
        tracep->declBus(c+96,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+97,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+98,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+99,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+100,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_imm_out", false,-1, 31,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_func7_out", false,-1, 6,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_inst_op_out", false,-1, 6,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_rs2_sel_out", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+113,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+114,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core ID_EX_io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core EX_MEM_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core EX_MEM_reset", false,-1);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+116,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_alu_in", false,-1, 31,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_EX_MEM_func3", false,-1, 2,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_stall", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+122,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_EX_MEM_func3_out", false,-1, 2,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core EX_MEM_io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core MEM_WB_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core MEM_WB_reset", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_rd_sel_in", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_MemRd_in", false,-1);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_dmem_data_in", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_alu_in", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_csr_data_in", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_stall", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+128,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_MemToReg_out", false,-1);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_ctrl_MemRd_out", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+131,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_dmem_data_out", false,-1, 31,0);
        tracep->declBus(c+132,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core MEM_WB_io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core fetch_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core fetch_reset", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_instr_gnt_i", false,-1);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_instr_rvalid_i", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_irq_pending_i", false,-1);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_mstatus_mie_i", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_mtvec_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_mtvec_init_o", false,-1);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_save_cause_o", false,-1);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_save_if_o", false,-1);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_if_pc_o", false,-1, 31,0);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_exc_cause_o", false,-1, 5,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core fetch_io_csrRegFile_csr_mepc_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_init_mtvec_i", false,-1);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_sb_imm_i", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_uj_imm_i", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_jalr_imm_i", false,-1, 31,0);
        tracep->declBus(c+144,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_ctrl_next_pc_sel_i", false,-1, 1,0);
        tracep->declBit(c+145,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_ctrl_out_branch_i", false,-1);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_branchLogic_output_i", false,-1);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_hazardDetection_pc_i", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_hazardDetection_inst_i", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_hazardDetection_current_pc_i", false,-1, 31,0);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_hazardDetection_pc_forward_i", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_hazardDetection_inst_forward_i", false,-1);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_mret_inst_i", false,-1);
        tracep->declBit(c+149,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_stall_i", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core fetch_io_core_instr_req_o", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_if_id_pc4_o", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core fetch_io_decode_if_id_inst_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode_reset", false,-1);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core decode_io_irq_external_i", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode_io_IF_ID_inst", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode_io_IF_ID_pc", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode_io_IF_ID_pc4", false,-1, 31,0);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode_io_MEM_WB_ctrl_regWr", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core decode_io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode_io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode_io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode_io_ID_EX_ctrl_regWr", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core decode_io_ID_EX_ctrl_csrWen", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode_io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_ctrl_MemRd", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_ctrl_regWr", false,-1);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core decode_io_MEM_WB_ctrl_MemRd", false,-1);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core decode_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core decode_io_dmem_memOut", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core decode_io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core decode_io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core decode_io_MEM_WB_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core decode_io_EX_MEM_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core decode_io_ID_EX_csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_mtvec_init", false,-1);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_if_pc", false,-1, 31,0);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_save_if", false,-1);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_exc_cause_i", false,-1, 5,0);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_save_cause_i", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode_io_execute_regwrite", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode_io_mem_regwrite", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode_io_wb_regwrite", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode_io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+151,"Shaheen_top_openram_cv shaheenTop core decode_io_inst_op_out", false,-1, 31,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode_io_func7_out", false,-1, 6,0);
        tracep->declBus(c+82,"Shaheen_top_openram_cv shaheenTop core decode_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode_io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode_io_rs2_sel_out", false,-1, 4,0);
        tracep->declBus(c+79,"Shaheen_top_openram_cv shaheenTop core decode_io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+80,"Shaheen_top_openram_cv shaheenTop core decode_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core decode_io_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+81,"Shaheen_top_openram_cv shaheenTop core decode_io_imm_out", false,-1, 31,0);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core decode_io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core decode_io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core decode_io_jalr_output", false,-1, 31,0);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core decode_io_branchLogic_output", false,-1);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode_io_hazardDetection_pc_out", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode_io_hazardDetection_inst_out", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode_io_hazardDetection_current_pc_out", false,-1, 31,0);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode_io_hazardDetection_pc_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode_io_hazardDetection_inst_forward", false,-1);
        tracep->declBit(c+85,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+86,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+145,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_Branch_out", false,-1);
        tracep->declBit(c+88,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+87,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+89,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+90,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+91,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+92,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+144,"Shaheen_top_openram_cv shaheenTop core decode_io_ctrl_next_pc_sel_out", false,-1, 1,0);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_irq_pending_o", false,-1);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_mstatus_mie_o", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_mtvec_o", false,-1, 31,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_csr_mepc_o", false,-1, 31,0);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core decode_io_fetch_mret_inst_o", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core execute_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core execute_io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core execute_io_EX_MEM_ctrl_RegWr", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core execute_io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core execute_io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core execute_io_MEM_WB_ctrl_RegWr", false,-1);
        tracep->declBus(c+113,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_OpA_sel", false,-1, 1,0);
        tracep->declBit(c+114,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_OpB_sel", false,-1);
        tracep->declBus(c+97,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_pc4", false,-1, 31,0);
        tracep->declBus(c+96,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_pc_out", false,-1, 31,0);
        tracep->declBus(c+98,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_rs1", false,-1, 31,0);
        tracep->declBus(c+99,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_rs2", false,-1, 31,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_csr_data", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core execute_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core execute_io_EX_MEM_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core execute_io_MEM_WB_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core execute_io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+100,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_imm", false,-1, 31,0);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_AluOp", false,-1, 3,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_func7", false,-1, 6,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_func3", false,-1, 2,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_MemWr", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_RegWr", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_CsrWen", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core execute_io_ID_EX_ctrl_MemToReg", false,-1);
        tracep->declBus(c+116,"Shaheen_top_openram_cv shaheenTop core execute_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core execute_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core execute_io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core execute_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core execute_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core execute_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core execute_io_ctrl_CsrWe_out", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core execute_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core execute_io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_RegWr", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_CsrWe", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_MemRd", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_MemToReg", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_MemWr", false,-1);
        tracep->declBus(c+122,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_rs2", false,-1, 31,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_func3", false,-1, 2,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_EX_MEM_csr_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_gnt_i", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_rvalid_i", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_req_o", false,-1);
        tracep->declBit(c+31,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_be_o_0", false,-1);
        tracep->declBit(c+32,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_be_o_1", false,-1);
        tracep->declBit(c+33,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_be_o_2", false,-1);
        tracep->declBit(c+34,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_be_o_3", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_ctrl_MemWr_out", false,-1);
        tracep->declBus(c+36,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+37,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+38,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+39,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_memAddress", false,-1, 31,0);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_data_out", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+152,"Shaheen_top_openram_cv shaheenTop core memory_stage_io_stall", false,-1);
        tracep->declBit(c+128,"Shaheen_top_openram_cv shaheenTop core writeback_io_MEM_WB_MemToReg", false,-1);
        tracep->declBus(c+131,"Shaheen_top_openram_cv shaheenTop core writeback_io_MEM_WB_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+132,"Shaheen_top_openram_cv shaheenTop core writeback_io_MEM_WB_alu_output", false,-1, 31,0);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core writeback_io_write_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core ID_EX clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core ID_EX reset", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core ID_EX io_pc_in", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core ID_EX io_pc4_in", false,-1, 31,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs1_sel_in", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs2_sel_in", false,-1, 4,0);
        tracep->declBus(c+79,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs1_in", false,-1, 31,0);
        tracep->declBus(c+80,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+81,"Shaheen_top_openram_cv shaheenTop core ID_EX io_imm", false,-1, 31,0);
        tracep->declBus(c+82,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core ID_EX io_func3_in", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core ID_EX io_func7_in", false,-1, 6,0);
        tracep->declBit(c+85,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+86,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+87,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+88,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+89,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+90,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_AluOp_in", false,-1, 3,0);
        tracep->declBus(c+91,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_OpA_sel_in", false,-1, 1,0);
        tracep->declBit(c+92,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_OpB_sel_in", false,-1);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core ID_EX io_inst_op_in", false,-1, 6,0);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core ID_EX io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core ID_EX io_stall", false,-1);
        tracep->declBus(c+96,"Shaheen_top_openram_cv shaheenTop core ID_EX io_pc_out", false,-1, 31,0);
        tracep->declBus(c+97,"Shaheen_top_openram_cv shaheenTop core ID_EX io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+98,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+99,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+100,"Shaheen_top_openram_cv shaheenTop core ID_EX io_imm_out", false,-1, 31,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core ID_EX io_func3_out", false,-1, 2,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core ID_EX io_func7_out", false,-1, 6,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core ID_EX io_inst_op_out", false,-1, 6,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core ID_EX io_rs2_sel_out", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+113,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+114,"Shaheen_top_openram_cv shaheenTop core ID_EX io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core ID_EX io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+96,"Shaheen_top_openram_cv shaheenTop core ID_EX pc_reg", false,-1, 31,0);
        tracep->declBus(c+97,"Shaheen_top_openram_cv shaheenTop core ID_EX pc4_reg", false,-1, 31,0);
        tracep->declBus(c+98,"Shaheen_top_openram_cv shaheenTop core ID_EX rs1_reg", false,-1, 31,0);
        tracep->declBus(c+99,"Shaheen_top_openram_cv shaheenTop core ID_EX rs2_reg", false,-1, 31,0);
        tracep->declBus(c+100,"Shaheen_top_openram_cv shaheenTop core ID_EX imm_reg", false,-1, 31,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core ID_EX rd_sel_reg", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core ID_EX rs1_sel_reg", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core ID_EX rs2_sel_reg", false,-1, 4,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core ID_EX func3_reg", false,-1, 2,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core ID_EX func7_reg", false,-1, 6,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core ID_EX inst_op_reg", false,-1, 6,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core ID_EX csr_data_reg", false,-1, 31,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_MemWr_reg", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_MemRd_reg", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_RegWr_reg", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_CsrWen_reg", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_MemToReg_reg", false,-1);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_AluOp_reg", false,-1, 3,0);
        tracep->declBus(c+113,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_OpA_sel_reg", false,-1, 1,0);
        tracep->declBit(c+114,"Shaheen_top_openram_cv shaheenTop core ID_EX ctrl_OpB_sel_reg", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core EX_MEM clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core EX_MEM reset", false,-1);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+116,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_alu_in", false,-1, 31,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_EX_MEM_func3", false,-1, 2,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_stall", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+122,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_alu_output", false,-1, 31,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_EX_MEM_func3_out", false,-1, 2,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core EX_MEM io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_memWr", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_memRd", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_regWr", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_csrWen", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_memToReg", false,-1);
        tracep->declBus(c+122,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_rs2", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_rd_sel", false,-1, 4,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_alu_output", false,-1, 31,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_func3", false,-1, 2,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core EX_MEM reg_csr_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core MEM_WB clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core MEM_WB reset", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_rd_sel_in", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_MemRd_in", false,-1);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_dmem_data_in", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_alu_in", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_csr_data_in", false,-1, 31,0);
        tracep->declBit(c+95,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_stall", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+128,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_MemToReg_out", false,-1);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_ctrl_MemRd_out", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+131,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_dmem_data_out", false,-1, 31,0);
        tracep->declBus(c+132,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core MEM_WB io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_regWr", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_csrWen", false,-1);
        tracep->declBit(c+128,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_memToReg", false,-1);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_memRd", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_rdSel", false,-1, 4,0);
        tracep->declBus(c+131,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+132,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core MEM_WB reg_csr_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core fetch clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core fetch reset", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core fetch io_core_instr_gnt_i", false,-1);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core fetch io_core_instr_rvalid_i", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core fetch io_core_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_irq_pending_i", false,-1);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_mstatus_mie_i", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_mtvec_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_mtvec_init_o", false,-1);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_save_cause_o", false,-1);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_save_if_o", false,-1);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_if_pc_o", false,-1, 31,0);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_exc_cause_o", false,-1, 5,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core fetch io_csrRegFile_csr_mepc_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core fetch io_core_init_mtvec_i", false,-1);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_sb_imm_i", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_uj_imm_i", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_jalr_imm_i", false,-1, 31,0);
        tracep->declBus(c+144,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_ctrl_next_pc_sel_i", false,-1, 1,0);
        tracep->declBit(c+145,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_ctrl_out_branch_i", false,-1);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_branchLogic_output_i", false,-1);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_hazardDetection_pc_i", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_hazardDetection_inst_i", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_hazardDetection_current_pc_i", false,-1, 31,0);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_hazardDetection_pc_forward_i", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_hazardDetection_inst_forward_i", false,-1);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_mret_inst_i", false,-1);
        tracep->declBit(c+149,"Shaheen_top_openram_cv shaheenTop core fetch io_core_stall_i", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core fetch io_core_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core fetch io_core_instr_req_o", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_if_id_pc4_o", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core fetch io_decode_if_id_inst_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core fetch pc_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core fetch pc_reset", false,-1);
        tracep->declBus(c+650,"Shaheen_top_openram_cv shaheenTop core fetch pc_io_in", false,-1, 31,0);
        tracep->declBus(c+153,"Shaheen_top_openram_cv shaheenTop core fetch pc_io_out", false,-1, 31,0);
        tracep->declBus(c+154,"Shaheen_top_openram_cv shaheenTop core fetch pc_io_pc4", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core fetch if_id_pc_reg", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core fetch if_id_pc4_reg", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core fetch if_id_inst_reg", false,-1, 31,0);
        tracep->declBit(c+155,"Shaheen_top_openram_cv shaheenTop core fetch handle_irq", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core fetch pc clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core fetch pc reset", false,-1);
        tracep->declBus(c+650,"Shaheen_top_openram_cv shaheenTop core fetch pc io_in", false,-1, 31,0);
        tracep->declBus(c+153,"Shaheen_top_openram_cv shaheenTop core fetch pc io_out", false,-1, 31,0);
        tracep->declBus(c+154,"Shaheen_top_openram_cv shaheenTop core fetch pc io_pc4", false,-1, 31,0);
        tracep->declBus(c+153,"Shaheen_top_openram_cv shaheenTop core fetch pc reg_", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode reset", false,-1);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core decode io_irq_external_i", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode io_IF_ID_inst", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode io_IF_ID_pc", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode io_IF_ID_pc4", false,-1, 31,0);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode io_MEM_WB_ctrl_regWr", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core decode io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode io_ID_EX_ctrl_regWr", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core decode io_ID_EX_ctrl_csrWen", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_ctrl_MemRd", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_ctrl_regWr", false,-1);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core decode io_MEM_WB_ctrl_MemRd", false,-1);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core decode io_alu_output", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core decode io_dmem_memOut", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core decode io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core decode io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core decode io_MEM_WB_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core decode io_EX_MEM_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core decode io_ID_EX_csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_mtvec_init", false,-1);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_if_pc", false,-1, 31,0);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_save_if", false,-1);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_exc_cause_i", false,-1, 5,0);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_save_cause_i", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode io_execute_regwrite", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode io_mem_regwrite", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode io_wb_regwrite", false,-1);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode io_pc_out", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+151,"Shaheen_top_openram_cv shaheenTop core decode io_inst_op_out", false,-1, 31,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode io_func3_out", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode io_func7_out", false,-1, 6,0);
        tracep->declBus(c+82,"Shaheen_top_openram_cv shaheenTop core decode io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode io_rs2_sel_out", false,-1, 4,0);
        tracep->declBus(c+79,"Shaheen_top_openram_cv shaheenTop core decode io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+80,"Shaheen_top_openram_cv shaheenTop core decode io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core decode io_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+81,"Shaheen_top_openram_cv shaheenTop core decode io_imm_out", false,-1, 31,0);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core decode io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core decode io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core decode io_jalr_output", false,-1, 31,0);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core decode io_branchLogic_output", false,-1);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode io_hazardDetection_pc_out", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode io_hazardDetection_inst_out", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode io_hazardDetection_current_pc_out", false,-1, 31,0);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode io_hazardDetection_pc_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode io_hazardDetection_inst_forward", false,-1);
        tracep->declBit(c+85,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+86,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+145,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_Branch_out", false,-1);
        tracep->declBit(c+88,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+87,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+89,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+90,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+91,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+92,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+144,"Shaheen_top_openram_cv shaheenTop core decode io_ctrl_next_pc_sel_out", false,-1, 1,0);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_irq_pending_o", false,-1);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_mstatus_mie_o", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_mtvec_o", false,-1, 31,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_csr_mepc_o", false,-1, 31,0);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core decode io_fetch_mret_inst_o", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_IF_ID_INST", false,-1, 31,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_ID_EX_MEMREAD", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_pc_in", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_current_pc", false,-1, 31,0);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_IF_ID_MEMREAD", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_inst_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_pc_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_ctrl_forward", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_inst_out", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection_io_current_pc_out", false,-1, 31,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode control_io_in_opcode", false,-1, 6,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode control_io_func7", false,-1, 6,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode control_io_func3", false,-1, 2,0);
        tracep->declBit(c+157,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_memWrite", false,-1);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_branch", false,-1);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_memRead", false,-1);
        tracep->declBit(c+159,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_regWrite", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode control_io_csr_we_o", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control_io_csr_imm_type", false,-1);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode control_io_csr_op_o", false,-1, 1,0);
        tracep->declBit(c+163,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_memToReg", false,-1);
        tracep->declBus(c+164,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_aluOp", false,-1, 3,0);
        tracep->declBus(c+165,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+166,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_operand_b_sel", false,-1);
        tracep->declBus(c+167,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_extend_sel", false,-1, 1,0);
        tracep->declBus(c+168,"Shaheen_top_openram_cv shaheenTop core decode control_io_out_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_ID_EX_MEMRD", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_EX_MEM_MEMRD", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_MEM_WB_MEMRD", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_execute_regwrite", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_mem_regwrite", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_wb_regwrite", false,-1);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_ctrl_branch", false,-1);
        tracep->declBus(c+169,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_forward_rs1", false,-1, 3,0);
        tracep->declBus(c+170,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit_io_forward_rs2", false,-1, 3,0);
        tracep->declBus(c+651,"Shaheen_top_openram_cv shaheenTop core decode branchLogic_io_in_rs1", false,-1, 31,0);
        tracep->declBus(c+652,"Shaheen_top_openram_cv shaheenTop core decode branchLogic_io_in_rs2", false,-1, 31,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode branchLogic_io_in_func3", false,-1, 2,0);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core decode branchLogic_io_output", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode reg_file_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode reg_file_reset", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_regWrite", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_rd_sel", false,-1, 4,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_rs2_sel", false,-1, 4,0);
        tracep->declBus(c+171,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_writeData", false,-1, 31,0);
        tracep->declBus(c+172,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_rs1", false,-1, 31,0);
        tracep->declBus(c+173,"Shaheen_top_openram_cv shaheenTop core decode reg_file_io_rs2", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_instruction", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_pc", false,-1, 31,0);
        tracep->declBus(c+174,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_s_imm", false,-1, 31,0);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+175,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_u_imm", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+176,"Shaheen_top_openram_cv shaheenTop core decode imm_generation_io_i_imm", false,-1, 31,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_MEM_WB_regWr", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_inst_op_in", false,-1, 6,0);
        tracep->declBit(c+177,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_fwd_rs1", false,-1);
        tracep->declBit(c+178,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector_io_fwd_rs2", false,-1);
        tracep->declBus(c+585,"Shaheen_top_openram_cv shaheenTop core decode jalr_io_input_a", false,-1, 31,0);
        tracep->declBus(c+176,"Shaheen_top_openram_cv shaheenTop core decode jalr_io_input_b", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core decode jalr_io_output", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_reset", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_csr_mtvec", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_mtvec_init", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_access", false,-1);
        tracep->declBus(c+179,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_addr", false,-1, 11,0);
        tracep->declBus(c+653,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_wdata", false,-1, 31,0);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_op", false,-1, 1,0);
        tracep->declBit(c+180,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_op_en", false,-1);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_csr_rdata", false,-1, 31,0);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_irq_external", false,-1);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_irq_pending", false,-1);
        tracep->declBus(c+181,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_irqs", false,-1, 2,0);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_csr_mstatus_mie", false,-1);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_pc_if", false,-1, 31,0);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_save_if", false,-1);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_restore_mret", false,-1);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_save_cause", false,-1);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_i_csr_mcause", false,-1, 5,0);
        tracep->declBit(c+182,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile_io_o_illegal_csr_insn", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_reg_wr_in_execute", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_rd_sel_in_execute", false,-1, 4,0);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_wr_in_execute", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_reg_wr_in_memory", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_rd_sel_in_memory", false,-1, 4,0);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_wr_in_memory", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_reg_wr_in_writeback", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_rd_sel_in_writeback", false,-1, 4,0);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_wr_in_writeback", false,-1);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_rs1_sel_in_decode", false,-1, 4,0);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_inst_in_decode", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_imm_inst_in_decode", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_load_inst_in_execute", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_load_inst_in_memory", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+183,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_forward_rs1", false,-1, 2,0);
        tracep->declBit(c+180,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit_io_csr_op_en_o", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_IF_ID_INST", false,-1, 31,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_ID_EX_MEMREAD", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_pc_in", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_current_pc", false,-1, 31,0);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_IF_ID_MEMREAD", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_inst_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_pc_forward", false,-1);
        tracep->declBit(c+147,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_ctrl_forward", false,-1);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_inst_out", false,-1, 31,0);
        tracep->declBus(c+76,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_pc_out", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection io_current_pc_out", false,-1, 31,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode hazardDetection rs2_sel", false,-1, 4,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode control io_in_opcode", false,-1, 6,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode control io_func7", false,-1, 6,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode control io_func3", false,-1, 2,0);
        tracep->declBit(c+157,"Shaheen_top_openram_cv shaheenTop core decode control io_out_memWrite", false,-1);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode control io_out_branch", false,-1);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode control io_out_memRead", false,-1);
        tracep->declBit(c+159,"Shaheen_top_openram_cv shaheenTop core decode control io_out_regWrite", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode control io_csr_we_o", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control io_csr_imm_type", false,-1);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode control io_csr_op_o", false,-1, 1,0);
        tracep->declBit(c+163,"Shaheen_top_openram_cv shaheenTop core decode control io_out_memToReg", false,-1);
        tracep->declBus(c+164,"Shaheen_top_openram_cv shaheenTop core decode control io_out_aluOp", false,-1, 3,0);
        tracep->declBus(c+165,"Shaheen_top_openram_cv shaheenTop core decode control io_out_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+166,"Shaheen_top_openram_cv shaheenTop core decode control io_out_operand_b_sel", false,-1);
        tracep->declBus(c+167,"Shaheen_top_openram_cv shaheenTop core decode control io_out_extend_sel", false,-1, 1,0);
        tracep->declBus(c+168,"Shaheen_top_openram_cv shaheenTop core decode control io_out_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_func3", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_func7", false,-1, 6,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_opcode", false,-1, 6,0);
        tracep->declBit(c+184,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_r_type", false,-1);
        tracep->declBit(c+185,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_load_type", false,-1);
        tracep->declBit(c+186,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_s_type", false,-1);
        tracep->declBit(c+187,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_sb_type", false,-1);
        tracep->declBit(c+188,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_i_type", false,-1);
        tracep->declBit(c+189,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_jalr_type", false,-1);
        tracep->declBit(c+190,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_jal_type", false,-1);
        tracep->declBit(c+191,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_lui_type", false,-1);
        tracep->declBit(c+192,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_Auipc", false,-1);
        tracep->declBit(c+193,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_multiply", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_csr_imm_type", false,-1);
        tracep->declBit(c+194,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_csr_type", false,-1);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode_io_csr_op", false,-1, 1,0);
        tracep->declBit(c+184,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_r_type", false,-1);
        tracep->declBit(c+185,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_load_type", false,-1);
        tracep->declBit(c+186,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_s_type", false,-1);
        tracep->declBit(c+187,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_sb_type", false,-1);
        tracep->declBit(c+188,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_i_type", false,-1);
        tracep->declBit(c+189,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_jalr_type", false,-1);
        tracep->declBit(c+190,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_jal_type", false,-1);
        tracep->declBit(c+191,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_lui_type", false,-1);
        tracep->declBit(c+194,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_csr_type", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_in_csr_imm_type", false,-1);
        tracep->declBit(c+192,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_Auipc", false,-1);
        tracep->declBit(c+193,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_multiply", false,-1);
        tracep->declBit(c+157,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_memWrite", false,-1);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_memRead", false,-1);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_branch", false,-1);
        tracep->declBit(c+159,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_regWrite", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_csr_wen", false,-1);
        tracep->declBit(c+163,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_memToReg", false,-1);
        tracep->declBus(c+164,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_aluOperation", false,-1, 3,0);
        tracep->declBus(c+165,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+166,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_operand_b_sel", false,-1);
        tracep->declBus(c+167,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_extend_sel", false,-1, 1,0);
        tracep->declBus(c+168,"Shaheen_top_openram_cv shaheenTop core decode control control_decode_io_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_func3", false,-1, 2,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_func7", false,-1, 6,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_opcode", false,-1, 6,0);
        tracep->declBit(c+184,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_r_type", false,-1);
        tracep->declBit(c+185,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_load_type", false,-1);
        tracep->declBit(c+186,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_s_type", false,-1);
        tracep->declBit(c+187,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_sb_type", false,-1);
        tracep->declBit(c+188,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_i_type", false,-1);
        tracep->declBit(c+189,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_jalr_type", false,-1);
        tracep->declBit(c+190,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_jal_type", false,-1);
        tracep->declBit(c+191,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_lui_type", false,-1);
        tracep->declBit(c+192,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_Auipc", false,-1);
        tracep->declBit(c+193,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_multiply", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_csr_imm_type", false,-1);
        tracep->declBit(c+194,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_csr_type", false,-1);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode control instruction_type_decode io_csr_op", false,-1, 1,0);
        tracep->declBit(c+184,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_r_type", false,-1);
        tracep->declBit(c+185,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_load_type", false,-1);
        tracep->declBit(c+186,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_s_type", false,-1);
        tracep->declBit(c+187,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_sb_type", false,-1);
        tracep->declBit(c+188,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_i_type", false,-1);
        tracep->declBit(c+189,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_jalr_type", false,-1);
        tracep->declBit(c+190,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_jal_type", false,-1);
        tracep->declBit(c+191,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_lui_type", false,-1);
        tracep->declBit(c+194,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_csr_type", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_in_csr_imm_type", false,-1);
        tracep->declBit(c+192,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_Auipc", false,-1);
        tracep->declBit(c+193,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_multiply", false,-1);
        tracep->declBit(c+157,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_memWrite", false,-1);
        tracep->declBit(c+156,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_memRead", false,-1);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_branch", false,-1);
        tracep->declBit(c+159,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_regWrite", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_csr_wen", false,-1);
        tracep->declBit(c+163,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_memToReg", false,-1);
        tracep->declBus(c+164,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_aluOperation", false,-1, 3,0);
        tracep->declBus(c+165,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+166,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_operand_b_sel", false,-1);
        tracep->declBus(c+167,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_extend_sel", false,-1, 1,0);
        tracep->declBus(c+168,"Shaheen_top_openram_cv shaheenTop core decode control control_decode io_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_ID_EX_MEMRD", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_EX_MEM_MEMRD", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBit(c+129,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_MEM_WB_MEMRD", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_execute_regwrite", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_mem_regwrite", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_wb_regwrite", false,-1);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+158,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_ctrl_branch", false,-1);
        tracep->declBus(c+169,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_forward_rs1", false,-1, 3,0);
        tracep->declBus(c+170,"Shaheen_top_openram_cv shaheenTop core decode decodeForwardUnit io_forward_rs2", false,-1, 3,0);
        tracep->declBus(c+651,"Shaheen_top_openram_cv shaheenTop core decode branchLogic io_in_rs1", false,-1, 31,0);
        tracep->declBus(c+652,"Shaheen_top_openram_cv shaheenTop core decode branchLogic io_in_rs2", false,-1, 31,0);
        tracep->declBus(c+83,"Shaheen_top_openram_cv shaheenTop core decode branchLogic io_in_func3", false,-1, 2,0);
        tracep->declBit(c+584,"Shaheen_top_openram_cv shaheenTop core decode branchLogic io_output", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode reg_file clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode reg_file reset", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_regWrite", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_rd_sel", false,-1, 4,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_rs2_sel", false,-1, 4,0);
        tracep->declBus(c+171,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_writeData", false,-1, 31,0);
        tracep->declBus(c+172,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_rs1", false,-1, 31,0);
        tracep->declBus(c+173,"Shaheen_top_openram_cv shaheenTop core decode reg_file io_rs2", false,-1, 31,0);
        tracep->declBus(c+195,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_0", false,-1, 31,0);
        tracep->declBus(c+196,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_1", false,-1, 31,0);
        tracep->declBus(c+197,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_2", false,-1, 31,0);
        tracep->declBus(c+198,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_3", false,-1, 31,0);
        tracep->declBus(c+199,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_4", false,-1, 31,0);
        tracep->declBus(c+200,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_5", false,-1, 31,0);
        tracep->declBus(c+201,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_6", false,-1, 31,0);
        tracep->declBus(c+202,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_7", false,-1, 31,0);
        tracep->declBus(c+203,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_8", false,-1, 31,0);
        tracep->declBus(c+204,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_9", false,-1, 31,0);
        tracep->declBus(c+205,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_10", false,-1, 31,0);
        tracep->declBus(c+206,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_11", false,-1, 31,0);
        tracep->declBus(c+207,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_12", false,-1, 31,0);
        tracep->declBus(c+208,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_13", false,-1, 31,0);
        tracep->declBus(c+209,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_14", false,-1, 31,0);
        tracep->declBus(c+210,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_15", false,-1, 31,0);
        tracep->declBus(c+211,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_16", false,-1, 31,0);
        tracep->declBus(c+212,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_17", false,-1, 31,0);
        tracep->declBus(c+213,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_18", false,-1, 31,0);
        tracep->declBus(c+214,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_19", false,-1, 31,0);
        tracep->declBus(c+215,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_20", false,-1, 31,0);
        tracep->declBus(c+216,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_21", false,-1, 31,0);
        tracep->declBus(c+217,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_22", false,-1, 31,0);
        tracep->declBus(c+218,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_23", false,-1, 31,0);
        tracep->declBus(c+219,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_24", false,-1, 31,0);
        tracep->declBus(c+220,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_25", false,-1, 31,0);
        tracep->declBus(c+221,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_26", false,-1, 31,0);
        tracep->declBus(c+222,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_27", false,-1, 31,0);
        tracep->declBus(c+223,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_28", false,-1, 31,0);
        tracep->declBus(c+224,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_29", false,-1, 31,0);
        tracep->declBus(c+225,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_30", false,-1, 31,0);
        tracep->declBus(c+226,"Shaheen_top_openram_cv shaheenTop core decode reg_file registers_31", false,-1, 31,0);
        tracep->declBus(c+146,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_instruction", false,-1, 31,0);
        tracep->declBus(c+75,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_pc", false,-1, 31,0);
        tracep->declBus(c+174,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_s_imm", false,-1, 31,0);
        tracep->declBus(c+142,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+175,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_u_imm", false,-1, 31,0);
        tracep->declBus(c+143,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+176,"Shaheen_top_openram_cv shaheenTop core decode imm_generation io_i_imm", false,-1, 31,0);
        tracep->declBus(c+82,"Shaheen_top_openram_cv shaheenTop core decode imm_generation s_lower_half", false,-1, 4,0);
        tracep->declBus(c+84,"Shaheen_top_openram_cv shaheenTop core decode imm_generation s_upper_half", false,-1, 6,0);
        tracep->declBus(c+227,"Shaheen_top_openram_cv shaheenTop core decode imm_generation s_imm_12", false,-1, 11,0);
        tracep->declBus(c+228,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_lower_half", false,-1, 3,0);
        tracep->declBus(c+229,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_upper_half", false,-1, 5,0);
        tracep->declBit(c+230,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_11thbit", false,-1);
        tracep->declBit(c+231,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_12thbit", false,-1);
        tracep->declBus(c+232,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_imm_13", false,-1, 12,0);
        tracep->declBus(c+233,"Shaheen_top_openram_cv shaheenTop core decode imm_generation sb_imm_32", false,-1, 31,0);
        tracep->declBus(c+234,"Shaheen_top_openram_cv shaheenTop core decode imm_generation u_imm_20", false,-1, 19,0);
        tracep->declBus(c+235,"Shaheen_top_openram_cv shaheenTop core decode imm_generation u_imm_32", false,-1, 31,0);
        tracep->declBus(c+236,"Shaheen_top_openram_cv shaheenTop core decode imm_generation uj_lower_half", false,-1, 9,0);
        tracep->declBit(c+237,"Shaheen_top_openram_cv shaheenTop core decode imm_generation uj_11thbit", false,-1);
        tracep->declBus(c+238,"Shaheen_top_openram_cv shaheenTop core decode imm_generation uj_upper_half", false,-1, 7,0);
        tracep->declBus(c+239,"Shaheen_top_openram_cv shaheenTop core decode imm_generation uj_imm_21", false,-1, 20,0);
        tracep->declBus(c+240,"Shaheen_top_openram_cv shaheenTop core decode imm_generation uj_imm_32", false,-1, 31,0);
        tracep->declBus(c+179,"Shaheen_top_openram_cv shaheenTop core decode imm_generation i_imm_12", false,-1, 11,0);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+78,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_MEM_WB_regWr", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+93,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_inst_op_in", false,-1, 6,0);
        tracep->declBit(c+177,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_fwd_rs1", false,-1);
        tracep->declBit(c+178,"Shaheen_top_openram_cv shaheenTop core decode structuralDetector io_fwd_rs2", false,-1);
        tracep->declBus(c+585,"Shaheen_top_openram_cv shaheenTop core decode jalr io_input_a", false,-1, 31,0);
        tracep->declBus(c+176,"Shaheen_top_openram_cv shaheenTop core decode jalr io_input_b", false,-1, 31,0);
        tracep->declBus(c+649,"Shaheen_top_openram_cv shaheenTop core decode jalr io_output", false,-1, 31,0);
        tracep->declBus(c+654,"Shaheen_top_openram_cv shaheenTop core decode jalr sum", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile reset", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_csr_mtvec", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_mtvec_init", false,-1);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_access", false,-1);
        tracep->declBus(c+179,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_addr", false,-1, 11,0);
        tracep->declBus(c+653,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_wdata", false,-1, 31,0);
        tracep->declBus(c+162,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_op", false,-1, 1,0);
        tracep->declBit(c+180,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_op_en", false,-1);
        tracep->declBus(c+94,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_csr_rdata", false,-1, 31,0);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_irq_external", false,-1);
        tracep->declBit(c+134,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_irq_pending", false,-1);
        tracep->declBus(c+181,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_irqs", false,-1, 2,0);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_csr_mstatus_mie", false,-1);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+583,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_pc_if", false,-1, 31,0);
        tracep->declBit(c+139,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_save_if", false,-1);
        tracep->declBit(c+148,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_restore_mret", false,-1);
        tracep->declBit(c+138,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_save_cause", false,-1);
        tracep->declBus(c+140,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_i_csr_mcause", false,-1, 5,0);
        tracep->declBit(c+182,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile io_o_illegal_csr_insn", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS_reset", false,-1);
        tracep->declBus(c+586,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS_io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+241,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS_io_i_wr_en", false,-1);
        tracep->declBus(c+242,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS_io_o_rd_data", false,-1, 5,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC_reset", false,-1);
        tracep->declBus(c+587,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+243,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC_io_i_wr_en", false,-1);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE_reset", false,-1);
        tracep->declBus(c+655,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE_io_i_wrdata", false,-1, 2,0);
        tracep->declBit(c+244,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE_io_i_wr_en", false,-1);
        tracep->declBus(c+245,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE_io_o_rd_data", false,-1, 2,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH_reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+246,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH_io_i_wr_en", false,-1);
        tracep->declBus(c+247,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE_reset", false,-1);
        tracep->declBus(c+589,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE_io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+248,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE_io_i_wr_en", false,-1);
        tracep->declBus(c+249,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE_io_o_rd_data", false,-1, 5,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL_reset", false,-1);
        tracep->declBus(c+590,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+250,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL_io_i_wr_en", false,-1);
        tracep->declBus(c+251,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC_reset", false,-1);
        tracep->declBus(c+591,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC_io_i_wr_en", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR_reset", false,-1);
        tracep->declBus(c+252,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR_io_i_wrdata", false,-1, 27,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR_io_i_wr_en", false,-1);
        tracep->declBus(c+253,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR_io_o_rd_data", false,-1, 27,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC_reset", false,-1);
        tracep->declBus(c+656,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC_io_i_wr_en", false,-1);
        tracep->declBus(c+254,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0_reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+255,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0_io_i_wr_en", false,-1);
        tracep->declBus(c+256,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1_reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+257,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1_io_i_wr_en", false,-1);
        tracep->declBus(c+258,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_inc", false,-1);
        tracep->declBit(c+259,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_io_i_counterh_we", false,-1);
        tracep->declBit(c+260,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_we", false,-1);
        tracep->declBus(c+657,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+261,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_inc", false,-1);
        tracep->declBit(c+263,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_io_i_counterh_we", false,-1);
        tracep->declBit(c+264,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_we", false,-1);
        tracep->declBus(c+658,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+265,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_io_i_counter_inc", false,-1);
        tracep->declBit(c+267,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_io_i_counterh_we", false,-1);
        tracep->declBit(c+268,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_io_i_counter_we", false,-1);
        tracep->declBus(c+659,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+269,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_io_i_counter_inc", false,-1);
        tracep->declBit(c+271,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_io_i_counterh_we", false,-1);
        tracep->declBit(c+272,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_io_i_counter_we", false,-1);
        tracep->declBus(c+660,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+273,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_io_i_counter_inc", false,-1);
        tracep->declBit(c+275,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_io_i_counterh_we", false,-1);
        tracep->declBit(c+276,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_io_i_counter_we", false,-1);
        tracep->declBus(c+661,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+277,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_io_i_counter_inc", false,-1);
        tracep->declBit(c+279,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_io_i_counterh_we", false,-1);
        tracep->declBit(c+280,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_io_i_counter_we", false,-1);
        tracep->declBus(c+662,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+281,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_io_i_counter_inc", false,-1);
        tracep->declBit(c+283,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_io_i_counterh_we", false,-1);
        tracep->declBit(c+284,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_io_i_counter_we", false,-1);
        tracep->declBus(c+663,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+285,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_io_i_counter_inc", false,-1);
        tracep->declBit(c+287,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_io_i_counterh_we", false,-1);
        tracep->declBit(c+288,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_io_i_counter_we", false,-1);
        tracep->declBus(c+664,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+289,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_io_i_counter_inc", false,-1);
        tracep->declBit(c+291,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_io_i_counterh_we", false,-1);
        tracep->declBit(c+292,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_io_i_counter_we", false,-1);
        tracep->declBus(c+665,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+293,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_io_i_counter_inc", false,-1);
        tracep->declBit(c+295,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_io_i_counterh_we", false,-1);
        tracep->declBit(c+296,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_io_i_counter_we", false,-1);
        tracep->declBus(c+666,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+297,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_io_i_counter_inc", false,-1);
        tracep->declBit(c+299,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_io_i_counterh_we", false,-1);
        tracep->declBit(c+300,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_io_i_counter_we", false,-1);
        tracep->declBus(c+667,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+301,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_io_i_counter_inc", false,-1);
        tracep->declBit(c+303,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_io_i_counterh_we", false,-1);
        tracep->declBit(c+304,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_io_i_counter_we", false,-1);
        tracep->declBus(c+668,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+305,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9_io_o_counter_val", false,-1, 63,0);
        tracep->declBus(c+307,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile priv_lvl_q", false,-1, 1,0);
        tracep->declBus(c+308,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcountinhibit_q", false,-1, 12,0);
        tracep->declQuad(c+309,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_0", false,-1, 63,0);
        tracep->declQuad(c+311,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_1", false,-1, 63,0);
        tracep->declQuad(c+313,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_2", false,-1, 63,0);
        tracep->declQuad(c+315,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_3", false,-1, 63,0);
        tracep->declQuad(c+317,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_4", false,-1, 63,0);
        tracep->declQuad(c+319,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_5", false,-1, 63,0);
        tracep->declQuad(c+321,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_6", false,-1, 63,0);
        tracep->declQuad(c+323,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_7", false,-1, 63,0);
        tracep->declQuad(c+325,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_8", false,-1, 63,0);
        tracep->declQuad(c+327,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_9", false,-1, 63,0);
        tracep->declQuad(c+329,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_10", false,-1, 63,0);
        tracep->declQuad(c+331,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_11", false,-1, 63,0);
        tracep->declQuad(c+333,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_12", false,-1, 63,0);
        tracep->declQuad(c+335,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_13", false,-1, 63,0);
        tracep->declQuad(c+337,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_14", false,-1, 63,0);
        tracep->declQuad(c+339,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_15", false,-1, 63,0);
        tracep->declQuad(c+341,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_16", false,-1, 63,0);
        tracep->declQuad(c+343,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_17", false,-1, 63,0);
        tracep->declQuad(c+345,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_18", false,-1, 63,0);
        tracep->declQuad(c+347,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_19", false,-1, 63,0);
        tracep->declQuad(c+349,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_20", false,-1, 63,0);
        tracep->declQuad(c+351,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_21", false,-1, 63,0);
        tracep->declQuad(c+353,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_22", false,-1, 63,0);
        tracep->declQuad(c+355,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_23", false,-1, 63,0);
        tracep->declQuad(c+357,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_24", false,-1, 63,0);
        tracep->declQuad(c+359,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_25", false,-1, 63,0);
        tracep->declQuad(c+361,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_26", false,-1, 63,0);
        tracep->declQuad(c+363,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_27", false,-1, 63,0);
        tracep->declQuad(c+365,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_28", false,-1, 63,0);
        tracep->declQuad(c+367,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_29", false,-1, 63,0);
        tracep->declQuad(c+369,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_30", false,-1, 63,0);
        tracep->declQuad(c+371,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_31", false,-1, 63,0);
        tracep->declBus(c+373,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_0", false,-1, 31,0);
        tracep->declBus(c+374,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_1", false,-1, 31,0);
        tracep->declBus(c+375,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_2", false,-1, 31,0);
        tracep->declBus(c+376,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_3", false,-1, 31,0);
        tracep->declBus(c+377,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_4", false,-1, 31,0);
        tracep->declBus(c+378,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_5", false,-1, 31,0);
        tracep->declBus(c+379,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_6", false,-1, 31,0);
        tracep->declBus(c+380,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_7", false,-1, 31,0);
        tracep->declBus(c+381,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_8", false,-1, 31,0);
        tracep->declBus(c+382,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_9", false,-1, 31,0);
        tracep->declBus(c+383,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_10", false,-1, 31,0);
        tracep->declBus(c+384,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_11", false,-1, 31,0);
        tracep->declBus(c+385,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_12", false,-1, 31,0);
        tracep->declBus(c+386,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_13", false,-1, 31,0);
        tracep->declBus(c+387,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_14", false,-1, 31,0);
        tracep->declBus(c+388,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_15", false,-1, 31,0);
        tracep->declBus(c+389,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_16", false,-1, 31,0);
        tracep->declBus(c+390,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_17", false,-1, 31,0);
        tracep->declBus(c+391,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_18", false,-1, 31,0);
        tracep->declBus(c+392,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_19", false,-1, 31,0);
        tracep->declBus(c+393,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_20", false,-1, 31,0);
        tracep->declBus(c+394,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_21", false,-1, 31,0);
        tracep->declBus(c+395,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_22", false,-1, 31,0);
        tracep->declBus(c+396,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_23", false,-1, 31,0);
        tracep->declBus(c+397,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_24", false,-1, 31,0);
        tracep->declBus(c+398,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_25", false,-1, 31,0);
        tracep->declBus(c+399,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_26", false,-1, 31,0);
        tracep->declBus(c+400,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_27", false,-1, 31,0);
        tracep->declBus(c+401,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_28", false,-1, 31,0);
        tracep->declBus(c+402,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_29", false,-1, 31,0);
        tracep->declBus(c+403,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_30", false,-1, 31,0);
        tracep->declBus(c+404,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmevent_31", false,-1, 31,0);
        tracep->declBit(c+405,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile illegal_csr_priv", false,-1);
        tracep->declBit(c+406,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile csr_wreq", false,-1);
        tracep->declBit(c+407,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile illegal_csr_write", false,-1);
        tracep->declBit(c+408,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile illegal_csr", false,-1);
        tracep->declBit(c+135,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_q_mie", false,-1);
        tracep->declBit(c+409,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_q_mpie", false,-1);
        tracep->declBit(c+410,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_q_mprv", false,-1);
        tracep->declBus(c+411,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_q_mpp", false,-1, 1,0);
        tracep->declBit(c+412,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_q_tw", false,-1);
        tracep->declBit(c+413,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_q_irq_software", false,-1);
        tracep->declBit(c+414,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_q_irq_timer", false,-1);
        tracep->declBit(c+415,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_q_irq_external", false,-1);
        tracep->declBus(c+249,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcause_q", false,-1, 5,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mip_irq_software", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mip_irq_timer", false,-1);
        tracep->declBit(c+42,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mip_irq_external", false,-1);
        tracep->declBit(c+416,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_nmip", false,-1);
        tracep->declBit(c+417,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_step", false,-1);
        tracep->declBit(c+418,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_prv", false,-1);
        tracep->declBit(c+419,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_zero0", false,-1);
        tracep->declBit(c+420,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_mprven", false,-1);
        tracep->declBit(c+421,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_stoptime", false,-1);
        tracep->declBit(c+422,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_cause", false,-1);
        tracep->declBit(c+423,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_ebreaks", false,-1);
        tracep->declBit(c+424,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_stepie", false,-1);
        tracep->declBit(c+425,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_stopcount", false,-1);
        tracep->declBit(c+426,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_ebreakm", false,-1);
        tracep->declBit(c+427,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_zero1", false,-1);
        tracep->declBus(c+428,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_xdebugver", false,-1, 3,0);
        tracep->declBus(c+429,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_q_zero2", false,-1, 11,0);
        tracep->declBus(c+430,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_idx", false,-1, 4,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile tmatch_value_rdata", false,-1, 31,0);
        tracep->declBus(c+431,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcountinhibit", false,-1, 31,0);
        tracep->declBus(c+258,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dscratch1_q", false,-1, 31,0);
        tracep->declBus(c+256,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dscratch0_q", false,-1, 31,0);
        tracep->declBus(c+254,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile depc_q", false,-1, 31,0);
        tracep->declBus(c+251,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtval_q", false,-1, 31,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mepc_q", false,-1, 31,0);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtvec_q", false,-1, 31,0);
        tracep->declBus(c+247,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mscratch_q", false,-1, 31,0);
        tracep->declBit(c+432,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile csr_we_int", false,-1);
        tracep->declBus(c+669,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile csr_wdata_int", false,-1, 31,0);
        tracep->declBus(c+670,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_d_mpp", false,-1, 1,0);
        tracep->declBit(c+433,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_prv", false,-1);
        tracep->declBus(c+592,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile exception_pc", false,-1, 31,0);
        tracep->declBit(c+593,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_d_mpie", false,-1);
        tracep->declBit(c+594,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_d_mie", false,-1);
        tracep->declBit(c+595,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_d_tw", false,-1);
        tracep->declBit(c+434,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_d_mprv", false,-1);
        tracep->declBit(c+671,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_d_irq_external", false,-1);
        tracep->declBit(c+672,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_d_irq_timer", false,-1);
        tracep->declBit(c+673,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_d_irq_software", false,-1);
        tracep->declBit(c+416,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_nmip", false,-1);
        tracep->declBit(c+417,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_step", false,-1);
        tracep->declBit(c+419,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_zero0", false,-1);
        tracep->declBit(c+420,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_mprven", false,-1);
        tracep->declBit(c+421,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_stoptime", false,-1);
        tracep->declBit(c+435,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_cause", false,-1);
        tracep->declBit(c+423,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_ebreaks", false,-1);
        tracep->declBit(c+424,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_stepie", false,-1);
        tracep->declBit(c+425,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_stopcount", false,-1);
        tracep->declBit(c+426,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_ebreakm", false,-1);
        tracep->declBit(c+427,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_zero1", false,-1);
        tracep->declBus(c+428,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_xdebugver", false,-1, 3,0);
        tracep->declBus(c+429,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_d_zero2", false,-1, 11,0);
        tracep->declBit(c+436,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcountinhibit_we", false,-1);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_incr", false,-1, 31,0);
        tracep->declBus(c+437,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounterh_we", false,-1, 31,0);
        tracep->declBus(c+438,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mhpmcounter_we", false,-1, 31,0);
        tracep->declBit(c+241,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstatus_en", false,-1);
        tracep->declBit(c+244,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mie_en", false,-1);
        tracep->declBit(c+246,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mscratch_en", false,-1);
        tracep->declBus(c+587,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mepc_d", false,-1, 31,0);
        tracep->declBit(c+243,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mepc_en", false,-1);
        tracep->declBus(c+589,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcause_d", false,-1, 5,0);
        tracep->declBit(c+248,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcause_en", false,-1);
        tracep->declBus(c+590,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtval_d", false,-1, 31,0);
        tracep->declBit(c+250,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtval_en", false,-1);
        tracep->declBus(c+591,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtvec_d", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mtvec_en", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dcsr_en", false,-1);
        tracep->declBus(c+656,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile depc_d", false,-1, 31,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile depc_en", false,-1);
        tracep->declBit(c+255,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dscratch0_en", false,-1);
        tracep->declBit(c+257,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile dscratch1_en", false,-1);
        tracep->declBus(c+596,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mcountinhibit_d", false,-1, 12,0);
        tracep->declBit(c+674,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile mstat_priv", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS reset", false,-1);
        tracep->declBus(c+586,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+241,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS io_i_wr_en", false,-1);
        tracep->declBus(c+242,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+242,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSTATUS rdata_q", false,-1, 5,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC reset", false,-1);
        tracep->declBus(c+587,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+243,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC io_i_wr_en", false,-1);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+141,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MEPC rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE reset", false,-1);
        tracep->declBus(c+655,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE io_i_wrdata", false,-1, 2,0);
        tracep->declBit(c+244,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE io_i_wr_en", false,-1);
        tracep->declBus(c+245,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE io_o_rd_data", false,-1, 2,0);
        tracep->declBus(c+245,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MIE rdata_q", false,-1, 2,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+246,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH io_i_wr_en", false,-1);
        tracep->declBus(c+247,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+247,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MSCRATCH rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE reset", false,-1);
        tracep->declBus(c+589,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+248,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE io_i_wr_en", false,-1);
        tracep->declBus(c+249,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+249,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MCAUSE rdata_q", false,-1, 5,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL reset", false,-1);
        tracep->declBus(c+590,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+250,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL io_i_wr_en", false,-1);
        tracep->declBus(c+251,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+251,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVAL rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC reset", false,-1);
        tracep->declBus(c+591,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+137,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC io_i_wr_en", false,-1);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+136,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_MTVEC rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR reset", false,-1);
        tracep->declBus(c+252,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR io_i_wrdata", false,-1, 27,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR io_i_wr_en", false,-1);
        tracep->declBus(c+253,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR io_o_rd_data", false,-1, 27,0);
        tracep->declBus(c+253,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DCSR rdata_q", false,-1, 27,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC reset", false,-1);
        tracep->declBus(c+656,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC io_i_wr_en", false,-1);
        tracep->declBus(c+254,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+254,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DEPC rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+255,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 io_i_wr_en", false,-1);
        tracep->declBus(c+256,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+256,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH0 rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 reset", false,-1);
        tracep->declBus(c+588,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+257,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 io_i_wr_en", false,-1);
        tracep->declBus(c+258,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+258,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile PRIM_DSCRATCH1 rdata_q", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE io_i_counter_inc", false,-1);
        tracep->declBit(c+259,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE io_i_counterh_we", false,-1);
        tracep->declBit(c+260,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE io_i_counter_we", false,-1);
        tracep->declBus(c+657,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+261,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+439,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE we", false,-1);
        tracep->declQuad(c+261,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE counter_q", false,-1, 63,0);
        tracep->declBus(c+597,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE counter_msb", false,-1, 31,0);
        tracep->declBus(c+598,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+599,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE counter_load", false,-1, 63,0);
        tracep->declQuad(c+440,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MCYCLE counter_upd", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET io_i_counter_inc", false,-1);
        tracep->declBit(c+263,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET io_i_counterh_we", false,-1);
        tracep->declBit(c+264,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET io_i_counter_we", false,-1);
        tracep->declBus(c+658,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+265,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+442,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET we", false,-1);
        tracep->declQuad(c+265,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET counter_q", false,-1, 63,0);
        tracep->declBus(c+601,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET counter_msb", false,-1, 31,0);
        tracep->declBus(c+602,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+603,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET counter_load", false,-1, 63,0);
        tracep->declQuad(c+443,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile COUNT_MINSTRET counter_upd", false,-1, 63,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter io_i_counter_inc", false,-1);
        tracep->declBit(c+267,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter io_i_counterh_we", false,-1);
        tracep->declBit(c+268,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter io_i_counter_we", false,-1);
        tracep->declBus(c+659,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+269,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+445,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter we", false,-1);
        tracep->declQuad(c+446,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter_q", false,-1, 39,0);
        tracep->declQuad(c+269,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter", false,-1, 63,0);
        tracep->declBus(c+605,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter_msb", false,-1, 31,0);
        tracep->declBus(c+606,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+607,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter_load", false,-1, 63,0);
        tracep->declQuad(c+448,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 io_i_counter_inc", false,-1);
        tracep->declBit(c+271,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 io_i_counterh_we", false,-1);
        tracep->declBit(c+272,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 io_i_counter_we", false,-1);
        tracep->declBus(c+660,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+273,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+450,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 we", false,-1);
        tracep->declQuad(c+451,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter_q", false,-1, 39,0);
        tracep->declQuad(c+273,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter", false,-1, 63,0);
        tracep->declBus(c+609,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter_msb", false,-1, 31,0);
        tracep->declBus(c+610,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+611,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter_load", false,-1, 63,0);
        tracep->declQuad(c+453,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_1 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 io_i_counter_inc", false,-1);
        tracep->declBit(c+275,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 io_i_counterh_we", false,-1);
        tracep->declBit(c+276,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 io_i_counter_we", false,-1);
        tracep->declBus(c+661,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+277,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+455,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 we", false,-1);
        tracep->declQuad(c+456,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter_q", false,-1, 39,0);
        tracep->declQuad(c+277,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter", false,-1, 63,0);
        tracep->declBus(c+613,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter_msb", false,-1, 31,0);
        tracep->declBus(c+614,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+615,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter_load", false,-1, 63,0);
        tracep->declQuad(c+458,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_2 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 io_i_counter_inc", false,-1);
        tracep->declBit(c+279,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 io_i_counterh_we", false,-1);
        tracep->declBit(c+280,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 io_i_counter_we", false,-1);
        tracep->declBus(c+662,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+281,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+460,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 we", false,-1);
        tracep->declQuad(c+461,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter_q", false,-1, 39,0);
        tracep->declQuad(c+281,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter", false,-1, 63,0);
        tracep->declBus(c+617,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter_msb", false,-1, 31,0);
        tracep->declBus(c+618,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+619,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter_load", false,-1, 63,0);
        tracep->declQuad(c+463,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_3 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 io_i_counter_inc", false,-1);
        tracep->declBit(c+283,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 io_i_counterh_we", false,-1);
        tracep->declBit(c+284,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 io_i_counter_we", false,-1);
        tracep->declBus(c+663,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+285,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+465,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 we", false,-1);
        tracep->declQuad(c+466,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter_q", false,-1, 39,0);
        tracep->declQuad(c+285,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter", false,-1, 63,0);
        tracep->declBus(c+621,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter_msb", false,-1, 31,0);
        tracep->declBus(c+622,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+623,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter_load", false,-1, 63,0);
        tracep->declQuad(c+468,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_4 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 io_i_counter_inc", false,-1);
        tracep->declBit(c+287,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 io_i_counterh_we", false,-1);
        tracep->declBit(c+288,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 io_i_counter_we", false,-1);
        tracep->declBus(c+664,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+289,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+470,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 we", false,-1);
        tracep->declQuad(c+471,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter_q", false,-1, 39,0);
        tracep->declQuad(c+289,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter", false,-1, 63,0);
        tracep->declBus(c+625,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter_msb", false,-1, 31,0);
        tracep->declBus(c+626,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+627,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter_load", false,-1, 63,0);
        tracep->declQuad(c+473,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_5 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 io_i_counter_inc", false,-1);
        tracep->declBit(c+291,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 io_i_counterh_we", false,-1);
        tracep->declBit(c+292,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 io_i_counter_we", false,-1);
        tracep->declBus(c+665,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+293,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+475,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 we", false,-1);
        tracep->declQuad(c+476,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter_q", false,-1, 39,0);
        tracep->declQuad(c+293,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter", false,-1, 63,0);
        tracep->declBus(c+629,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter_msb", false,-1, 31,0);
        tracep->declBus(c+630,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+631,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter_load", false,-1, 63,0);
        tracep->declQuad(c+478,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_6 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 io_i_counter_inc", false,-1);
        tracep->declBit(c+295,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 io_i_counterh_we", false,-1);
        tracep->declBit(c+296,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 io_i_counter_we", false,-1);
        tracep->declBus(c+666,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+297,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+480,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 we", false,-1);
        tracep->declQuad(c+481,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter_q", false,-1, 39,0);
        tracep->declQuad(c+297,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter", false,-1, 63,0);
        tracep->declBus(c+633,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter_msb", false,-1, 31,0);
        tracep->declBus(c+634,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+635,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter_load", false,-1, 63,0);
        tracep->declQuad(c+483,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_7 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 io_i_counter_inc", false,-1);
        tracep->declBit(c+299,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 io_i_counterh_we", false,-1);
        tracep->declBit(c+300,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 io_i_counter_we", false,-1);
        tracep->declBus(c+667,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+301,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+485,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 we", false,-1);
        tracep->declQuad(c+486,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter_q", false,-1, 39,0);
        tracep->declQuad(c+301,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter", false,-1, 63,0);
        tracep->declBus(c+637,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter_msb", false,-1, 31,0);
        tracep->declBus(c+638,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+639,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter_load", false,-1, 63,0);
        tracep->declQuad(c+488,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_8 counter_upd", false,-1, 39,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 reset", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 io_i_counter_inc", false,-1);
        tracep->declBit(c+303,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 io_i_counterh_we", false,-1);
        tracep->declBit(c+304,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 io_i_counter_we", false,-1);
        tracep->declBus(c+668,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+305,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+490,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 we", false,-1);
        tracep->declQuad(c+491,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter_q", false,-1, 39,0);
        tracep->declQuad(c+305,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter", false,-1, 63,0);
        tracep->declBus(c+641,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter_msb", false,-1, 31,0);
        tracep->declBus(c+642,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+643,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter_load", false,-1, 63,0);
        tracep->declQuad(c+493,"Shaheen_top_openram_cv shaheenTop core decode csrRegFile BrqCounter_9 counter_upd", false,-1, 39,0);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_reg_wr_in_execute", false,-1);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_rd_sel_in_execute", false,-1, 4,0);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_wr_in_execute", false,-1);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_reg_wr_in_memory", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_rd_sel_in_memory", false,-1, 4,0);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_wr_in_memory", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_reg_wr_in_writeback", false,-1);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_rd_sel_in_writeback", false,-1, 4,0);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_wr_in_writeback", false,-1);
        tracep->declBus(c+77,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_rs1_sel_in_decode", false,-1, 4,0);
        tracep->declBit(c+160,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_inst_in_decode", false,-1);
        tracep->declBit(c+161,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_imm_inst_in_decode", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_load_inst_in_execute", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_load_inst_in_memory", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+183,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_forward_rs1", false,-1, 2,0);
        tracep->declBit(c+180,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit io_csr_op_en_o", false,-1);
        tracep->declBit(c+495,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit hazard_in_decode_execute", false,-1);
        tracep->declBit(c+496,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit hazard_in_decode_memory", false,-1);
        tracep->declBit(c+497,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit hazard_in_decode_writeback", false,-1);
        tracep->declBit(c+498,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit csr_hazard_in_decode_execute", false,-1);
        tracep->declBit(c+499,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit csr_hazard_in_decode_memory", false,-1);
        tracep->declBit(c+500,"Shaheen_top_openram_cv shaheenTop core decode csrControlUnit csr_hazard_in_decode_writeback", false,-1);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core execute io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core execute io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core execute io_EX_MEM_ctrl_RegWr", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core execute io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBit(c+127,"Shaheen_top_openram_cv shaheenTop core execute io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core execute io_MEM_WB_ctrl_RegWr", false,-1);
        tracep->declBus(c+113,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_OpA_sel", false,-1, 1,0);
        tracep->declBit(c+114,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_OpB_sel", false,-1);
        tracep->declBus(c+97,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_pc4", false,-1, 31,0);
        tracep->declBus(c+96,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_pc_out", false,-1, 31,0);
        tracep->declBus(c+98,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_rs1", false,-1, 31,0);
        tracep->declBus(c+99,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_rs2", false,-1, 31,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_csr_data", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core execute io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core execute io_EX_MEM_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+133,"Shaheen_top_openram_cv shaheenTop core execute io_MEM_WB_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core execute io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+100,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_imm", false,-1, 31,0);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_AluOp", false,-1, 3,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_func7", false,-1, 6,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_func3", false,-1, 2,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_MemWr", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_RegWr", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_CsrWen", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core execute io_ID_EX_ctrl_MemToReg", false,-1);
        tracep->declBus(c+116,"Shaheen_top_openram_cv shaheenTop core execute io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core execute io_alu_output", false,-1, 31,0);
        tracep->declBus(c+104,"Shaheen_top_openram_cv shaheenTop core execute io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+107,"Shaheen_top_openram_cv shaheenTop core execute io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+108,"Shaheen_top_openram_cv shaheenTop core execute io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+109,"Shaheen_top_openram_cv shaheenTop core execute io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+110,"Shaheen_top_openram_cv shaheenTop core execute io_ctrl_CsrWe_out", false,-1);
        tracep->declBit(c+111,"Shaheen_top_openram_cv shaheenTop core execute io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute io_func3_out", false,-1, 2,0);
        tracep->declBus(c+115,"Shaheen_top_openram_cv shaheenTop core execute io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_ID_EX_REGRS1", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_ID_EX_REGRS2", false,-1, 4,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_EX_MEM_REGWR", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_MEM_WB_REGWR", false,-1);
        tracep->declBus(c+501,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_forward_a", false,-1, 1,0);
        tracep->declBus(c+502,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit_io_forward_b", false,-1, 1,0);
        tracep->declBus(c+503,"Shaheen_top_openram_cv shaheenTop core execute alu_io_oper_a", false,-1, 31,0);
        tracep->declBus(c+504,"Shaheen_top_openram_cv shaheenTop core execute alu_io_oper_b", false,-1, 31,0);
        tracep->declBus(c+505,"Shaheen_top_openram_cv shaheenTop core execute alu_io_aluCtrl", false,-1, 4,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core execute alu_io_output", false,-1, 31,0);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core execute alu_control_io_aluOp", false,-1, 3,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core execute alu_control_io_func7", false,-1, 6,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute alu_control_io_func3", false,-1, 2,0);
        tracep->declBus(c+505,"Shaheen_top_openram_cv shaheenTop core execute alu_control_io_output", false,-1, 4,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBus(c+130,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+105,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_ID_EX_REGRS1", false,-1, 4,0);
        tracep->declBus(c+106,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_ID_EX_REGRS2", false,-1, 4,0);
        tracep->declBus(c+103,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_EX_MEM_REGWR", false,-1);
        tracep->declBit(c+126,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_MEM_WB_REGWR", false,-1);
        tracep->declBus(c+501,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_forward_a", false,-1, 1,0);
        tracep->declBus(c+502,"Shaheen_top_openram_cv shaheenTop core execute forwardUnit io_forward_b", false,-1, 1,0);
        tracep->declBus(c+503,"Shaheen_top_openram_cv shaheenTop core execute alu io_oper_a", false,-1, 31,0);
        tracep->declBus(c+504,"Shaheen_top_openram_cv shaheenTop core execute alu io_oper_b", false,-1, 31,0);
        tracep->declBus(c+505,"Shaheen_top_openram_cv shaheenTop core execute alu io_aluCtrl", false,-1, 4,0);
        tracep->declBus(c+117,"Shaheen_top_openram_cv shaheenTop core execute alu io_output", false,-1, 31,0);
        tracep->declBus(c+112,"Shaheen_top_openram_cv shaheenTop core execute alu_control io_aluOp", false,-1, 3,0);
        tracep->declBus(c+102,"Shaheen_top_openram_cv shaheenTop core execute alu_control io_func7", false,-1, 6,0);
        tracep->declBus(c+101,"Shaheen_top_openram_cv shaheenTop core execute alu_control io_func3", false,-1, 2,0);
        tracep->declBus(c+505,"Shaheen_top_openram_cv shaheenTop core execute alu_control io_output", false,-1, 4,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_RegWr", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_CsrWe", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_MemRd", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_MemToReg", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_MemWr", false,-1);
        tracep->declBus(c+122,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_rs2", false,-1, 31,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core memory_stage io_func3", false,-1, 2,0);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core memory_stage io_EX_MEM_csr_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_gnt_i", false,-1);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_rvalid_i", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_req_o", false,-1);
        tracep->declBit(c+31,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_be_o_0", false,-1);
        tracep->declBit(c+32,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_be_o_1", false,-1);
        tracep->declBit(c+33,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_be_o_2", false,-1);
        tracep->declBit(c+34,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_be_o_3", false,-1);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core memory_stage io_ctrl_MemWr_out", false,-1);
        tracep->declBus(c+36,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+37,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+38,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+39,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage io_memAddress", false,-1, 31,0);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core memory_stage io_data_out", false,-1, 31,0);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core memory_stage io_alu_output", false,-1, 31,0);
        tracep->declBus(c+123,"Shaheen_top_openram_cv shaheenTop core memory_stage io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+119,"Shaheen_top_openram_cv shaheenTop core memory_stage io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+120,"Shaheen_top_openram_cv shaheenTop core memory_stage io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+118,"Shaheen_top_openram_cv shaheenTop core memory_stage io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+121,"Shaheen_top_openram_cv shaheenTop core memory_stage io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+125,"Shaheen_top_openram_cv shaheenTop core memory_stage io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+152,"Shaheen_top_openram_cv shaheenTop core memory_stage io_stall", false,-1);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit_io_func3", false,-1, 2,0);
        tracep->declBus(c+506,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit_io_data_offset", false,-1, 1,0);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit_io_memData", false,-1, 31,0);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit_io_LoadData", false,-1, 31,0);
        tracep->declBus(c+506,"Shaheen_top_openram_cv shaheenTop core memory_stage data_offset", false,-1, 1,0);
        tracep->declBus(c+124,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit io_func3", false,-1, 2,0);
        tracep->declBus(c+506,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit io_data_offset", false,-1, 1,0);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit io_memData", false,-1, 31,0);
        tracep->declBus(c+582,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit io_LoadData", false,-1, 31,0);
        tracep->declBus(c+675,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit lb", false,-1, 7,0);
        tracep->declBus(c+676,"Shaheen_top_openram_cv shaheenTop core memory_stage load_unit lh", false,-1, 15,0);
        tracep->declBit(c+128,"Shaheen_top_openram_cv shaheenTop core writeback io_MEM_WB_MemToReg", false,-1);
        tracep->declBus(c+131,"Shaheen_top_openram_cv shaheenTop core writeback io_MEM_WB_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+132,"Shaheen_top_openram_cv shaheenTop core writeback io_MEM_WB_alu_output", false,-1, 31,0);
        tracep->declBus(c+150,"Shaheen_top_openram_cv shaheenTop core writeback io_write_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio io_tl_o_a_ready", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio io_cio_gpio_i", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio io_cio_gpio_o", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio io_cio_gpio_en_o", false,-1, 31,0);
        tracep->declBus(c+52,"Shaheen_top_openram_cv shaheenTop gpio io_intr_gpio_o", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_state_q", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_enable_q", false,-1, 31,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_test_q", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_test_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_intr_state_d", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_intr_state_de", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_data_in_d", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_direct_out_d", false,-1, 31,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_direct_oe_d", false,-1, 31,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop_io_hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_reset", false,-1);
        tracep->declBus(c+688,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_event_intr_i", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_reg2hw_intr_enable_q_i", false,-1, 31,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_reg2hw_intr_test_q_i", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_reg2hw_intr_test_qe_i", false,-1);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_reg2hw_intr_state_q_i", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_hw2reg_intr_state_de_o", false,-1);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_hw2reg_intr_state_d_o", false,-1, 31,0);
        tracep->declBus(c+52,"Shaheen_top_openram_cv shaheenTop gpio intr_hw_io_intr_o", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio cio_gpio_q", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio cio_gpio_en_q", false,-1, 31,0);
        tracep->declBus(c+526,"Shaheen_top_openram_cv shaheenTop gpio data_in_q", false,-1, 31,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+689,"Shaheen_top_openram_cv shaheenTop gpio event_intr_rise", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+690,"Shaheen_top_openram_cv shaheenTop gpio event_intr_fall", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+691,"Shaheen_top_openram_cv shaheenTop gpio event_intr_acthigh", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+692,"Shaheen_top_openram_cv shaheenTop gpio event_intr_actlow", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_tl_o_a_ready", false,-1);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_state_q", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_enable_q", false,-1, 31,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_test_q", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_test_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_intr_state_d", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_intr_state_de", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_data_in_d", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_direct_out_d", false,-1, 31,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_direct_oe_d", false,-1, 31,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop io_hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_tl_o_a_ready", false,-1);
        tracep->declBit(c+527,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_we_o", false,-1);
        tracep->declBus(c+528,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_addr_o", false,-1, 5,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_be_o", false,-1, 3,0);
        tracep->declBus(c+529,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_reset", false,-1);
        tracep->declBit(c+530,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_wd", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_de", false,-1);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_d", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_reset", false,-1);
        tracep->declBit(c+531,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg_reset", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg_io_d", false,-1, 31,0);
        tracep->declBus(c+532,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_reset", false,-1);
        tracep->declBit(c+533,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_reset", false,-1);
        tracep->declBit(c+534,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_reset", false,-1);
        tracep->declBit(c+535,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_reset", false,-1);
        tracep->declBit(c+536,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+527,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop reg_we", false,-1);
        tracep->declBus(c+528,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop reg_addr", false,-1, 5,0);
        tracep->declBit(c+537,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_0", false,-1);
        tracep->declBit(c+538,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_1", false,-1);
        tracep->declBit(c+539,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_2", false,-1);
        tracep->declBit(c+540,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_3", false,-1);
        tracep->declBit(c+541,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_4", false,-1);
        tracep->declBit(c+542,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_5", false,-1);
        tracep->declBit(c+543,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_6", false,-1);
        tracep->declBit(c+544,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_7", false,-1);
        tracep->declBit(c+545,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_8", false,-1);
        tracep->declBit(c+546,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_9", false,-1);
        tracep->declBit(c+547,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_10", false,-1);
        tracep->declBit(c+548,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_11", false,-1);
        tracep->declBit(c+549,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_12", false,-1);
        tracep->declBit(c+550,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop addr_hit_13", false,-1);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop reg_be", false,-1, 3,0);
        tracep->declBit(c+551,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop wr_err", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop reg_wdata", false,-1, 31,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_qs", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_qs", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_qs", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_qs", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_qs", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_qs", false,-1, 15,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_qs", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_qs", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_qs", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_qs", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_qs", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_qs", false,-1, 31,0);
        tracep->declBus(c+532,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_qs", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_qs", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter reset", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_o_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_tl_o_a_ready", false,-1);
        tracep->declBit(c+527,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_we_o", false,-1);
        tracep->declBus(c+528,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_addr_o", false,-1, 5,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_be_o", false,-1, 3,0);
        tracep->declBus(c+529,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+552,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr_io_err_o", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter rdata_q", false,-1, 31,0);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter outstanding", false,-1);
        tracep->declBit(c+553,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter a_ack", false,-1);
        tracep->declBit(c+554,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter wr_req", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter addr_align_err", false,-1);
        tracep->declBit(c+552,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tl_err", false,-1);
        tracep->declBit(c+552,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter err_internal", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+552,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr io_err_o", false,-1);
        tracep->declBit(c+555,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr op_get", false,-1);
        tracep->declBit(c+556,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr op_partial", false,-1);
        tracep->declBit(c+557,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr op_full", false,-1);
        tracep->declBit(c+558,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr opcode_allowed", false,-1);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr addr_size_chk", false,-1);
        tracep->declBit(c+559,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr fulldata_chk", false,-1);
        tracep->declBit(c+560,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop tlul_regAdapter tlErr a_config_allowed", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg reset", false,-1);
        tracep->declBit(c+530,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_wd", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_de", false,-1);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_d", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_q", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+693,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg wr_en", false,-1);
        tracep->declBus(c+694,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_state_reg wr_data", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg reset", false,-1);
        tracep->declBit(c+531,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg io_q", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_enable_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_d", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_q", false,-1, 31,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_test_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg reset", false,-1);
        tracep->declBus(c+684,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg io_d", false,-1, 31,0);
        tracep->declBus(c+532,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+532,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop data_in_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_d", false,-1, 31,0);
        tracep->declBit(c+510,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_q", false,-1, 31,0);
        tracep->declBus(c+8,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_out_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+522,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+512,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_lower_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+523,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+514,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_out_upper_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_d", false,-1, 31,0);
        tracep->declBit(c+515,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_qe", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_q", false,-1, 31,0);
        tracep->declBus(c+51,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop direct_oe_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+524,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+516,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_lower_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_we", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_qe", false,-1);
        tracep->declBus(c+511,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+525,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_we", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+517,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_qe", false,-1);
        tracep->declBus(c+513,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+701,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop masked_oe_upper_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg reset", false,-1);
        tracep->declBit(c+533,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg io_q", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+518,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_rising_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg reset", false,-1);
        tracep->declBit(c+534,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg io_q", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+519,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_falling_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg reset", false,-1);
        tracep->declBit(c+535,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_q", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+520,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg reset", false,-1);
        tracep->declBit(c+536,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_we", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_q", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+521,"Shaheen_top_openram_cv shaheenTop gpio gpioRegTop intr_ctrl_en_lvllow_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop gpio intr_hw clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop gpio intr_hw reset", false,-1);
        tracep->declBus(c+688,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_event_intr_i", false,-1, 31,0);
        tracep->declBus(c+508,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_reg2hw_intr_enable_q_i", false,-1, 31,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_reg2hw_intr_test_q_i", false,-1, 31,0);
        tracep->declBit(c+509,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_reg2hw_intr_test_qe_i", false,-1);
        tracep->declBus(c+507,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_reg2hw_intr_state_q_i", false,-1, 31,0);
        tracep->declBit(c+687,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_hw2reg_intr_state_de_o", false,-1);
        tracep->declBus(c+686,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_hw2reg_intr_state_d_o", false,-1, 31,0);
        tracep->declBus(c+52,"Shaheen_top_openram_cv shaheenTop gpio intr_hw io_intr_o", false,-1, 31,0);
        tracep->declBus(c+695,"Shaheen_top_openram_cv shaheenTop gpio intr_hw new_event", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_req_i", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_gnt_o", false,-1);
        tracep->declBus(c+646,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_addr_i", false,-1, 31,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_we_i", false,-1);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_be_i", false,-1, 3,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_valid_o", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_o_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+698,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_i_d_valid", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop core_iccm_tl_host io_tl_i_a_ready", false,-1);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_req_i", false,-1);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_gnt_o", false,-1);
        tracep->declBus(c+35,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_addr_i", false,-1, 31,0);
        tracep->declBit(c+30,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_we_i", false,-1);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+53,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_be_i", false,-1, 3,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_valid_o", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_o_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_i_d_valid", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop core_loadStore_tl_host io_tl_i_a_ready", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop iccm_tl_device clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop iccm_tl_device reset", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_i_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_o_d_valid", false,-1);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_tl_o_a_ready", false,-1);
        tracep->declBus(c+648,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_addr_o", false,-1, 7,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv shaheenTop iccm_tl_device io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr_io_err_o", false,-1);
        tracep->declBit(c+40,"Shaheen_top_openram_cv shaheenTop iccm_tl_device outstanding", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device a_ack", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+700,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+647,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+699,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr io_err_o", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr op_get", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr op_partial", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr op_full", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr opcode_allowed", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr addr_size_chk", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr fulldata_chk", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop iccm_tl_device tlErr a_config_allowed", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop dccm_tl_device clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop dccm_tl_device reset", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_o_d_valid", false,-1);
        tracep->declBus(c+7,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+56,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_tl_o_a_ready", false,-1);
        tracep->declBit(c+57,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_we_o", false,-1);
        tracep->declBus(c+58,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_addr_o", false,-1, 7,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_wdata_o", false,-1, 31,0);
        tracep->declBit(c+17,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_wmask_o_0", false,-1);
        tracep->declBit(c+18,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_wmask_o_1", false,-1);
        tracep->declBit(c+19,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_wmask_o_2", false,-1);
        tracep->declBit(c+20,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_wmask_o_3", false,-1);
        tracep->declBus(c+6,"Shaheen_top_openram_cv shaheenTop dccm_tl_device io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+561,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr_io_err_o", false,-1);
        tracep->declBit(c+562,"Shaheen_top_openram_cv shaheenTop dccm_tl_device error", false,-1);
        tracep->declBit(c+55,"Shaheen_top_openram_cv shaheenTop dccm_tl_device outstanding", false,-1);
        tracep->declBit(c+563,"Shaheen_top_openram_cv shaheenTop dccm_tl_device a_ack", false,-1);
        tracep->declBit(c+564,"Shaheen_top_openram_cv shaheenTop dccm_tl_device wr_req", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv shaheenTop dccm_tl_device addr_align_err", false,-1);
        tracep->declBit(c+561,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tl_err", false,-1);
        tracep->declBit(c+561,"Shaheen_top_openram_cv shaheenTop dccm_tl_device err_internal", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+561,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr io_err_o", false,-1);
        tracep->declBit(c+555,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr op_get", false,-1);
        tracep->declBit(c+556,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr op_partial", false,-1);
        tracep->declBit(c+557,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr op_full", false,-1);
        tracep->declBit(c+565,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr opcode_allowed", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr addr_size_chk", false,-1);
        tracep->declBit(c+566,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr fulldata_chk", false,-1);
        tracep->declBit(c+567,"Shaheen_top_openram_cv shaheenTop dccm_tl_device tlErr a_config_allowed", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 reset", false,-1);
        tracep->declBit(c+29,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_i_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_i_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_i_a_data", false,-1, 31,0);
        tracep->declBit(c+28,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_o_d_valid", false,-1);
        tracep->declBus(c+645,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_o_d_data", false,-1, 31,0);
        tracep->declBit(c+27,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_h_o_a_ready", false,-1);
        tracep->declBit(c+54,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_0_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_0_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_0_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_0_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_0_a_data", false,-1, 31,0);
        tracep->declBit(c+43,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_1_a_valid", false,-1);
        tracep->declBus(c+44,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_1_a_opcode", false,-1, 2,0);
        tracep->declBus(c+45,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_1_a_address", false,-1, 31,0);
        tracep->declBus(c+46,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_1_a_mask", false,-1, 3,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_o_1_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_0_d_valid", false,-1);
        tracep->declBus(c+7,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_0_d_data", false,-1, 31,0);
        tracep->declBit(c+56,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_0_a_ready", false,-1);
        tracep->declBit(c+48,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_1_d_valid", false,-1);
        tracep->declBus(c+49,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_1_d_data", false,-1, 31,0);
        tracep->declBit(c+50,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_tl_d_i_1_a_ready", false,-1);
        tracep->declBus(c+59,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 io_dev_sel", false,-1, 1,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp_clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp_reset", false,-1);
        tracep->declBit(c+568,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp_io_tl_h_i_a_valid", false,-1);
        tracep->declBit(c+569,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp_io_tl_d_o_d_valid", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp_io_tl_d_o_a_ready", false,-1);
        tracep->declBit(c+569,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_err_d_i_d_valid", false,-1);
        tracep->declBit(c+677,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp clock", false,-1);
        tracep->declBit(c+678,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp reset", false,-1);
        tracep->declBit(c+568,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp io_tl_h_i_a_valid", false,-1);
        tracep->declBit(c+569,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp io_tl_d_o_d_valid", false,-1);
        tracep->declBit(c+696,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp io_tl_d_o_a_ready", false,-1);
        tracep->declBit(c+569,"Shaheen_top_openram_cv shaheenTop tl_switch_1to2 tl_errResp err_reqPending", false,-1);
        tracep->declBus(c+702,"Shaheen_top_openram_cv iccm NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+703,"Shaheen_top_openram_cv iccm DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+704,"Shaheen_top_openram_cv iccm ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+705,"Shaheen_top_openram_cv iccm RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+706,"Shaheen_top_openram_cv iccm DELAY", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv iccm clk0", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv iccm csb0", false,-1);
        tracep->declBit(c+10,"Shaheen_top_openram_cv iccm web0", false,-1);
        tracep->declBus(c+699,"Shaheen_top_openram_cv iccm wmask0", false,-1, 3,0);
        tracep->declBus(c+580,"Shaheen_top_openram_cv iccm addr0", false,-1, 7,0);
        tracep->declBus(c+11,"Shaheen_top_openram_cv iccm din0", false,-1, 31,0);
        tracep->declBus(c+1,"Shaheen_top_openram_cv iccm dout0", false,-1, 31,0);
        tracep->declBit(c+570,"Shaheen_top_openram_cv iccm csb0_reg", false,-1);
        tracep->declBit(c+571,"Shaheen_top_openram_cv iccm web0_reg", false,-1);
        tracep->declBus(c+572,"Shaheen_top_openram_cv iccm wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+573,"Shaheen_top_openram_cv iccm addr0_reg", false,-1, 7,0);
        tracep->declBus(c+574,"Shaheen_top_openram_cv iccm din0_reg", false,-1, 31,0);
        tracep->declBus(c+702,"Shaheen_top_openram_cv dccm NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+703,"Shaheen_top_openram_cv dccm DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+704,"Shaheen_top_openram_cv dccm ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+705,"Shaheen_top_openram_cv dccm RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+706,"Shaheen_top_openram_cv dccm DELAY", false,-1, 31,0);
        tracep->declBit(c+677,"Shaheen_top_openram_cv dccm clk0", false,-1);
        tracep->declBit(c+697,"Shaheen_top_openram_cv dccm csb0", false,-1);
        tracep->declBit(c+12,"Shaheen_top_openram_cv dccm web0", false,-1);
        tracep->declBus(c+46,"Shaheen_top_openram_cv dccm wmask0", false,-1, 3,0);
        tracep->declBus(c+21,"Shaheen_top_openram_cv dccm addr0", false,-1, 7,0);
        tracep->declBus(c+47,"Shaheen_top_openram_cv dccm din0", false,-1, 31,0);
        tracep->declBus(c+6,"Shaheen_top_openram_cv dccm dout0", false,-1, 31,0);
        tracep->declBit(c+575,"Shaheen_top_openram_cv dccm csb0_reg", false,-1);
        tracep->declBit(c+576,"Shaheen_top_openram_cv dccm web0_reg", false,-1);
        tracep->declBus(c+577,"Shaheen_top_openram_cv dccm wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+578,"Shaheen_top_openram_cv dccm addr0_reg", false,-1, 7,0);
        tracep->declBus(c+579,"Shaheen_top_openram_cv dccm din0_reg", false,-1, 31,0);
    }
}

void VShaheen_top_openram_cv::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VShaheen_top_openram_cv::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VShaheen_top_openram_cv::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VShaheen_top_openram_cv__Syms* __restrict vlSymsp = static_cast<VShaheen_top_openram_cv__Syms*>(userp);
    VShaheen_top_openram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp89[3];
    WData/*95:0*/ __Vtemp90[3];
    WData/*95:0*/ __Vtemp91[3];
    WData/*95:0*/ __Vtemp92[3];
    WData/*95:0*/ __Vtemp93[3];
    WData/*95:0*/ __Vtemp94[3];
    WData/*95:0*/ __Vtemp95[3];
    WData/*95:0*/ __Vtemp96[3];
    WData/*95:0*/ __Vtemp97[3];
    WData/*95:0*/ __Vtemp98[3];
    WData/*95:0*/ __Vtemp99[3];
    WData/*95:0*/ __Vtemp100[3];
    WData/*95:0*/ __Vtemp101[3];
    WData/*95:0*/ __Vtemp102[3];
    WData/*95:0*/ __Vtemp103[3];
    WData/*95:0*/ __Vtemp104[3];
    WData/*95:0*/ __Vtemp105[3];
    WData/*95:0*/ __Vtemp106[3];
    WData/*95:0*/ __Vtemp107[3];
    WData/*95:0*/ __Vtemp108[3];
    WData/*95:0*/ __Vtemp109[3];
    WData/*95:0*/ __Vtemp110[3];
    WData/*95:0*/ __Vtemp111[3];
    WData/*95:0*/ __Vtemp112[3];
    WData/*95:0*/ __Vtemp113[3];
    WData/*95:0*/ __Vtemp114[3];
    WData/*95:0*/ __Vtemp115[3];
    WData/*95:0*/ __Vtemp116[3];
    WData/*95:0*/ __Vtemp117[3];
    WData/*95:0*/ __Vtemp118[3];
    WData/*95:0*/ __Vtemp119[3];
    WData/*95:0*/ __Vtemp120[3];
    WData/*95:0*/ __Vtemp121[3];
    WData/*95:0*/ __Vtemp122[3];
    WData/*95:0*/ __Vtemp123[3];
    WData/*95:0*/ __Vtemp124[3];
    WData/*95:0*/ __Vtemp125[3];
    WData/*95:0*/ __Vtemp126[3];
    WData/*95:0*/ __Vtemp127[3];
    WData/*95:0*/ __Vtemp128[3];
    WData/*95:0*/ __Vtemp129[3];
    WData/*95:0*/ __Vtemp130[3];
    WData/*95:0*/ __Vtemp131[3];
    WData/*95:0*/ __Vtemp132[3];
    WData/*95:0*/ __Vtemp133[3];
    WData/*95:0*/ __Vtemp134[3];
    WData/*95:0*/ __Vtemp135[3];
    WData/*95:0*/ __Vtemp136[3];
    WData/*95:0*/ __Vtemp137[3];
    WData/*95:0*/ __Vtemp138[3];
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm_io_rdata_o),32);
        tracep->fullCData(oldp+2,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__dout)),8);
        tracep->fullCData(oldp+3,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                            >> 8U))),8);
        tracep->fullCData(oldp+4,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                            >> 0x10U))),8);
        tracep->fullCData(oldp+5,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__dout 
                                            >> 0x18U))),8);
        tracep->fullIData(oldp+6,(vlTOPp->Shaheen_top_openram_cv__DOT__dout),32);
        tracep->fullIData(oldp+7,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding)
                                    ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__error)
                                        ? 0xffffffffU
                                        : vlTOPp->Shaheen_top_openram_cv__DOT__dout)
                                    : 0U)),32);
        tracep->fullIData(oldp+8,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q),32);
        tracep->fullIData(oldp+9,((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q)),32);
        tracep->fullBit(oldp+10,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                  | ((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                     | (2U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))))));
        tracep->fullIData(oldp+11,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_data_reg),32);
        tracep->fullBit(oldp+12,((1U & (~ (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                            & ((0U 
                                                == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                               | (1U 
                                                  == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
                                           & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T))))));
        tracep->fullCData(oldp+13,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)),8);
        tracep->fullCData(oldp+14,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 8U))),8);
        tracep->fullCData(oldp+15,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+16,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 0x18U))),8);
        tracep->fullBit(oldp+17,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))));
        tracep->fullBit(oldp+18,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                        >> 1U))));
        tracep->fullBit(oldp+19,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                        >> 2U))));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                        >> 3U))));
        tracep->fullCData(oldp+21,((0x3fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                             >> 2U))),8);
        tracep->fullBit(oldp+22,(((0U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg)) 
                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT___GEN_16))));
        tracep->fullIData(oldp+23,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regFinalData),32);
        tracep->fullCData(oldp+24,((0xffU & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regAddr))),8);
        tracep->fullBit(oldp+25,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regValid));
        tracep->fullBit(oldp+26,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regDone));
        tracep->fullBit(oldp+27,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready));
        tracep->fullBit(oldp+28,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid));
        tracep->fullBit(oldp+29,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_data_req_o));
        tracep->fullBit(oldp+30,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
        tracep->fullBit(oldp+31,(((0U == (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                  | ((1U != (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_2)))));
        tracep->fullBit(oldp+32,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                   ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                   : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                       ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                       : ((0U != (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_6))))));
        tracep->fullBit(oldp+33,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                   ? ((0U == (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                      | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                   : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                       ? ((0U != (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                       : ((0U != (3U 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & ((1U != 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___GEN_3)))))));
        tracep->fullBit(oldp+34,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_7) 
                                  | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                      ? ((0U != (3U 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         & (1U != (3U 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))
                                      : ((0U != (3U 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         & ((1U != 
                                             (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & (2U != 
                                               (3U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))))))));
        tracep->fullIData(oldp+35,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output),32);
        tracep->fullCData(oldp+36,((0xffU & ((0U == 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                              : ((1U 
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
        tracep->fullCData(oldp+37,((0xffU & ((0U == 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 8U)
                                              : ((1U 
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
        tracep->fullCData(oldp+38,((0xffU & ((0U == 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x10U)
                                              : ((1U 
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
        tracep->fullCData(oldp+39,((0xffU & ((0U == 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x18U)
                                              : ((1U 
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
        tracep->fullBit(oldp+40,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__iccm_tl_device__DOT__outstanding));
        tracep->fullBit(oldp+41,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i));
        tracep->fullBit(oldp+42,((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6)));
        tracep->fullBit(oldp+43,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid));
        tracep->fullCData(oldp+44,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode),3);
        tracep->fullIData(oldp+45,((0xfffffffcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),32);
        tracep->fullCData(oldp+46,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask),4);
        tracep->fullIData(oldp+47,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i),32);
        tracep->fullBit(oldp+48,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding));
        tracep->fullIData(oldp+49,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q),32);
        tracep->fullBit(oldp+50,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)))));
        tracep->fullIData(oldp+51,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q),32);
        tracep->fullIData(oldp+52,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6),32);
        tracep->fullCData(oldp+53,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_be_i),4);
        tracep->fullBit(oldp+54,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid));
        tracep->fullBit(oldp+55,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding));
        tracep->fullBit(oldp+56,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__outstanding)))));
        tracep->fullBit(oldp+57,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                   & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                      | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T))));
        tracep->fullCData(oldp+58,((0xfcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),8);
        tracep->fullCData(oldp+59,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_dev_sel),2);
        tracep->fullIData(oldp+60,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg),32);
        tracep->fullBit(oldp+61,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__reset_reg));
        tracep->fullCData(oldp+62,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg),2);
        tracep->fullBit(oldp+63,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__validReg));
        tracep->fullCData(oldp+64,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg),8);
        tracep->fullCData(oldp+65,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__count),3);
        tracep->fullSData(oldp+66,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regAddr),14);
        tracep->fullCData(oldp+67,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__dataReg),8);
        tracep->fullCData(oldp+68,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB1),8);
        tracep->fullCData(oldp+69,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regLSB2),8);
        tracep->fullCData(oldp+70,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__regMSB1),8);
        tracep->fullCData(oldp+71,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg),3);
        tracep->fullCData(oldp+72,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount),8);
        tracep->fullCData(oldp+73,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex),4);
        tracep->fullBit(oldp+74,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg));
        tracep->fullIData(oldp+75,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg),32);
        tracep->fullIData(oldp+76,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg),32);
        tracep->fullCData(oldp+77,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+79,(((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                         == (0x1fU 
                                             & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU)))) 
                                     & (0x37U != (0x7fU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                     ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_45
                                     : ((0x37U != (0x7fU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                         : 0U))),32);
        tracep->fullIData(oldp+80,(((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                         == (0x1fU 
                                             & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                                     & (0x37U != (0x7fU 
                                                  & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                     ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT___T_45
                                     : ((0x37U != (0x7fU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                         ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
                                         : 0U))),32);
        tracep->fullIData(oldp+81,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
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
                                         : ((2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
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
        tracep->fullCData(oldp+82,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 7U))),5);
        tracep->fullCData(oldp+83,((7U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+84,((0x7fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x19U))),7);
        tracep->fullBit(oldp+85,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                        & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type))))));
        tracep->fullBit(oldp+86,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead))));
        tracep->fullBit(oldp+87,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen))));
        tracep->fullBit(oldp+88,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
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
        tracep->fullBit(oldp+89,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                     & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)))));
        tracep->fullCData(oldp+90,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                     ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 4U
                                               : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+91,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                     ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullBit(oldp+92,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
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
        tracep->fullCData(oldp+93,((0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),7);
        tracep->fullIData(oldp+94,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata),32);
        tracep->fullBit(oldp+95,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX_io_stall));
        tracep->fullIData(oldp+96,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc_reg),32);
        tracep->fullIData(oldp+97,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__pc4_reg),32);
        tracep->fullIData(oldp+98,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_reg),32);
        tracep->fullIData(oldp+99,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_reg),32);
        tracep->fullIData(oldp+100,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__imm_reg),32);
        tracep->fullCData(oldp+101,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func3_reg),3);
        tracep->fullCData(oldp+102,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__func7_reg),7);
        tracep->fullCData(oldp+103,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg),7);
        tracep->fullCData(oldp+104,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg),5);
        tracep->fullCData(oldp+105,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg),5);
        tracep->fullCData(oldp+106,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg),5);
        tracep->fullBit(oldp+107,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg));
        tracep->fullBit(oldp+108,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg));
        tracep->fullBit(oldp+109,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg));
        tracep->fullBit(oldp+110,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg));
        tracep->fullBit(oldp+111,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg));
        tracep->fullCData(oldp+112,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg),4);
        tracep->fullCData(oldp+113,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg),2);
        tracep->fullBit(oldp+114,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg));
        tracep->fullIData(oldp+115,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg),32);
        tracep->fullIData(oldp+116,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT___GEN_7),32);
        tracep->fullIData(oldp+117,((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)),32);
        tracep->fullBit(oldp+118,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
        tracep->fullBit(oldp+119,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr));
        tracep->fullBit(oldp+120,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen));
        tracep->fullBit(oldp+121,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg));
        tracep->fullIData(oldp+122,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2),32);
        tracep->fullCData(oldp+123,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel),5);
        tracep->fullCData(oldp+124,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_func3),3);
        tracep->fullIData(oldp+125,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data),32);
        tracep->fullBit(oldp+126,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr));
        tracep->fullBit(oldp+127,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen));
        tracep->fullBit(oldp+128,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg));
        tracep->fullBit(oldp+129,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
        tracep->fullCData(oldp+130,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel),5);
        tracep->fullIData(oldp+131,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data),32);
        tracep->fullIData(oldp+132,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output),32);
        tracep->fullIData(oldp+133,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data),32);
        tracep->fullBit(oldp+134,(((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                   & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                      >> 2U))));
        tracep->fullBit(oldp+135,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))));
        tracep->fullIData(oldp+136,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q),32);
        tracep->fullBit(oldp+137,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i)))));
        tracep->fullBit(oldp+138,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o));
        tracep->fullBit(oldp+139,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31))));
        tracep->fullCData(oldp+140,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                      ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? 0x2bU
                                               : 0U))),6);
        tracep->fullIData(oldp+141,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q),32);
        tracep->fullIData(oldp+142,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm),32);
        tracep->fullIData(oldp+143,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm),32);
        tracep->fullCData(oldp+144,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out),2);
        tracep->fullBit(oldp+145,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch))));
        tracep->fullIData(oldp+146,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg),32);
        tracep->fullBit(oldp+147,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward));
        tracep->fullBit(oldp+148,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o));
        tracep->fullBit(oldp+149,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_core_stall_i));
        tracep->fullIData(oldp+150,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__writeback_io_write_data),32);
        tracep->fullIData(oldp+151,((0x7fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),32);
        tracep->fullBit(oldp+152,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_stall));
        tracep->fullIData(oldp+153,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_),32);
        tracep->fullIData(oldp+154,(((IData)(4U) + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)),32);
        tracep->fullBit(oldp+155,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__handle_irq));
        tracep->fullBit(oldp+156,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead));
        tracep->fullBit(oldp+157,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)))));
        tracep->fullBit(oldp+158,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch));
        tracep->fullBit(oldp+159,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
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
        tracep->fullBit(oldp+160,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen));
        tracep->fullBit(oldp+161,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type));
        tracep->fullCData(oldp+162,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op),2);
        tracep->fullBit(oldp+163,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type))));
        tracep->fullCData(oldp+164,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 4U
                                               : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+165,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullBit(oldp+166,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                      | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                         | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                            & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                               | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                     & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                        | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                           | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9))))))))))));
        tracep->fullCData(oldp+167,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel),2);
        tracep->fullCData(oldp+168,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+169,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1),4);
        tracep->fullCData(oldp+170,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34),4);
        tracep->fullIData(oldp+171,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData),32);
        tracep->fullIData(oldp+172,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1),32);
        tracep->fullIData(oldp+173,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2),32);
        tracep->fullIData(oldp+174,(((((0x80000000U 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0xfffffU : 0U) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 7U))))),32);
        tracep->fullIData(oldp+175,((IData)(((QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                 ? 0xfffU
                                                                 : 0U) 
                                                               << 0x14U) 
                                                              | (0xfffffU 
                                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                    >> 0xcU))))) 
                                             << 0xcU))),32);
        tracep->fullIData(oldp+176,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm),32);
        tracep->fullBit(oldp+177,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                    & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                       == (0x1fU & 
                                           (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xfU)))) 
                                   & (0x37U != (0x7fU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
        tracep->fullBit(oldp+178,((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                    & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                       == (0x1fU & 
                                           (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                                   & (0x37U != (0x7fU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
        tracep->fullSData(oldp+179,((0xfffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U))),12);
        tracep->fullBit(oldp+180,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                   & (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd) 
                                       & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)) 
                                      | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)) 
                                         & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)))))));
        tracep->fullCData(oldp+181,((((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                      & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U)) << 2U)),3);
        tracep->fullBit(oldp+182,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                   & ((((0xf14U != 
                                         (0xfffU & 
                                          (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U))) 
                                        & ((0x300U 
                                            != (0xfffU 
                                                & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
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
                                                       & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99))))))) 
                                       | ((3U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x1cU)) 
                                          > (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))) 
                                      | ((3U == (3U 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x1eU))) 
                                         & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))))));
        tracep->fullCData(oldp+183,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1),3);
        tracep->fullBit(oldp+184,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type));
        tracep->fullBit(oldp+185,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type));
        tracep->fullBit(oldp+186,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type));
        tracep->fullBit(oldp+187,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type));
        tracep->fullBit(oldp+188,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type));
        tracep->fullBit(oldp+189,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type));
        tracep->fullBit(oldp+190,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type));
        tracep->fullBit(oldp+191,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type));
        tracep->fullBit(oldp+192,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc));
        tracep->fullBit(oldp+193,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply));
        tracep->fullBit(oldp+194,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type));
        tracep->fullIData(oldp+195,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0),32);
        tracep->fullIData(oldp+196,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1),32);
        tracep->fullIData(oldp+197,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2),32);
        tracep->fullIData(oldp+198,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3),32);
        tracep->fullIData(oldp+199,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4),32);
        tracep->fullIData(oldp+200,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5),32);
        tracep->fullIData(oldp+201,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6),32);
        tracep->fullIData(oldp+202,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7),32);
        tracep->fullIData(oldp+203,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8),32);
        tracep->fullIData(oldp+204,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9),32);
        tracep->fullIData(oldp+205,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10),32);
        tracep->fullIData(oldp+206,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11),32);
        tracep->fullIData(oldp+207,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12),32);
        tracep->fullIData(oldp+208,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13),32);
        tracep->fullIData(oldp+209,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14),32);
        tracep->fullIData(oldp+210,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15),32);
        tracep->fullIData(oldp+211,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16),32);
        tracep->fullIData(oldp+212,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17),32);
        tracep->fullIData(oldp+213,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18),32);
        tracep->fullIData(oldp+214,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19),32);
        tracep->fullIData(oldp+215,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20),32);
        tracep->fullIData(oldp+216,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21),32);
        tracep->fullIData(oldp+217,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22),32);
        tracep->fullIData(oldp+218,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23),32);
        tracep->fullIData(oldp+219,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24),32);
        tracep->fullIData(oldp+220,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25),32);
        tracep->fullIData(oldp+221,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26),32);
        tracep->fullIData(oldp+222,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27),32);
        tracep->fullIData(oldp+223,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28),32);
        tracep->fullIData(oldp+224,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29),32);
        tracep->fullIData(oldp+225,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30),32);
        tracep->fullIData(oldp+226,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31),32);
        tracep->fullSData(oldp+227,(((0xfe0U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U)))),12);
        tracep->fullCData(oldp+228,((0xfU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 8U))),4);
        tracep->fullCData(oldp+229,((0x3fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x19U))),6);
        tracep->fullBit(oldp+230,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 7U))));
        tracep->fullBit(oldp+231,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x1fU))));
        tracep->fullSData(oldp+232,(((0x1000U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x13U)) 
                                     | ((0x800U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U)))))),13);
        tracep->fullIData(oldp+233,(((((0x80000000U 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0x7ffffU : 0U) 
                                      << 0xdU) | ((0x1000U 
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
        tracep->fullIData(oldp+234,((0xfffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU))),20);
        tracep->fullIData(oldp+235,(((((0x80000000U 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0xfffU : 0U) 
                                      << 0x14U) | (0xfffffU 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0xcU)))),32);
        tracep->fullSData(oldp+236,((0x3ffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x15U))),10);
        tracep->fullBit(oldp+237,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U))));
        tracep->fullCData(oldp+238,((0xffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0xcU))),8);
        tracep->fullIData(oldp+239,(((0x100000U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                        | ((0x800U 
                                            & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))))),21);
        tracep->fullIData(oldp+240,(((((0x80000000U 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0x7ffU : 0U) 
                                      << 0x15U) | (
                                                   (0x100000U 
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
        tracep->fullBit(oldp+241,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                   | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)))));
        tracep->fullCData(oldp+242,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q),6);
        tracep->fullBit(oldp+243,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)))))));
        tracep->fullBit(oldp+244,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315))));
        tracep->fullCData(oldp+245,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q),3);
        tracep->fullBit(oldp+246,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)))));
        tracep->fullIData(oldp+247,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q),32);
        tracep->fullBit(oldp+248,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321))))))));
        tracep->fullCData(oldp+249,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q),6);
        tracep->fullBit(oldp+250,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)))))))));
        tracep->fullIData(oldp+251,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q),32);
        tracep->fullIData(oldp+252,(((0xfffff80U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                     | ((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                        | ((0x20U & 
                                            (((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                               ? (1U 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                     >> 5U))
                                               : (1U 
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
        tracep->fullIData(oldp+253,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q),28);
        tracep->fullIData(oldp+254,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q),32);
        tracep->fullBit(oldp+255,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                        & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)))))))))));
        tracep->fullIData(oldp+256,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q),32);
        tracep->fullBit(oldp+257,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                         & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                            & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                               & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                  & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                     & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                        & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                           & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354))))))))))));
        tracep->fullIData(oldp+258,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q),32);
        tracep->fullBit(oldp+259,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)));
        tracep->fullBit(oldp+260,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312)));
        tracep->fullQData(oldp+261,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q),64);
        tracep->fullBit(oldp+263,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 2U))));
        tracep->fullBit(oldp+264,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 2U))));
        tracep->fullQData(oldp+265,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q),64);
        tracep->fullBit(oldp+267,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 3U))));
        tracep->fullBit(oldp+268,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 3U))));
        VL_EXTEND_WQ(80,40, __Vtemp89, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullQData(oldp+269,((((QData)((IData)(
                                                      __Vtemp89[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp89[0U])))),64);
        tracep->fullBit(oldp+271,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 4U))));
        tracep->fullBit(oldp+272,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 4U))));
        VL_EXTEND_WQ(80,40, __Vtemp90, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullQData(oldp+273,((((QData)((IData)(
                                                      __Vtemp90[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp90[0U])))),64);
        tracep->fullBit(oldp+275,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 5U))));
        tracep->fullBit(oldp+276,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 5U))));
        VL_EXTEND_WQ(80,40, __Vtemp91, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullQData(oldp+277,((((QData)((IData)(
                                                      __Vtemp91[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp91[0U])))),64);
        tracep->fullBit(oldp+279,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 6U))));
        tracep->fullBit(oldp+280,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 6U))));
        VL_EXTEND_WQ(80,40, __Vtemp92, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullQData(oldp+281,((((QData)((IData)(
                                                      __Vtemp92[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp92[0U])))),64);
        tracep->fullBit(oldp+283,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 7U))));
        tracep->fullBit(oldp+284,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 7U))));
        VL_EXTEND_WQ(80,40, __Vtemp93, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      __Vtemp93[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp93[0U])))),64);
        tracep->fullBit(oldp+287,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 8U))));
        tracep->fullBit(oldp+288,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 8U))));
        VL_EXTEND_WQ(80,40, __Vtemp94, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      __Vtemp94[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp94[0U])))),64);
        tracep->fullBit(oldp+291,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 9U))));
        tracep->fullBit(oldp+292,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 9U))));
        VL_EXTEND_WQ(80,40, __Vtemp95, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      __Vtemp95[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp95[0U])))),64);
        tracep->fullBit(oldp+295,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xaU))));
        tracep->fullBit(oldp+296,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xaU))));
        VL_EXTEND_WQ(80,40, __Vtemp96, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      __Vtemp96[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp96[0U])))),64);
        tracep->fullBit(oldp+299,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xbU))));
        tracep->fullBit(oldp+300,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xbU))));
        VL_EXTEND_WQ(80,40, __Vtemp97, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      __Vtemp97[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp97[0U])))),64);
        tracep->fullBit(oldp+303,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xcU))));
        tracep->fullBit(oldp+304,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xcU))));
        VL_EXTEND_WQ(80,40, __Vtemp98, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      __Vtemp98[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp98[0U])))),64);
        tracep->fullCData(oldp+307,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q),2);
        tracep->fullSData(oldp+308,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q),13);
        tracep->fullQData(oldp+309,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0),64);
        tracep->fullQData(oldp+311,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1),64);
        tracep->fullQData(oldp+313,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2),64);
        tracep->fullQData(oldp+315,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3),64);
        tracep->fullQData(oldp+317,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4),64);
        tracep->fullQData(oldp+319,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5),64);
        tracep->fullQData(oldp+321,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6),64);
        tracep->fullQData(oldp+323,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7),64);
        tracep->fullQData(oldp+325,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8),64);
        tracep->fullQData(oldp+327,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9),64);
        tracep->fullQData(oldp+329,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10),64);
        tracep->fullQData(oldp+331,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11),64);
        tracep->fullQData(oldp+333,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12),64);
        tracep->fullQData(oldp+335,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13),64);
        tracep->fullQData(oldp+337,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14),64);
        tracep->fullQData(oldp+339,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15),64);
        tracep->fullQData(oldp+341,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16),64);
        tracep->fullQData(oldp+343,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17),64);
        tracep->fullQData(oldp+345,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18),64);
        tracep->fullQData(oldp+347,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19),64);
        tracep->fullQData(oldp+349,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20),64);
        tracep->fullQData(oldp+351,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21),64);
        tracep->fullQData(oldp+353,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22),64);
        tracep->fullQData(oldp+355,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23),64);
        tracep->fullQData(oldp+357,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24),64);
        tracep->fullQData(oldp+359,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25),64);
        tracep->fullQData(oldp+361,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26),64);
        tracep->fullQData(oldp+363,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27),64);
        tracep->fullQData(oldp+365,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28),64);
        tracep->fullQData(oldp+367,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29),64);
        tracep->fullQData(oldp+369,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30),64);
        tracep->fullQData(oldp+371,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31),64);
        tracep->fullIData(oldp+373,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0),32);
        tracep->fullIData(oldp+374,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1),32);
        tracep->fullIData(oldp+375,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2),32);
        tracep->fullIData(oldp+376,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3),32);
        tracep->fullIData(oldp+377,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4),32);
        tracep->fullIData(oldp+378,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5),32);
        tracep->fullIData(oldp+379,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6),32);
        tracep->fullIData(oldp+380,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7),32);
        tracep->fullIData(oldp+381,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8),32);
        tracep->fullIData(oldp+382,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9),32);
        tracep->fullIData(oldp+383,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10),32);
        tracep->fullIData(oldp+384,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11),32);
        tracep->fullIData(oldp+385,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12),32);
        tracep->fullIData(oldp+386,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13),32);
        tracep->fullIData(oldp+387,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14),32);
        tracep->fullIData(oldp+388,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15),32);
        tracep->fullIData(oldp+389,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16),32);
        tracep->fullIData(oldp+390,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17),32);
        tracep->fullIData(oldp+391,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18),32);
        tracep->fullIData(oldp+392,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19),32);
        tracep->fullIData(oldp+393,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20),32);
        tracep->fullIData(oldp+394,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21),32);
        tracep->fullIData(oldp+395,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22),32);
        tracep->fullIData(oldp+396,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23),32);
        tracep->fullIData(oldp+397,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24),32);
        tracep->fullIData(oldp+398,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25),32);
        tracep->fullIData(oldp+399,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26),32);
        tracep->fullIData(oldp+400,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27),32);
        tracep->fullIData(oldp+401,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28),32);
        tracep->fullIData(oldp+402,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29),32);
        tracep->fullIData(oldp+403,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30),32);
        tracep->fullIData(oldp+404,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31),32);
        tracep->fullBit(oldp+405,(((3U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x1cU)) 
                                   > (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+406,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq));
        tracep->fullBit(oldp+407,(((3U == (3U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x1eU))) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))));
        tracep->fullBit(oldp+408,(((0xf14U != (0xfffU 
                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U))) 
                                   & ((0x300U != (0xfffU 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U))) 
                                      & ((0x301U != 
                                          (0xfffU & 
                                           (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                                         & ((0x304U 
                                             != (0xfffU 
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
        tracep->fullBit(oldp+409,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+410,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 4U))));
        tracep->fullCData(oldp+411,((3U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                           >> 2U))),2);
        tracep->fullBit(oldp+412,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 5U))));
        tracep->fullBit(oldp+413,((1U & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q))));
        tracep->fullBit(oldp+414,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+415,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U))));
        tracep->fullBit(oldp+416,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 2U))));
        tracep->fullBit(oldp+417,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 1U))));
        tracep->fullBit(oldp+418,((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)));
        tracep->fullBit(oldp+419,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 4U))));
        tracep->fullBit(oldp+420,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 3U))));
        tracep->fullBit(oldp+421,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 6U))));
        tracep->fullBit(oldp+422,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 5U))));
        tracep->fullBit(oldp+423,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 9U))));
        tracep->fullBit(oldp+424,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 8U))));
        tracep->fullBit(oldp+425,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 7U))));
        tracep->fullBit(oldp+426,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 0xbU))));
        tracep->fullBit(oldp+427,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 0xaU))));
        tracep->fullCData(oldp+428,((0xfU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                             >> 0x18U))),4);
        tracep->fullSData(oldp+429,((0xfffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                               >> 0xcU))),12);
        tracep->fullCData(oldp+430,((0x1fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+431,((0x2000U | (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),32);
        tracep->fullBit(oldp+432,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301));
        tracep->fullBit(oldp+433,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                          ? (1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                          : (1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)))));
        tracep->fullBit(oldp+434,((1U & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                         & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 4U)))));
        tracep->fullBit(oldp+435,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                          ? (1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))
                                          : (1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))))));
        tracep->fullBit(oldp+436,(((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
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
        tracep->fullIData(oldp+437,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313),32);
        tracep->fullIData(oldp+438,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312),32);
        tracep->fullBit(oldp+439,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))));
        tracep->fullQData(oldp+440,((1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)),64);
        tracep->fullBit(oldp+442,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 2U))));
        tracep->fullQData(oldp+443,((1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)),64);
        tracep->fullBit(oldp+445,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 3U))));
        tracep->fullQData(oldp+446,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q),40);
        tracep->fullQData(oldp+448,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q))),40);
        tracep->fullBit(oldp+450,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 4U))));
        tracep->fullQData(oldp+451,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q),40);
        tracep->fullQData(oldp+453,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q))),40);
        tracep->fullBit(oldp+455,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 5U))));
        tracep->fullQData(oldp+456,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q),40);
        tracep->fullQData(oldp+458,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q))),40);
        tracep->fullBit(oldp+460,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 6U))));
        tracep->fullQData(oldp+461,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q),40);
        tracep->fullQData(oldp+463,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q))),40);
        tracep->fullBit(oldp+465,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 7U))));
        tracep->fullQData(oldp+466,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q),40);
        tracep->fullQData(oldp+468,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q))),40);
        tracep->fullBit(oldp+470,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 8U))));
        tracep->fullQData(oldp+471,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q),40);
        tracep->fullQData(oldp+473,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q))),40);
        tracep->fullBit(oldp+475,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 9U))));
        tracep->fullQData(oldp+476,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q),40);
        tracep->fullQData(oldp+478,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q))),40);
        tracep->fullBit(oldp+480,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+481,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q),40);
        tracep->fullQData(oldp+483,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q))),40);
        tracep->fullBit(oldp+485,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+486,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q),40);
        tracep->fullQData(oldp+488,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q))),40);
        tracep->fullBit(oldp+490,((1U & ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xcU))));
        tracep->fullQData(oldp+491,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q),40);
        tracep->fullQData(oldp+493,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q))),40);
        tracep->fullBit(oldp+495,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute));
        tracep->fullBit(oldp+496,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory));
        tracep->fullBit(oldp+497,((((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                      & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
                                     & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory))) 
                                    & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen))) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
        tracep->fullBit(oldp+498,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute));
        tracep->fullBit(oldp+499,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory));
        tracep->fullBit(oldp+500,((((((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                      & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)) 
                                     & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
                                    & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory))) 
                                   & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
        tracep->fullCData(oldp+501,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a),2);
        tracep->fullCData(oldp+502,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b),2);
        tracep->fullIData(oldp+503,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_a),32);
        tracep->fullIData(oldp+504,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_io_oper_b),32);
        tracep->fullCData(oldp+505,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__execute__DOT__alu_control_io_output),5);
        tracep->fullCData(oldp+506,((3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),2);
        tracep->fullIData(oldp+507,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+508,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg),32);
        tracep->fullBit(oldp+509,((((8U == (0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+510,((((0x10U == (0x3cU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullSData(oldp+511,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)),16);
        tracep->fullBit(oldp+512,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullSData(oldp+513,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x10U))),16);
        tracep->fullBit(oldp+514,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+515,((((0x1cU == (0x3cU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+516,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+517,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91) 
                                   & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullIData(oldp+518,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+519,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+520,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+521,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg),32);
        tracep->fullSData(oldp+522,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q)),16);
        tracep->fullSData(oldp+523,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+524,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q)),16);
        tracep->fullSData(oldp+525,((0xffffU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_en_q 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+526,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q),32);
        tracep->fullBit(oldp+527,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
        tracep->fullCData(oldp+528,((0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),6);
        tracep->fullIData(oldp+529,(((0U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg
                                      : ((4U == (0x3cU 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                          ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg
                                          : ((8U == 
                                              (0x3cU 
                                               & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? 0U : 
                                             ((0xcU 
                                               == (0x3cU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                               ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg
                                               : ((0x10U 
                                                   == 
                                                   (0x3cU 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__cio_gpio_q
                                                   : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8)))))),32);
        tracep->fullBit(oldp+530,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we));
        tracep->fullBit(oldp+531,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we));
        tracep->fullIData(oldp+532,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg),32);
        tracep->fullBit(oldp+533,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we));
        tracep->fullBit(oldp+534,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we));
        tracep->fullBit(oldp+535,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we));
        tracep->fullBit(oldp+536,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we));
        tracep->fullBit(oldp+537,((0U == (0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+538,((4U == (0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+539,((8U == (0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+540,((0xcU == (0x3cU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+541,((0x10U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+542,((0x14U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+543,((0x18U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+544,((0x1cU == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+545,((0x20U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+546,((0x24U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+547,((0x28U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+548,((0x2cU == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+549,((0x30U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+550,((0x34U == (0x3cU 
                                             & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+551,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err));
        tracep->fullBit(oldp+552,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T)))));
        tracep->fullBit(oldp+553,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack));
        tracep->fullBit(oldp+554,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
                                   & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                      | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
        tracep->fullBit(oldp+555,((4U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+556,((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+557,((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+558,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                   | (0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
        tracep->fullBit(oldp+559,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                   & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
        tracep->fullBit(oldp+560,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                   & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                      | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                         & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
        tracep->fullBit(oldp+561,((1U & (~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T)))));
        tracep->fullBit(oldp+562,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__error));
        tracep->fullBit(oldp+563,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack));
        tracep->fullBit(oldp+564,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__a_ack) 
                                   & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                      | (1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
        tracep->fullBit(oldp+565,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                   | (0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
        tracep->fullBit(oldp+566,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                   & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
        tracep->fullBit(oldp+567,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                   & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                      | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                         & (0xfU == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
        tracep->fullBit(oldp+568,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__memory_stage_io_data_req_o) 
                                   & (2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_dev_sel)))));
        tracep->fullBit(oldp+569,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending));
        tracep->fullBit(oldp+570,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__csb0_reg));
        tracep->fullBit(oldp+571,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__web0_reg));
        tracep->fullCData(oldp+572,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__wmask0_reg),4);
        tracep->fullCData(oldp+573,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__addr0_reg),8);
        tracep->fullIData(oldp+574,(vlTOPp->Shaheen_top_openram_cv__DOT__iccm__DOT__din0_reg),32);
        tracep->fullBit(oldp+575,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__csb0_reg));
        tracep->fullBit(oldp+576,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__web0_reg));
        tracep->fullCData(oldp+577,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__wmask0_reg),4);
        tracep->fullCData(oldp+578,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__addr0_reg),8);
        tracep->fullIData(oldp+579,(vlTOPp->Shaheen_top_openram_cv__DOT__dccm__DOT__din0_reg),32);
        tracep->fullCData(oldp+580,((0xffU & ((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                               ? (0x3fU 
                                                  & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U))
                                               : ((2U 
                                                   == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                                   ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg
                                                   : 
                                                  (0x3fU 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                      >> 2U)))))),8);
        tracep->fullIData(oldp+581,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                      ? (0x3fU & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                  >> 2U))
                                      : ((2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__state_reg))
                                          ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__rx_addr_reg
                                          : (0x3fU 
                                             & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                >> 2U))))),32);
        tracep->fullIData(oldp+582,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                                      ? ((0U == (3U 
                                                 & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                          ? ((((0x80U 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                ? 0xffffffU
                                                : 0U) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                                          : ((1U == 
                                              (3U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (((
                                                   (0x8000U 
                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 8U)))
                                              : ((2U 
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
        tracep->fullIData(oldp+583,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                      ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? ((1U 
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
        tracep->fullBit(oldp+584,(((0U == (7U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU)))
                                    ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                       == vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                    : ((1U == (7U & 
                                               (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xcU)))
                                        ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                           != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                        : ((4U == (7U 
                                                   & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0xcU)))
                                            ? VL_LTS_III(1,32,32, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0xcU)))
                                                ? VL_GTES_III(1,32,32, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                : (
                                                   (6U 
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
        tracep->fullIData(oldp+585,(((0U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                      : ((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                          ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                          : ((2U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                              ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                              : ((3U 
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
        tracep->fullCData(oldp+586,((((0x20U & (((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                 & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                     ? 
                                                    (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                     >> 0x15U)
                                                     : 
                                                    ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                     >> 5U))) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
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
                                        | (1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                                  ? 
                                                 ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                  >> 1U)
                                                  : 
                                                 ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                  & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                      ? 
                                                     (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                      >> 3U)
                                                      : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))))),6);
        tracep->fullIData(oldp+587,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
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
                                              : 0U)
                                          : 0U) : (0xfffffffeU 
                                                   & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))),32);
        tracep->fullIData(oldp+588,(((1U == (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372)),32);
        tracep->fullCData(oldp+589,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                          ? 0U : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                                   ? 0x2bU
                                                   : 0U))
                                      : ((0x20U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                   >> 0x1aU)) 
                                         | (0x1fU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)))),6);
        tracep->fullIData(oldp+590,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? 0U : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
        tracep->fullIData(oldp+591,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_io_stall_core_i)
                                      ? (1U | (0x7fffff80U 
                                               & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                  >> 1U)))
                                      : 1U)),32);
        tracep->fullIData(oldp+592,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? (((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                          & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31))
                                          ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_14)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? ((1U 
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
        tracep->fullBit(oldp+593,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                         | ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                             : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                 ? 
                                                (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                 >> 1U)))))));
        tracep->fullBit(oldp+594,((1U & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                          ? ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                             >> 1U)
                                          : ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                             & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                 ? 
                                                (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 3U)
                                                 : (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))));
        tracep->fullBit(oldp+595,((1U & ((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                         & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                             ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                >> 0x15U)
                                             : ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                >> 5U))))));
        tracep->fullSData(oldp+596,((((~ (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
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
        tracep->fullIData(oldp+597,(((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                      : (IData)((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                 >> 0x20U)))),32);
        tracep->fullIData(oldp+598,(((1U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val)),32);
        tracep->fullQData(oldp+599,((((QData)((IData)(
                                                      ((1U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                                        : (IData)(
                                                                  (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((1U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val))))),64);
        tracep->fullIData(oldp+601,(((4U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                      : (IData)((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                 >> 0x20U)))),32);
        tracep->fullIData(oldp+602,(((4U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val)),32);
        tracep->fullQData(oldp+603,((((QData)((IData)(
                                                      ((4U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                                        : (IData)(
                                                                  (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((4U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp99, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullIData(oldp+605,(((8U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                      : __Vtemp99[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp100, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullIData(oldp+606,(((8U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp100[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp101, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp102, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullQData(oldp+607,((((QData)((IData)(
                                                      ((8U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                                        : 
                                                       __Vtemp101[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((8U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp102[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp103, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullIData(oldp+609,(((0x10U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                      : __Vtemp103[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp104, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullIData(oldp+610,(((0x10U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp104[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp105, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp106, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullQData(oldp+611,((((QData)((IData)(
                                                      ((0x10U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                                        : 
                                                       __Vtemp105[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x10U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp106[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp107, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullIData(oldp+613,(((0x20U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                      : __Vtemp107[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp108, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullIData(oldp+614,(((0x20U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp108[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp109, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp110, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullQData(oldp+615,((((QData)((IData)(
                                                      ((0x20U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                                        : 
                                                       __Vtemp109[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x20U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp110[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp111, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullIData(oldp+617,(((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                      : __Vtemp111[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp112, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullIData(oldp+618,(((0x40U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp112[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp113, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp114, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullQData(oldp+619,((((QData)((IData)(
                                                      ((0x40U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                                        : 
                                                       __Vtemp113[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x40U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp114[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp115, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullIData(oldp+621,(((0x80U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                      : __Vtemp115[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp116, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullIData(oldp+622,(((0x80U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp116[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp117, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp118, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullQData(oldp+623,((((QData)((IData)(
                                                      ((0x80U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                                        : 
                                                       __Vtemp117[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x80U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp118[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp119, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullIData(oldp+625,(((0x100U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                      : __Vtemp119[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp120, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullIData(oldp+626,(((0x100U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp120[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp121, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp122, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullQData(oldp+627,((((QData)((IData)(
                                                      ((0x100U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                                        : 
                                                       __Vtemp121[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x100U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp122[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp123, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullIData(oldp+629,(((0x200U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                      : __Vtemp123[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp124, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullIData(oldp+630,(((0x200U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp124[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp125, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp126, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullQData(oldp+631,((((QData)((IData)(
                                                      ((0x200U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                                        : 
                                                       __Vtemp125[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x200U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp126[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp127, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullIData(oldp+633,(((0x400U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                      : __Vtemp127[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp128, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullIData(oldp+634,(((0x400U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp128[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp129, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp130, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullQData(oldp+635,((((QData)((IData)(
                                                      ((0x400U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                                        : 
                                                       __Vtemp129[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x400U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp130[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp131, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullIData(oldp+637,(((0x800U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                      : __Vtemp131[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp132, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullIData(oldp+638,(((0x800U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp132[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp133, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp134, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullQData(oldp+639,((((QData)((IData)(
                                                      ((0x800U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                                        : 
                                                       __Vtemp133[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x800U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp134[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))))),64);
        VL_EXTEND_WQ(80,40, __Vtemp135, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullIData(oldp+641,(((0x1000U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                      : __Vtemp135[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp136, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullIData(oldp+642,(((0x1000U & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp136[0U]
                                      : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp137, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp138, vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullQData(oldp+643,((((QData)((IData)(
                                                      ((0x1000U 
                                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                                        : 
                                                       __Vtemp137[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x1000U 
                                                                    & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp138[0U]
                                                                    : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))))),64);
        tracep->fullIData(oldp+645,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data),32);
        tracep->fullIData(oldp+646,((0x3fffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
        tracep->fullIData(oldp+647,((0x3ffcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
        tracep->fullCData(oldp+648,((0xfcU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in)),8);
        tracep->fullIData(oldp+649,((0xfffffffeU & (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))),32);
        tracep->fullIData(oldp+650,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__fetch__DOT__pc_io_in),32);
        tracep->fullIData(oldp+651,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1),32);
        tracep->fullIData(oldp+652,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2),32);
        tracep->fullIData(oldp+653,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata),32);
        tracep->fullIData(oldp+654,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum),32);
        tracep->fullCData(oldp+655,(((4U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 9U)) 
                                     | ((2U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 6U)) 
                                        | (1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 3U))))),3);
        tracep->fullIData(oldp+656,((0xfffffffeU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
        tracep->fullIData(oldp+657,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val),32);
        tracep->fullIData(oldp+658,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val),32);
        tracep->fullIData(oldp+659,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val),32);
        tracep->fullIData(oldp+660,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val),32);
        tracep->fullIData(oldp+661,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val),32);
        tracep->fullIData(oldp+662,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val),32);
        tracep->fullIData(oldp+663,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val),32);
        tracep->fullIData(oldp+664,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val),32);
        tracep->fullIData(oldp+665,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val),32);
        tracep->fullIData(oldp+666,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val),32);
        tracep->fullIData(oldp+667,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val),32);
        tracep->fullIData(oldp+668,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val),32);
        tracep->fullIData(oldp+669,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int),32);
        tracep->fullCData(oldp+670,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368),2);
        tracep->fullBit(oldp+671,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 0xbU))));
        tracep->fullBit(oldp+672,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 7U))));
        tracep->fullBit(oldp+673,((1U & (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 3U))));
        tracep->fullBit(oldp+674,(((3U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)) 
                                   & (0U != (IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)))));
        tracep->fullCData(oldp+675,((0xffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),8);
        tracep->fullSData(oldp+676,((0xffffU & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),16);
        tracep->fullBit(oldp+677,(vlTOPp->clock));
        tracep->fullBit(oldp+678,(vlTOPp->reset));
        tracep->fullBit(oldp+679,(vlTOPp->io_rx_i));
        tracep->fullSData(oldp+680,(vlTOPp->io_CLK_PER_BIT),16);
        tracep->fullIData(oldp+681,(vlTOPp->io_gpio_i),30);
        tracep->fullIData(oldp+682,(vlTOPp->io_gpio_o),30);
        tracep->fullIData(oldp+683,(vlTOPp->io_gpio_en_o),30);
        tracep->fullIData(oldp+684,(vlTOPp->io_gpio_i),32);
        tracep->fullIData(oldp+685,(vlTOPp->io_CLK_PER_BIT),32);
        tracep->fullIData(oldp+686,((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                     | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)),32);
        tracep->fullBit(oldp+687,((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event)));
        tracep->fullIData(oldp+688,(((((((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q) 
                                         & vlTOPp->io_gpio_i) 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg) 
                                       | ((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q 
                                           & (~ vlTOPp->io_gpio_i)) 
                                          & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)) 
                                      | (vlTOPp->io_gpio_i 
                                         & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg)) 
                                     | ((~ vlTOPp->io_gpio_i) 
                                        & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg))),32);
        tracep->fullIData(oldp+689,((((~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q) 
                                      & vlTOPp->io_gpio_i) 
                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg)),32);
        tracep->fullIData(oldp+690,(((vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__data_in_q 
                                      & (~ vlTOPp->io_gpio_i)) 
                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)),32);
        tracep->fullIData(oldp+691,((vlTOPp->io_gpio_i 
                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg)),32);
        tracep->fullIData(oldp+692,(((~ vlTOPp->io_gpio_i) 
                                     & vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg)),32);
        tracep->fullBit(oldp+693,(((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we) 
                                   | (0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event))));
        tracep->fullIData(oldp+694,((((0U != vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
                                       ? (vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                          | vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
                                       : vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
                                     & ((IData)(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
                                         ? (~ vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__core_loadStore_tl_host_io_wdata_i)
                                         : 0xffffffffU))),32);
        tracep->fullIData(oldp+695,(vlTOPp->Shaheen_top_openram_cv__DOT__shaheenTop__DOT__gpio__DOT__intr_hw__DOT__new_event),32);
        tracep->fullBit(oldp+696,(1U));
        tracep->fullBit(oldp+697,(0U));
        tracep->fullIData(oldp+698,(0U),32);
        tracep->fullCData(oldp+699,(0xfU),4);
        tracep->fullCData(oldp+700,(4U),3);
        tracep->fullSData(oldp+701,(0U),16);
        tracep->fullIData(oldp+702,(4U),32);
        tracep->fullIData(oldp+703,(0x20U),32);
        tracep->fullIData(oldp+704,(8U),32);
        tracep->fullIData(oldp+705,(0x100U),32);
        tracep->fullIData(oldp+706,(3U),32);
    }
}
