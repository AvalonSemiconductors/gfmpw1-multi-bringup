SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# normal simulation
VERILOG_SOURCES += $(PWD)/tb.v $(PWD)/spiflash/W25Q128JVxIM.v $(PWD)/qcpu.v $(PWD)/mul.v $(PWD)/spi.v $(PWD)/uart.v

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = tb

# MODULE is the basename of the Python test file
MODULE = test

include $(shell cocotb-config --makefiles)/Makefile.sim
