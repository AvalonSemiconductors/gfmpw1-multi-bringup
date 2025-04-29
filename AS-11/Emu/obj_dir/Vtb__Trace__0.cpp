// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgQData(oldp+1,(vlSelfRef.tb__DOT__io_in),33);
        bufp->chgSData(oldp+3,((0xffffU & (IData)(vlSelfRef.tb__DOT__io_in))),16);
        bufp->chgSData(oldp+4,((0xffffU & ((0x3fU == 
                                            (0x7fU 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 9U)))
                                            ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                               [7U] 
                                               - (0x7eU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     << 1U)))
                                            : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                               [7U] 
                                               + ((
                                                   (((0x8000U 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         << 8U)) 
                                                     | (0x4000U 
                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                           << 7U))) 
                                                    | ((0x2000U 
                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                           << 6U)) 
                                                       | (0x1000U 
                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                             << 5U)))) 
                                                   | ((0x800U 
                                                       & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                          << 4U)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                             << 3U)) 
                                                         | (0x200U 
                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                               << 2U))))) 
                                                  | (0x1feU 
                                                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                        << 1U))))))),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                               [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                       >> 6U))]),16);
        bufp->chgBit(oldp+6,((IData)((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                       >> 0xfU) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)))));
        bufp->chgBit(oldp+7,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2) 
                              ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                 >> 0xfU))));
        bufp->chgBit(oldp+8,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                               >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+9,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                              | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+10,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xaU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+11,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+12,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+13,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+14,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+15,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xbU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+16,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+17,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+18,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+19,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xcU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+20,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+21,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+22,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      >> 9U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+23,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+24,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xdU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+25,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+26,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+27,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+28,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xeU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+29,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+30,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+31,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+32,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                     | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+33,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xfU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+34,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+35,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+36,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 9U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 1U)))));
        bufp->chgBit(oldp+37,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+38,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+39,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+40,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+41,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+42,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+43,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+44,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+45,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+46,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+47,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+48,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+49,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+50,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+51,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      >> 0xaU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+52,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+53,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+54,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+55,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+56,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+57,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+58,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+59,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+60,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+61,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                     | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+62,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+63,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+64,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+65,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+66,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+67,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+68,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+69,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+70,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+71,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xaU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 1U)))));
        bufp->chgBit(oldp+72,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+73,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+74,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+75,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+76,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+77,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+78,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+79,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+80,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+81,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+82,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xaU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+83,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+84,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+85,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+86,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+87,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xbU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+88,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+89,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+90,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+91,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xcU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+92,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+93,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+94,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+95,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      >> 0xbU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+96,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xdU) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                     ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+97,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+98,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+99,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                               | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                   >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+100,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+101,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+102,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))));
        bufp->chgBit(oldp+103,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)))));
        bufp->chgBit(oldp+104,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+105,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xbU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+106,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))));
        bufp->chgBit(oldp+107,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+108,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+109,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+110,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+111,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+112,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+113,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+114,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+115,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+116,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+117,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+118,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+119,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+120,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+121,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+122,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+123,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+124,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xcU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+125,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+126,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+127,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+128,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+129,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+130,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+131,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+132,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+133,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+134,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xcU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+135,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+136,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+137,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+138,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+139,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+140,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+141,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+142,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+143,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+144,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+145,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+146,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+147,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+148,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+149,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+150,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+151,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+152,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+153,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+154,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xaU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+155,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+156,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+157,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+158,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+159,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+160,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+161,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+162,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+163,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+164,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+165,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+166,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+167,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+168,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xdU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+169,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+170,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+171,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+172,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+173,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+174,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))));
        bufp->chgBit(oldp+175,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)))));
        bufp->chgBit(oldp+176,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+177,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))));
        bufp->chgBit(oldp+178,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xdU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+179,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+180,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+182,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 1U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+183,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+184,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 2U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+185,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 3U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+186,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xeU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+187,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 4U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+188,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 5U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+189,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 6U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+190,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xeU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+191,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 7U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+192,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 8U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+193,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+194,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 9U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+195,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xaU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+196,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xbU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+197,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+198,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xcU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+199,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xdU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+200,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xfU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+201,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 0xeU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+202,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+203,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 0xfU) 
                                         & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+204,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+205,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+206,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+207,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+208,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+209,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+210,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+211,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+212,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+213,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+214,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+215,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+216,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                      & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+217,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+218,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+219,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+220,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+221,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+222,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+223,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+224,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+225,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+226,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+227,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+228,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+229,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+230,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+231,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+232,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+233,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+234,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+235,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+236,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+237,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+238,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+239,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+240,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+241,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+242,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+243,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+244,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+245,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+246,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+247,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+248,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+249,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+250,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+251,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xaU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+252,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+253,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+254,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+255,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+256,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+257,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+258,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+259,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 1U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+260,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+261,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+262,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+263,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+264,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+265,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+266,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+267,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+268,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+269,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 1U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+270,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+271,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))));
        bufp->chgBit(oldp+272,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)))));
        bufp->chgBit(oldp+273,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+274,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))));
        bufp->chgBit(oldp+275,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgBit(oldp+276,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+277,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+278,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+279,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+280,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+281,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+282,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+283,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+284,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+285,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+286,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+287,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+288,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 2U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+289,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+290,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+291,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+292,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+293,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+294,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+295,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+296,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+297,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 2U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+298,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+299,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+300,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+301,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+302,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+303,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+304,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+305,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+306,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+307,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+308,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+309,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+310,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+311,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+312,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+313,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+314,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+315,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+316,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+317,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+318,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+319,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+320,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+321,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+322,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+323,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xaU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+324,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+325,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+326,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+327,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+328,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+329,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+330,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+331,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+332,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 3U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+333,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+334,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+335,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+336,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+337,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+338,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+339,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+340,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+341,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 3U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+342,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+343,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))));
        bufp->chgBit(oldp+344,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)))));
        bufp->chgBit(oldp+345,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+346,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))));
        bufp->chgBit(oldp+347,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U)))));
        bufp->chgBit(oldp+348,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+349,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+350,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+351,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+352,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+353,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+354,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+355,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+356,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+357,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+358,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+359,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+360,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 4U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+361,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+362,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+363,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+364,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+365,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+366,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+367,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+368,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+369,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+370,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 4U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+371,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+372,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+373,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+374,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+375,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+376,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+377,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+378,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+379,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+380,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+381,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+382,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+383,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+384,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+385,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+386,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+387,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+388,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+389,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+390,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+391,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+392,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+393,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+394,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xaU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+395,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+396,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+397,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+398,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+399,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+400,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+401,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+402,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+403,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+404,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 5U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+405,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+406,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+407,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+408,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+409,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+410,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+411,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+412,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+413,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+414,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 5U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+415,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))));
        bufp->chgBit(oldp+416,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)))));
        bufp->chgBit(oldp+417,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+418,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))));
        bufp->chgBit(oldp+419,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U)))));
        bufp->chgBit(oldp+420,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+421,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+422,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+423,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+424,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+425,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+426,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+427,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+428,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+429,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+430,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+431,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+432,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+433,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 6U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+434,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+435,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+436,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+437,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+438,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+439,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+440,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+441,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+442,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+443,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 6U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+444,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+445,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+446,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+447,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+448,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+449,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+450,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+451,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+452,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+453,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+454,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+455,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+456,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+457,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+458,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+459,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+460,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+461,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+462,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+463,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+464,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+465,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+466,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xaU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+467,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+468,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+469,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+470,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+471,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xbU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+472,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+473,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+474,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+475,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xcU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+476,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+477,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 7U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+478,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+479,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+480,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+481,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+482,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+483,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+484,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+485,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+486,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))));
        bufp->chgBit(oldp+487,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 7U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+488,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)))));
        bufp->chgBit(oldp+489,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 0xfU) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+490,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))));
        bufp->chgBit(oldp+491,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U)))));
        bufp->chgBit(oldp+492,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+493,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+494,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+495,((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+496,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))));
        bufp->chgBit(oldp+497,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+498,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+499,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+500,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+501,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+502,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+503,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+504,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+505,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+506,((1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                       >> 8U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+507,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+508,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+509,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+510,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+511,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+512,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+513,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+514,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+515,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+516,((1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                      | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                          >> 8U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+517,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+518,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+519,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+520,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+521,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+522,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+523,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+524,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+525,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+526,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgBit(oldp+527,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+528,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+529,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+530,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+531,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+532,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))));
        bufp->chgBit(oldp+533,((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                  >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)))));
        bufp->chgBit(oldp+534,((1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                                       | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                           >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                                      ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+535,(((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                 >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))));
        bufp->chgBit(oldp+536,((1U & (IData)((vlSelfRef.tb__DOT__io_in 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+537,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
                                & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy)) 
                                   & (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))))));
        bufp->chgBit(oldp+538,((1U & (IData)((vlSelfRef.tb__DOT__io_in 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+539,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
                                & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy)) 
                                   & (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))))));
        bufp->chgBit(oldp+540,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__int_ack_num) 
                                    >> 3U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
                                               & (0x10U 
                                                  == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgCData(oldp+541,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr),8);
        bufp->chgBit(oldp+542,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen));
        bufp->chgSData(oldp+543,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction),16);
        bufp->chgBit(oldp+544,((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+545,((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+546,((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+547,((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+548,((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+549,((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+550,((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+551,((0xaU == (0xfffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 4U)))));
        bufp->chgBit(oldp+552,((0xbU == (0xfffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 4U)))));
        bufp->chgBit(oldp+553,((0x89U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 8U)))));
        bufp->chgBit(oldp+554,((0x88U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 8U)))));
        bufp->chgBit(oldp+555,((0x34U == (0x3ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+556,((0x10U == (0x1fffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 3U)))));
        bufp->chgBit(oldp+557,((4U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 9U)))));
        bufp->chgBit(oldp+558,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH));
        bufp->chgBit(oldp+559,((0x3fU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgCData(oldp+560,((7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                        >> 6U))),3);
        bufp->chgSData(oldp+561,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__SOB_reg_m1),16);
        bufp->chgCData(oldp+562,((7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))),3);
        bufp->chgBit(oldp+563,((1U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+564,((2U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+565,((3U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+566,((4U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+567,((5U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+568,((6U == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+569,((0xeU == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 >> 0xcU)))));
        bufp->chgBit(oldp+570,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op));
        bufp->chgBit(oldp+571,((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 >> 6U)))));
        bufp->chgBit(oldp+572,((3U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 >> 6U)))));
        bufp->chgBit(oldp+573,((0x28U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+574,((0x29U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+575,((0x2aU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+576,((0x2bU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+577,((0x2cU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+578,((0x2dU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+579,((0x2eU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+580,((0x2fU == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+581,((0x30U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+582,((0x31U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+583,((0x32U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+584,((0x33U == (0x1ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+585,((0x234U == (0x3ffU & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U)))));
        bufp->chgBit(oldp+586,((0x37U == (0x3ffU & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U)))));
        bufp->chgBit(oldp+587,((0x237U == (0x3ffU & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U)))));
        bufp->chgBit(oldp+588,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op));
        bufp->chgBit(oldp+589,((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+590,((0x39U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+591,((0x3aU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+592,((0x3bU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+593,((0x3cU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+594,((0x3dU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+595,((0x3eU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))));
        bufp->chgBit(oldp+596,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special));
        bufp->chgBit(oldp+597,((0xf003U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+598,((0xf004U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+599,((0xf009U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+600,((0xf002U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+601,((0xf00aU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
        bufp->chgBit(oldp+602,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr));
        bufp->chgCData(oldp+603,(((4U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                         >> 0xdU)) 
                                  | (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 9U)))),3);
        bufp->chgBit(oldp+604,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__should_branch));
        bufp->chgCData(oldp+605,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__collission),5);
        bufp->chgCData(oldp+606,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode),3);
        bufp->chgCData(oldp+607,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg),3);
        bufp->chgSData(oldp+608,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg),16);
        bufp->chgSData(oldp+609,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__incr_reg),16);
        bufp->chgCData(oldp+610,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode),3);
        bufp->chgCData(oldp+611,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg),3);
        bufp->chgSData(oldp+612,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_decr_reg),16);
        bufp->chgSData(oldp+613,((0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                                              & ((3U 
                                                  != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                                                 & (7U 
                                                    != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg))))
                                              ? ((IData)(1U) 
                                                 + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31)
                                              : ((IData)(2U) 
                                                 + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31)))),16);
        bufp->chgSData(oldp+614,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR),16);
        bufp->chgBit(oldp+615,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2));
        bufp->chgSData(oldp+616,((0xffffU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)),16);
        bufp->chgIData(oldp+617,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res),32);
        bufp->chgIData(oldp+618,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in),32);
        bufp->chgIData(oldp+619,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)
                                   ? ((IData)(1U) + 
                                      (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in))
                                   : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in)),32);
        bufp->chgIData(oldp+620,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s),32);
        bufp->chgSData(oldp+621,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res),16);
        bufp->chgSData(oldp+622,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res),16);
        bufp->chgIData(oldp+623,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res),32);
        bufp->chgIData(oldp+624,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res),32);
        bufp->chgSData(oldp+625,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result),16);
        bufp->chgCData(oldp+626,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags),4);
        bufp->chgCData(oldp+627,((2U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        << 1U))),2);
        bufp->chgCData(oldp+628,((3U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)),2);
        bufp->chgCData(oldp+629,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 9U))),2);
        bufp->chgCData(oldp+630,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+631,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+632,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+633,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+634,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+635,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+636,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 1U))),2);
        bufp->chgCData(oldp+637,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 2U))),2);
        bufp->chgCData(oldp+638,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 3U))),2);
        bufp->chgCData(oldp+639,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 4U))),2);
        bufp->chgCData(oldp+640,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 5U))),2);
        bufp->chgCData(oldp+641,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 6U))),2);
        bufp->chgCData(oldp+642,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 7U))),2);
        bufp->chgCData(oldp+643,((3U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                        >> 8U))),2);
        bufp->chgIData(oldp+644,((0x1fffeU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                              << 1U))),18);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+645,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted) 
                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting))));
        bufp->chgBit(oldp+646,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK));
        bufp->chgBit(oldp+647,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__DO));
        bufp->chgBit(oldp+648,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX));
        bufp->chgCData(oldp+649,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA),7);
        bufp->chgCData(oldp+650,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA))),7);
        bufp->chgBit(oldp+651,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA) 
                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)))));
        bufp->chgBit(oldp+652,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                      >> 5U))));
        bufp->chgBit(oldp+653,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                      >> 6U))));
        bufp->chgCData(oldp+654,((3U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+655,((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6)))));
        bufp->chgSData(oldp+656,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1),16);
        bufp->chgSData(oldp+657,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff),16);
        bufp->chgCData(oldp+658,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack),8);
        bufp->chgCData(oldp+659,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs),8);
        bufp->chgCData(oldp+660,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA),7);
        bufp->chgCData(oldp+661,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA_ints),5);
        bufp->chgCData(oldp+662,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints),5);
        bufp->chgSData(oldp+663,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0),16);
        bufp->chgSData(oldp+664,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1),16);
        bufp->chgSData(oldp+665,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre),16);
        bufp->chgSData(oldp+666,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre),16);
        bufp->chgSData(oldp+667,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr),16);
        bufp->chgSData(oldp+668,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr),16);
        bufp->chgSData(oldp+669,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_top),16);
        bufp->chgSData(oldp+670,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_top),16);
        bufp->chgCData(oldp+671,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens),2);
        bufp->chgBit(oldp+672,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_int_en));
        bufp->chgCData(oldp+673,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_div),8);
        bufp->chgCData(oldp+674,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_dout),8);
        bufp->chgBit(oldp+675,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy));
        bufp->chgSData(oldp+676,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_div),16);
        bufp->chgCData(oldp+677,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_dout),8);
        bufp->chgBit(oldp+678,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy));
        bufp->chgBit(oldp+679,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_has_byte));
        bufp->chgCData(oldp+680,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__highest_int_req),3);
        bufp->chgCData(oldp+681,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__int_ack_num),8);
        bufp->chgSData(oldp+682,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[0]),16);
        bufp->chgSData(oldp+683,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[1]),16);
        bufp->chgSData(oldp+684,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[2]),16);
        bufp->chgSData(oldp+685,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[3]),16);
        bufp->chgSData(oldp+686,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[4]),16);
        bufp->chgSData(oldp+687,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[5]),16);
        bufp->chgSData(oldp+688,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6]),16);
        bufp->chgSData(oldp+689,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7]),16);
        bufp->chgCData(oldp+690,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW),8);
        bufp->chgCData(oldp+691,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle),5);
        bufp->chgCData(oldp+692,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode),3);
        bufp->chgBit(oldp+693,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode));
        bufp->chgBit(oldp+694,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op));
        bufp->chgSData(oldp+695,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ),16);
        bufp->chgSData(oldp+696,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io),16);
        bufp->chgCData(oldp+697,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup),2);
        bufp->chgBit(oldp+698,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting));
        bufp->chgBit(oldp+699,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted));
        bufp->chgSData(oldp+700,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ),16);
        bufp->chgBit(oldp+701,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap));
        bufp->chgSData(oldp+702,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__IVB),11);
        bufp->chgCData(oldp+703,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__handling_int),3);
        bufp->chgSData(oldp+704,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__vector_addr),16);
        bufp->chgSData(oldp+705,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__insin),16);
        bufp->chgBit(oldp+706,(((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                | ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                   | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))))));
        bufp->chgBit(oldp+707,((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))));
        bufp->chgSData(oldp+708,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr),16);
        bufp->chgSData(oldp+709,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr),16);
        bufp->chgSData(oldp+710,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index),16);
        bufp->chgSData(oldp+711,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index),16);
        bufp->chgBit(oldp+712,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg));
        bufp->chgCData(oldp+713,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ),8);
        bufp->chgBit(oldp+714,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap));
        bufp->chgSData(oldp+715,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2),16);
        bufp->chgSData(oldp+716,((0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))),16);
        bufp->chgSData(oldp+717,((0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             - (IData)(1U)))),16);
        bufp->chgSData(oldp+718,((0xffffU & ((IData)(1U) 
                                             + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))),16);
        bufp->chgSData(oldp+719,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc),16);
        bufp->chgSData(oldp+720,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc),16);
        bufp->chgIData(oldp+721,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp),17);
        bufp->chgIData(oldp+722,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add),17);
        bufp->chgIData(oldp+723,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub),17);
        bufp->chgSData(oldp+724,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND),16);
        bufp->chgSData(oldp+725,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC),16);
        bufp->chgSData(oldp+726,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS),16);
        bufp->chgBit(oldp+727,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      >> 0xfU))));
        bufp->chgSData(oldp+728,((0xffffU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)),16);
        bufp->chgIData(oldp+729,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered),32);
        bufp->chgQData(oldp+730,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter),64);
        bufp->chgIData(oldp+732,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res),32);
        bufp->chgCData(oldp+733,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter),5);
        bufp->chgCData(oldp+734,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay),2);
        bufp->chgCData(oldp+735,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count),6);
        bufp->chgBit(oldp+736,((1U & (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                         >> 5U)))));
        bufp->chgBit(oldp+737,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      >> 5U))));
        bufp->chgBit(oldp+738,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+739,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+740,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+741,((IData)((0x2000U == 
                                        (0x3000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+742,((IData)((0x1000U == 
                                        (0x3000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+743,((IData)((0x1800U == 
                                        (0x3800U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+744,((IData)((0x2000U == 
                                        (0x3800U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+745,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081));
        bufp->chgBit(oldp+746,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084));
        bufp->chgBit(oldp+747,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+748,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+749,((IData)((0x8000U == 
                                        (0xc000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+750,((IData)((0x4000U == 
                                        (0xc000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+751,((IData)((0x6000U == 
                                        (0xe000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+752,((IData)((0x8000U == 
                                        (0xe000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+753,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259));
        bufp->chgBit(oldp+754,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262));
        bufp->chgBit(oldp+755,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413));
        bufp->chgBit(oldp+756,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                      >> 0xfU))));
        bufp->chgCData(oldp+757,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598),2);
        bufp->chgCData(oldp+758,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602),2);
        bufp->chgCData(oldp+759,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606),3);
        bufp->chgCData(oldp+760,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_1)))),2);
        bufp->chgCData(oldp+761,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613),2);
        bufp->chgCData(oldp+762,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617),3);
        bufp->chgCData(oldp+763,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_1)))),2);
        bufp->chgCData(oldp+764,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624),2);
        bufp->chgCData(oldp+765,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628),3);
        bufp->chgCData(oldp+766,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_1)))),2);
        bufp->chgCData(oldp+767,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635),3);
        bufp->chgCData(oldp+768,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_4)))),2);
        bufp->chgCData(oldp+769,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642),2);
        bufp->chgCData(oldp+770,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646),3);
        bufp->chgCData(oldp+771,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_1)))),2);
        bufp->chgCData(oldp+772,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653),3);
        bufp->chgCData(oldp+773,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_4)))),2);
        bufp->chgCData(oldp+774,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660),2);
        bufp->chgCData(oldp+775,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664),3);
        bufp->chgCData(oldp+776,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_1)))),2);
        bufp->chgCData(oldp+777,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671),3);
        bufp->chgCData(oldp+778,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_4)))),2);
        bufp->chgCData(oldp+779,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678),3);
        bufp->chgCData(oldp+780,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_6) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_7)))),2);
        bufp->chgCData(oldp+781,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685),3);
        bufp->chgCData(oldp+782,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_1)))),2);
        bufp->chgCData(oldp+783,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692),3);
        bufp->chgCData(oldp+784,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_4)))),2);
        bufp->chgCData(oldp+785,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699),3);
        bufp->chgBit(oldp+786,((1U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
        bufp->chgCData(oldp+787,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_6) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_7)))),2);
        bufp->chgCData(oldp+788,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706),3);
        bufp->chgCData(oldp+789,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_1)))),2);
        bufp->chgCData(oldp+790,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713),3);
        bufp->chgCData(oldp+791,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_4)))),2);
        bufp->chgBit(oldp+792,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U)))));
        bufp->chgCData(oldp+793,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720),3);
        bufp->chgCData(oldp+794,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_6) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_7)))),2);
        bufp->chgCData(oldp+795,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727),3);
        bufp->chgCData(oldp+796,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_1)))),2);
        bufp->chgCData(oldp+797,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734),3);
        bufp->chgCData(oldp+798,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_4)))),2);
        bufp->chgCData(oldp+799,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741),3);
        bufp->chgCData(oldp+800,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_6) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_7)))),2);
        bufp->chgCData(oldp+801,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748),3);
        bufp->chgCData(oldp+802,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_1)))),2);
        bufp->chgCData(oldp+803,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755),3);
        bufp->chgCData(oldp+804,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_4)))),2);
        bufp->chgCData(oldp+805,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762),2);
        bufp->chgCData(oldp+806,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766),3);
        bufp->chgCData(oldp+807,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_1)))),2);
        bufp->chgBit(oldp+808,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 2U)))));
        bufp->chgCData(oldp+809,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773),3);
        bufp->chgCData(oldp+810,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_4)))),2);
        bufp->chgCData(oldp+811,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780),3);
        bufp->chgCData(oldp+812,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_1)))),2);
        bufp->chgCData(oldp+813,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787),2);
        bufp->chgBit(oldp+814,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U)))));
        bufp->chgCData(oldp+815,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791),3);
        bufp->chgCData(oldp+816,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_1)))),2);
        bufp->chgCData(oldp+817,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1)))),2);
        bufp->chgCData(oldp+818,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802),2);
        bufp->chgCData(oldp+819,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806),2);
        bufp->chgCData(oldp+820,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810),3);
        bufp->chgCData(oldp+821,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_1)))),2);
        bufp->chgCData(oldp+822,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817),2);
        bufp->chgBit(oldp+823,((IData)((8U == (0xcU 
                                               & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgCData(oldp+824,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821),3);
        bufp->chgCData(oldp+825,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_1)))),2);
        bufp->chgCData(oldp+826,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828),2);
        bufp->chgCData(oldp+827,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832),3);
        bufp->chgCData(oldp+828,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_3)))),2);
        bufp->chgCData(oldp+829,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839),3);
        bufp->chgCData(oldp+830,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_5) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_6)))),2);
        bufp->chgCData(oldp+831,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846),3);
        bufp->chgCData(oldp+832,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_3)))),2);
        bufp->chgBit(oldp+833,((IData)((4U == (0xcU 
                                               & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgCData(oldp+834,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853),3);
        bufp->chgCData(oldp+835,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_5) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598), 1U)))),2);
        bufp->chgCData(oldp+836,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860),3);
        bufp->chgCData(oldp+837,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_5) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_6)))),2);
        bufp->chgCData(oldp+838,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867),3);
        bufp->chgCData(oldp+839,((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602), 1U) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606))))),2);
        bufp->chgBit(oldp+840,((IData)((6U == (0xeU 
                                               & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgCData(oldp+841,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874),3);
        bufp->chgCData(oldp+842,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_5) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_6)))),2);
        bufp->chgCData(oldp+843,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881),3);
        bufp->chgCData(oldp+844,((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613), 1U) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617))))),2);
        bufp->chgCData(oldp+845,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888),3);
        bufp->chgCData(oldp+846,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_8) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617) 
                                                 >> 1U))))),2);
        bufp->chgBit(oldp+847,((IData)((8U == (0xeU 
                                               & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgCData(oldp+848,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895),3);
        bufp->chgCData(oldp+849,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635))))),2);
        bufp->chgCData(oldp+850,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902),3);
        bufp->chgCData(oldp+851,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+852,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909),3);
        bufp->chgBit(oldp+853,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191));
        bufp->chgCData(oldp+854,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653))))),2);
        bufp->chgCData(oldp+855,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916),3);
        bufp->chgCData(oldp+856,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+857,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923),3);
        bufp->chgCData(oldp+858,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671))))),2);
        bufp->chgCData(oldp+859,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930),3);
        bufp->chgCData(oldp+860,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+861,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937),3);
        bufp->chgCData(oldp+862,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692))))),2);
        bufp->chgBit(oldp+863,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194));
        bufp->chgCData(oldp+864,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944),3);
        bufp->chgCData(oldp+865,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+866,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951),3);
        bufp->chgCData(oldp+867,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713))))),2);
        bufp->chgCData(oldp+868,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958),3);
        bufp->chgCData(oldp+869,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+870,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965),3);
        bufp->chgCData(oldp+871,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734))))),2);
        bufp->chgCData(oldp+872,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972),3);
        bufp->chgCData(oldp+873,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+874,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979),3);
        bufp->chgCData(oldp+875,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755))))),2);
        bufp->chgCData(oldp+876,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986),3);
        bufp->chgCData(oldp+877,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_6) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+878,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993),3);
        bufp->chgCData(oldp+879,((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762), 1U) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766))))),2);
        bufp->chgCData(oldp+880,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000),3);
        bufp->chgCData(oldp+881,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_5) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_6)))),2);
        bufp->chgCData(oldp+882,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007),3);
        bufp->chgCData(oldp+883,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773) 
                                               >> 1U)) 
                                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780))))),2);
        bufp->chgCData(oldp+884,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014),3);
        bufp->chgCData(oldp+885,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_4)))),2);
        bufp->chgCData(oldp+886,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021),3);
        bufp->chgCData(oldp+887,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780) 
                                               >> 1U)) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787), 1U)))),2);
        bufp->chgCData(oldp+888,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028),3);
        bufp->chgCData(oldp+889,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_3)))),2);
        bufp->chgCData(oldp+890,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035),3);
        bufp->chgCData(oldp+891,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_5) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+892,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042),3);
        bufp->chgCData(oldp+893,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_1)))),2);
        bufp->chgCData(oldp+894,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049),3);
        bufp->chgCData(oldp+895,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_3) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_4)))),2);
        bufp->chgCData(oldp+896,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056),3);
        bufp->chgCData(oldp+897,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_1)))),2);
        bufp->chgCData(oldp+898,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063),2);
        bufp->chgCData(oldp+899,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067),3);
        bufp->chgCData(oldp+900,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_1)))),2);
        bufp->chgCData(oldp+901,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1)))),2);
        bufp->chgCData(oldp+902,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078),2);
        bufp->chgCData(oldp+903,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082),2);
        bufp->chgCData(oldp+904,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086),3);
        bufp->chgCData(oldp+905,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_3)))),2);
        bufp->chgCData(oldp+906,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093),3);
        bufp->chgCData(oldp+907,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_3)))),2);
        bufp->chgCData(oldp+908,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100),3);
        bufp->chgCData(oldp+909,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_5) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806), 1U)))),2);
        bufp->chgCData(oldp+910,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107),3);
        bufp->chgCData(oldp+911,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810) 
                                               >> 1U)) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817), 1U)))),2);
        bufp->chgCData(oldp+912,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114),3);
        bufp->chgCData(oldp+913,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821) 
                                               >> 1U)) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828), 1U)))),2);
        bufp->chgCData(oldp+914,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121),3);
        bufp->chgCData(oldp+915,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+916,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128),3);
        bufp->chgCData(oldp+917,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+918,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135),3);
        bufp->chgCData(oldp+919,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+920,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142),3);
        bufp->chgCData(oldp+921,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+922,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149),3);
        bufp->chgCData(oldp+923,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+924,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156),3);
        bufp->chgCData(oldp+925,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+926,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163),3);
        bufp->chgCData(oldp+927,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+928,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170),3);
        bufp->chgCData(oldp+929,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+930,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177),3);
        bufp->chgCData(oldp+931,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+932,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184),3);
        bufp->chgCData(oldp+933,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+934,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191),3);
        bufp->chgCData(oldp+935,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+936,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198),3);
        bufp->chgCData(oldp+937,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+938,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205),3);
        bufp->chgCData(oldp+939,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+940,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212),3);
        bufp->chgCData(oldp+941,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+942,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219),3);
        bufp->chgCData(oldp+943,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+944,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226),3);
        bufp->chgCData(oldp+945,((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042) 
                                               >> 1U)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+946,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233),3);
        bufp->chgCData(oldp+947,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_3) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+948,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240),3);
        bufp->chgCData(oldp+949,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_3)))),2);
        bufp->chgCData(oldp+950,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247),3);
        bufp->chgCData(oldp+951,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_0) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_1)))),2);
        bufp->chgCData(oldp+952,((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1)))),2);
        bufp->chgCData(oldp+953,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258),2);
        bufp->chgCData(oldp+954,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262),2);
        bufp->chgCData(oldp+955,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269),3);
        bufp->chgCData(oldp+956,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_2) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_3)))),2);
        bufp->chgCData(oldp+957,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276),3);
        bufp->chgCData(oldp+958,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_2) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078), 1U)))),2);
        bufp->chgCData(oldp+959,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283),3);
        bufp->chgCData(oldp+960,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802)) 
                                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082), 1U)))),2);
        bufp->chgCData(oldp+961,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290),3);
        bufp->chgCData(oldp+962,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+963,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297),3);
        bufp->chgCData(oldp+964,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+965,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304),3);
        bufp->chgCData(oldp+966,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+967,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311),3);
        bufp->chgCData(oldp+968,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+969,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318),3);
        bufp->chgCData(oldp+970,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+971,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325),3);
        bufp->chgCData(oldp+972,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+973,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332),3);
        bufp->chgCData(oldp+974,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+975,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339),3);
        bufp->chgCData(oldp+976,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+977,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346),3);
        bufp->chgCData(oldp+978,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+979,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353),3);
        bufp->chgCData(oldp+980,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+981,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360),3);
        bufp->chgCData(oldp+982,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+983,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367),3);
        bufp->chgCData(oldp+984,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+985,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374),3);
        bufp->chgCData(oldp+986,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+987,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381),3);
        bufp->chgCData(oldp+988,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+989,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388),3);
        bufp->chgCData(oldp+990,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+991,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395),3);
        bufp->chgCData(oldp+992,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+993,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402),3);
        bufp->chgCData(oldp+994,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+995,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409),3);
        bufp->chgCData(oldp+996,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+997,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416),3);
        bufp->chgCData(oldp+998,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049)) 
                                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212) 
                                                 >> 1U))))),2);
        bufp->chgCData(oldp+999,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423),3);
        bufp->chgCData(oldp+1000,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063)) 
                                         + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219) 
                                                  >> 1U))))),2);
        bufp->chgCData(oldp+1001,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430),3);
        bufp->chgCData(oldp+1002,((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067)) 
                                         + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226) 
                                                  >> 1U))))),2);
        bufp->chgCData(oldp+1003,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437),3);
        bufp->chgCData(oldp+1004,((3U & ((1U & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1))) 
                                         + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233) 
                                                  >> 1U))))),2);
        bufp->chgCData(oldp+1005,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444),3);
        bufp->chgCData(oldp+1006,((3U & (VL_SHIFTR_III(2,2,32, 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1))), 1U) 
                                         + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240) 
                                                  >> 1U))))),2);
        bufp->chgCData(oldp+1007,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451),3);
        bufp->chgCData(oldp+1008,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_2) 
                                         + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247) 
                                                  >> 1U))))),2);
        bufp->chgCData(oldp+1009,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458),3);
        bufp->chgCData(oldp+1010,((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_0) 
                                         + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_1)))),2);
        bufp->chgCData(oldp+1011,((3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row32_1)))),2);
        bufp->chgBit(oldp+1012,((1U & (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+1013,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 4U)))));
        bufp->chgBit(oldp+1014,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 5U)))));
        bufp->chgBit(oldp+1015,((IData)((0x20U == (0x30U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1016,((IData)((0x10U == (0x30U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1017,((IData)((0x18U == (0x38U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1018,((IData)((0x20U == (0x38U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1019,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369));
        bufp->chgBit(oldp+1020,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372));
        bufp->chgBit(oldp+1021,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 6U)))));
        bufp->chgBit(oldp+1022,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 7U)))));
        bufp->chgBit(oldp+1023,((IData)((0x80U == (0xc0U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1024,((IData)((0x40U == (0xc0U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1025,((IData)((0x60U == (0xe0U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1026,((IData)((0x80U == (0xe0U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1027,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547));
        bufp->chgBit(oldp+1028,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550));
        bufp->chgBit(oldp+1029,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 8U)))));
        bufp->chgBit(oldp+1030,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 9U)))));
        bufp->chgBit(oldp+1031,((IData)((0x200U == 
                                         (0x300U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1032,((IData)((0x100U == 
                                         (0x300U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1033,((IData)((0x180U == 
                                         (0x380U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1034,((IData)((0x200U == 
                                         (0x380U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1035,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725));
        bufp->chgBit(oldp+1036,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728));
        bufp->chgBit(oldp+1037,((1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1038,((IData)((0x800U == 
                                         (0xc00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1039,((IData)((0x400U == 
                                         (0xc00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1040,((IData)((0x600U == 
                                         (0xe00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1041,((IData)((1U == (3U 
                                                & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1042,((IData)((0x800U == 
                                         (0xe00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
        bufp->chgBit(oldp+1043,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903));
        bufp->chgBit(oldp+1044,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906));
        bufp->chgCData(oldp+1045,((6U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         << 1U))),3);
        bufp->chgCData(oldp+1046,(((2U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                          << 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413))),2);
        bufp->chgBit(oldp+1047,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 1U))));
        bufp->chgCData(oldp+1048,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 9U))),3);
        bufp->chgCData(oldp+1049,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903))),2);
        bufp->chgBit(oldp+1050,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 0xbU))));
        bufp->chgCData(oldp+1051,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xbU))),3);
        bufp->chgCData(oldp+1052,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081))),2);
        bufp->chgBit(oldp+1053,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 0xdU))));
        bufp->chgCData(oldp+1054,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xdU))),3);
        bufp->chgCData(oldp+1055,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259))),2);
        bufp->chgCData(oldp+1056,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xfU))),3);
        bufp->chgCData(oldp+1057,((2U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 0xeU))),2);
        bufp->chgCData(oldp+1058,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 1U))),3);
        bufp->chgCData(oldp+1059,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191))),2);
        bufp->chgBit(oldp+1060,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 3U))));
        bufp->chgCData(oldp+1061,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1062,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369))),2);
        bufp->chgBit(oldp+1063,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 5U))));
        bufp->chgCData(oldp+1064,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 5U))),3);
        bufp->chgCData(oldp+1065,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547))),2);
        bufp->chgBit(oldp+1066,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 7U))));
        bufp->chgCData(oldp+1067,((7U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                         >> 7U))),3);
        bufp->chgCData(oldp+1068,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728) 
                                    << 1U) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725))),2);
        bufp->chgBit(oldp+1069,((1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                       >> 9U))));
        bufp->chgBit(oldp+1070,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598) 
                                       >> 1U))));
        bufp->chgBit(oldp+1071,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602) 
                                       >> 1U))));
        bufp->chgBit(oldp+1072,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606) 
                                       >> 1U))));
        bufp->chgBit(oldp+1073,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613) 
                                       >> 1U))));
        bufp->chgBit(oldp+1074,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617) 
                                       >> 1U))));
        bufp->chgBit(oldp+1075,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624) 
                                       >> 1U))));
        bufp->chgBit(oldp+1076,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628) 
                                       >> 1U))));
        bufp->chgBit(oldp+1077,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635) 
                                       >> 1U))));
        bufp->chgBit(oldp+1078,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642) 
                                       >> 1U))));
        bufp->chgBit(oldp+1079,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646) 
                                       >> 1U))));
        bufp->chgBit(oldp+1080,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653) 
                                       >> 1U))));
        bufp->chgBit(oldp+1081,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660) 
                                       >> 1U))));
        bufp->chgBit(oldp+1082,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664) 
                                       >> 1U))));
        bufp->chgBit(oldp+1083,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671) 
                                       >> 1U))));
        bufp->chgBit(oldp+1084,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678) 
                                       >> 1U))));
        bufp->chgBit(oldp+1085,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685) 
                                       >> 1U))));
        bufp->chgBit(oldp+1086,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692) 
                                       >> 1U))));
        bufp->chgBit(oldp+1087,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699) 
                                       >> 1U))));
        bufp->chgBit(oldp+1088,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706) 
                                       >> 1U))));
        bufp->chgBit(oldp+1089,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713) 
                                       >> 1U))));
        bufp->chgBit(oldp+1090,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720) 
                                       >> 1U))));
        bufp->chgBit(oldp+1091,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727) 
                                       >> 1U))));
        bufp->chgBit(oldp+1092,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734) 
                                       >> 1U))));
        bufp->chgBit(oldp+1093,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741) 
                                       >> 1U))));
        bufp->chgBit(oldp+1094,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748) 
                                       >> 1U))));
        bufp->chgBit(oldp+1095,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755) 
                                       >> 1U))));
        bufp->chgBit(oldp+1096,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762) 
                                       >> 1U))));
        bufp->chgBit(oldp+1097,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766) 
                                       >> 1U))));
        bufp->chgBit(oldp+1098,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773) 
                                       >> 1U))));
        bufp->chgBit(oldp+1099,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780) 
                                       >> 1U))));
        bufp->chgBit(oldp+1100,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787) 
                                       >> 1U))));
        bufp->chgBit(oldp+1101,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791) 
                                       >> 1U))));
        bufp->chgBit(oldp+1102,((1U & (((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1103,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802) 
                                       >> 1U))));
        bufp->chgBit(oldp+1104,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806) 
                                       >> 1U))));
        bufp->chgBit(oldp+1105,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810) 
                                       >> 1U))));
        bufp->chgBit(oldp+1106,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817) 
                                       >> 1U))));
        bufp->chgBit(oldp+1107,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821) 
                                       >> 1U))));
        bufp->chgBit(oldp+1108,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828) 
                                       >> 1U))));
        bufp->chgBit(oldp+1109,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832) 
                                       >> 1U))));
        bufp->chgBit(oldp+1110,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839) 
                                       >> 1U))));
        bufp->chgBit(oldp+1111,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846) 
                                       >> 1U))));
        bufp->chgBit(oldp+1112,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853) 
                                       >> 1U))));
        bufp->chgBit(oldp+1113,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860) 
                                       >> 1U))));
        bufp->chgBit(oldp+1114,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867) 
                                       >> 1U))));
        bufp->chgBit(oldp+1115,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874) 
                                       >> 1U))));
        bufp->chgBit(oldp+1116,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881) 
                                       >> 1U))));
        bufp->chgBit(oldp+1117,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888) 
                                       >> 1U))));
        bufp->chgBit(oldp+1118,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895) 
                                       >> 1U))));
        bufp->chgBit(oldp+1119,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902) 
                                       >> 1U))));
        bufp->chgBit(oldp+1120,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909) 
                                       >> 1U))));
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916) 
                                       >> 1U))));
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923) 
                                       >> 1U))));
        bufp->chgBit(oldp+1123,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930) 
                                       >> 1U))));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937) 
                                       >> 1U))));
        bufp->chgBit(oldp+1125,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944) 
                                       >> 1U))));
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951) 
                                       >> 1U))));
        bufp->chgBit(oldp+1127,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958) 
                                       >> 1U))));
        bufp->chgBit(oldp+1128,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965) 
                                       >> 1U))));
        bufp->chgBit(oldp+1129,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972) 
                                       >> 1U))));
        bufp->chgBit(oldp+1130,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979) 
                                       >> 1U))));
        bufp->chgBit(oldp+1131,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986) 
                                       >> 1U))));
        bufp->chgBit(oldp+1132,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993) 
                                       >> 1U))));
        bufp->chgBit(oldp+1133,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000) 
                                       >> 1U))));
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007) 
                                       >> 1U))));
        bufp->chgBit(oldp+1135,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014) 
                                       >> 1U))));
        bufp->chgBit(oldp+1136,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021) 
                                       >> 1U))));
        bufp->chgBit(oldp+1137,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028) 
                                       >> 1U))));
        bufp->chgBit(oldp+1138,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035) 
                                       >> 1U))));
        bufp->chgBit(oldp+1139,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042) 
                                       >> 1U))));
        bufp->chgBit(oldp+1140,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049) 
                                       >> 1U))));
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056) 
                                       >> 1U))));
        bufp->chgBit(oldp+1142,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063) 
                                       >> 1U))));
        bufp->chgBit(oldp+1143,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067) 
                                       >> 1U))));
        bufp->chgBit(oldp+1144,((1U & (((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1145,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078) 
                                       >> 1U))));
        bufp->chgBit(oldp+1146,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082) 
                                       >> 1U))));
        bufp->chgBit(oldp+1147,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086) 
                                       >> 1U))));
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093) 
                                       >> 1U))));
        bufp->chgBit(oldp+1149,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100) 
                                       >> 1U))));
        bufp->chgBit(oldp+1150,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107) 
                                       >> 1U))));
        bufp->chgBit(oldp+1151,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114) 
                                       >> 1U))));
        bufp->chgBit(oldp+1152,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121) 
                                       >> 1U))));
        bufp->chgBit(oldp+1153,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128) 
                                       >> 1U))));
        bufp->chgBit(oldp+1154,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135) 
                                       >> 1U))));
        bufp->chgBit(oldp+1155,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142) 
                                       >> 1U))));
        bufp->chgBit(oldp+1156,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149) 
                                       >> 1U))));
        bufp->chgBit(oldp+1157,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156) 
                                       >> 1U))));
        bufp->chgBit(oldp+1158,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163) 
                                       >> 1U))));
        bufp->chgBit(oldp+1159,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170) 
                                       >> 1U))));
        bufp->chgBit(oldp+1160,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177) 
                                       >> 1U))));
        bufp->chgBit(oldp+1161,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184) 
                                       >> 1U))));
        bufp->chgBit(oldp+1162,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191) 
                                       >> 1U))));
        bufp->chgBit(oldp+1163,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198) 
                                       >> 1U))));
        bufp->chgBit(oldp+1164,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205) 
                                       >> 1U))));
        bufp->chgBit(oldp+1165,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212) 
                                       >> 1U))));
        bufp->chgBit(oldp+1166,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219) 
                                       >> 1U))));
        bufp->chgBit(oldp+1167,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226) 
                                       >> 1U))));
        bufp->chgBit(oldp+1168,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233) 
                                       >> 1U))));
        bufp->chgBit(oldp+1169,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240) 
                                       >> 1U))));
        bufp->chgBit(oldp+1170,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247) 
                                       >> 1U))));
        bufp->chgBit(oldp+1171,((1U & (((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1172,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258) 
                                       >> 1U))));
        bufp->chgBit(oldp+1173,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262) 
                                       >> 1U))));
        bufp->chgBit(oldp+1174,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269) 
                                       >> 1U))));
        bufp->chgBit(oldp+1175,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276) 
                                       >> 1U))));
        bufp->chgBit(oldp+1176,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283) 
                                       >> 1U))));
        bufp->chgBit(oldp+1177,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290) 
                                       >> 1U))));
        bufp->chgBit(oldp+1178,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297) 
                                       >> 1U))));
        bufp->chgBit(oldp+1179,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304) 
                                       >> 1U))));
        bufp->chgBit(oldp+1180,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311) 
                                       >> 1U))));
        bufp->chgBit(oldp+1181,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318) 
                                       >> 1U))));
        bufp->chgBit(oldp+1182,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325) 
                                       >> 1U))));
        bufp->chgBit(oldp+1183,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332) 
                                       >> 1U))));
        bufp->chgBit(oldp+1184,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339) 
                                       >> 1U))));
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346) 
                                       >> 1U))));
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353) 
                                       >> 1U))));
        bufp->chgBit(oldp+1187,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360) 
                                       >> 1U))));
        bufp->chgBit(oldp+1188,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367) 
                                       >> 1U))));
        bufp->chgBit(oldp+1189,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374) 
                                       >> 1U))));
        bufp->chgBit(oldp+1190,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381) 
                                       >> 1U))));
        bufp->chgBit(oldp+1191,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388) 
                                       >> 1U))));
        bufp->chgBit(oldp+1192,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395) 
                                       >> 1U))));
        bufp->chgBit(oldp+1193,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402) 
                                       >> 1U))));
        bufp->chgBit(oldp+1194,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409) 
                                       >> 1U))));
        bufp->chgBit(oldp+1195,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416) 
                                       >> 1U))));
        bufp->chgBit(oldp+1196,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423) 
                                       >> 1U))));
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430) 
                                       >> 1U))));
        bufp->chgBit(oldp+1198,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437) 
                                       >> 1U))));
        bufp->chgBit(oldp+1199,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444) 
                                       >> 1U))));
        bufp->chgBit(oldp+1200,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451) 
                                       >> 1U))));
        bufp->chgBit(oldp+1201,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458) 
                                       >> 1U))));
        bufp->chgBit(oldp+1202,((1U & (((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row32_1)) 
                                       >> 1U))));
        bufp->chgIData(oldp+1203,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered__024next),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered),32);
        bufp->chgIData(oldp+1206,(((((((0x80000000U 
                                        & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                            << 0x1fU) 
                                           ^ ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881) 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)) 
                                               << 0x1fU) 
                                              | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657) 
                                                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)) 
                                                  << 0x1fU) 
                                                 | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)) 
                                                     << 0x1fU) 
                                                    | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                                        << 0x1fU) 
                                                       | (0x80000000U 
                                                          & ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                               << 0x1fU) 
                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                                 << 0x1eU)) 
                                                             | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                                << 0x1eU))))))))) 
                                       | (0x40000000U 
                                          & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                              ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889) 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)))))) 
                                             << 0x1eU))) 
                                      | ((0x20000000U 
                                          & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                              ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897) 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)) 
                                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)))))) 
                                             << 0x1dU)) 
                                         | (0x10000000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))))) 
                                               << 0x1cU)))) 
                                     | (((0x8000000U 
                                          & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                              ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913) 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))))) 
                                             << 0x1bU)) 
                                         | (0x4000000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))))) 
                                               << 0x1aU))) 
                                        | ((0x2000000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))))) 
                                               << 0x19U)) 
                                           | (0x1000000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))))) 
                                                 << 0x18U))))) 
                                    | ((((0x800000U 
                                          & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                              ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945) 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790)) 
                                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)))) 
                                             << 0x17U)) 
                                         | (0x400000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)))) 
                                               << 0x16U))) 
                                        | ((0x200000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)))) 
                                               << 0x15U)) 
                                           | (0x100000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)))) 
                                                 << 0x14U)))) 
                                       | (((0x80000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                                ^ (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)))) 
                                               << 0x13U)) 
                                           | (0x40000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)))) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                                  << 0x11U) 
                                                 ^ 
                                                 ((0xfffe0000U 
                                                   & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993) 
                                                       << 0x11U) 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                                         << 0x10U))) 
                                                  | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                                     << 0x11U)))) 
                                             | (0x10000U 
                                                & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                                    ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006)) 
                                                   << 0x10U)))))) 
                                   | (((((0x8000U & 
                                          (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                            ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)) 
                                           << 0xfU)) 
                                         | (0x4000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                               << 0xeU))) 
                                        | ((0x2000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)) 
                                               << 0xdU)) 
                                           | (0x1000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                                 << 0xcU)))) 
                                       | (((0x800U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                                               << 0xbU)) 
                                           | (0x400U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                                 << 0xaU))) 
                                          | ((0x200U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                                 << 9U)) 
                                             | (0x100U 
                                                & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                                    ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
                                                   << 8U))))) 
                                      | ((((0x80U & 
                                            (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                              ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                                             << 7U)) 
                                           | (0x40U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                                 << 6U))) 
                                          | ((0x20U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                                                 << 5U)) 
                                             | (0x10U 
                                                & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                                    ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                                   << 4U)))) 
                                         | (((8U & 
                                              (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                                               << 3U)) 
                                             | (4U 
                                                & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                                    ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                                   << 2U))) 
                                            | ((2U 
                                                & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                                    << 1U) 
                                                   ^ 
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244)))) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244)))))))),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered__024next),32);
        bufp->chgIData(oldp+1208,((0x1fffeU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               << 1U))),19);
        bufp->chgCData(oldp+1209,((1U | ((4U & ((~ 
                                                 (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                  >> 1U)) 
                                                << 2U)) 
                                         | (2U & ((~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                                  << 1U))))),3);
        bufp->chgCData(oldp+1210,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 0xcU)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 0xbU)))))),3);
        bufp->chgCData(oldp+1211,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 0xfU)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 0xeU)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 0xdU)))))),3);
        bufp->chgCData(oldp+1212,((6U | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                  >> 0xfU))))),3);
        bufp->chgCData(oldp+1213,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 3U)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 2U)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 1U)))))),3);
        bufp->chgCData(oldp+1214,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 5U)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 4U)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 3U)))))),3);
        bufp->chgCData(oldp+1215,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 7U)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 6U)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 5U)))))),3);
        bufp->chgCData(oldp+1216,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 9U)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 7U)))))),3);
        bufp->chgCData(oldp+1217,(((4U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                              >> 0xbU)) 
                                          << 2U)) | 
                                   ((2U & ((~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                               >> 0xaU)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                >> 9U)))))),3);
        bufp->chgBit(oldp+1218,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_0));
        bufp->chgBit(oldp+1219,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_1));
        bufp->chgBit(oldp+1220,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_0));
        bufp->chgBit(oldp+1221,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_1));
        bufp->chgBit(oldp+1222,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_2));
        bufp->chgBit(oldp+1223,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_3));
        bufp->chgBit(oldp+1224,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_4));
        bufp->chgBit(oldp+1225,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_5));
        bufp->chgBit(oldp+1226,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_6));
        bufp->chgBit(oldp+1227,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_0));
        bufp->chgBit(oldp+1228,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_1));
        bufp->chgBit(oldp+1229,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_2));
        bufp->chgBit(oldp+1230,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_3));
        bufp->chgBit(oldp+1231,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_4));
        bufp->chgBit(oldp+1232,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_5));
        bufp->chgBit(oldp+1233,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_0));
        bufp->chgBit(oldp+1234,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_1));
        bufp->chgBit(oldp+1235,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_2));
        bufp->chgBit(oldp+1236,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_3));
        bufp->chgBit(oldp+1237,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_4));
        bufp->chgBit(oldp+1238,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_5));
        bufp->chgBit(oldp+1239,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_6));
        bufp->chgBit(oldp+1240,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_7));
        bufp->chgBit(oldp+1241,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_0));
        bufp->chgBit(oldp+1242,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_1));
        bufp->chgBit(oldp+1243,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_2));
        bufp->chgBit(oldp+1244,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_3));
        bufp->chgBit(oldp+1245,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_4));
        bufp->chgBit(oldp+1246,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_5));
        bufp->chgBit(oldp+1247,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_6));
        bufp->chgBit(oldp+1248,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_0));
        bufp->chgBit(oldp+1249,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_1));
        bufp->chgBit(oldp+1250,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_2));
        bufp->chgBit(oldp+1251,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_3));
        bufp->chgBit(oldp+1252,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_4));
        bufp->chgBit(oldp+1253,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_5));
        bufp->chgBit(oldp+1254,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_6));
        bufp->chgBit(oldp+1255,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_7));
        bufp->chgBit(oldp+1256,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_8));
        bufp->chgBit(oldp+1257,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_0));
        bufp->chgBit(oldp+1258,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_1));
        bufp->chgBit(oldp+1259,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_2));
        bufp->chgBit(oldp+1260,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_3));
        bufp->chgBit(oldp+1261,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_4));
        bufp->chgBit(oldp+1262,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_5));
        bufp->chgBit(oldp+1263,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_6));
        bufp->chgBit(oldp+1264,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_7));
        bufp->chgBit(oldp+1265,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_0));
        bufp->chgBit(oldp+1266,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_1));
        bufp->chgBit(oldp+1267,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_2));
        bufp->chgBit(oldp+1268,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_3));
        bufp->chgBit(oldp+1269,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_4));
        bufp->chgBit(oldp+1270,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_5));
        bufp->chgBit(oldp+1271,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_6));
        bufp->chgBit(oldp+1272,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_7));
        bufp->chgBit(oldp+1273,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_8));
        bufp->chgBit(oldp+1274,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_0));
        bufp->chgBit(oldp+1275,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_1));
        bufp->chgBit(oldp+1276,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_2));
        bufp->chgBit(oldp+1277,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_3));
        bufp->chgBit(oldp+1278,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_4));
        bufp->chgBit(oldp+1279,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_5));
        bufp->chgBit(oldp+1280,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_6));
        bufp->chgBit(oldp+1281,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_7));
        bufp->chgBit(oldp+1282,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_8));
        bufp->chgBit(oldp+1283,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_0));
        bufp->chgBit(oldp+1284,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_1));
        bufp->chgBit(oldp+1285,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_2));
        bufp->chgBit(oldp+1286,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_3));
        bufp->chgBit(oldp+1287,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_4));
        bufp->chgBit(oldp+1288,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_5));
        bufp->chgBit(oldp+1289,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_6));
        bufp->chgBit(oldp+1290,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_7));
        bufp->chgBit(oldp+1291,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_8));
        bufp->chgBit(oldp+1292,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_0));
        bufp->chgBit(oldp+1293,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_1));
        bufp->chgBit(oldp+1294,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_2));
        bufp->chgBit(oldp+1295,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_3));
        bufp->chgBit(oldp+1296,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_4));
        bufp->chgBit(oldp+1297,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_5));
        bufp->chgBit(oldp+1298,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_6));
        bufp->chgBit(oldp+1299,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_7));
        bufp->chgBit(oldp+1300,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_8));
        bufp->chgBit(oldp+1301,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row1_0));
        bufp->chgBit(oldp+1302,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_1));
        bufp->chgBit(oldp+1303,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_2));
        bufp->chgBit(oldp+1304,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_3));
        bufp->chgBit(oldp+1305,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_4));
        bufp->chgBit(oldp+1306,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_5));
        bufp->chgBit(oldp+1307,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_6));
        bufp->chgBit(oldp+1308,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_7));
        bufp->chgBit(oldp+1309,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_0));
        bufp->chgBit(oldp+1310,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_1));
        bufp->chgBit(oldp+1311,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_2));
        bufp->chgBit(oldp+1312,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_3));
        bufp->chgBit(oldp+1313,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_4));
        bufp->chgBit(oldp+1314,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_5));
        bufp->chgBit(oldp+1315,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_6));
        bufp->chgBit(oldp+1316,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_1));
        bufp->chgBit(oldp+1317,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_2));
        bufp->chgBit(oldp+1318,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_3));
        bufp->chgBit(oldp+1319,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_4));
        bufp->chgBit(oldp+1320,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_5));
        bufp->chgBit(oldp+1321,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_6));
        bufp->chgBit(oldp+1322,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_0));
        bufp->chgBit(oldp+1323,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_1));
        bufp->chgBit(oldp+1324,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_2));
        bufp->chgBit(oldp+1325,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_3));
        bufp->chgBit(oldp+1326,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_4));
        bufp->chgBit(oldp+1327,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_5));
        bufp->chgBit(oldp+1328,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1));
        bufp->chgBit(oldp+1329,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_2));
        bufp->chgBit(oldp+1330,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_3));
        bufp->chgBit(oldp+1331,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_4));
        bufp->chgBit(oldp+1332,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_5));
        bufp->chgBit(oldp+1333,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_0));
        bufp->chgBit(oldp+1334,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_1));
        bufp->chgBit(oldp+1335,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_2));
        bufp->chgBit(oldp+1336,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_3));
        bufp->chgBit(oldp+1337,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_4));
        bufp->chgBit(oldp+1338,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_1));
        bufp->chgBit(oldp+1339,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_2));
        bufp->chgBit(oldp+1340,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_3));
        bufp->chgBit(oldp+1341,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_4));
        bufp->chgBit(oldp+1342,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_0));
        bufp->chgBit(oldp+1343,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_1));
        bufp->chgBit(oldp+1344,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_2));
        bufp->chgBit(oldp+1345,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_3));
        bufp->chgBit(oldp+1346,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1));
        bufp->chgBit(oldp+1347,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_2));
        bufp->chgBit(oldp+1348,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_3));
        bufp->chgBit(oldp+1349,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_0));
        bufp->chgBit(oldp+1350,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_1));
        bufp->chgBit(oldp+1351,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_2));
        bufp->chgBit(oldp+1352,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_0));
        bufp->chgBit(oldp+1353,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_1));
        bufp->chgBit(oldp+1354,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_2));
        bufp->chgBit(oldp+1355,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1));
        bufp->chgBit(oldp+1356,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_2));
        bufp->chgBit(oldp+1357,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_0));
        bufp->chgBit(oldp+1358,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_1));
        bufp->chgBit(oldp+1359,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row32_1));
        bufp->chgBit(oldp+1360,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_0));
        bufp->chgBit(oldp+1361,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_1));
        bufp->chgBit(oldp+1362,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_0));
        bufp->chgBit(oldp+1363,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_1));
        bufp->chgBit(oldp+1364,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_2));
        bufp->chgBit(oldp+1365,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_3));
        bufp->chgBit(oldp+1366,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_0));
        bufp->chgBit(oldp+1367,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_1));
        bufp->chgBit(oldp+1368,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_2));
        bufp->chgBit(oldp+1369,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_0));
        bufp->chgBit(oldp+1370,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_1));
        bufp->chgBit(oldp+1371,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_2));
        bufp->chgBit(oldp+1372,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_3));
        bufp->chgBit(oldp+1373,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_4));
        bufp->chgBit(oldp+1374,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_0));
        bufp->chgBit(oldp+1375,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_1));
        bufp->chgBit(oldp+1376,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_2));
        bufp->chgBit(oldp+1377,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_3));
        bufp->chgBit(oldp+1378,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_0));
        bufp->chgBit(oldp+1379,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_1));
        bufp->chgBit(oldp+1380,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_2));
        bufp->chgBit(oldp+1381,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_3));
        bufp->chgBit(oldp+1382,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_4));
        bufp->chgBit(oldp+1383,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_5));
        bufp->chgBit(oldp+1384,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_0));
        bufp->chgBit(oldp+1385,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_1));
        bufp->chgBit(oldp+1386,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_2));
        bufp->chgBit(oldp+1387,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_3));
        bufp->chgBit(oldp+1388,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_4));
        bufp->chgBit(oldp+1389,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598))));
        bufp->chgBit(oldp+1390,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602))));
        bufp->chgBit(oldp+1391,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606))));
        bufp->chgBit(oldp+1392,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613))));
        bufp->chgBit(oldp+1393,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617))));
        bufp->chgBit(oldp+1394,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624))));
        bufp->chgBit(oldp+1395,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628))));
        bufp->chgBit(oldp+1396,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635))));
        bufp->chgBit(oldp+1397,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642))));
        bufp->chgBit(oldp+1398,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646))));
        bufp->chgBit(oldp+1399,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653))));
        bufp->chgBit(oldp+1400,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660))));
        bufp->chgBit(oldp+1401,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664))));
        bufp->chgBit(oldp+1402,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671))));
        bufp->chgBit(oldp+1403,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678))));
        bufp->chgBit(oldp+1404,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685))));
        bufp->chgBit(oldp+1405,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692))));
        bufp->chgBit(oldp+1406,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699))));
        bufp->chgBit(oldp+1407,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706))));
        bufp->chgBit(oldp+1408,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713))));
        bufp->chgBit(oldp+1409,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720))));
        bufp->chgBit(oldp+1410,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727))));
        bufp->chgBit(oldp+1411,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734))));
        bufp->chgBit(oldp+1412,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741))));
        bufp->chgBit(oldp+1413,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748))));
        bufp->chgBit(oldp+1414,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755))));
        bufp->chgBit(oldp+1415,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762))));
        bufp->chgBit(oldp+1416,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766))));
        bufp->chgBit(oldp+1417,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773))));
        bufp->chgBit(oldp+1418,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780))));
        bufp->chgBit(oldp+1419,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787))));
        bufp->chgBit(oldp+1420,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791))));
        bufp->chgBit(oldp+1421,((1U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1)))));
        bufp->chgBit(oldp+1422,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802))));
        bufp->chgBit(oldp+1423,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806))));
        bufp->chgBit(oldp+1424,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810))));
        bufp->chgBit(oldp+1425,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817))));
        bufp->chgBit(oldp+1426,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821))));
        bufp->chgBit(oldp+1427,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828))));
        bufp->chgBit(oldp+1428,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832))));
        bufp->chgBit(oldp+1429,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839))));
        bufp->chgBit(oldp+1430,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846))));
        bufp->chgBit(oldp+1431,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853))));
        bufp->chgBit(oldp+1432,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860))));
        bufp->chgBit(oldp+1433,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867))));
        bufp->chgBit(oldp+1434,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874))));
        bufp->chgBit(oldp+1435,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881))));
        bufp->chgBit(oldp+1436,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888))));
        bufp->chgBit(oldp+1437,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895))));
        bufp->chgBit(oldp+1438,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902))));
        bufp->chgBit(oldp+1439,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909))));
        bufp->chgBit(oldp+1440,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916))));
        bufp->chgBit(oldp+1441,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923))));
        bufp->chgBit(oldp+1442,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930))));
        bufp->chgBit(oldp+1443,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937))));
        bufp->chgBit(oldp+1444,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944))));
        bufp->chgBit(oldp+1445,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951))));
        bufp->chgBit(oldp+1446,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958))));
        bufp->chgBit(oldp+1447,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965))));
        bufp->chgBit(oldp+1448,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972))));
        bufp->chgBit(oldp+1449,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979))));
        bufp->chgBit(oldp+1450,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986))));
        bufp->chgBit(oldp+1451,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993))));
        bufp->chgBit(oldp+1452,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000))));
        bufp->chgBit(oldp+1453,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007))));
        bufp->chgBit(oldp+1454,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014))));
        bufp->chgBit(oldp+1455,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021))));
        bufp->chgBit(oldp+1456,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028))));
        bufp->chgBit(oldp+1457,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035))));
        bufp->chgBit(oldp+1458,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042))));
        bufp->chgBit(oldp+1459,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049))));
        bufp->chgBit(oldp+1460,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056))));
        bufp->chgBit(oldp+1461,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063))));
        bufp->chgBit(oldp+1462,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067))));
        bufp->chgBit(oldp+1463,((1U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1)))));
        bufp->chgBit(oldp+1464,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078))));
        bufp->chgBit(oldp+1465,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082))));
        bufp->chgBit(oldp+1466,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086))));
        bufp->chgBit(oldp+1467,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093))));
        bufp->chgBit(oldp+1468,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100))));
        bufp->chgBit(oldp+1469,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107))));
        bufp->chgBit(oldp+1470,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114))));
        bufp->chgBit(oldp+1471,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121))));
        bufp->chgBit(oldp+1472,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128))));
        bufp->chgBit(oldp+1473,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135))));
        bufp->chgBit(oldp+1474,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142))));
        bufp->chgBit(oldp+1475,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149))));
        bufp->chgBit(oldp+1476,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156))));
        bufp->chgBit(oldp+1477,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163))));
        bufp->chgBit(oldp+1478,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170))));
        bufp->chgBit(oldp+1479,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177))));
        bufp->chgBit(oldp+1480,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184))));
        bufp->chgBit(oldp+1481,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191))));
        bufp->chgBit(oldp+1482,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198))));
        bufp->chgBit(oldp+1483,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205))));
        bufp->chgBit(oldp+1484,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212))));
        bufp->chgBit(oldp+1485,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219))));
        bufp->chgBit(oldp+1486,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226))));
        bufp->chgBit(oldp+1487,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233))));
        bufp->chgBit(oldp+1488,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240))));
        bufp->chgBit(oldp+1489,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247))));
        bufp->chgBit(oldp+1490,((1U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1)))));
        bufp->chgBit(oldp+1491,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258))));
        bufp->chgBit(oldp+1492,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262))));
        bufp->chgBit(oldp+1493,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269))));
        bufp->chgBit(oldp+1494,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276))));
        bufp->chgBit(oldp+1495,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283))));
        bufp->chgBit(oldp+1496,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290))));
        bufp->chgBit(oldp+1497,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297))));
        bufp->chgBit(oldp+1498,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304))));
        bufp->chgBit(oldp+1499,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311))));
        bufp->chgBit(oldp+1500,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318))));
        bufp->chgBit(oldp+1501,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325))));
        bufp->chgBit(oldp+1502,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332))));
        bufp->chgBit(oldp+1503,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339))));
        bufp->chgBit(oldp+1504,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346))));
        bufp->chgBit(oldp+1505,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353))));
        bufp->chgBit(oldp+1506,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360))));
        bufp->chgBit(oldp+1507,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367))));
        bufp->chgBit(oldp+1508,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374))));
        bufp->chgBit(oldp+1509,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381))));
        bufp->chgBit(oldp+1510,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388))));
        bufp->chgBit(oldp+1511,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395))));
        bufp->chgBit(oldp+1512,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402))));
        bufp->chgBit(oldp+1513,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409))));
        bufp->chgBit(oldp+1514,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416))));
        bufp->chgBit(oldp+1515,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423))));
        bufp->chgBit(oldp+1516,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430))));
        bufp->chgBit(oldp+1517,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437))));
        bufp->chgBit(oldp+1518,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444))));
        bufp->chgBit(oldp+1519,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451))));
        bufp->chgBit(oldp+1520,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458))));
        bufp->chgBit(oldp+1521,((1U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row32_1)))));
        bufp->chgCData(oldp+1522,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100),2);
        bufp->chgBit(oldp+1523,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024841) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777))));
        bufp->chgBit(oldp+1524,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846))));
        bufp->chgBit(oldp+1525,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006));
        bufp->chgBit(oldp+1526,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024849) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785))));
        bufp->chgBit(oldp+1527,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854))));
        bufp->chgBit(oldp+1528,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014));
        bufp->chgBit(oldp+1529,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024857) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793))));
        bufp->chgBit(oldp+1530,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862))));
        bufp->chgBit(oldp+1531,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022));
        bufp->chgBit(oldp+1532,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024865) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801))));
        bufp->chgBit(oldp+1533,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870))));
        bufp->chgBit(oldp+1534,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030));
        bufp->chgBit(oldp+1535,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809))));
        bufp->chgBit(oldp+1536,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638))));
        bufp->chgBit(oldp+1537,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038));
        bufp->chgCData(oldp+1538,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104),2);
        bufp->chgBit(oldp+1539,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817))));
        bufp->chgBit(oldp+1540,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646))));
        bufp->chgBit(oldp+1541,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046));
        bufp->chgBit(oldp+1542,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825))));
        bufp->chgBit(oldp+1543,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406))));
        bufp->chgBit(oldp+1544,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054));
        bufp->chgBit(oldp+1545,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833))));
        bufp->chgBit(oldp+1546,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                    >> 1U))));
        bufp->chgBit(oldp+1547,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062));
        bufp->chgBit(oldp+1548,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024841) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024873))));
        bufp->chgBit(oldp+1549,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024873) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006))));
        bufp->chgBit(oldp+1550,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024873) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649) 
                                           & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                              | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)) 
                                                | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                                      >> 1U)))))))));
        bufp->chgBit(oldp+1551,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024849) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881))));
        bufp->chgBit(oldp+1552,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014))));
        bufp->chgBit(oldp+1553,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                                | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                      >> 1U)))))))));
        bufp->chgCData(oldp+1554,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108),2);
        bufp->chgBit(oldp+1555,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024857) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889))));
        bufp->chgBit(oldp+1556,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022))));
        bufp->chgBit(oldp+1557,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)))))));
        bufp->chgBit(oldp+1558,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024865) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897))));
        bufp->chgBit(oldp+1559,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030))));
        bufp->chgBit(oldp+1560,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)))))));
        bufp->chgBit(oldp+1561,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905))));
        bufp->chgBit(oldp+1562,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038))));
        bufp->chgBit(oldp+1563,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))))));
        bufp->chgBit(oldp+1564,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913))));
        bufp->chgBit(oldp+1565,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046))));
        bufp->chgBit(oldp+1566,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))))));
        bufp->chgBit(oldp+1567,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921))));
        bufp->chgBit(oldp+1568,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054))));
        bufp->chgBit(oldp+1569,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))))));
        bufp->chgCData(oldp+1570,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112),2);
        bufp->chgBit(oldp+1571,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833)) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929))));
        bufp->chgBit(oldp+1572,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062))));
        bufp->chgBit(oldp+1573,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))))));
        bufp->chgBit(oldp+1574,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024841) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937))));
        bufp->chgBit(oldp+1575,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846))));
        bufp->chgBit(oldp+1576,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))))));
        bufp->chgBit(oldp+1577,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024849) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945))));
        bufp->chgBit(oldp+1578,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854))));
        bufp->chgBit(oldp+1579,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)))));
        bufp->chgBit(oldp+1580,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024857) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953))));
        bufp->chgBit(oldp+1581,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862))));
        bufp->chgBit(oldp+1582,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)))));
        bufp->chgBit(oldp+1583,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024865) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961))));
        bufp->chgBit(oldp+1584,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870))));
        bufp->chgBit(oldp+1585,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)))));
        bufp->chgCData(oldp+1586,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116),2);
        bufp->chgBit(oldp+1587,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969))));
        bufp->chgBit(oldp+1588,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638))));
        bufp->chgBit(oldp+1589,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)))));
        bufp->chgBit(oldp+1590,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977))));
        bufp->chgBit(oldp+1591,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646))));
        bufp->chgBit(oldp+1592,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)))));
        bufp->chgBit(oldp+1593,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985))));
        bufp->chgBit(oldp+1594,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406))));
        bufp->chgBit(oldp+1595,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)))));
        bufp->chgBit(oldp+1596,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993))));
        bufp->chgBit(oldp+1597,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                    >> 1U))));
        bufp->chgBit(oldp+1598,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993) 
                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                     >> 1U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)))));
        bufp->chgBit(oldp+1599,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244))));
        bufp->chgBit(oldp+1600,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                       ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1601,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)))));
        bufp->chgBit(oldp+1602,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)))));
        bufp->chgCData(oldp+1603,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412),2);
        bufp->chgCData(oldp+1604,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120),2);
        bufp->chgBit(oldp+1605,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)))));
        bufp->chgBit(oldp+1606,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)))));
        bufp->chgBit(oldp+1607,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)))));
        bufp->chgBit(oldp+1608,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)))));
        bufp->chgBit(oldp+1609,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)))));
        bufp->chgBit(oldp+1610,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)))));
        bufp->chgBit(oldp+1611,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)))));
        bufp->chgBit(oldp+1612,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)))));
        bufp->chgBit(oldp+1613,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)))));
        bufp->chgBit(oldp+1614,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)))));
        bufp->chgBit(oldp+1615,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)))));
        bufp->chgBit(oldp+1616,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)))));
        bufp->chgBit(oldp+1617,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                       ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006)))));
        bufp->chgBit(oldp+1618,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993) 
                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                              >> 1U)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)))))));
        bufp->chgBit(oldp+1619,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)))))));
        bufp->chgBit(oldp+1620,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)))))));
        bufp->chgBit(oldp+1621,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)))))));
        bufp->chgBit(oldp+1622,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)))))));
        bufp->chgBit(oldp+1623,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)))))));
        bufp->chgBit(oldp+1624,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790)) 
                                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)))))));
        bufp->chgCData(oldp+1625,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124),2);
        bufp->chgBit(oldp+1626,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))))))));
        bufp->chgBit(oldp+1627,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))))))));
        bufp->chgBit(oldp+1628,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))))))));
        bufp->chgBit(oldp+1629,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))))))));
        bufp->chgBit(oldp+1630,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))))))));
        bufp->chgBit(oldp+1631,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)) 
                                                | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                                   | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)))))))));
        bufp->chgBit(oldp+1632,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                                | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                                   | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)))))))));
        bufp->chgBit(oldp+1633,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                       ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)) 
                                                | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                       & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                          >> 1U)) 
                                                      | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                         >> 1U))))))))));
        bufp->chgCData(oldp+1634,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128),2);
        bufp->chgCData(oldp+1635,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416),2);
        bufp->chgBit(oldp+1636,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162));
        bufp->chgBit(oldp+1637,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                    >> 1U))));
        bufp->chgBit(oldp+1638,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                           >> 1U)) 
                                       | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1639,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169));
        bufp->chgBit(oldp+1640,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                    >> 1U))));
        bufp->chgBit(oldp+1641,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                           >> 1U)) 
                                       | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1642,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177));
        bufp->chgBit(oldp+1643,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                    >> 1U))));
        bufp->chgBit(oldp+1644,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182));
        bufp->chgBit(oldp+1645,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185));
        bufp->chgBit(oldp+1646,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                    >> 1U))));
        bufp->chgBit(oldp+1647,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190));
        bufp->chgBit(oldp+1648,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193));
        bufp->chgBit(oldp+1649,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                    >> 1U))));
        bufp->chgBit(oldp+1650,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198));
        bufp->chgCData(oldp+1651,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420),2);
        bufp->chgBit(oldp+1652,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201));
        bufp->chgBit(oldp+1653,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                    >> 1U))));
        bufp->chgBit(oldp+1654,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206));
        bufp->chgBit(oldp+1655,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209));
        bufp->chgBit(oldp+1656,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                    >> 1U))));
        bufp->chgBit(oldp+1657,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024214));
        bufp->chgBit(oldp+1658,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217));
        bufp->chgBit(oldp+1659,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                    >> 1U))));
        bufp->chgBit(oldp+1660,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024222));
        bufp->chgBit(oldp+1661,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225));
        bufp->chgBit(oldp+1662,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                    >> 1U))));
        bufp->chgBit(oldp+1663,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024230));
        bufp->chgBit(oldp+1664,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233));
        bufp->chgBit(oldp+1665,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                    >> 1U))));
        bufp->chgBit(oldp+1666,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024238));
        bufp->chgCData(oldp+1667,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424),2);
        bufp->chgBit(oldp+1668,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241));
        bufp->chgBit(oldp+1669,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                    >> 1U))));
        bufp->chgBit(oldp+1670,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024246));
        bufp->chgBit(oldp+1671,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249));
        bufp->chgBit(oldp+1672,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                    >> 1U))));
        bufp->chgBit(oldp+1673,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024254));
        bufp->chgBit(oldp+1674,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257));
        bufp->chgBit(oldp+1675,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                    >> 1U))));
        bufp->chgBit(oldp+1676,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024262));
        bufp->chgBit(oldp+1677,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265));
        bufp->chgBit(oldp+1678,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                    >> 1U))));
        bufp->chgBit(oldp+1679,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024270));
        bufp->chgBit(oldp+1680,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273));
        bufp->chgBit(oldp+1681,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                    >> 1U))));
        bufp->chgBit(oldp+1682,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024278));
        bufp->chgCData(oldp+1683,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428),2);
        bufp->chgBit(oldp+1684,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281));
        bufp->chgBit(oldp+1685,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                    >> 1U))));
        bufp->chgBit(oldp+1686,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024286));
        bufp->chgBit(oldp+1687,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289));
        bufp->chgBit(oldp+1688,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                    >> 1U))));
        bufp->chgBit(oldp+1689,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024294));
        bufp->chgBit(oldp+1690,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297));
        bufp->chgBit(oldp+1691,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                    >> 1U))));
        bufp->chgBit(oldp+1692,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024302));
        bufp->chgBit(oldp+1693,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305));
        bufp->chgBit(oldp+1694,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                    >> 1U))));
        bufp->chgBit(oldp+1695,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024310));
        bufp->chgBit(oldp+1696,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313));
        bufp->chgBit(oldp+1697,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                    >> 1U))));
        bufp->chgBit(oldp+1698,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024318));
        bufp->chgCData(oldp+1699,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432),2);
        bufp->chgBit(oldp+1700,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321));
        bufp->chgBit(oldp+1701,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                    >> 1U))));
        bufp->chgBit(oldp+1702,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024326));
        bufp->chgBit(oldp+1703,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329));
        bufp->chgBit(oldp+1704,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                    >> 1U))));
        bufp->chgBit(oldp+1705,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024334));
        bufp->chgBit(oldp+1706,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337));
        bufp->chgBit(oldp+1707,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                    >> 1U))));
        bufp->chgBit(oldp+1708,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024342));
        bufp->chgBit(oldp+1709,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345));
        bufp->chgBit(oldp+1710,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                    >> 1U))));
        bufp->chgBit(oldp+1711,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024350));
        bufp->chgBit(oldp+1712,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353));
        bufp->chgBit(oldp+1713,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                    >> 1U))));
        bufp->chgBit(oldp+1714,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024358));
        bufp->chgCData(oldp+1715,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436),2);
        bufp->chgBit(oldp+1716,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361));
        bufp->chgBit(oldp+1717,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                    >> 1U))));
        bufp->chgBit(oldp+1718,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024366));
        bufp->chgBit(oldp+1719,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369));
        bufp->chgBit(oldp+1720,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                    >> 1U))));
        bufp->chgBit(oldp+1721,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024374));
        bufp->chgBit(oldp+1722,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377));
        bufp->chgBit(oldp+1723,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                    >> 1U))));
        bufp->chgBit(oldp+1724,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024382));
        bufp->chgBit(oldp+1725,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385));
        bufp->chgBit(oldp+1726,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                    >> 1U))));
        bufp->chgBit(oldp+1727,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024390));
        bufp->chgBit(oldp+1728,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393));
        bufp->chgBit(oldp+1729,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                    >> 1U))));
        bufp->chgBit(oldp+1730,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024398));
        bufp->chgCData(oldp+1731,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244),2);
        bufp->chgCData(oldp+1732,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440),2);
        bufp->chgBit(oldp+1733,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401));
        bufp->chgBit(oldp+1734,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                    >> 1U))));
        bufp->chgBit(oldp+1735,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406));
        bufp->chgBit(oldp+1736,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409));
        bufp->chgBit(oldp+1737,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182))));
        bufp->chgBit(oldp+1738,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                              >> 1U)) 
                                          | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                             >> 1U))))));
        bufp->chgBit(oldp+1739,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417));
        bufp->chgBit(oldp+1740,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190))));
        bufp->chgBit(oldp+1741,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                              >> 1U)) 
                                          | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                             >> 1U))))));
        bufp->chgBit(oldp+1742,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425));
        bufp->chgBit(oldp+1743,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198))));
        bufp->chgBit(oldp+1744,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182))));
        bufp->chgBit(oldp+1745,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433));
        bufp->chgBit(oldp+1746,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206))));
        bufp->chgBit(oldp+1747,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190))));
        bufp->chgCData(oldp+1748,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444),2);
        bufp->chgBit(oldp+1749,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441));
        bufp->chgBit(oldp+1750,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024214))));
        bufp->chgBit(oldp+1751,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446));
        bufp->chgBit(oldp+1752,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449));
        bufp->chgBit(oldp+1753,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024222))));
        bufp->chgBit(oldp+1754,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454));
        bufp->chgBit(oldp+1755,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457));
        bufp->chgBit(oldp+1756,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024230))));
        bufp->chgBit(oldp+1757,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462));
        bufp->chgBit(oldp+1758,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465));
        bufp->chgBit(oldp+1759,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024238))));
        bufp->chgBit(oldp+1760,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470));
        bufp->chgBit(oldp+1761,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473));
        bufp->chgBit(oldp+1762,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024246))));
        bufp->chgBit(oldp+1763,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478));
        bufp->chgCData(oldp+1764,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448),2);
        bufp->chgBit(oldp+1765,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481));
        bufp->chgBit(oldp+1766,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024254))));
        bufp->chgBit(oldp+1767,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486));
        bufp->chgBit(oldp+1768,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489));
        bufp->chgBit(oldp+1769,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024262))));
        bufp->chgBit(oldp+1770,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494));
        bufp->chgBit(oldp+1771,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497));
        bufp->chgBit(oldp+1772,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024270))));
        bufp->chgBit(oldp+1773,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502));
        bufp->chgBit(oldp+1774,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505));
        bufp->chgBit(oldp+1775,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024278))));
        bufp->chgBit(oldp+1776,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510));
        bufp->chgBit(oldp+1777,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513));
        bufp->chgBit(oldp+1778,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024286))));
        bufp->chgBit(oldp+1779,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024518));
        bufp->chgCData(oldp+1780,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452),2);
        bufp->chgBit(oldp+1781,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521));
        bufp->chgBit(oldp+1782,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024294))));
        bufp->chgBit(oldp+1783,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024526));
        bufp->chgBit(oldp+1784,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529));
        bufp->chgBit(oldp+1785,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024302))));
        bufp->chgBit(oldp+1786,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024534));
        bufp->chgBit(oldp+1787,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537));
        bufp->chgBit(oldp+1788,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024310))));
        bufp->chgBit(oldp+1789,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024542));
        bufp->chgBit(oldp+1790,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545));
        bufp->chgBit(oldp+1791,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024318))));
        bufp->chgBit(oldp+1792,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024550));
        bufp->chgBit(oldp+1793,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553));
        bufp->chgBit(oldp+1794,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024326))));
        bufp->chgBit(oldp+1795,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024558));
        bufp->chgCData(oldp+1796,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456),2);
        bufp->chgBit(oldp+1797,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561));
        bufp->chgBit(oldp+1798,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024334))));
        bufp->chgBit(oldp+1799,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024566));
        bufp->chgBit(oldp+1800,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569));
        bufp->chgBit(oldp+1801,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024342))));
        bufp->chgBit(oldp+1802,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024574));
        bufp->chgBit(oldp+1803,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577));
        bufp->chgBit(oldp+1804,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024350))));
        bufp->chgBit(oldp+1805,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024582));
        bufp->chgBit(oldp+1806,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585));
        bufp->chgBit(oldp+1807,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024358))));
        bufp->chgBit(oldp+1808,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024590));
        bufp->chgBit(oldp+1809,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593));
        bufp->chgBit(oldp+1810,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024366))));
        bufp->chgBit(oldp+1811,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024598));
        bufp->chgCData(oldp+1812,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460),2);
        bufp->chgBit(oldp+1813,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601));
        bufp->chgBit(oldp+1814,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024374))));
        bufp->chgBit(oldp+1815,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024606));
        bufp->chgBit(oldp+1816,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609));
        bufp->chgBit(oldp+1817,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024382))));
        bufp->chgBit(oldp+1818,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024614));
        bufp->chgBit(oldp+1819,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617));
        bufp->chgBit(oldp+1820,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024390))));
        bufp->chgBit(oldp+1821,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024622));
        bufp->chgBit(oldp+1822,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625));
        bufp->chgBit(oldp+1823,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024398))));
        bufp->chgBit(oldp+1824,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024630));
        bufp->chgBit(oldp+1825,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633));
        bufp->chgBit(oldp+1826,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406))));
        bufp->chgBit(oldp+1827,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638));
        bufp->chgCData(oldp+1828,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464),2);
        bufp->chgBit(oldp+1829,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641));
        bufp->chgBit(oldp+1830,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                    >> 1U))));
        bufp->chgBit(oldp+1831,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646));
        bufp->chgBit(oldp+1832,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649));
        bufp->chgBit(oldp+1833,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))));
        bufp->chgBit(oldp+1834,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                 >> 1U)) 
                                             | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                                >> 1U)))))));
        bufp->chgBit(oldp+1835,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657));
        bufp->chgBit(oldp+1836,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))));
        bufp->chgBit(oldp+1837,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                 >> 1U)) 
                                             | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                >> 1U)))))));
        bufp->chgBit(oldp+1838,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665));
        bufp->chgBit(oldp+1839,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))));
        bufp->chgBit(oldp+1840,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)))));
        bufp->chgBit(oldp+1841,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673));
        bufp->chgBit(oldp+1842,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))));
        bufp->chgBit(oldp+1843,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)))));
        bufp->chgCData(oldp+1844,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468),2);
        bufp->chgBit(oldp+1845,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681));
        bufp->chgBit(oldp+1846,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))));
        bufp->chgBit(oldp+1847,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))));
        bufp->chgBit(oldp+1848,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689));
        bufp->chgBit(oldp+1849,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486))));
        bufp->chgBit(oldp+1850,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))));
        bufp->chgBit(oldp+1851,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697));
        bufp->chgBit(oldp+1852,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494))));
        bufp->chgBit(oldp+1853,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))));
        bufp->chgBit(oldp+1854,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705));
        bufp->chgBit(oldp+1855,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502))));
        bufp->chgBit(oldp+1856,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))));
        bufp->chgBit(oldp+1857,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713));
        bufp->chgBit(oldp+1858,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510))));
        bufp->chgBit(oldp+1859,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))));
        bufp->chgCData(oldp+1860,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472),2);
        bufp->chgBit(oldp+1861,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721));
        bufp->chgBit(oldp+1862,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024518))));
        bufp->chgBit(oldp+1863,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726));
        bufp->chgBit(oldp+1864,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729));
        bufp->chgBit(oldp+1865,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024526))));
        bufp->chgBit(oldp+1866,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734));
        bufp->chgBit(oldp+1867,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737));
        bufp->chgBit(oldp+1868,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024534))));
        bufp->chgBit(oldp+1869,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742));
        bufp->chgBit(oldp+1870,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745));
        bufp->chgBit(oldp+1871,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024542))));
        bufp->chgBit(oldp+1872,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750));
        bufp->chgBit(oldp+1873,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753));
        bufp->chgBit(oldp+1874,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024550))));
        bufp->chgBit(oldp+1875,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758));
        bufp->chgCData(oldp+1876,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476),2);
        bufp->chgBit(oldp+1877,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761));
        bufp->chgBit(oldp+1878,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024558))));
        bufp->chgBit(oldp+1879,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766));
        bufp->chgBit(oldp+1880,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769));
        bufp->chgBit(oldp+1881,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024566))));
        bufp->chgBit(oldp+1882,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774));
        bufp->chgBit(oldp+1883,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777));
        bufp->chgBit(oldp+1884,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024574))));
        bufp->chgBit(oldp+1885,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782));
        bufp->chgBit(oldp+1886,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785));
        bufp->chgBit(oldp+1887,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024582))));
        bufp->chgBit(oldp+1888,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790));
        bufp->chgBit(oldp+1889,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793));
        bufp->chgBit(oldp+1890,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024590))));
        bufp->chgBit(oldp+1891,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798));
        bufp->chgCData(oldp+1892,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248),2);
        bufp->chgCData(oldp+1893,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480),2);
        bufp->chgBit(oldp+1894,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801));
        bufp->chgBit(oldp+1895,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024598))));
        bufp->chgBit(oldp+1896,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806));
        bufp->chgBit(oldp+1897,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809));
        bufp->chgBit(oldp+1898,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024606))));
        bufp->chgBit(oldp+1899,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814));
        bufp->chgBit(oldp+1900,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817));
        bufp->chgBit(oldp+1901,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024614))));
        bufp->chgBit(oldp+1902,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822));
        bufp->chgBit(oldp+1903,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825));
        bufp->chgBit(oldp+1904,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024622))));
        bufp->chgBit(oldp+1905,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830));
        bufp->chgBit(oldp+1906,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833));
        bufp->chgBit(oldp+1907,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024630))));
        bufp->chgBit(oldp+1908,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838));
        bufp->chgCData(oldp+1909,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484),2);
        bufp->chgBit(oldp+1910,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024841));
        bufp->chgBit(oldp+1911,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638))));
        bufp->chgBit(oldp+1912,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846));
        bufp->chgBit(oldp+1913,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024849));
        bufp->chgBit(oldp+1914,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646))));
        bufp->chgBit(oldp+1915,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854));
        bufp->chgBit(oldp+1916,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024857));
        bufp->chgBit(oldp+1917,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406))));
        bufp->chgBit(oldp+1918,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862));
        bufp->chgBit(oldp+1919,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024865));
        bufp->chgBit(oldp+1920,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                    >> 1U))));
        bufp->chgBit(oldp+1921,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870));
        bufp->chgBit(oldp+1922,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024873));
        bufp->chgBit(oldp+1923,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649) 
                                 & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)))));
        bufp->chgBit(oldp+1924,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649) 
                                        & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478))) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                                   >> 1U))))))));
        bufp->chgCData(oldp+1925,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488),2);
        bufp->chgBit(oldp+1926,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881));
        bufp->chgBit(oldp+1927,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726))));
        bufp->chgBit(oldp+1928,((1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)) 
                                          | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169) 
                                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190)) 
                                             | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                                   >> 1U))))))));
        bufp->chgBit(oldp+1929,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889));
        bufp->chgBit(oldp+1930,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734))));
        bufp->chgBit(oldp+1931,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182))))));
        bufp->chgBit(oldp+1932,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897));
        bufp->chgBit(oldp+1933,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742))));
        bufp->chgBit(oldp+1934,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190))))));
        bufp->chgBit(oldp+1935,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905));
        bufp->chgBit(oldp+1936,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750))));
        bufp->chgBit(oldp+1937,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446)))));
        bufp->chgBit(oldp+1938,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913));
        bufp->chgBit(oldp+1939,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758))));
        bufp->chgBit(oldp+1940,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454)))));
        bufp->chgCData(oldp+1941,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492),2);
        bufp->chgBit(oldp+1942,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921));
        bufp->chgBit(oldp+1943,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766))));
        bufp->chgBit(oldp+1944,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)))));
        bufp->chgBit(oldp+1945,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929));
        bufp->chgBit(oldp+1946,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774))));
        bufp->chgBit(oldp+1947,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470)))));
        bufp->chgBit(oldp+1948,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937));
        bufp->chgBit(oldp+1949,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782))));
        bufp->chgBit(oldp+1950,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782)) 
                                 | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510)) 
                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)))));
        bufp->chgBit(oldp+1951,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945));
        bufp->chgBit(oldp+1952,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790))));
        bufp->chgBit(oldp+1953,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726))));
        bufp->chgBit(oldp+1954,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953));
        bufp->chgBit(oldp+1955,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798))));
        bufp->chgBit(oldp+1956,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734))));
        bufp->chgCData(oldp+1957,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496),2);
        bufp->chgBit(oldp+1958,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961));
        bufp->chgBit(oldp+1959,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806))));
        bufp->chgBit(oldp+1960,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742))));
        bufp->chgBit(oldp+1961,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969));
        bufp->chgBit(oldp+1962,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814))));
        bufp->chgBit(oldp+1963,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750))));
        bufp->chgBit(oldp+1964,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977));
        bufp->chgBit(oldp+1965,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822))));
        bufp->chgBit(oldp+1966,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758))));
        bufp->chgBit(oldp+1967,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985));
        bufp->chgBit(oldp+1968,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830))));
        bufp->chgBit(oldp+1969,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766))));
        bufp->chgBit(oldp+1970,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993));
        bufp->chgBit(oldp+1971,(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838))));
        bufp->chgBit(oldp+1972,((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838)) 
                                 | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774))));
        bufp->chgBit(oldp+1973,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412))));
        bufp->chgBit(oldp+1974,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104))));
        bufp->chgBit(oldp+1975,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                       >> 1U))));
        bufp->chgBit(oldp+1976,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108))));
        bufp->chgBit(oldp+1977,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                       >> 1U))));
        bufp->chgBit(oldp+1978,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                       >> 1U))));
        bufp->chgBit(oldp+1979,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112))));
        bufp->chgBit(oldp+1980,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                       >> 1U))));
        bufp->chgBit(oldp+1981,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116))));
        bufp->chgBit(oldp+1982,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                       >> 1U))));
        bufp->chgBit(oldp+1983,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120))));
        bufp->chgBit(oldp+1984,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                       >> 1U))));
        bufp->chgBit(oldp+1985,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124))));
        bufp->chgBit(oldp+1986,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                       >> 1U))));
        bufp->chgBit(oldp+1987,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128))));
        bufp->chgBit(oldp+1988,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                       >> 1U))));
        bufp->chgBit(oldp+1989,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248))));
        bufp->chgBit(oldp+1990,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416))));
        bufp->chgBit(oldp+1991,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420))));
        bufp->chgBit(oldp+1992,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424))));
        bufp->chgBit(oldp+1993,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428))));
        bufp->chgBit(oldp+1994,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432))));
        bufp->chgBit(oldp+1995,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436))));
        bufp->chgBit(oldp+1996,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440))));
        bufp->chgBit(oldp+1997,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444))));
        bufp->chgBit(oldp+1998,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448))));
        bufp->chgBit(oldp+1999,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452))));
        bufp->chgBit(oldp+2000,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456))));
        bufp->chgBit(oldp+2001,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460))));
        bufp->chgBit(oldp+2002,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464))));
        bufp->chgBit(oldp+2003,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468))));
        bufp->chgBit(oldp+2004,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472))));
        bufp->chgBit(oldp+2005,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476))));
        bufp->chgBit(oldp+2006,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480))));
        bufp->chgBit(oldp+2007,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                       >> 1U))));
        bufp->chgBit(oldp+2008,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484))));
        bufp->chgBit(oldp+2009,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488))));
        bufp->chgBit(oldp+2010,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492))));
        bufp->chgBit(oldp+2011,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496))));
        bufp->chgBit(oldp+2012,((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100))));
        bufp->chgBit(oldp+2013,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                       >> 1U))));
        bufp->chgBit(oldp+2014,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                       >> 1U))));
        bufp->chgBit(oldp+2015,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                       >> 1U))));
        bufp->chgBit(oldp+2016,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                       >> 1U))));
        bufp->chgBit(oldp+2017,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                       >> 1U))));
        bufp->chgBit(oldp+2018,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                       >> 1U))));
        bufp->chgBit(oldp+2019,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                       >> 1U))));
        bufp->chgBit(oldp+2020,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                       >> 1U))));
        bufp->chgBit(oldp+2021,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                       >> 1U))));
        bufp->chgBit(oldp+2022,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                       >> 1U))));
        bufp->chgBit(oldp+2023,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                       >> 1U))));
        bufp->chgBit(oldp+2024,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                       >> 1U))));
        bufp->chgBit(oldp+2025,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                       >> 1U))));
        bufp->chgBit(oldp+2026,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                       >> 1U))));
        bufp->chgBit(oldp+2027,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                       >> 1U))));
        bufp->chgBit(oldp+2028,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                       >> 1U))));
        bufp->chgBit(oldp+2029,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                       >> 1U))));
        bufp->chgBit(oldp+2030,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                       >> 1U))));
        bufp->chgBit(oldp+2031,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                       >> 1U))));
        bufp->chgBit(oldp+2032,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                       >> 1U))));
        bufp->chgBit(oldp+2033,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                       >> 1U))));
        bufp->chgBit(oldp+2034,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                       >> 1U))));
        bufp->chgBit(oldp+2035,((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                       >> 1U))));
        bufp->chgCData(oldp+2036,((0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))),8);
        bufp->chgCData(oldp+2037,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff),8);
        bufp->chgCData(oldp+2038,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff),8);
        bufp->chgCData(oldp+2039,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter),8);
        bufp->chgCData(oldp+2040,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter),5);
        bufp->chgSData(oldp+2041,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff),10);
        bufp->chgSData(oldp+2042,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter),16);
        bufp->chgCData(oldp+2043,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter),4);
        bufp->chgBit(oldp+2044,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving));
        bufp->chgCData(oldp+2045,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff),8);
        bufp->chgCData(oldp+2046,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter),4);
        bufp->chgSData(oldp+2047,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter),16);
    }
    bufp->chgBit(oldp+2048,(vlSelfRef.clk));
    bufp->chgBit(oldp+2049,(vlSelfRef.rst));
    bufp->chgQData(oldp+2050,(vlSelfRef.tb__DOT__io_out),33);
    bufp->chgQData(oldp+2052,((((QData)((IData)((0x7fU 
                                                 & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA))))) 
                                << 0x1aU) | (QData)((IData)(
                                                            (0x2800000U 
                                                             | (0xffffU 
                                                                & (- (IData)((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb))))))))),33);
    bufp->chgSData(oldp+2054,(vlSelfRef.tb__DOT__db_out),16);
    bufp->chgBit(oldp+2055,(vlSelfRef.tb__DOT__ALE));
    bufp->chgBit(oldp+2056,(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb));
    bufp->chgBit(oldp+2057,(vlSelfRef.tb__DOT__OEB));
    bufp->chgBit(oldp+2058,(vlSelfRef.tb__DOT__WEB));
    bufp->chgSData(oldp+2059,(vlSelfRef.tb__DOT__addr_latch),16);
    bufp->chgBit(oldp+2060,((1U & (~ (IData)(vlSelfRef.rst)))));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
