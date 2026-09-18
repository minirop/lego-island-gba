    .INCLUDE "macro.inc"

    ARM_FUNC_START fun_08042a3c
fun_08042a3c: @ 0x08042a3c
     stmdb      sp!,{r0,r1}
     ldr        r0,=0x04000200
     ldrh       r1,[r0,#0x0]
     orr        r1,r1,#0x10
     strh       r1,[r0,#0x0]
     ldmia      sp!,{r0,r1}
     bx         lr
    ARM_FUNC_END fun_08042a3c

    ARM_FUNC_START fun_08042a58
fun_08042a58: @ 0x08042a58
     stmdb      sp!,{r0,r1}
     ldr        r0,=0x04000200
     ldrh       r1,[r0,#0x0]
     bic        r1,r1,#0x10
     strh       r1,[r0,#0x0]
     ldmia      sp!,{r0,r1}
     bx         lr
    ARM_FUNC_END fun_08042a58

    ARM_FUNC_START fun_08042a74
fun_08042a74: @ 0x08042a74
     stmdb      sp!,{r0,r1,r2,r4,r5,r6,r7,r8,r9,lr}
LAB_08042a78:
     mov        lr,#0x0
     mov        r9,#0x20
LAB_08042a80:
     ldrsh      r4,[r0],#0x4
     ldrsh      r5,[r0],#0x4
     ldrsh      r6,[r0],#0x4
     ldrsh      r7,[r0],#-0xc
     cmp        r4,#0x7f
     movgt      r4,#0x7f
     cmn        r4,#0x80
     mvnlt      r4,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r4, lsl #0x18
     cmp        r5,#0x7f
     movgt      r5,#0x7f
     cmn        r5,#0x80
     mvnlt      r5,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r5, lsl #0x18
     cmp        r6,#0x7f
     movgt      r6,#0x7f
     cmn        r6,#0x80
     mvnlt      r6,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r6, lsl #0x18
     cmp        r7,#0x7f
     movgt      r7,#0x7f
     cmn        r7,#0x80
     mvnlt      r7,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r7, lsl #0x18
     str        r8,[r1],#0x4
     ldrsh      r4,[r0,#0x2]
     ldrsh      r5,[r0,#0x6]
     ldrsh      r6,[r0,#0xa]
     ldrsh      r7,[r0,#0xe]
     str        lr,[r0],#0x4
     str        lr,[r0],#0x4
     str        lr,[r0],#0x4
     str        lr,[r0],#0x4
     cmp        r4,#0x7f
     movgt      r4,#0x7f
     cmn        r4,#0x80
     mvnlt      r4,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r4, lsl #0x18
     cmp        r5,#0x7f
     movgt      r5,#0x7f
     cmn        r5,#0x80
     mvnlt      r5,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r5, lsl #0x18
     cmp        r6,#0x7f
     movgt      r6,#0x7f
     cmn        r6,#0x80
     mvnlt      r6,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r6, lsl #0x18
     cmp        r7,#0x7f
     movgt      r7,#0x7f
     cmn        r7,#0x80
     mvnlt      r7,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r7, lsl #0x18
     str        r8,[r2],#0x4
     subs       r9,r9,#0x1
     bne        LAB_08042a80
     ldmia      sp!,{r0,r1,r2,r4,r5,r6,r7,r8,r9,lr}
     bx         lr
    ARM_FUNC_END fun_08042a74

    ARM_FUNC_START fun_08042b88
fun_08042b88: @ 0x08042b88
     stmdb      sp!,{r0,r1,r4,r5,r6,r7,r8,r9,lr}
     mov        lr,#0x0
     mov        r9,#0x20
LAB_08042b94:
     ldrsh      r4,[r0,#0x0]
     ldrsh      r5,[r0,#0x2]
     ldrsh      r6,[r0,#0x4]
     ldrsh      r7,[r0,#0x6]
     str        lr,[r0],#0x4
     str        lr,[r0],#0x4
     cmp        r4,#0x7f
     movgt      r4,#0x7f
     cmn        r4,#0x80
     mvnlt      r4,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r4, lsl #0x18
     cmp        r5,#0x7f
     movgt      r5,#0x7f
     cmn        r5,#0x80
     mvnlt      r5,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r5, lsl #0x18
     cmp        r6,#0x7f
     movgt      r6,#0x7f
     cmn        r6,#0x80
     mvnlt      r6,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r6, lsl #0x18
     cmp        r7,#0x7f
     movgt      r7,#0x7f
     cmn        r7,#0x80
     mvnlt      r7,#0x7f
     mov        r8,r8, lsr #0x8
     orr        r8,r8,r7, lsl #0x18
     str        r8,[r1],#0x4
     subs       r9,r9,#0x1
     bne        LAB_08042b94
     ldmia      sp!,{r0,r1,r4,r5,r6,r7,r8,r9,lr}
     bx         lr
    ARM_FUNC_END fun_08042b88

.incbin "baserom.gba", 0x042c20, 0x0434c4 - 0x042c20
