# Bugs
This README serves as a central point to document all hardware bugs of this design.

## DIV Instruction
### Description
The DIV instruction behaves incorrectly compared to the reference. It computes a 32-bit over 16-bit division with 32-bit result rather than a 32-bit over 16-bit division with the result split between a 16-bit quotient and 16-bit remainder.

Severity: Medium
### Workarounds
Modulo can still be computed in software using `x-(x/y)*y`. The GCC uses software division for 32-bit and above integers, so these are unaffected and should be used in place of 16-bit or 8-bit divisions.

## PC-Relative Addressing Offset Calculation incorrect
### Description
When using R7 (PC) as the base register on relative addressing, the offset is calculated from the end of the instruction, rather than the start.

Severity: Unknown
### Workarounds
A custom assembler has been constructed that accounts change, making assembly programming possible. Code compiled by the GCC appears unaffected. Seemingly does not use this addressing mode, but more investigation is needed.

## UART `has_byte` signal not wired up
### Description
The signal indicating that the UART has received a byte is not wired up to be read by the CPU from the serial status register. The CPU cannot tell when the UART has received data.

Severity: High (see next bug)

## UART interrupt signal not wired up
### Description
The UART is supposed to be capable of generating an interrupt when it has fully received a character, but this has not been wired up correctly. The interrupt cannot trigger.

Severity: High
### Workarounds
This bug combines with the previous one to make receiving data with the UART practically impossible. There appears to be no workaround.
