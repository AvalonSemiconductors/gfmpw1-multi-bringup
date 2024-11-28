#include "Vtb.h"
#include "verilated.h"
#include <iostream>

static Vtb top;

double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {
#ifdef TRACE_ON
	printf("Warning: tracing is ON!\r\n");
	Verilated::traceEverOn(true);
#endif
	top.clk = 0;
	top.rst = 1;
	Verilated::timeInc(1);
	top.eval();
	top.clk = 1;
	Verilated::timeInc(1);
	top.eval();
	top.clk = 0;
	Verilated::timeInc(1);
	top.eval();
	top.rst = 0;
	Verilated::timeInc(1);
	top.eval();
	unsigned long counter = 0;
	while(!Verilated::gotFinish() && counter < 2000) {
		top.clk = !top.clk;
		Verilated::timeInc(1);
		top.eval();
		counter++;
	}
	top.final();
	return 0;
}
