// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_ico(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vtb__ConstPool__TABLE_h8eac0fb8_0;

VL_INLINE_OPT void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18 = 0;
    IData/*31:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26 = 0;
    IData/*31:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 = 0;
    CData/*0:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tb__DOT__WEB = (1U & ((~ (IData)(vlSelfRef.clk)) 
                                    | (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6))));
    vlSelfRef.tb__DOT__OEB = (1U & ((~ ((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                          | ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                             | (2U 
                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)))) 
                                         | ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                            | (((8U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode)) 
                                               | ((0xaU 
                                                   == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                  | ((0xbU 
                                                      == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                     | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1)))))) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_34))) 
                                    | ((IData)(vlSelfRef.rst) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6))));
    vlSelfRef.tb__DOT__ALE = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_3) 
                              & ((~ (IData)(vlSelfRef.rst)) 
                                 & (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb 
        = (1U & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6) 
                     | (IData)(vlSelfRef.tb__DOT__ALE))) 
                 | (IData)(vlSelfRef.rst)));
    vlSelfRef.tb__DOT__io_out = (((QData)((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                  << 0x1aU) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX) 
                                                                << 0x18U) 
                                                               | (((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__DO) 
                                                                     << 0x16U) 
                                                                    | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK) 
                                                                       << 0x15U)) 
                                                                   | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted) 
                                                                        | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting)) 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__WEB) 
                                                                         << 0x13U))) 
                                                                  | (((IData)(vlSelfRef.tb__DOT__OEB) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSelfRef.tb__DOT__ALE) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelfRef.tb__DOT__db_out)))))))));
    vlSelfRef.tb__DOT__io_in = ((0x1ffff0000ULL & vlSelfRef.tb__DOT__io_in) 
                                | (IData)((IData)((
                                                   (~ 
                                                    (- (IData)(
                                                               (1U 
                                                                & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb)) 
                                                                   | (IData)(vlSelfRef.tb__DOT__OEB)))))) 
                                                   & vlSelfRef.tb__DOT__RAM
                                                   [
                                                   (0x7fffU 
                                                    & ((IData)(vlSelfRef.tb__DOT__addr_latch) 
                                                       >> 1U))]))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction 
        = (0xffffU & ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                       ? (IData)(vlSelfRef.tb__DOT__io_in)
                       : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__insin)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op 
        = ((0U != (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 0xcU))) & ((7U != (7U & 
                                               ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 0xcU))) 
                                       & ((0xf002U 
                                           != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                          & (0xf009U 
                                             != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__SOB_reg_m1 
        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                      [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                              >> 6U))] - (IData)(1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__branch_targ 
        = (0xffffU & ((0x3fU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                          >> 9U))) ? 
                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                       [7U] - (0x7eU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                        << 1U))) : 
                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                       [7U] + (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              << 8U)) 
                                  | (0x4000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                << 7U))) 
                                 | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                << 6U)) 
                                    | (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  << 5U)))) 
                                | ((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              << 4U)) 
                                   | ((0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 << 3U)) 
                                      | (0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   << 2U))))) 
                               | (0x1feU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            << 1U))))));
    __Vtableidx2 = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                     << 3U) | ((4U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                      >> 0xdU)) | (3U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__should_branch 
        = Vtb__ConstPool__TABLE_h8eac0fb8_0[__Vtableidx2];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH 
        = ((1U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                            >> 8U))) | ((1U == (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U))) 
                                        | ((2U == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                           | ((3U == 
                                               (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U))) 
                                              | ((0x40U 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                                 | ((0x41U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    | ((0x42U 
                                                        == 
                                                        (0x7fU 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 9U))) 
                                                       | ((0x43U 
                                                           == 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                               >> 9U))) 
                                                          | (0x3fU 
                                                             == 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                 >> 9U)))))))))));
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                >> 6U))];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr 
        = (0xffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                   >> 6U))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen 
        = (IData)(((0x7c00U == (0xfe00U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                   & (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
           ^ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                   >> 6U))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res 
        = (0xffffU & VL_SHIFTL_III(16,16,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                   [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U))], (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res 
        = (0xffffU & VL_SHIFTRS_III(16,16,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))], (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr 
        = (IData)((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                    >> 0xfU) & (~ ((6U == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 0xcU))) 
                                   | (0xeU == (0xfU 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  >> 0xcU)))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2 
        = (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                 [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 6U))] >> 0xfU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
        = ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
            [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                    >> 6U))] << 0x10U) | vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 6U)))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op 
        = (((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                              >> 6U))) | ((3U == (0x3ffU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     >> 6U))) 
                                          | ((0x28U 
                                              <= (0x1ffU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     >> 6U))) 
                                             & (0x37U 
                                                >= 
                                                (0x1ffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                    >> 6U)))))) 
           & ((0xf009U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
              & ((0x34U != (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                      >> 6U))) & ((0xf002U 
                                                   != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                  & (0xf003U 
                                                     != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special 
        = ((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                               >> 9U))) | ((0x39U == 
                                            (0x7fU 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 9U))) 
                                           | ((0x3aU 
                                               == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                              | ((0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                                 | ((0x3cU 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    | ((0x3dU 
                                                        == 
                                                        (0x7fU 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 9U))) 
                                                       | (0x3eU 
                                                          == 
                                                          (0x7fU 
                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                              >> 9U)))))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__collission 
        = (0x1fU & ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                    + ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                       + ((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                          + ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                             + ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                + ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                   + ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                      + ((0xaU == (0xfffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 4U))) 
                                         + ((0xbU == 
                                             (0xfffU 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 >> 4U))) 
                                            + ((0x89U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                    >> 8U))) 
                                               + ((0x34U 
                                                   == 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                       >> 6U))) 
                                                  + 
                                                  ((0x10U 
                                                    == 
                                                    (0x1fffU 
                                                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                        >> 3U))) 
                                                   + 
                                                   ((4U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH) 
                                                     + 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                           >> 0xcU))) 
                                                      + 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 0xcU))) 
                                                       + 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                             >> 0xcU))) 
                                                        + 
                                                        ((4U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                              >> 0xcU))) 
                                                         + 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                               >> 0xcU))) 
                                                          + 
                                                          ((6U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                >> 0xcU))) 
                                                           + 
                                                           ((0xeU 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                 >> 0xcU))) 
                                                            + 
                                                            ((1U 
                                                              == 
                                                              (0x3ffU 
                                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                  >> 6U))) 
                                                             + 
                                                             ((3U 
                                                               == 
                                                               (0x3ffU 
                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                   >> 6U))) 
                                                              + 
                                                              ((0x28U 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                    >> 6U))) 
                                                               + 
                                                               ((0x29U 
                                                                 == 
                                                                 (0x1ffU 
                                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                     >> 6U))) 
                                                                + 
                                                                ((0x2aU 
                                                                  == 
                                                                  (0x1ffU 
                                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                      >> 6U))) 
                                                                 + 
                                                                 ((0x2bU 
                                                                   == 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                       >> 6U))) 
                                                                  + 
                                                                  ((0x2cU 
                                                                    == 
                                                                    (0x1ffU 
                                                                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                        >> 6U))) 
                                                                   + 
                                                                   ((0x2dU 
                                                                     == 
                                                                     (0x1ffU 
                                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                         >> 6U))) 
                                                                    + 
                                                                    ((0x2eU 
                                                                      == 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                          >> 6U))) 
                                                                     + 
                                                                     ((0x2fU 
                                                                       == 
                                                                       (0x1ffU 
                                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                           >> 6U))) 
                                                                      + 
                                                                      ((0x30U 
                                                                        == 
                                                                        (0x1ffU 
                                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                            >> 6U))) 
                                                                       + 
                                                                       ((0x31U 
                                                                         == 
                                                                         (0x1ffU 
                                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                             >> 6U))) 
                                                                        + 
                                                                        ((0x32U 
                                                                          == 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                              >> 6U))) 
                                                                         + 
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x1ffU 
                                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                               >> 6U))) 
                                                                          + 
                                                                          ((0x234U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                           + 
                                                                           ((0x37U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                            + 
                                                                            ((0x237U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                             + 
                                                                             ((0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                              + 
                                                                              ((0x39U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                               + 
                                                                               ((0x3aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0xf003U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf009U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf002U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf004U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x88U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 8U))) 
                                                                                + 
                                                                                (0xf00aU 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_spi__start 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
           & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy)) 
              & (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_uart__start 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
           & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy)) 
              & (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26))
                                                 : tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2) 
            ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
               >> 0xfU)) ? ((IData)(1U) + (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res))
            : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
        = ((IData)((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                     >> 0xfU) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)))
            ? ((IData)(1U) + (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered))
            : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
        = VL_SHIFTL_III(32,32,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
        = VL_SHIFTR_III(32,32,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count));
    if ((0x28U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags = 4U;
    } else if ((0x29U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (1U | ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                      ? (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 7U))
                                      : (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 0xfU))) 
                                    << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                (0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                                 : 
                                                (0xffffU 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               << 2U))));
    } else if ((0x2aU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(1U) 
                                               + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                              >> 7U))
                                 : (1U & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x7fU == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0x7fffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x2bU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                          - (IData)(1U)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               - (IData)(1U)) 
                                              >> 7U))
                                 : (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                           - (IData)(1U)) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   - (IData)(1U))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   - (IData)(1U))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0U == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x2cU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(1U) 
                                               + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                              >> 7U))
                                 : (1U & (((IData)(1U) 
                                           + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x80U == (0xffU & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                           : (0x8000U == (0xffffU & 
                                          ((IData)(1U) 
                                           + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? (0U != (0xffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                                    : (0U != (0xffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))))));
    } else if ((0x2fU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             >> 0xfU)) 
                              << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                           ? (0U == 
                                              (0xffU 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                           : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                         << 2U)));
    } else if ((0x32U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x80U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                              | (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                          >> 1U))) : 
                          ((0x8000U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                           | (0x7fffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                         >> 1U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   >> 1U)))
                                            : (0U == 
                                               (0x7fffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   >> 1U)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))));
    } else if ((0x33U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                       << 1U)) : (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                     << 1U))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 6U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xeU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0x7fU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                            : (0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               >> 6U))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xeU))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xfU))))));
    } else if ((0x30U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                        << 7U)) | (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                      >> 1U)))
                           : ((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 0xfU)) 
                              | (0x7fffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 1U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xfeU 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                                       & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))
                                            : (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                                       & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))));
    } else if ((0x31U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))
                           : ((0xfffeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                          << 1U)) | 
                              (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 6U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xeU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))
                                            : ((0U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               >> 6U))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xeU))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xfU))))));
    } else if ((3U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((0xff00U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      << 8U)) | (0xffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                    >> 8U))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                              >> 0xcU)) | ((0U == (0xffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                      >> 8U))) 
                                           << 2U)));
    } else if ((0x2dU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x7fU == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                           : ((0x7fffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? ((0xffU == (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                                    : ((0xffffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
    } else if ((0x2eU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x80U == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0x8000U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? ((0U == (0xffU 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                                    : ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
    } else if ((0x37U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (- (IData)((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                           >> 3U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                       | ((4U & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                     >> 3U)) << 2U)) 
                          | (3U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x237U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                        << 8U)) | (0x4000U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                                      << 7U))) 
                           | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 6U)) | 
                              (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 5U)))) 
                          | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 4U)) | 
                              (0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 3U))) | 
                             ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 2U)) | 
                              ((0x100U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                              >> 4U)) | (((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x234U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
    } else if ((1U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            << 8U)) 
                                | (0x4000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              << 7U))) 
                               | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              << 6U)) 
                                  | (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                << 5U)))) 
                              | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             << 4U)) 
                                  | (0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               << 3U))) 
                                 | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               << 2U)) 
                                    | ((0x100U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                  << 1U)) 
                                       | (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))))
                           : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((2U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                    >> 7U) : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp))
                                            : (0U == 
                                               (0xffffU 
                                                & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 7U))) 
                              & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                        >> 7U)) == 
                                 (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                        >> 7U)))) : 
                          (((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 0xfU)) != (1U 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                    >> 0xfU))) 
                           & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                      >> 0xfU))))) 
                         << 1U) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                          ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                             >> 8U)
                                          : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                             >> 0x10U))))));
    } else if ((6U == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                               >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add);
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                               >> 0xcU)) | ((0U == 
                                             (0xffffU 
                                              & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add)) 
                                            << 2U)) 
                       | (((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 0xfU)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 0xfU))) 
                            & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                      >> 0xfU)))) << 1U) 
                          | (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                                   >> 0x10U)))));
    } else if ((0xeU == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub);
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                               >> 0xcU)) | ((0U == 
                                             (0xffffU 
                                              & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub)) 
                                            << 2U)) 
                       | (((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 0xfU)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 0xfU))) 
                            & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                      >> 0xfU)))) << 1U) 
                          | (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                                   >> 0x10U)))));
    } else if ((3U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((4U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((5U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x3cU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                              >> 0x1cU)) | (((0U == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res) 
                                             << 2U) 
                                            | (1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                                                     >> 0x10U)) 
                                                   | (0xffffU 
                                                      == 
                                                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                                                       >> 0x10U))))))));
    } else if ((0x39U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s 
                               >> 0x1cU)) | ((0U == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s) 
                                             << 2U)) 
                       | ((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                            | ((0x7fffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                [(7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              >> 6U)))]) 
                               > (0x7fffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))) 
                           << 1U) | (0U == ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                             [(7U & 
                                               ((IData)(1U) 
                                                + ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 6U)))] 
                                             << 0x10U) 
                                            | vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                            [(7U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))])))));
    } else if ((0x3aU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        if ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
                = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res));
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
                = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res) 
                                   >> 0xcU)) | ((0U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res)) 
                                                << 2U)) 
                           | ((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res) 
                                       >> 0xfU)) != 
                                (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU))) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))] 
                                    >> (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count) 
                                                - (IData)(1U))))))));
        } else {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
                = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res));
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
                = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res) 
                                   >> 0xcU)) | ((0U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res)) 
                                                << 2U)) 
                           | ((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res) 
                                       >> 0xfU)) != 
                                (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU))) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))] 
                                    >> (0xfU & (- (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count))))))));
        }
    } else if ((0x3bU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                        ? (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
                                   >> 0x1cU)) | ((0U 
                                                  == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res) 
                                                 << 2U)) 
                           | ((((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU)) != 
                                (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
                                 >> 0x1fU)) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
                                    >> (0x1fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count) 
                                                 - (IData)(1U)))))))
                        : (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
                                   >> 0x1cU)) | ((0U 
                                                  == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res) 
                                                 << 2U)) 
                           | ((((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU)) != 
                                (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
                                 >> 0x1fU)) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
                                    >> (0x1fU & (- (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)))))))));
    } else if ((0x3dU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff) 
                              >> 0xcU)) | (((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff)) 
                                            << 2U) 
                                           | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW));
    }
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special));
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33 
        = ((IData)(tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18) 
           | ((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                >> 6U))) | (4U == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U)))));
    if (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 3U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 9U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 6U));
    }
    if (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 3U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
    }
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((5U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))))
                       ? (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
                          - (IData)(1U)) : (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
                                            - (IData)(2U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__incr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((3U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))))
                       ? ((IData)(1U) + tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32)
                       : ((IData)(2U) + tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_decr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((5U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg))))
                       ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
                          - (IData)(1U)) : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
                                            - (IData)(2U))));
}

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_h4d026e8f_0;

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 0;
    CData/*4:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr = 0;
    CData/*4:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0;
    CData/*0:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index = 0;
    CData/*0:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg = 0;
    CData/*0:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ = 0;
    CData/*0:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap = 0;
    QData/*63:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter = 0;
    IData/*31:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res = 0;
    CData/*4:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter = 0;
    CData/*1:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay = 0;
    CData/*4:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff = 0;
    CData/*3:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter = 0;
    SData/*9:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff = 0;
    SData/*15:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving = 0;
    CData/*7:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff = 0;
    CData/*3:0*/ __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v0;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v1;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v20;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v20 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v38;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v38 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47;
    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48;
    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48 = 0;
    // Body
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v0 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v1 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v20 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 = 0U;
    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48 = 0U;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr;
    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row32_1 = 0U;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_3 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 5U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_5 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 9U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_4 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 7U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_1 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                 >> 0xfU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_6 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 0xbU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_2 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 0xeU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                              >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_1 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_2 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_2 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_8 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 0xfU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_7 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 0xdU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_3 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 0xcU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                              >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_3 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 0xbU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                              >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_2 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 0xdU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                              >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_3 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_3 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_4 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 0xaU) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                              >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_4 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 9U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_5 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 8U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_4 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_5 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_4 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_5 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_5 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 7U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_6 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 6U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_6 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 5U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_6 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_6 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_1 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_0 
        = (1U & (~ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_0 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 1U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_0 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 1U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_7 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 4U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_8 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 3U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_8 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 2U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_8 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  >> 1U) & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                            >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_8 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                 & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_7 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_0 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_1 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_0 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_7 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_7 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_7 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_7 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xfU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_7 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 1U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 2U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xfU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_6 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 3U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xdU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xaU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_2 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xbU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xcU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 5U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_1 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 0xdU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 0xeU) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 3U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_5 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 4U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 5U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 0xbU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_4 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 6U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 7U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 9U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_3 
        = (1U & ((((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                    >> 8U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 9U) & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550))) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 7U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered 
        = ((((((0x80000000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128) 
                                << 0x1fU) ^ ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881) 
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
               | (0x40000000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                                  ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889) 
                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                     | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)) 
                                        | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425) 
                                            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462)) 
                                           | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198)) 
                                              | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182)))))) 
                                 << 0x1eU))) | ((0x20000000U 
                                                 & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                                     ^ 
                                                     (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897) 
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
                                                       ^ 
                                                       (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905) 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                                        | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681) 
                                                            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)) 
                                                           | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
                                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478)) 
                                                              | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446))))) 
                                                      << 0x1cU)))) 
             | (((0x8000000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                 ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)) 
                                       | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
                                           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486)) 
                                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454))))) 
                                << 0x1bU)) | (0x4000000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
                                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494)) 
                                                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462))))) 
                                                 << 0x1aU))) 
                | ((0x2000000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                   ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                      | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705) 
                                          & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                         | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
                                             & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502)) 
                                            | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470))))) 
                                  << 0x19U)) | (0x1000000U 
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
            | ((((0x800000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945) 
                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790)) 
                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726)))) 
                               << 0x17U)) | (0x400000U 
                                             & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953) 
                                                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                                  | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
                                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798)) 
                                                     | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734)))) 
                                                << 0x16U))) 
                | ((0x200000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                  ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961) 
                                      & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                                     | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806)) 
                                        | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742)))) 
                                 << 0x15U)) | (0x100000U 
                                               & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
                                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814)) 
                                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750)))) 
                                                  << 0x14U)))) 
               | (((0x80000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                 ^ (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977) 
                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                                    | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822)) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758)))) 
                                << 0x13U)) | (0x40000U 
                                              & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985) 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                                   | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
                                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830)) 
                                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766)))) 
                                                 << 0x12U))) 
                  | ((0x20000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                   << 0x11U) ^ ((0xfffe0000U 
                                                 & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993) 
                                                     << 0x11U) 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                                                       << 0x10U))) 
                                                | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838)) 
                                                    | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774)) 
                                                   << 0x11U)))) 
                     | (0x10000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                     ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006)) 
                                    << 0x10U)))))) 
           | (((((0x8000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                              ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014)) 
                             << 0xfU)) | (0x4000U & 
                                          (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                            ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022)) 
                                           << 0xeU))) 
                | ((0x2000U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030)) 
                               << 0xdU)) | (0x1000U 
                                            & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038)) 
                                               << 0xcU)))) 
               | (((0x800U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                               ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046)) 
                              << 0xbU)) | (0x400U & 
                                           (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                             ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054)) 
                                            << 0xaU))) 
                  | ((0x200U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                 ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062)) 
                                << 9U)) | (0x100U & 
                                           (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                             ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
                                            << 8U))))) 
              | ((((0x80U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                              ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
                             << 7U)) | (0x40U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                                  ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
                                                 << 6U))) 
                  | ((0x20U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
                               << 5U)) | (0x10U & (
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                                    ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
                                                   << 4U)))) 
                 | (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                             ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
                            << 3U)) | (4U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                              ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
                                             << 2U))) 
                    | ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                               << 1U) ^ (0xfffffffeU 
                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244)))) 
                       | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244)))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
        = (((((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458) 
                << 0x1fU) | (0x40000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451) 
                                            << 0x1eU))) 
              | ((0x20000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444) 
                                 << 0x1dU)) | (0x10000000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437) 
                                                  << 0x1cU)))) 
             | (((0x8000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430) 
                                << 0x1bU)) | (0x4000000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423) 
                                                 << 0x1aU))) 
                | ((0x2000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416) 
                                  << 0x19U)) | (0x1000000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409) 
                                                   << 0x18U))))) 
            | ((((0x800000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402) 
                               << 0x17U)) | (0x400000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395) 
                                                << 0x16U))) 
                | ((0x200000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388) 
                                 << 0x15U)) | (0x100000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381) 
                                                  << 0x14U)))) 
               | (((0x80000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374) 
                                << 0x13U)) | (0x40000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367) 
                                                 << 0x12U))) 
                  | ((0x20000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360) 
                                  << 0x11U)) | (0x10000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353) 
                                                   << 0x10U)))))) 
           | (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346) 
                             << 0xfU)) | (0x4000U & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339) 
                                           << 0xeU))) 
                | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332) 
                               << 0xdU)) | (0x1000U 
                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325) 
                                               << 0xcU)))) 
               | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318) 
                              << 0xbU)) | (0x400U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311) 
                                            << 0xaU))) 
                  | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304) 
                                << 9U)) | (0x100U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297) 
                                            << 8U))))) 
              | ((((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290) 
                             << 7U)) | (0x40U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283) 
                                                 << 6U))) 
                  | ((0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276) 
                               << 5U)) | (0x10U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269) 
                                                   << 4U)))) 
                 | ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262) 
                           << 3U)) | ((4U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258) 
                                             << 2U)) 
                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_1))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
        = ((((((0x80000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451) 
                               << 0x1eU)) | (0x40000000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444) 
                                                << 0x1dU))) 
              | ((0x20000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437) 
                                 << 0x1cU)) | (0x10000000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430) 
                                                  << 0x1bU)))) 
             | (((0x8000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423) 
                                << 0x1aU)) | (0x4000000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416) 
                                                 << 0x19U))) 
                | ((0x2000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409) 
                                  << 0x18U)) | (0x1000000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402) 
                                                   << 0x17U))))) 
            | ((((0x800000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395) 
                               << 0x16U)) | (0x400000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388) 
                                                << 0x15U))) 
                | ((0x200000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381) 
                                 << 0x14U)) | (0x100000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374) 
                                                  << 0x13U)))) 
               | (((0x80000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367) 
                                << 0x12U)) | (0x40000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360) 
                                                 << 0x11U))) 
                  | ((0x20000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353) 
                                  << 0x10U)) | (0x10000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346) 
                                                   << 0xfU)))))) 
           | (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339) 
                             << 0xeU)) | (0x4000U & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332) 
                                           << 0xdU))) 
                | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325) 
                               << 0xcU)) | (0x1000U 
                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318) 
                                               << 0xbU)))) 
               | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311) 
                              << 0xaU)) | (0x400U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304) 
                                            << 9U))) 
                  | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297) 
                                << 8U)) | (0x100U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290) 
                                            << 7U))))) 
              | ((((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283) 
                             << 6U)) | (0x40U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276) 
                                                 << 5U))) 
                  | ((0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269) 
                               << 4U)) | (0x10U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262) 
                                                   << 3U)))) 
                 | (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258) 
                            << 2U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_2) 
                                       << 2U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row1_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_0))))));
    if (vlSelfRef.rst) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints = 0x1fU;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_int_en = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA_ints = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre = 0x10U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_top = 0x8000U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre = 0x20U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_top = 0x8000U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX = 1U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter = 0x1fU;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_dout = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_dout = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_has_byte = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter = 0U;
    } else {
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xfeU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (1U & (((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints)) 
                       & (IData)((vlSelfRef.tb__DOT__io_in 
                                  >> 0x1aU))) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                                 & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack))))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xfbU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (4U & ((((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints) 
                            >> 1U)) & (IData)((vlSelfRef.tb__DOT__io_in 
                                               >> 0x1bU))) 
                       << 2U) | (0xfffffffcU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                                     >> 2U)) 
                                                   << 2U))))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xefU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (0x10U & ((((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints) 
                               >> 2U)) & (IData)((vlSelfRef.tb__DOT__io_in 
                                                  >> 0x1cU))) 
                          << 4U) | (0xfffffff0U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                                        >> 4U)) 
                                                      << 4U))))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xbfU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (0x40U & ((((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints) 
                               >> 3U)) & (IData)((vlSelfRef.tb__DOT__io_in 
                                                  >> 0x1dU))) 
                          << 6U) | (0xffffffc0U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                                        >> 6U)) 
                                                      << 6U))))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0x7fU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (0x80U & ((((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints) 
                               >> 4U)) & (IData)((vlSelfRef.tb__DOT__io_in 
                                                  >> 0x1eU))) 
                          << 7U) | (0xffffff80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                                        >> 7U)) 
                                                      << 7U))))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xfdU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (2U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                      & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                             >> 1U)) << 1U))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xdfU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                         & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                >> 5U)) << 5U))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints 
            = (0x1fU & ((IData)((vlSelfRef.tb__DOT__io_in 
                                 >> 0x1aU)) | (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA_ints))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs = 
            ((0xf7U & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
             | (8U & ((0xfffffff8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs) 
                                      & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack) 
                                             >> 3U)) 
                                         << 3U))) | 
                      (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_has_byte) 
                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_int_en)) 
                       << 3U))));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr)));
        __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr)));
        if ((((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr)) 
             >= (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0)));
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0) 
                 >= (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_top))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 = 0U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs 
                    = ((0xfdU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
                       | (2U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens) 
                                << 1U)));
            }
        }
        if ((((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr)) 
             >= (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1)));
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1) 
                 >= (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_top))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 = 0U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs 
                    = ((0xdfU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__irqs)) 
                       | (0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens) 
                                   << 4U)));
            }
        }
        if (((((((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                   | (1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                  | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                 | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                | (4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
               | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
              | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
             | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))) {
            if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA;
                }
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA 
                        = (0x7fU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
                }
            } else if ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA;
                }
            } else if ((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = (0x7fU & (IData)((vlSelfRef.tb__DOT__io_in 
                                            >> 0x1aU)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA_ints;
                }
            } else if ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre;
                }
            } else if ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre;
                }
            } else if ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_top;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_top;
            }
            if ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                    if ((2U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                        if ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                            if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA_ints 
                                    = (0x1fU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
                            }
                        }
                        if ((3U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                            if ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                                }
                            }
                            if ((4U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                if ((5U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                    if ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                        if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_top 
                                                = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                                        }
                                    }
                                    if ((6U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                        if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_top 
                                                = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                                        }
                                    }
                                }
                                if ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                    if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre 
                                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                    if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA 
                            = (0x7fU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
                    }
                }
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                          | (9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                         | (0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                        | (0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                       | (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                      | (0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                     | (0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                    | (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))) {
            if ((8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                } else {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0;
                }
            } else if ((9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                } else {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1;
                }
            } else if ((0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = (0x2800U | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens));
                }
            } else if ((0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_div;
                }
            } else if ((0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_dout;
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy) 
                            << 7U) | (0x7fU & (- (IData)((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy)))));
                }
            } else if ((0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_dout;
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff 
                    = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy) 
                        << 7U) | (0x7fU & (- (IData)((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy)))));
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen)))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff = 0xffffU;
        }
        if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                            | (1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                           | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                          | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                         | (4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                        | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                       | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                      | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))))) {
            if (((((((((8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                       | (9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                      | (0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                     | (0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                    | (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                   | (0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                  | (0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                 | (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))) {
                if ((8U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                    if ((9U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                        if ((0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                            if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr_int_ens 
                                    = (3U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_uart__start) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter = 0xaU;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff 
                = (0x200U | (0x1feU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                       << 1U)));
        }
        if ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy = 1U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter)));
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_div))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter 
                    = (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter) 
                               - (IData)(1U)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter = 0U;
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX 
                    = (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff 
                    = (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff) 
                                 >> 1U));
            }
        } else {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX = 1U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy = 0U;
        }
        if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_spi__start) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter = 0x10U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff 
                = (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff = 1U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK = 0U;
        }
        if ((0x1fU != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy = 1U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter)));
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_div))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter 
                    = (0x1fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter) 
                                - (IData)(1U)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter = 0U;
                if ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff 
                        = ((0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb__DOT__io_in 
                                                           >> 0x17U))));
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK = 1U;
                } else {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__DO 
                        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff) 
                                 >> 7U));
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK = 0U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff 
                        = (0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff) 
                                    << 1U));
                }
            }
        } else {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK = 0U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__DO = 0U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy = 0U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_dout 
                = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff;
        }
        if ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1) 
              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__int_ack_num) 
                 >> 3U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
                            & (0x10U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_has_byte = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving)) 
                   & (~ (IData)((vlSelfRef.tb__DOT__io_in 
                                 >> 0x19U)))))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving = 1U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter = 8U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter = 0U;
        }
        if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter)));
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_div))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter 
                    = (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter) 
                               - (IData)(1U)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter = 0U;
                if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving = 0U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_dout 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_has_byte = 1U;
                } else {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff 
                        = ((0x80U & ((IData)((vlSelfRef.tb__DOT__io_in 
                                              >> 0x19U)) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff) 
                                                   >> 1U)));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.rst) | (0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup 
            = ((IData)(vlSelfRef.rst) ? 3U : (3U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup) 
                                               - (IData)(1U))));
        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v0 = 1U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr = 0xafafU;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2 = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__insin = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__handling_int = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__IVB = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter = 0ULL;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter = 0U;
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay = 0U;
        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v1 = 1U;
    } else {
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
            = ((0xefU & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
               | (0x10U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)));
        if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index = 0U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg = 0U;
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__insin 
                    = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH)) 
                           & (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap) 
                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                    >> 4U)))))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8 
                        = (0xffffU & ((IData)(2U) + 
                                      vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [7U]));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8 = 1U;
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap 
                    = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                             >> 4U));
                if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap) 
                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                        >> 4U))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 2U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if ((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__collission)) 
                             | (1U < (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__collission))) 
                            | (((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  >> 6U))) 
                                | (4U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U)))) 
                               & (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode))))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 4U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if (((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                            | (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting 
                        = (1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted 
                        = (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 7U;
                } else if ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op) 
                             | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op)) 
                            | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special))) {
                    if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode))) {
                        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 
                            = (0xffffU & ((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))
                                           ? ((IData)(2U) 
                                              + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                              [7U])
                                           : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                          [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg]));
                        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
                            = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op)
                                ? (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                                    | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)))
                                    ? 2U : 5U) : 3U);
                    } else {
                        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op 
                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr;
                        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode 
                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode;
                        if (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                             | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 1U;
                        } else {
                            if (((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                                 | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                                if ((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))) {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                        [7U];
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9 = 1U;
                                } else {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg;
                                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg;
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10 = 1U;
                                }
                                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg;
                            } else {
                                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                                    = (0xffffU & ((7U 
                                                   == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                   [7U])
                                                   : 
                                                  vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                  [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg]));
                            }
                            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
                                = (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                                    | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)))
                                    ? 2U : 4U);
                            if (((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                                 | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                                if ((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))) {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11 
                                        = (0xffffU 
                                           & ((IData)(4U) 
                                              + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                              [7U]));
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11 = 1U;
                                } else {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__incr_reg;
                                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg;
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12 = 1U;
                                }
                            }
                        }
                    }
                } else if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13 
                        = (0xffffU & ((((0x3fU != (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__should_branch) 
                                           == (1U & 
                                               ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 8U)))) 
                                       | (IData)(((0x7e00U 
                                                   == 
                                                   (0xfe00U 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__SOB_reg_m1)))))
                                       ? ((IData)(2U) 
                                          + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__branch_targ))
                                       : ((IData)(2U) 
                                          + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                          [7U])));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13 = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                    if ((0x3fU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 9U)))) {
                        __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 
                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__SOB_reg_m1;
                        __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 
                            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U));
                        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14 = 1U;
                    }
                } else if (((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              >> 6U))) 
                            | (4U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 9U))))) {
                    if ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode))) {
                        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode 
                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode;
                        if (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                             | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 1U;
                        } else {
                            if (((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                                 | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                                if ((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))) {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                        [7U];
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15 = 1U;
                                } else {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg;
                                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg;
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16 = 1U;
                                }
                                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
                                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg;
                            } else {
                                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
                                    = (0xffffU & ((7U 
                                                   == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                   [7U])
                                                   : 
                                                  vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                  [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg]));
                            }
                            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 8U;
                            if (((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                                 | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                                if ((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))) {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17 
                                        = (0xffffU 
                                           & ((IData)(4U) 
                                              + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                              [7U]));
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17 = 1U;
                                } else {
                                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__incr_reg;
                                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 
                                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg;
                                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18 = 1U;
                                }
                            }
                        }
                    }
                } else if (((((0x10U == (0x1fffU & 
                                         ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                          >> 3U))) 
                              | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                             | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                            | (0x34U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 6U))))) {
                    if ((0x34U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                             >> 6U)))) {
                        __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19 
                            = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                          [6U] + (0x7eU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     << 1U))));
                        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19 = 1U;
                    }
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xaU;
                } else if ((0x89U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 8U)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 0x1cU;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 0xcU;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 0x10U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if ((0x88U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 8U)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ = 0x18U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                } else if ((0xf003U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) {
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v20 = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                } else if ((0xf00aU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                        = (0x10U | (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                } else if ((0xf004U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__IVB 
                        = (0x7ffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                     [0U] >> 5U));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                } else if ((0xaU == (0xfffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 4U)))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                        = ((0xf0U & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                           | (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                      & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                } else if ((0xbU == (0xfffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 4U)))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                        = ((0xf0U & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                           | (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                } else if (((0xf009U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                            | (0xf002U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21 
                    = (0xffffU & ((IData)(2U) + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [7U]));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index 
                    = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                if (((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                       >> 6U))) | (4U 
                                                   == 
                                                   (0x7fU 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                       >> 9U))))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
                        = (0xffffU & (((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))
                                        ? ((IData)(2U) 
                                           + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                           [7U]) : 
                                       vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg]) 
                                      + (IData)(vlSelfRef.tb__DOT__io_in)));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 8U;
                } else if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op) 
                            & ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                               | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode))))) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 2U;
                } else {
                    if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op) 
                         | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special))) {
                        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index 
                            = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                    }
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg] 
                                      + (IData)(vlSelfRef.tb__DOT__io_in)));
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 4U;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22 
                    = (0xffffU & ((IData)(2U) + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [7U]));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index 
                    = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                if (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                     | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg] 
                                      + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index)));
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
                    = ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode))
                        ? 5U : 4U);
            }
        }
        if ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg = 1U;
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode 
                = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode;
            if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode))) {
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2 
                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                    [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg];
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 3U;
            } else {
                if (((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                     | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)))) {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_decr_reg;
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_decr_reg;
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg;
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23 = 1U;
                } else {
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg] 
                                      + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index)));
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 4U;
                if (((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                     | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 
                        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                                       & ((3U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg))))
                                       ? ((IData)(1U) 
                                          + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31)
                                       : ((IData)(2U) 
                                          + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31)));
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg;
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24 = 1U;
                }
            }
        }
        if ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                = (0xffU & ((0x234U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  >> 6U)))
                             ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)
                             : ((0xf0U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                                | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags))));
            if ((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 9U)))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay = 2U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0x10U;
            } else if ((0x39U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 9U)))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter = 0U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                    = (QData)((IData)(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)
                                        ? ((IData)(1U) 
                                           + (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in))
                                        : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res = 0U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0x11U;
            } else if ((0x3aU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 9U)))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 
                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result;
                __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 
                    = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 6U));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            } else if ((0x3bU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 9U)))) {
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_rshift) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                  >> 6U)))) {
                        __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 
                            = (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
                               >> 0x10U);
                        __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 
                            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U));
                        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26 = 1U;
                    }
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 
                        = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res);
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 
                        = (7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                       >> 6U)));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27 = 1U;
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                  >> 6U)))) {
                        __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 
                            = (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
                               >> 0x10U);
                        __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 
                            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U));
                        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28 = 1U;
                    }
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 
                        = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res);
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 
                        = (7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                       >> 6U)));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29 = 1U;
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            } else if ((0x3eU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 9U)))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            } else if (((((0x2fU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))) 
                          | (0x234U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  >> 6U)))) 
                         | (2U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                         >> 0xcU)))) 
                        | (3U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                        >> 0xcU))))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            } else if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode))) {
                if ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                      & (0x237U != (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              >> 6U)))) 
                     & (1U != (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 0xcU))))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 
                        = (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result));
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg;
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30 = 1U;
                } else {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result;
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg;
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31 = 1U;
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            } else {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io 
                    = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                        & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr)))
                        ? ((0xff00U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io)) 
                           | (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result)))
                        : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))
                            ? ((0xff00U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result) 
                                           << 8U)) 
                               | (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io)))
                            : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 6U;
            }
        }
        if ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 4U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ 
                        = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode = 1U;
                } else {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
                        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op) 
                            & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg)))
                            ? 5U : 3U);
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io 
                        = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                    if ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op) 
                          | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special)) 
                         | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op) 
                            & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg))))) {
                        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 
                            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op)
                                           ? ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))
                                               ? (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__io_in 
                                                             >> 8U)))
                                               : (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__io_in)))
                                           : (IData)(vlSelfRef.tb__DOT__io_in)));
                    }
                    if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op) 
                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg))) {
                        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2 
                            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op)
                                           ? ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))
                                               ? (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__io_in 
                                                             >> 8U)))
                                               : (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__io_in)))
                                           : (IData)(vlSelfRef.tb__DOT__io_in)));
                    }
                }
            }
        }
        if ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            }
        }
        if ((8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode) {
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
                        = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode = 1U;
                } else if ((4U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 9U)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32 
                        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [6U] - (IData)(2U)));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32 = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                        [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                >> 6U))];
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 9U;
                } else {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ;
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33 = 1U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                }
            }
        }
        if ((9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                if ((7U != (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                  >> 6U)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                        [7U];
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 
                        = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 6U));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34 = 1U;
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35 
                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ;
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35 = 1U;
            }
        }
        if ((0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36 
                    = (0xffffU & ((IData)(2U) + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [6U]));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36 = 1U;
                if ((0x34U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                         >> 6U)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                        [5U];
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37 = 1U;
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v38 
                        = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                } else {
                    if ((((7U != (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                          & (2U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                         & (6U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))) {
                        __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39 
                            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                            [(7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))];
                        __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39 = 1U;
                    }
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
                        = (((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                            | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))
                            ? 0xbU : 0U);
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 
                        = (((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                            | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))
                            ? 7U : (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)));
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 
                        = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40 = 1U;
                }
            }
        }
        if ((0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41 
                    = (0xffffU & ((IData)(2U) + vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [6U]));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                    = (0xffU & ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))
                                 ? (0xefU & (IData)(vlSelfRef.tb__DOT__io_in))
                                 : (IData)(vlSelfRef.tb__DOT__io_in)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            }
        }
        if ((0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42 
                    = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [6U] - (IData)(2U)));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xdU;
            }
        }
        if ((0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xeU;
            }
        }
        if ((0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43 
                    = (0xffffU & (IData)(vlSelfRef.tb__DOT__io_in));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43 = 1U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xfU;
            }
        }
        if ((0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                    = ((0xe0U & ((IData)((vlSelfRef.tb__DOT__io_in 
                                          >> 5U)) << 5U)) 
                       | (0xfU & (IData)(vlSelfRef.tb__DOT__io_in)));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting = 0U;
                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 0U;
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            }
        }
        if ((0x11U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res 
                = ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res 
                    << 1U) | ((IData)((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                                       >> 0x1fU)) >= 
                              (0xffffU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter)));
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                = (((IData)((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                             >> 0x1fU)) >= (0xffffU 
                                            & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                    ? (((QData)((IData)(((IData)((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                                                  >> 0x1fU)) 
                                         - (0xffffU 
                                            & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter) 
                                                     << 1U))))
                    : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
                       << 1U));
            if ((0x1fU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter))) {
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0x12U;
            }
        }
        if ((0x12U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 
                = (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s 
                   >> 0x10U);
            __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 
                = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 6U));
            __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44 = 1U;
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                = ((0xf0U & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                   | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags));
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
            __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 
                = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s);
            __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 
                = (7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                               >> 6U)));
            __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45 = 1U;
        }
        if ((0x10U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) {
            __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay 
                = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay) 
                         - (IData)(1U)));
            if ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                              >> 6U)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 
                        = (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                           >> 0x10U);
                    __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 
                        = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 6U));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46 = 1U;
                }
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
                    = ((0xf0U & (IData)(__Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags));
                __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0U;
                __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 
                    = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res);
                __VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 
                    = (7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 6U)));
                __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47 = 1U;
            }
        }
        if ((((7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting)) 
             | ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
                   != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr))))) {
            if ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))) {
                if (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__highest_int_req) 
                     > (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                              >> 5U)))) {
                    __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48 
                        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                      [6U] - (IData)(2U)));
                    __VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48 = 1U;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__handling_int 
                        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__highest_int_req;
                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap = 0U;
                    __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle = 0xcU;
                }
            }
        }
        __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr 
            = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr;
    }
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__last_ints 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__last_ints;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0 = __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1 = __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr0_pre_ctr;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__tmr1_pre_ctr;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__byte_op;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__source_index;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_index;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__has_second_arg;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__last_trace_trap;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_shifter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_delay;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs = __Vdly__tb__DOT__wrapped_pdp11__DOT__irqs;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ;
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v0) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v1) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[1U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[2U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[3U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[4U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[5U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] = 0U;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v8;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v9;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v10;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v11;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v12;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v13;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v14;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v15;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v16;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v17;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v18;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v19;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v20) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[0U] = 0x26dU;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v21;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v22;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v23;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v24;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v25;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v26;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v27;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v28;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v29;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30] 
            = ((0xff00U & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                [__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30]) 
               | (IData)(__VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v30));
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v31;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v32;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v33;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v34;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v35;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v36;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v37;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[5U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v38;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v39;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v40;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v41;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v42;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[7U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v43;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v44;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v45;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v46;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[__VdlyDim0__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v47;
    }
    if (__VdlySet__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs[6U] 
            = __VdlyVal__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs__v48;
    }
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row3_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row31_1))) 
                 + (1U & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1)) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row29_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_3))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row6_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056 
        = (7U & ((3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row26_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_5) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_6))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_7)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_3))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_3))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row9_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_3))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row25_4))) 
                 + (1U & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1)) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_0) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780 
        = (7U & ((3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_6) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_7)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row23_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_6) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_7)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_3) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_4)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748 
        = (7U & ((3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660 
        = (3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_6) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_7)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row12_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row20_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_6) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_7))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_8)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row19_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_6) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_7))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_8)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row18_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_6) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_7))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_8)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row17_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_6) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_7))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_8)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_0) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_1))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row16_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_3) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_4))) 
                 + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row15_5)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_1 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 1U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_2 
        = (1U & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                 >> 3U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_0 
        = (1U & ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                  & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row1_0 
        = (1U & (((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413)) 
                  | ((vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                      >> 1U) & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                 ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                    >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128 
        = (3U & ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                  >> 0x1fU) + (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                               >> 0x1fU)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x1eU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x1eU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x1dU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x1dU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x1cU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x1cU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x1bU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x1bU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x1aU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x1aU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244 
        = (3U & ((1U & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered) 
                 + (1U & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x19U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x19U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x18U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x18U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x17U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x17U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x16U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x16U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 1U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x15U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x15U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x14U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x14U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x13U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x13U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x12U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x12U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x11U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x11U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 2U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 2U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0x10U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                            >> 0x10U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xfU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xfU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 3U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 3U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xeU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xeU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xdU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xdU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 4U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 4U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xcU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xcU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 5U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 5U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xbU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xbU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 6U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 6U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 0xaU)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                           >> 0xaU))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 7U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 7U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 9U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 9U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436 
        = (3U & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered 
                        >> 8U)) + (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered 
                                         >> 8U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__highest_int_req 
        = ((0x80U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
            ? 7U : ((0x40U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                     ? 6U : ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                              ? 5U : ((0x10U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                                       ? 4U : ((8U 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                                                ? 3U
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__irqs))
                                                     ? 1U
                                                     : 0U)))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode 
        = ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode)) 
           | ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode)) 
              | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__addr_mode))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__vector_addr 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__IVB) 
            << 5U) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__handling_int) 
                       << 2U) | ((0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                 << 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row5_2) 
                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row4_3))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242078))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_2) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247) 
                                 >> 1U)))) + (1U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row30_1)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802)) 
                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242082), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row7_3))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241802) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_2) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_3))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row27_3) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056) 
                                 >> 1U)))) + (1U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063) 
                                               >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821) 
                               >> 1U)) + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row8_5) 
                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241810) 
                               >> 1U)) + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241821))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242056))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_5) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row10_6))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row11_5) 
                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241598), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780) 
                               >> 1U)) + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787), 1U))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_5) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241791) 
                                 >> 1U)))) + (1U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row24_1)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773) 
                               >> 1U)) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241780)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241787))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241628) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241635) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241642) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881 
        = (7U & ((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613), 1U) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row14_8) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241617) 
                                 >> 1U)))) + (1U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241624) 
                                               >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867 
        = (7U & ((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241602), 1U) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241613))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_5) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row13_6))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241606) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993 
        = (7U & ((3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762), 1U) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241773))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_5) 
                        + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row22_6))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241766) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241762))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986 
        = (7U & ((3U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row21_6) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241748) 
                                 >> 1U)))) + (1U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241755) 
                                               >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241727) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241734) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241741) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241706) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241713) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241720) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241685) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241692) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241699) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241664) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241671) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241678) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646)) 
                        + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241646) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241653) 
                                                >> 1U)))) 
                 + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241660) 
                          >> 1U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024128)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024124)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024182 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024120)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024190 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024116)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024112)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024108)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024214 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024104)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024222 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024100)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024230 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02496)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024238 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02492)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024246 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02488)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024254 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02484)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024262 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02480)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024270 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02476)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024398 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0248) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024278 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02472)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024286 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02468)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024390 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02412) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024294 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02464)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024302 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02460)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024382 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02416) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024310 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02456)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024374 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02420) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024318 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02452)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024366 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02424) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024326 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02448)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024358 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02428) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024334 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02444)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024342 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024350 
        = (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                     >> 1U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                                >> 1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02440)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02432) 
                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____02436)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__div_counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__data_buff;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__div_counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_in_buff;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_spi__DOT__data_out_buff;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_div_counter;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receiving;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_buff;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__qcpu_uart__DOT__receive_counter;
    __Vtableidx1 = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__handling_int;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__int_ack_num 
        = Vtb__ConstPool__TABLE_h4d026e8f_0[__Vtableidx1];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1 
        = ((0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
           | (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr 
        = (0xffffU & (((((((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                             | (1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                            | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                           | (4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                          | (8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                         | (9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                        | (0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))) 
                       | (0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)))
                       ? ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                           ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                          [7U] : ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                   ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [7U] : ((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                           ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                          [7U] : ((4U 
                                                   == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                                   ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_targ)
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                                    ? 
                                                   ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode)
                                                     ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__jmp_targ)
                                                     : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                                     ? 
                                                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                    [6U]
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                                      ? 
                                                     vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                     [6U]
                                                      : 
                                                     vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                                     [6U])))))))
                       : ((0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                           ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                          [6U] : ((0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                   ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                  [6U] : ((0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                           ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap)
                                               ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ)
                                               : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__vector_addr))
                                           : ((0xfU 
                                               == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                               ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_trap)
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__trap_targ))
                                                   : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__vector_addr))
                                               : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr)))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241806)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242086) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444 
        = (7U & ((3U & (VL_SHIFTR_III(2,2,32, (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1))), 1U) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242247))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437 
        = (7U & ((3U & ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row28_1))) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242240))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241817)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242093) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241828)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242100) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242067)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242233))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242107) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241832) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241839) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241846) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242028) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242042))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241860) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241874) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241888))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242014))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242000))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241986))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241972))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241958))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241944))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241902) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163 
        = (7U & ((3U & ((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241916) 
                               >> 1U)) + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923) 
                                                >> 1U)))) 
                 + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241930))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024162));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024169));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024177));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024185));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024446 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024214)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024198));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024193));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024454 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024222)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024206));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024201));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024462 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024230)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024214));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024209));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024470 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024238)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024222));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024217));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024478 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024246)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024230));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024225));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024254)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024238));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024233));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024262)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024246));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024241));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024270)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024254));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024249));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393) 
            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
               >> 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024398));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024278)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024262));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024257));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024518 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024286)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024270));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024265));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024390));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024526 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024294)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024278));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024273));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024534 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024302)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024286));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024281));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024630 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024398)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024382));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024393) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024542 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024310)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024294));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024289));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024622 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024390)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024374));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024385) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024550 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024318)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024302));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024297));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024614 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024382)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024366));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024377) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024558 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024326)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024310));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024305));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024606 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024374)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024358));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024369) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024566 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024334)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024318));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024313));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024574 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024342)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024326));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024582 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024350)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024334));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024590 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024358)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024342));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024321));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024353) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024337));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024598 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024366)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024350));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024329));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024361) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024345));
    vlSelfRef.tb__DOT__io_in = ((0x1ffffffULL & vlSelfRef.tb__DOT__io_in) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    | (((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__DDRA)) 
                                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                                       << 1U)))) 
                                   << 0x19U));
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                            | (1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                           | (2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                          | (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                         | (4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                        | (5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                       | (6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                      | (7U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))))) {
            if (((((((((8U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)) 
                       | (9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                      | (0xaU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                     | (0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                    | (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                   | (0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                  | (0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) 
                 | (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr)))) {
                if ((8U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                    if ((9U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                        if ((0xaU != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                            if ((0xbU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_div 
                                        = (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
                                }
                            }
                            if ((0xbU != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                if ((0xcU != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                    if ((0xdU != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                        if ((0xeU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))) {
                                            if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) {
                                                vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_div 
                                                    = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__int_ack 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1)
            ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__int_ack_num)
            : 0U);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_3 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr) 
           != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_34 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__current_addr) 
           == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241853)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242114) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241867)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242121) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242063)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242226))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242049)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242219))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241881)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242128) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241909)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241895)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242135) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242142))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242035)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242212))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242021)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242205))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242007)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242198))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241993)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242191))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241979)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242184))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241965)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242177))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241923)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242149) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241951)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242170))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241937)) 
                        + (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242156) 
                                 >> 1U)))) + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242163))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024409));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024417));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024425));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024433));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024441));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024449));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024457));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024465));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024473));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024726 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024518)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024486));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024481));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024734 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024526)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024494));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024489));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024742 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024534)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024502));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024497));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024865 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625) 
            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
               >> 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024630));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024750 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024542)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024510));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024505));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024857 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024401) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024622));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024758 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024550)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024518));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024513));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024849 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024641) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024614));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024766 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024558)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024526));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024521));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024841 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024633) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024606));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024774 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024566)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024534));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024529));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024574)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024542));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024582)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024550));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024590)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024558));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024606)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024574));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024537));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024601) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024569));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024622)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024590));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024553));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024617) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024585));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024598)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024566));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024614)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024582));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024545));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024609) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024577));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024630)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024598));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024561));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024625) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024593));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1 
        = __Vdly__tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1;
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6 
        = (((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
            | ((9U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
               | ((0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                  | (0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))))) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_34));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_b_registered__024next 
        = (((((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242458) 
                << 0x1fU) | (0x40000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451) 
                                            << 0x1eU))) 
              | ((0x20000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444) 
                                 << 0x1dU)) | (0x10000000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437) 
                                                  << 0x1cU)))) 
             | (((0x8000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430) 
                                << 0x1bU)) | (0x4000000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423) 
                                                 << 0x1aU))) 
                | ((0x2000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416) 
                                  << 0x19U)) | (0x1000000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409) 
                                                   << 0x18U))))) 
            | ((((0x800000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402) 
                               << 0x17U)) | (0x400000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395) 
                                                << 0x16U))) 
                | ((0x200000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388) 
                                 << 0x15U)) | (0x100000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381) 
                                                  << 0x14U)))) 
               | (((0x80000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374) 
                                << 0x13U)) | (0x40000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367) 
                                                 << 0x12U))) 
                  | ((0x20000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360) 
                                  << 0x11U)) | (0x10000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353) 
                                                   << 0x10U)))))) 
           | (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346) 
                             << 0xfU)) | (0x4000U & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339) 
                                           << 0xeU))) 
                | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332) 
                               << 0xdU)) | (0x1000U 
                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325) 
                                               << 0xcU)))) 
               | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318) 
                              << 0xbU)) | (0x400U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311) 
                                            << 0xaU))) 
                  | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304) 
                                << 9U)) | (0x100U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297) 
                                            << 8U))))) 
              | ((((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290) 
                             << 7U)) | (0x40U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283) 
                                                 << 6U))) 
                  | ((0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276) 
                               << 5U)) | (0x10U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269) 
                                                   << 4U)))) 
                 | ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262) 
                           << 3U)) | ((4U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258) 
                                             << 2U)) 
                                      | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_1))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_a_registered__024next 
        = ((((((0x80000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242451) 
                               << 0x1eU)) | (0x40000000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242444) 
                                                << 0x1dU))) 
              | ((0x20000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242437) 
                                 << 0x1cU)) | (0x10000000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242430) 
                                                  << 0x1bU)))) 
             | (((0x8000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242423) 
                                << 0x1aU)) | (0x4000000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242416) 
                                                 << 0x19U))) 
                | ((0x2000000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242409) 
                                  << 0x18U)) | (0x1000000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242402) 
                                                   << 0x17U))))) 
            | ((((0x800000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242395) 
                               << 0x16U)) | (0x400000U 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242388) 
                                                << 0x15U))) 
                | ((0x200000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242381) 
                                 << 0x14U)) | (0x100000U 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242374) 
                                                  << 0x13U)))) 
               | (((0x80000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242367) 
                                << 0x12U)) | (0x40000U 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242360) 
                                                 << 0x11U))) 
                  | ((0x20000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242353) 
                                  << 0x10U)) | (0x10000U 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242346) 
                                                   << 0xfU)))))) 
           | (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242339) 
                             << 0xeU)) | (0x4000U & 
                                          ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242332) 
                                           << 0xdU))) 
                | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242325) 
                               << 0xcU)) | (0x1000U 
                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242318) 
                                               << 0xbU)))) 
               | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242311) 
                              << 0xaU)) | (0x400U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242304) 
                                            << 9U))) 
                  | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242297) 
                                << 8U)) | (0x100U & 
                                           ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242290) 
                                            << 7U))))) 
              | ((((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242283) 
                             << 6U)) | (0x40U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242276) 
                                                 << 5U))) 
                  | ((0x20U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242269) 
                               << 4U)) | (0x10U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242262) 
                                                   << 3U)))) 
                 | (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0242258) 
                            << 2U)) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row2_2) 
                                       << 2U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row1_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__pp_row0_0))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024873 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024649));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024881 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024657));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024889 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024665));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024897 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024673));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024905 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024681));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024913 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024689));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024921 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024697));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024929 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024705));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024937 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024713));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241006 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024777) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024846)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024782));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024969 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024745));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241038 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024809) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024638)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024814));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024953 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024729));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241022 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024793) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024862)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024798));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024985 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024761));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241054 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024825) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024406)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024830));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024945 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024721));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241014 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024785) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024854)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024790));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024977 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024753));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241046 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024817) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024646)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024822));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024961 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024737));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241030 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024801) 
            & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024870)) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024806));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024993 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024769));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0241062 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024833) 
            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____0244) 
               >> 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__final_adder_2__DOT____024838));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_rshift 
        = (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                 >> 5U));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
        = (0x1ffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                       - (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc 
        = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                      + (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc 
        = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                      - (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
        = (0x1ffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                       + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
        = (0x1ffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                       - (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC 
        = ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
           & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((0x8000U 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                                 : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count 
        = (0x3fU & ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                     ? ((IData)(1U) + (~ (0x3fU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))
                     : (0x3fU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))));
    vlSelfRef.tb__DOT__WEB = (1U & ((~ (IData)(vlSelfRef.clk)) 
                                    | (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6))));
    vlSelfRef.tb__DOT__OEB = (1U & ((~ ((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                          | ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                             | (2U 
                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)))) 
                                         | ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                            | (((8U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_defered_mode)) 
                                               | ((0xaU 
                                                   == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                  | ((0xbU 
                                                      == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle)) 
                                                     | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_1)))))) 
                                        & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_34))) 
                                    | ((IData)(vlSelfRef.rst) 
                                       | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024906 
        = (1U & VL_REDXOR_16((0x600U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024903 
        = (1U & ((IData)((0x600U == (0xe00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x800U == (0xe00U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____02413 
        = (IData)((2U == (3U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241081 
        = (1U & ((IData)((0x1800U == (0x3800U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x2000U == (0x3800U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241084 
        = (1U & VL_REDXOR_16((0x1800U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241259 
        = (1U & ((IData)((0x6000U == (0xe000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x8000U == (0xe000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____0241262 
        = (1U & VL_REDXOR_16((0x6000U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024191 
        = (1U & ((IData)((6U == (0xeU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((8U == (0xeU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024194 
        = (1U & VL_REDXOR_4((6U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024369 
        = (1U & ((IData)((0x18U == (0x38U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x20U == (0x38U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024372 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024547 
        = (1U & ((IData)((0x60U == (0xe0U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x80U == (0xe0U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024550 
        = (1U & VL_REDXOR_8((0x60U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024725 
        = (1U & ((IData)((0x180U == (0x380U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))) 
                 | (IData)((0x200U == (0x380U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT____024728 
        = (1U & VL_REDXOR_16((0x180U & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __VdlyVal__tb__DOT__RAM__v0;
    __VdlyVal__tb__DOT__RAM__v0 = 0;
    SData/*14:0*/ __VdlyDim0__tb__DOT__RAM__v0;
    __VdlyDim0__tb__DOT__RAM__v0 = 0;
    // Body
    __VdlyVal__tb__DOT__RAM__v0 = vlSelfRef.tb__DOT__db_out;
    __VdlyDim0__tb__DOT__RAM__v0 = (0x7fffU & ((IData)(vlSelfRef.tb__DOT__addr_latch) 
                                               >> 1U));
    vlSelfRef.tb__DOT__RAM[__VdlyDim0__tb__DOT__RAM__v0] 
        = __VdlyVal__tb__DOT__RAM__v0;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted) 
                     | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting)))) {
        VL_FINISH_MT("tb.v", 52, "");
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__ALE) {
        vlSelfRef.tb__DOT__addr_latch = vlSelfRef.tb__DOT__db_out;
    }
    if (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_3) {
        vlSelfRef.tb__DOT__db_out = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__requested_addr;
        vlSelfRef.tb__DOT__ALE = ((~ (IData)(vlSelfRef.rst)) 
                                  & (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__warmup)));
    } else {
        vlSelfRef.tb__DOT__db_out = ((0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                      ? (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)
                                      : ((0xdU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                                          ? vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                         [7U] : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mem_io)));
        vlSelfRef.tb__DOT__ALE = 0U;
    }
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb 
        = (1U & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_6) 
                     | (IData)(vlSelfRef.tb__DOT__ALE))) 
                 | (IData)(vlSelfRef.rst)));
    vlSelfRef.tb__DOT__io_out = (((QData)((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__PORTA)) 
                                  << 0x1aU) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_uart__TX) 
                                                                << 0x18U) 
                                                               | (((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__DO) 
                                                                     << 0x16U) 
                                                                    | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellout__qcpu_spi__SCLK) 
                                                                       << 0x15U)) 
                                                                   | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__halted) 
                                                                        | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__waiting)) 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__WEB) 
                                                                         << 0x13U))) 
                                                                  | (((IData)(vlSelfRef.tb__DOT__OEB) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSelfRef.tb__DOT__ALE) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelfRef.tb__DOT__db_out)))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18 = 0;
    IData/*31:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26 = 0;
    IData/*31:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 = 0;
    CData/*0:0*/ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33;
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tb__DOT__io_in = ((0x1ffff0000ULL & vlSelfRef.tb__DOT__io_in) 
                                | (IData)((IData)((
                                                   (~ 
                                                    (- (IData)(
                                                               (1U 
                                                                & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__bus_oeb)) 
                                                                   | (IData)(vlSelfRef.tb__DOT__OEB)))))) 
                                                   & vlSelfRef.tb__DOT__RAM
                                                   [
                                                   (0x7fffU 
                                                    & ((IData)(vlSelfRef.tb__DOT__addr_latch) 
                                                       >> 1U))]))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction 
        = (0xffffU & ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))
                       ? (IData)(vlSelfRef.tb__DOT__io_in)
                       : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__insin)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_double_op 
        = ((0U != (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 0xcU))) & ((7U != (7U & 
                                               ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 0xcU))) 
                                       & ((0xf002U 
                                           != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                          & (0xf009U 
                                             != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__SOB_reg_m1 
        = (0xffffU & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                      [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                              >> 6U))] - (IData)(1U)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__branch_targ 
        = (0xffffU & ((0x3fU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                          >> 9U))) ? 
                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                       [7U] - (0x7eU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                        << 1U))) : 
                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                       [7U] + (((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              << 8U)) 
                                  | (0x4000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                << 7U))) 
                                 | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                << 6U)) 
                                    | (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  << 5U)))) 
                                | ((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              << 4U)) 
                                   | ((0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 << 3U)) 
                                      | (0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   << 2U))))) 
                               | (0x1feU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            << 1U))))));
    __Vtableidx2 = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                     << 3U) | ((4U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                      >> 0xdU)) | (3U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__should_branch 
        = Vtb__ConstPool__TABLE_h8eac0fb8_0[__Vtableidx2];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH 
        = ((1U == (0xffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                            >> 8U))) | ((1U == (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U))) 
                                        | ((2U == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                           | ((3U == 
                                               (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 9U))) 
                                              | ((0x40U 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                                 | ((0x41U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    | ((0x42U 
                                                        == 
                                                        (0x7fU 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 9U))) 
                                                       | ((0x43U 
                                                           == 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                               >> 9U))) 
                                                          | (0x3fU 
                                                             == 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                 >> 9U)))))))))));
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                >> 6U))];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr 
        = (0xffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                   >> 6U))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen 
        = (IData)(((0x7c00U == (0xfe00U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))) 
                   & (3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__cycle))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
           ^ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                   >> 6U))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res 
        = (0xffffU & VL_SHIFTL_III(16,16,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                   [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                           >> 6U))], (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res 
        = (0xffffU & VL_SHIFTRS_III(16,16,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))], (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr 
        = (IData)((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                    >> 0xfU) & (~ ((6U == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 0xcU))) 
                                   | (0xeU == (0xfU 
                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                  >> 0xcU)))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2 
        = (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                 [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 6U))] >> 0xfU));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
        = ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
            [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                    >> 6U))] << 0x10U) | vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
           [(7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                         >> 6U)))]);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op 
        = (((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                              >> 6U))) | ((3U == (0x3ffU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     >> 6U))) 
                                          | ((0x28U 
                                              <= (0x1ffU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                     >> 6U))) 
                                             & (0x37U 
                                                >= 
                                                (0x1ffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                    >> 6U)))))) 
           & ((0xf009U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
              & ((0x34U != (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                      >> 6U))) & ((0xf002U 
                                                   != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                  & (0xf003U 
                                                     != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special 
        = ((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                               >> 9U))) | ((0x39U == 
                                            (0x7fU 
                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                >> 9U))) 
                                           | ((0x3aU 
                                               == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                              | ((0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U))) 
                                                 | ((0x3cU 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    | ((0x3dU 
                                                        == 
                                                        (0x7fU 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 9U))) 
                                                       | (0x3eU 
                                                          == 
                                                          (0x7fU 
                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                              >> 9U)))))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__collission 
        = (0x1fU & ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                    + ((1U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                       + ((2U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                          + ((3U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                             + ((4U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                + ((5U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                   + ((6U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                      + ((0xaU == (0xfffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 4U))) 
                                         + ((0xbU == 
                                             (0xfffU 
                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                 >> 4U))) 
                                            + ((0x89U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                    >> 8U))) 
                                               + ((0x34U 
                                                   == 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                       >> 6U))) 
                                                  + 
                                                  ((0x10U 
                                                    == 
                                                    (0x1fffU 
                                                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                        >> 3U))) 
                                                   + 
                                                   ((4U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                         >> 9U))) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_BRANCH) 
                                                     + 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                           >> 0xcU))) 
                                                      + 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                            >> 0xcU))) 
                                                       + 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                             >> 0xcU))) 
                                                        + 
                                                        ((4U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                              >> 0xcU))) 
                                                         + 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                               >> 0xcU))) 
                                                          + 
                                                          ((6U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                >> 0xcU))) 
                                                           + 
                                                           ((0xeU 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                 >> 0xcU))) 
                                                            + 
                                                            ((1U 
                                                              == 
                                                              (0x3ffU 
                                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                  >> 6U))) 
                                                             + 
                                                             ((3U 
                                                               == 
                                                               (0x3ffU 
                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                   >> 6U))) 
                                                              + 
                                                              ((0x28U 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                    >> 6U))) 
                                                               + 
                                                               ((0x29U 
                                                                 == 
                                                                 (0x1ffU 
                                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                     >> 6U))) 
                                                                + 
                                                                ((0x2aU 
                                                                  == 
                                                                  (0x1ffU 
                                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                      >> 6U))) 
                                                                 + 
                                                                 ((0x2bU 
                                                                   == 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                       >> 6U))) 
                                                                  + 
                                                                  ((0x2cU 
                                                                    == 
                                                                    (0x1ffU 
                                                                     & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                        >> 6U))) 
                                                                   + 
                                                                   ((0x2dU 
                                                                     == 
                                                                     (0x1ffU 
                                                                      & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                         >> 6U))) 
                                                                    + 
                                                                    ((0x2eU 
                                                                      == 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                          >> 6U))) 
                                                                     + 
                                                                     ((0x2fU 
                                                                       == 
                                                                       (0x1ffU 
                                                                        & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                           >> 6U))) 
                                                                      + 
                                                                      ((0x30U 
                                                                        == 
                                                                        (0x1ffU 
                                                                         & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                            >> 6U))) 
                                                                       + 
                                                                       ((0x31U 
                                                                         == 
                                                                         (0x1ffU 
                                                                          & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                             >> 6U))) 
                                                                        + 
                                                                        ((0x32U 
                                                                          == 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                              >> 6U))) 
                                                                         + 
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x1ffU 
                                                                            & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                               >> 6U))) 
                                                                          + 
                                                                          ((0x234U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                           + 
                                                                           ((0x37U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                            + 
                                                                            ((0x237U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 6U))) 
                                                                             + 
                                                                             ((0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                              + 
                                                                              ((0x39U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                               + 
                                                                               ((0x3aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0xf003U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf009U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf002U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0xf004U 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)) 
                                                                                + 
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((0x88U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                                                >> 8U))) 
                                                                                + 
                                                                                (0xf00aU 
                                                                                == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_spi__start 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
           & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__spi_busy)) 
              & (0xcU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT____Vcellinp__qcpu_uart__start 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_wen) 
           & ((~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__uart_busy)) 
              & (0xfU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_addr))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26))
                                                 : tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_26);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s 
        = (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2) 
            ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
               >> 0xfU)) ? ((IData)(1U) + (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res))
            : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
        = ((IData)((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                     >> 0xfU) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_s2)))
            ? ((IData)(1U) + (~ vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered))
            : vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__multiplier__DOT__result_registered);
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
        = VL_SHIFTL_III(32,32,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
        = VL_SHIFTR_III(32,32,6, vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in, (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count));
    if ((0x28U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result = 0U;
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags = 4U;
    } else if ((0x29U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (1U | ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                      ? (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 7U))
                                      : (~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 0xfU))) 
                                    << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                (0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                                 : 
                                                (0xffffU 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               << 2U))));
    } else if ((0x2aU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(1U) 
                                               + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                              >> 7U))
                                 : (1U & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x7fU == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0x7fffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x2bU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                          - (IData)(1U)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               - (IData)(1U)) 
                                              >> 7U))
                                 : (1U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                           - (IData)(1U)) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   - (IData)(1U))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   - (IData)(1U))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0U == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x2cU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (0x1ffU & (((IData)(1U) 
                                               + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                              >> 7U))
                                 : (1U & (((IData)(1U) 
                                           + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                          >> 0xfU))) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                                            : (0U == 
                                               (0xffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x80U == (0xffU & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                           : (0x8000U == (0xffffU & 
                                          ((IData)(1U) 
                                           + (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? (0U != (0xffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))
                                    : (0U != (0xffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))))))));
    } else if ((0x2fU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             >> 0xfU)) 
                              << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                           ? (0U == 
                                              (0xffU 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                           : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                         << 2U)));
    } else if ((0x32U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x80U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                              | (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                          >> 1U))) : 
                          ((0x8000U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                           | (0x7fffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                         >> 1U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0x7fU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   >> 1U)))
                                            : (0U == 
                                               (0x7fffU 
                                                & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                   >> 1U)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))));
    } else if ((0x33U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                       << 1U)) : (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                     << 1U))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 6U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xeU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0x7fU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                            : (0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               >> 6U))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xeU))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xfU))))));
    } else if ((0x30U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x80U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                        << 7U)) | (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                      >> 1U)))
                           : ((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 0xfU)) 
                              | (0x7fffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            >> 1U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xfeU 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                                       & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))
                                            : (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                                       & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                ^ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))));
    } else if ((0x31U == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0xfeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))
                           : ((0xfffeU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                          << 1U)) | 
                              (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 6U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              >> 0xeU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))
                                            : ((0U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                               & (~ (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))) 
                                          << 2U)) | 
                       ((2U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 7U) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               >> 6U))
                                 : (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                     >> 0xfU) ^ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xeU))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                 >> 0xfU))))));
    } else if ((3U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((0xff00U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      << 8U)) | (0xffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                    >> 8U))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                              >> 0xcU)) | ((0U == (0xffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                      >> 8U))) 
                                           << 2U)));
    } else if ((0x2dU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_adc))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((0x7fU == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                           : ((0x7fffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                              & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? ((0xffU == (0xffU 
                                                  & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                                    : ((0xffffU == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
    } else if ((0x2eU == (0x1ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc) 
                                    >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc) 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sbc))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (0x80U == (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                           : (0x8000U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                         << 1U) | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                    ? ((0U == (0xffU 
                                               & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))
                                    : ((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                                       & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
    } else if ((0x37U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                    >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (- (IData)((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                           >> 3U)))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                       | ((4U & ((~ ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                     >> 3U)) << 2U)) 
                          | (3U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x237U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                        << 8U)) | (0x4000U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                                      << 7U))) 
                           | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 6U)) | 
                              (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 5U)))) 
                          | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 4U)) | 
                              (0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 3U))) | 
                             ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                         << 2U)) | 
                              ((0x100U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                                          << 1U)) | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW))))));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW) 
                              >> 4U)) | (((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x234U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                     >> 6U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
    } else if ((1U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? ((((0x8000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                            << 8U)) 
                                | (0x4000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              << 7U))) 
                               | ((0x2000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                              << 6U)) 
                                  | (0x1000U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                << 5U)))) 
                              | (((0x800U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             << 4U)) 
                                  | (0x400U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               << 3U))) 
                                 | ((0x200U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                               << 2U)) 
                                    | ((0x100U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                                  << 1U)) 
                                       | (0xffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))))))
                           : (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((2U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                 ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                    >> 7U) : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                              >> 0xfU)) 
                               << 3U)) | (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp))
                                            : (0U == 
                                               (0xffffU 
                                                & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp))) 
                                          << 2U)) | 
                       ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                           ? (((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 7U))) 
                              & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                        >> 7U)) == 
                                 (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                        >> 7U)))) : 
                          (((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                   >> 0xfU)) != (1U 
                                                 & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                    >> 0xfU))) 
                           & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                      >> 0xfU))))) 
                         << 1U) | (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                          ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                             >> 8U)
                                          : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_cmp 
                                             >> 0x10U))))));
    } else if ((6U == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                               >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add);
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                               >> 0xcU)) | ((0U == 
                                             (0xffffU 
                                              & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add)) 
                                            << 2U)) 
                       | (((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 0xfU)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 0xfU))) 
                            & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                      >> 0xfU)))) << 1U) 
                          | (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_add 
                                   >> 0x10U)))));
    } else if ((0xeU == (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                 >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub);
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                               >> 0xcU)) | ((0U == 
                                             (0xffffU 
                                              & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub)) 
                                            << 2U)) 
                       | (((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1) 
                                    >> 0xfU)) != (1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                                     >> 0xfU))) 
                            & ((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2) 
                                      >> 0xfU)))) << 1U) 
                          | (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_sub 
                                   >> 0x10U)))));
    } else if ((3U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_2));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_AND))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((4U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIC))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((5U == (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                             >> 0xcU)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_BIS))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x3cU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                ? ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR) 
                                   >> 7U) : ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR) 
                                             >> 0xfU)) 
                              << 3U)) | ((((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr)
                                            ? (0U == 
                                               (0xffU 
                                                & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR)))
                                            : (0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result_XOR))) 
                                          << 2U) | 
                                         (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else if ((0x38U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                              >> 0x1cU)) | (((0U == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res) 
                                             << 2U) 
                                            | (1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                                                     >> 0x10U)) 
                                                   | (0xffffU 
                                                      == 
                                                      (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__mul_res 
                                                       >> 0x10U))))))));
    } else if ((0x39U == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s 
                               >> 0x1cU)) | ((0U == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__div_res_s) 
                                             << 2U)) 
                       | ((((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)) 
                            | ((0x7fffU & vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                [(7U & (1U | ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                              >> 6U)))]) 
                               > (0x7fffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1)))) 
                           << 1U) | (0U == ((vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                             [(7U & 
                                               ((IData)(1U) 
                                                + ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                   >> 6U)))] 
                                             << 0x10U) 
                                            | vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                            [(7U & 
                                              ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))])))));
    } else if ((0x3aU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        if ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))) {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
                = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res));
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
                = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res) 
                                   >> 0xcU)) | ((0U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res)) 
                                                << 2U)) 
                           | ((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__rshift_res) 
                                       >> 0xfU)) != 
                                (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU))) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))] 
                                    >> (0xfU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count) 
                                                - (IData)(1U))))))));
        } else {
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
                = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res));
            vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
                = (0xfU & (((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res) 
                                   >> 0xcU)) | ((0U 
                                                 == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res)) 
                                                << 2U)) 
                           | ((((1U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__lshift_res) 
                                       >> 0xfU)) != 
                                (1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU))) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                    [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                            >> 6U))] 
                                    >> (0xfU & (- (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count))))))));
        }
    } else if ((0x3bU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((0x20U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1))
                        ? (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
                                   >> 0x1cU)) | ((0U 
                                                  == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res) 
                                                 << 2U)) 
                           | ((((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU)) != 
                                (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_rshift_res 
                                 >> 0x1fU)) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
                                    >> (0x1fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count) 
                                                 - (IData)(1U)))))))
                        : (((8U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
                                   >> 0x1cU)) | ((0U 
                                                  == vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res) 
                                                 << 2U)) 
                           | ((((1U & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
                                       [(7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                               >> 6U))] 
                                       >> 0xfU)) != 
                                (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_lshift_res 
                                 >> 0x1fU)) << 1U) 
                              | ((0U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)) 
                                 & (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__long_shift_in 
                                    >> (0x1fU & (- (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__shift_count)))))))));
    } else if ((0x3dU == (0x7fU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                   >> 9U)))) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & ((8U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff) 
                              >> 0xcU)) | (((0U == (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__gpio_in_buff)) 
                                            << 2U) 
                                           | (1U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW)))));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_result 
            = (0xffffU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instr_arg_1));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__new_flags 
            = (0xfU & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__PSW));
    }
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18 
        = ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_single_op) 
           | (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_special));
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33 
        = ((IData)(tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18) 
           | ((1U == (0x3ffU & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                >> 6U))) | (4U == (0x7fU 
                                                   & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                                                      >> 9U)))));
    if (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_33) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 3U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 9U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 6U));
    }
    if (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_18) {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg));
    } else {
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode 
            = (7U & ((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction) 
                     >> 3U));
        vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg 
            = (7U & (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__instruction));
    }
    tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__decr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((5U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))))
                       ? (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
                          - (IData)(1U)) : (tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32 
                                            - (IData)(2U))));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__incr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((3U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__src_reg))))
                       ? ((IData)(1U) + tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32)
                       : ((IData)(2U) + tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_32)));
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
        = vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__regs
        [vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg];
    vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_decr_reg 
        = (0xffffU & (((IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__is_byte_instr) 
                       & ((5U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_mode)) 
                          & (7U != (IData)(vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT__dest_reg))))
                       ? (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
                          - (IData)(1U)) : (vlSelfRef.tb__DOT__wrapped_pdp11__DOT__pdp11__DOT____VdfgRegularize_hdec16dc4_0_31 
                                            - (IData)(2U))));
}
