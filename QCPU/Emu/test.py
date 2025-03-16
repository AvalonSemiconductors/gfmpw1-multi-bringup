import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles

@cocotb.test()
async def test_qcpu(dut):
	dut._log.info("start")
	clock = Clock(dut.clk, 100, units="ns")
	cocotb.start_soon(clock.start())
	dut.rst.value = 1
	await Timer(1000, units="ns")
	dut.rst.value = 0
	
	await Timer(2, units="ms")
