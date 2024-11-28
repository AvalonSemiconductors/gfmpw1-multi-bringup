# Bugs
This README serves as a central point to document all hardware bugs of this design.

## QSPI entry missing critical delay
### Description
The design is meant to put the 25Qxx chip into quad mode by setting the Q bit in one of the status registers. Unfortunately, writing the status registers requires a 1 - 2ms long processing time, which is not met. The 25Qxx becomes unresponsive after issuing the write status register command.

Severity: Low
### Workarounds
A carefully crafted management controller firmware generates a cycle-perfect inhibit to the CS signal going to the 25Qxx, preventing the write status register command from being recognized. Since the Q bit is non-volatile, it can be programmed together with the memory contents ahead of time.

## BDIR signal incorrect during initialization
### Description
During the initialization of the 25Qxx into quad mode, the BDIR signal is high even though the four QSPI data lines are being driven with the initialization sequence in SPI mode. This makes using an active level shifter on those lines difficult.

Severity: Low
### Workarounds
The `qcpu_eval_board` KiCad project describes a workaround using a 74HC74 and AND gate that forces BDIR low after power-up until the first time it actually transitions low, at which point it resumes behaving as normal.

## External interrupt is dropped if timer interrupt is pending
### Description
If both interrupts are pending at the beginning of a machine cycle, the timer interrupt is handled correctly, but the external interrupt is dropped, and never handled.

Severity: Medium

## Interrupt requests are dropped while inside an interrupt handler
### Description
While the CPU is executing code inside an interrupt handler, all incoming interrupts are immediatelly dropped instead of delayed, as intended.

Severity: Medium
