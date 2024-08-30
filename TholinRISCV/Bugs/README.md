# Bugs
This README serves as a central point to document all hardware bugs of this design.

## Timer interrupts do not clear if prescaler is > 1
### Description
If an interrupt is generated using a timer and that timer has a pre-scaler setting of > 1, the interrupt request latch is immediately set again after the interrupt is recognized, as the timer value has yet to change from the one equaling TOP, due to the prescaler.

Severity: Low
### Workarounds
The timer value can be cleared in software in the interrupt handler.

## IVEC is not padded with two zeroes
### Description
The documentation describes that the interrupt vector register, IVEC, is padded on the right with two zeroes to force the address to be word-aligned. This is not actually done, and the value written to it is used as-is when an interrupt triggers. As IVEC is still only 30 bits wide in hardware, and the value written to it still has the least-significant two bits cut-off, this results in the value in IVEC being effectively right-shifted by two places. This means the CPU will jump to a different address than intended upon an interrupt.

Severity: Low
### Workarounds
The intended address of the interrupt routine must be left-shifted by two places before writing it into IVEC. This does, however, mean that the interrupt routine must lie within the first 1GiB of the address space.
