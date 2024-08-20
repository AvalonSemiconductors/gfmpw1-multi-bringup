# Bugs
This README serves as a central point to document all hardware bugs of this design.

## Timer interrupts do not clear if prescaler is > 1
### Description
If an interrupt is generated using a timer and that timer has a pre-scaler setting of > 1, the interrupt request latch is immediately set again after the interrupt is recognized, as the timer value has yet to change from the one equaling TOP, due to the prescaler.

Severity: Low
### Workarounds
The timer value can be cleared in software in the interrupt handler.
