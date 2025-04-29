// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.tb__DOT__io_in = (0x1ff7fffffULL & vlSelfRef.tb__DOT__io_in);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x8000U, vlSelfRef.tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb__DOT__RAM[(0x7fffU & vlSelfRef.tb__DOT__unnamedblk1__DOT__i)] 
            = (0xffffU & VL_RANDOM_I());
        vlSelfRef.tb__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.tb__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e747874U;
    __Vtemp_2[1U] = 0x424f4f54U;
    __Vtemp_2[2U] = 0x2e2e2fU;
    VL_READMEM_N(true, 16, 32768, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.tb__DOT__RAM), 0U, 0x7fffU);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
