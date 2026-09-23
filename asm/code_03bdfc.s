    .INCLUDE "macro.inc"

    ARM_FUNC_START fun_0803bdfc
fun_0803bdfc: @ 0x0803bdfc
     ldr        r0,DAT_0803bff0
     str        sp,[r0,#0x3c]
     add        sp,r0,#0x38
     stmdb      sp!,{r0,r1,r2,r3}
     mov        r0,#0x4000000
     ldrb       r2,[r0,#0x06]
     ldr        r1,DAT_0803bff4
     add        r1,r1,r2, lsl #0x2
     ldr        r3,DAT_0803bff8
     ldr        r2,[r3,#0x0]
     add        r1,r1,r2, lsl #0x2
     ldr        r1,[r1,#0x0]
     ldr        r3,DAT_0803bffc
     ldr        r2,[r3,#0x0]
     add        r1,r1,r2
     strh       r1,[r0,#0x14]
     strh       r1,[r0,#0x1c]
     ldmia      sp!,{r0,r1,r2,r3}
     ldr        sp,[r0,#0x3c]
     bx         lr
LAB_0803be4c:
     ldr        r0,DAT_0803c000
     str        sp,[r0,#0x3c]
     add        sp,r0,#0x38
     stmdb      sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10}
     mov        r0,#0x4000000
     ldrb       r2,[r0,#0x06]
     ldr        r1,DAT_0803c004
     add        r1,r1,r2, lsl #0x4
     ldmia      r1,{r1,r2,r3,r4}
     ldr        r7,DAT_0803c008
     ldr        r5,[r7,#0x0]
     ldr        r7,DAT_0803c00c
     ldr        r6,[r7,#0x0]
     mul        r7,r1,r6
     mla        r8,r3,r5,r7
     mov        r8,r8, asr #0x8
     mul        r7,r2,r6
     mla        r9,r4,r5,r7
     mov        r9,r9, asr #0x8
     add        r8,r8,r9, lsl #0x10
     str        r8,[r0,#0x20]
     mul        r7,r1,r5
     mul        r8,r3,r6
     sub        r8,r7,r8
     rsb        r8,r8,#0
     mov        r8,r8, asr #0x8
     mul        r7,r2,r5
     mul        r9,r4,r6
     sub        r9,r7,r9
     rsb        r9,r9,#0
     mov        r9,r9, asr #0x8
     add        r8,r8,r9, lsl #0x10
     str        r8,[r0,#0x24]
     ldmia      sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10}
     ldr        sp,[r0,#0x3c]
     bx         lr
    ARM_FUNC_END fun_0803bdfc

    ARM_FUNC_START fun_0803bedc
fun_0803bedc: @ 0x0803bedc
     str        sp,[r2,#0x20]
     stmdb      sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
     ldmia      r1,{r3,r4}
     ldmia      r2,{r5,r6,r7,r8}
     sub        r3,r3,r5
     sub        r4,r4,r6
     mul        r9,r3,r7
     mul        r10,r4,r8
     add        r10,r10,r9
     mov        r11,r10, asr #0x8
     mul        r9,r3,r8
     mul        r10,r4,r7
     sub        r9,r9,r10
     rsb        r9,r9,#0
     mov        r12,r9, asr #0x8
     ldr        r7,[r2,#0x10]
     ldr        r8,[r2,#0x14]
     mul        r9,r12,r8
     add        r9,r9,r7
     movs       r10,r9, asr #0x8
     ldr        r7,[r2,#0x18]
     ldr        r8,[r2,#0x1c]
     mul        r9,r12,r7
     sub        r9,r8,r9
     mov        r7,r9, asr #0x8
     stmdb      sp!,{r0,r1,r2,r3}
     mov        r0,#0x780000
     mov        r1,r10
     bl         fun_0803bf8c
     mov        r0,r0
     mov        lr,r2
     ldmia      sp!,{r0,r1,r2,r3}
     mov        r10,r10, asr #0x8
     mul        r11,lr,r11
     mov        r11,r11, asr #0x10
     mul        r7,lr,r7
     mov        r7,r7, asr #0x10
     str        r11,[r0,#0x0]
     str        r7,[r0,#0x4]
     str        r10,[r0,#0x8]
     ldmia      sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
     ldr        sp,[r2,#0x20]
     bx         lr
.word 0xe1a00000
    ARM_FUNC_END fun_0803bedc

    ARM_FUNC_START fun_0803bf8c
fun_0803bf8c: @ 0x0803bf8c
     stmdb      sp!,{r0,r1,r4,r5,r6,lr}
     ands       r6,r0,#0x80000000
     rsbmi      r0,r0,#0x0
     eor        r5,r6,r1
     cmp        r1,#0x0
     rsbmi      r1,r1,#0x0
     cmp        r0,#0x0
     rsbmi      r0,r0,#0x0
     mov        r3,#0x0
     mov        r2,#0x0
     mov        r4,#0x80000000
     movs       r0,r0, lsl #0x8
     mov        r4,r4, lsr #0x8
LAB_0803bfc0:
     movs       r0,r0, lsl #0x1
     adc        r3,r3,r3
     cmp        r3,r1
     subge      r3,r3,r1
     orrge      r2,r2,r4
     movs       r4,r4, lsr #0x1
     bne        LAB_0803bfc0
     cmp        r5,#0x0
     rsbmi      r2,r2,#0x0
     cmp        r6,#0x0
     rsbmi      r3,r3,#0x0
     ldmia      sp!,{r0,r1,r4,r5,r6,pc}^
DAT_0803bff0:
     .4byte 0x03002400
DAT_0803bff4:
     .4byte 0x03002440
DAT_0803bff8:
     .4byte 0x03003448
DAT_0803bffc:
     .4byte 0x0300344C
DAT_0803c000:
     .4byte 0x03002400
DAT_0803c004:
     .4byte 0x03002440
DAT_0803c008:
     .4byte 0x03003440
DAT_0803c00c:
     .4byte 0x03003444
    ARM_FUNC_END fun_0803bf8c
