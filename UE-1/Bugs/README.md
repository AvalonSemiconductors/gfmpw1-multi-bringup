# Bugs
This README serves as a central point to document all hardware bugs of this design.

## RR Latches on every instruction
### Description
The contents of the Result Register are updated on the falling clock edge at every instruction, including those that are not meant to update RR, such as NOPO. RR seemingly always latches high in these cases, making it stuck in this state.

RR is the accumulator register.

Oh no.

Severity: Broke everything
### Workarounds
None, design is abandoned
