.MACRO ARM_FUNC_START name
    .ALIGN 2, 0
    .GLOBAL \name
    .ARM
    .TYPE \name, function
.ENDM

.MACRO ARM_FUNC_END name
    .SIZE \name, .-\name
.ENDM

@ Generates a glue function to be used when calling
@ the specified ARM function from THUMB code.
.MACRO THUMB_INTERWORK_VENEER name, target
    .GLOBAL \name
    .THUMB
    .ALIGN 2, 0
    \name:
    bx pc           @ Use a bx instruction to switch into ARM mode. The value of PC is
    nop             @ 4 bytes ahead of the current instruction, so we pad with a nop.
    .ARM
    b \target         @ Now in ARM mode, jump to the actual function
.ENDM
