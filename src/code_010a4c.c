__attribute__((naked)) void fun_08010a4c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r0,DAT_08010a64\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bls         LAB_08010a5a\n\
    b           switchD_08010a62_caseD_8\n\
LAB_08010a5a:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_08010a68\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_08010a64:\n\
    .4byte 0x020117E0\n\
DAT_08010a68:\n\
    .4byte 0x08010A6C\n\
switchD_08010a62_switchdataD_08010a6c:\n\
    .4byte switchD_08010a62_caseD_0\n\
    .4byte switchD_08010a62_caseD_1\n\
    .4byte switchD_08010a62_caseD_2\n\
    .4byte switchD_08010a62_caseD_3\n\
    .4byte switchD_08010a62_caseD_4\n\
    .4byte switchD_08010a62_caseD_5\n\
    .4byte switchD_08010a62_caseD_6\n\
    .4byte switchD_08010a62_caseD_7\n\
switchD_08010a62_caseD_0:\n\
    ldr         r7,DAT_08010abc\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010a98\n\
    bl          fun_08003b00\n\
LAB_08010a98:\n\
    ldr         r6,DAT_08010ac0\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010aa4\n\
    bl          fun_08003b00\n\
LAB_08010aa4:\n\
    ldr         r5,DAT_08010ac4\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010ab0\n\
    bl          fun_08003b00\n\
LAB_08010ab0:\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r0,[r7,#0x0]\n\
    b           LAB_08010bb6\n\
\n\
.space 2\n\
\n\
DAT_08010abc:\n\
    .4byte 0x0200DC50\n\
DAT_08010ac0:\n\
    .4byte 0x0200DC3C\n\
DAT_08010ac4:\n\
    .4byte 0x0200DC38\n\
switchD_08010a62_caseD_7:\n\
    ldr         r7,DAT_08010af8\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010ad4\n\
    bl          fun_08003b00\n\
LAB_08010ad4:\n\
    ldr         r6,DAT_08010afc\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010ae0\n\
    bl          fun_08003b00\n\
LAB_08010ae0:\n\
    ldr         r5,DAT_08010b00\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010aec\n\
    bl          fun_08003b00\n\
LAB_08010aec:\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r0,[r7,#0x0]\n\
    mov         r0,#0x31\n\
    b           LAB_08010bb6\n\
DAT_08010af8:\n\
    .4byte 0x0200DC50\n\
DAT_08010afc:\n\
    .4byte 0x0200DC3C\n\
DAT_08010b00:\n\
    .4byte 0x0200DC38\n\
switchD_08010a62_caseD_1:\n\
    ldr         r7,DAT_08010b34\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b10\n\
    bl          fun_08003b00\n\
LAB_08010b10:\n\
    ldr         r6,DAT_08010b38\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b1c\n\
    bl          fun_08003b00\n\
LAB_08010b1c:\n\
    ldr         r5,DAT_08010b3c\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b28\n\
    bl          fun_08003b00\n\
LAB_08010b28:\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r0,[r7,#0x0]\n\
    mov         r0,#0x8\n\
    b           LAB_08010bb6\n\
DAT_08010b34:\n\
    .4byte 0x0200DC50\n\
DAT_08010b38:\n\
    .4byte 0x0200DC3C\n\
DAT_08010b3c:\n\
    .4byte 0x0200DC38\n\
switchD_08010a62_caseD_4:\n\
    mov         r0,#0x1c\n\
    b           LAB_08010bb6\n\
switchD_08010a62_caseD_5:\n\
    mov         r0,#0x23\n\
    b           LAB_08010bb6\n\
switchD_08010a62_caseD_3:\n\
    mov         r0,#0x15\n\
    b           LAB_08010bb6\n\
switchD_08010a62_caseD_6:\n\
    ldr         r7,DAT_08010b7c\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b58\n\
    bl          fun_08003b00\n\
LAB_08010b58:\n\
    ldr         r6,DAT_08010b80\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b64\n\
    bl          fun_08003b00\n\
LAB_08010b64:\n\
    ldr         r5,DAT_08010b84\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b70\n\
    bl          fun_08003b00\n\
LAB_08010b70:\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r0,[r7,#0x0]\n\
    mov         r0,#0x2a\n\
    b           LAB_08010bb6\n\
DAT_08010b7c:\n\
    .4byte 0x0200DC1C\n\
DAT_08010b80:\n\
    .4byte 0x0200DC3C\n\
DAT_08010b84:\n\
    .4byte 0x0200DC38\n\
switchD_08010a62_caseD_2:\n\
    ldr         r7,DAT_08010c00\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010b94\n\
    bl          fun_08003b00\n\
LAB_08010b94:\n\
    ldr         r6,DAT_08010c04\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010ba0\n\
    bl          fun_08003b00\n\
LAB_08010ba0:\n\
    ldr         r5,DAT_08010c08\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010bac\n\
    bl          fun_08003b00\n\
LAB_08010bac:\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r0,[r7,#0x0]\n\
    mov         r0,#0xe\n\
LAB_08010bb6:\n\
    strh        r0,[r4,#0x10]\n\
switchD_08010a62_caseD_8:\n\
    mov         r5,#0x0\n\
    strb        r5,[r4,#0x18]\n\
    ldr         r0,DAT_08010c0c\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010bc8\n\
    bl          fun_08003b00\n\
LAB_08010bc8:\n\
    ldr         r7,DAT_08010c10\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010bd4\n\
    bl          fun_08003b00\n\
LAB_08010bd4:\n\
    ldr         r6,DAT_08010c14\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010be0\n\
    bl          fun_08003b00\n\
LAB_08010be0:\n\
    ldr         r4,DAT_08010c18\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010bec\n\
    bl          fun_08003b00\n\
LAB_08010bec:\n\
    str         r5,[r4,#0x0]\n\
    str         r5,[r7,#0x0]\n\
    str         r5,[r6,#0x0]\n\
    mov         r0,#0x1\n\
    bl          fun_08039d78\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08010c00:\n\
    .4byte 0x0200DC44\n\
DAT_08010c04:\n\
    .4byte 0x0200DC3C\n\
DAT_08010c08:\n\
    .4byte 0x0200DC38\n\
DAT_08010c0c:\n\
    .4byte 0x0200DC30\n\
DAT_08010c10:\n\
    .4byte 0x0200DC24\n\
DAT_08010c14:\n\
    .4byte 0x0200DC18\n\
DAT_08010c18:\n\
    .4byte 0x0200DC20\n\
    ");
}
__attribute__((naked)) void fun_08010c1c()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x4\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010c8c\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010c90\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x5\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010c94\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010c40\n\
    b           switchD_08010ccc_caseD_3\n\
LAB_08010c40:\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08010c50\n\
    ldr         r0,DAT_08010c98\n\
    bl          fun_08010a4c\n\
LAB_08010c50:\n\
    bl          fun_080014ec\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08010c5c\n\
    b           LAB_08010d9c\n\
LAB_08010c5c:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010c9c\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7d\n\
    bls         LAB_08010c6c\n\
    b           LAB_08010d9c\n\
LAB_08010c6c:\n\
    ldr         r0,DAT_08010ca0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x5\n\
    bl          __umodsi3\n\
    cmp         r0,#0x0\n\
    bne         LAB_08010cac\n\
    ldr         r0,DAT_08010ca4\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08010cac\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x3c\n\
    bne         LAB_08010ca8\n\
    mov         r0,#0x3b\n\
    b           LAB_08010caa\n\
DAT_08010c8c:\n\
    .4byte 0x00000E0C\n\
DAT_08010c90:\n\
    .4byte 0x0200D370\n\
DAT_08010c94:\n\
    .4byte 0x0200DC2C\n\
DAT_08010c98:\n\
    .4byte 0x020006A0\n\
DAT_08010c9c:\n\
    .4byte 0x00000E05\n\
DAT_08010ca0:\n\
    .4byte 0x0200DC48\n\
DAT_08010ca4:\n\
    .4byte 0x0200DC20\n\
LAB_08010ca8:\n\
    add         r0,#0x1\n\
LAB_08010caa:\n\
    strh        r0,[r1,#0x0]\n\
LAB_08010cac:\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_08010cd0\n\
    add         r0,r0,r3\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x2\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010cd4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bls         LAB_08010cc4\n\
    b           switchD_08010ccc_caseD_3\n\
LAB_08010cc4:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_08010cd8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_08010cd0:\n\
    .4byte 0x00000E05\n\
DAT_08010cd4:\n\
    .4byte 0x020117E0\n\
DAT_08010cd8:\n\
    .4byte 0x08010CDC\n\
                            switchdataD_08010cdc:\n\
    .4byte switchD_08010ccc_caseD_0\n\
    .4byte switchD_08010ccc_caseD_0\n\
    .4byte switchD_08010ccc_caseD_2\n\
    .4byte switchD_08010ccc_caseD_3\n\
    .4byte switchD_08010ccc_caseD_3\n\
    .4byte switchD_08010ccc_caseD_3\n\
    .4byte switchD_08010ccc_caseD_6\n\
    .4byte switchD_08010ccc_caseD_0\n\
switchD_08010ccc_caseD_0:\n\
    ldr         r0,DAT_08010d28\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08010d06\n\
    b           switchD_08010ccc_caseD_3\n\
LAB_08010d06:\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010d2c\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010d30\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010d34\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x7\n\
    strh        r0,[r1,#0x2]\n\
    ldrh        r0,[r2,#0x4]\n\
    add         r0,#0x34\n\
    strh        r0,[r1,#0x4]\n\
    b           switchD_08010ccc_caseD_3\n\
DAT_08010d28:\n\
    .4byte 0x0200DC50\n\
DAT_08010d2c:\n\
    .4byte 0x0200DC20\n\
DAT_08010d30:\n\
    .4byte 0x0000FDFF\n\
DAT_08010d34:\n\
    .4byte 0x0200DC3C\n\
switchD_08010ccc_caseD_6:\n\
    ldr         r0,DAT_08010d50\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08010d42\n\
    b           switchD_08010ccc_caseD_3\n\
LAB_08010d42:\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010d54\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x12\n\
    b           LAB_08010d6e\n\
DAT_08010d50:\n\
    .4byte 0x0200DC1C\n\
DAT_08010d54:\n\
    .4byte 0x0200DC3C\n\
switchD_08010ccc_caseD_2:\n\
    ldr         r0,DAT_08010d8c\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08010d62\n\
    b           switchD_08010ccc_caseD_3\n\
LAB_08010d62:\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010d90\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x6\n\
LAB_08010d6e:\n\
    strh        r0,[r2,#0x2]\n\
    ldr         r0,DAT_08010d94\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010d98\n\
    ldrh        r3,[r1,#0x12]\n\
    and         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x7\n\
    strh        r0,[r1,#0x2]\n\
    ldrh        r0,[r2,#0x4]\n\
    add         r0,#0x24\n\
    strh        r0,[r1,#0x4]\n\
    b           switchD_08010ccc_caseD_3\n\
\n\
.space 2\n\
\n\
DAT_08010d8c:\n\
    .4byte 0x0200DC44\n\
DAT_08010d90:\n\
    .4byte 0x0200DC3C\n\
DAT_08010d94:\n\
    .4byte 0x0200DC20\n\
DAT_08010d98:\n\
    .4byte 0x0000FDFF\n\
LAB_08010d9c:\n\
    ldr         r0,DAT_08010dbc\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x5\n\
    bl          __umodsi3\n\
    cmp         r0,#0x0\n\
    bne         LAB_08010dc8\n\
    ldr         r0,DAT_08010dc0\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08010dc8\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x3c\n\
    bne         LAB_08010dc4\n\
    mov         r0,#0x3b\n\
    b           LAB_08010dc6\n\
DAT_08010dbc:\n\
    .4byte 0x0200DC48\n\
DAT_08010dc0:\n\
    .4byte 0x0200DC20\n\
LAB_08010dc4:\n\
    add         r0,#0x1\n\
LAB_08010dc6:\n\
    strh        r0,[r1,#0x0]\n\
LAB_08010dc8:\n\
    ldr         r0,DAT_08010ddc\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bhi         switchD_08010dd8_caseD_3\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_08010de0\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_08010ddc:\n\
    .4byte 0x020117E0\n\
DAT_08010de0:\n\
    .4byte 0x08010DE4\n\
                            switchdataD_08010de4:\n\
    .4byte switchD_08010dd8_caseD_0\n\
    .4byte switchD_08010dd8_caseD_0\n\
    .4byte switchD_08010dd8_caseD_2\n\
    .4byte switchD_08010dd8_caseD_3\n\
    .4byte switchD_08010dd8_caseD_3\n\
    .4byte switchD_08010dd8_caseD_3\n\
    .4byte switchD_08010dd8_caseD_6\n\
    .4byte switchD_08010dd8_caseD_0\n\
switchD_08010dd8_caseD_0:\n\
    ldr         r0,DAT_08010e2c\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         switchD_08010dd8_caseD_3\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010e30\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010e34\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010e38\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x7\n\
    strh        r0,[r1,#0x2]\n\
    ldrh        r0,[r2,#0x4]\n\
    add         r0,#0x34\n\
    b           LAB_08010e88\n\
DAT_08010e2c:\n\
    .4byte 0x0200DC50\n\
DAT_08010e30:\n\
    .4byte 0x0200DC20\n\
DAT_08010e34:\n\
    .4byte 0x0000FDFF\n\
DAT_08010e38:\n\
    .4byte 0x0200DC3C\n\
switchD_08010dd8_caseD_6:\n\
    ldr         r0,DAT_08010e54\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         switchD_08010dd8_caseD_3\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010e58\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x16\n\
    b           LAB_08010e70\n\
\n\
.space 2\n\
\n\
DAT_08010e54:\n\
    .4byte 0x0200DC1C\n\
DAT_08010e58:\n\
    .4byte 0x0200DC3C\n\
switchD_08010dd8_caseD_2:\n\
    ldr         r0,DAT_08010ef0\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         switchD_08010dd8_caseD_3\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010ef4\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x2\n\
LAB_08010e70:\n\
    strh        r0,[r2,#0x2]\n\
    ldr         r0,DAT_08010ef8\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010efc\n\
    ldrh        r3,[r1,#0x12]\n\
    and         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x7\n\
    strh        r0,[r1,#0x2]\n\
    ldrh        r0,[r2,#0x4]\n\
    add         r0,#0x24\n\
LAB_08010e88:\n\
    strh        r0,[r1,#0x4]\n\
switchD_08010dd8_caseD_3:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010f00\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x2\n\
    bls         switchD_08010ccc_caseD_3\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010f00\n\
    add         r0,r0,r2\n\
    ldrb        r1,[r0,#0x0]\n\
    sub         r1,#0x2\n\
    strb        r1,[r0,#0x0]\n\
switchD_08010ccc_caseD_3:\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_08010f00\n\
    add         r0,r0,r3\n\
    ldrb        r2,[r0,#0x0]\n\
    mov         r3,#0x3b\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
    mov         r0,#0x78\n\
    str         r0,[sp,#0x0]\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_08039da8\n\
    bl          fun_080105e8\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010f04\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08010ee0\n\
    ldr         r0,DAT_08010f08\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08010ee0\n\
    bl          fun_08010f10\n\
LAB_08010ee0:\n\
    ldr         r1,DAT_08010f0c\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    add         sp,#0x4\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08010ef0:\n\
    .4byte 0x0200DC44\n\
DAT_08010ef4:\n\
    .4byte 0x0200DC3C\n\
DAT_08010ef8:\n\
    .4byte 0x0200DC20\n\
DAT_08010efc:\n\
    .4byte 0x0000FDFF\n\
DAT_08010f00:\n\
    .4byte 0x00000E05\n\
DAT_08010f04:\n\
    .4byte 0x00000E0C\n\
DAT_08010f08:\n\
    .4byte 0x0200DC28\n\
DAT_08010f0c:\n\
    .4byte 0x0200DC48\n\
    ");
}
__attribute__((naked)) void fun_08010f10()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r0,DAT_08010f44\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x3c\n\
    bne         switchD_08010f40_caseD_3\n\
    ldr         r1,DAT_08010f48\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010f4c\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010f50\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bhi         switchD_08010f40_caseD_3\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_08010f54\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_08010f44:\n\
    .4byte 0x0200DC40\n\
DAT_08010f48:\n\
    .4byte 0x0200DC2C\n\
DAT_08010f4c:\n\
    .4byte 0x0200DC20\n\
DAT_08010f50:\n\
    .4byte 0x020117E0\n\
DAT_08010f54:\n\
    .4byte 0x08010F58\n\
                            switchdataD_08010f58:\n\
    .4byte switchD_08010f40_caseD_0\n\
    .4byte switchD_08010f40_caseD_0\n\
    .4byte switchD_08010f40_caseD_2\n\
    .4byte switchD_08010f40_caseD_3\n\
    .4byte switchD_08010f40_caseD_3\n\
    .4byte switchD_08010f40_caseD_3\n\
    .4byte switchD_08010f40_caseD_6\n\
    .4byte switchD_08010f40_caseD_0\n\
switchD_08010f40_caseD_0:\n\
    ldr         r4,DAT_08010f98\n\
    ldr         r1,[r4,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010f9c\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08010fa0\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,[r4,#0x0]\n\
    ldrh        r1,[r2,#0x2]\n\
    add         r1,#0x3\n\
    strh        r1,[r0,#0x2]\n\
    ldrh        r1,[r2,#0x4]\n\
    add         r1,#0x60\n\
    b           LAB_08011006\n\
DAT_08010f98:\n\
    .4byte 0x0200DC50\n\
DAT_08010f9c:\n\
    .4byte 0x08449528\n\
DAT_08010fa0:\n\
    .4byte 0x0200DC38\n\
switchD_08010f40_caseD_6:\n\
    ldr         r4,DAT_08010fcc\n\
    ldr         r2,[r4,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_08010fd0\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x12\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r0,DAT_08010fd4\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08010fd8\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,[r4,#0x0]\n\
    ldrh        r1,[r2,#0x2]\n\
    add         r1,#0x16\n\
    strh        r1,[r0,#0x2]\n\
    ldrh        r1,[r2,#0x4]\n\
    b           LAB_08011004\n\
DAT_08010fcc:\n\
    .4byte 0x0200DC1C\n\
DAT_08010fd0:\n\
    .4byte 0x0200DC3C\n\
DAT_08010fd4:\n\
    .4byte 0x08449528\n\
DAT_08010fd8:\n\
    .4byte 0x0200DC38\n\
switchD_08010f40_caseD_2:\n\
    ldr         r5,DAT_08011030\n\
    ldr         r2,[r5,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r4,DAT_08011034\n\
    ldr         r1,[r4,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    add         r0,#0x6\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r0,DAT_08011038\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_0801103c\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,[r4,#0x0]\n\
    ldrh        r1,[r1,#0x2]\n\
    add         r1,#0x4\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,[r5,#0x0]\n\
    ldrh        r1,[r1,#0x4]\n\
LAB_08011004:\n\
    add         r1,#0x30\n\
LAB_08011006:\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x39\n\
    strh        r1,[r0,#0x0]\n\
switchD_08010f40_caseD_3:\n\
    ldr         r1,DAT_08011040\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0801101c\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08011028\n\
LAB_0801101c:\n\
    mov         r0,#0x25\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_08011044\n\
    bl          fun_08010a4c\n\
LAB_08011028:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08011030:\n\
    .4byte 0x0200DC44\n\
DAT_08011034:\n\
    .4byte 0x0200DC3C\n\
DAT_08011038:\n\
    .4byte 0x08449528\n\
DAT_0801103c:\n\
    .4byte 0x0200DC38\n\
DAT_08011040:\n\
    .4byte 0x0200DC40\n\
DAT_08011044:\n\
    .4byte 0x020006A0\n\
\n\
    ");
}
__attribute__((naked)) void fun_0801104c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    ldr         r4,DAT_0801107c\n\
    mov         r0,#0x4\n\
    ldrsh       r1,[r4,r0]\n\
    ldr         r0,DAT_08011080\n\
    cmp         r1,r0\n\
    bgt         LAB_08011094\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011084\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_08011088\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0801108c\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_08011090\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x2\n\
    strb        r0,[r4,#0x18]\n\
    b           LAB_080110b8\n\
\n\
.space 2\n\
\n\
DAT_0801107c:\n\
    .4byte 0x020006A0\n\
DAT_08011080:\n\
    .4byte 0x00000652\n\
DAT_08011084:\n\
    .4byte 0x00000DDC\n\
DAT_08011088:\n\
    .4byte 0x00000653\n\
DAT_0801108c:\n\
    .4byte 0x00000DDE\n\
DAT_08011090:\n\
    .4byte 0x000008C7\n\
LAB_08011094:\n\
    mov         r0,#0x1\n\
    strb        r0,[r4,#0x18]\n\
    mov         r0,#0x2a\n\
    strh        r0,[r4,#0x10]\n\
    ldr         r1,DAT_080110c0\n\
    mov         r0,#0x10\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x3\n\
    strb        r0,[r5,#0x18]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080110c4\n\
    add         r0,r0,r1\n\
    mov         r1,#0x5\n\
    strb        r1,[r0,#0x0]\n\
LAB_080110b8:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080110c0:\n\
    .4byte 0x0200DC90\n\
DAT_080110c4:\n\
    .4byte 0x00000E04\n\
    ");
}
__attribute__((naked)) void fun_080110c8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    mov         r9,r0\n\
    add         r6,r2,#0x0\n\
    add         r7,r3,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011140\n\
    add         r0,r0,r1\n\
    mov         r1,#0xc6\n\
    lsl         r1,r1,#0x3\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011144\n\
    add         r0,r0,r1\n\
    ldr         r5,DAT_08011148\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,DAT_0801114c\n\
    mov         r0,#0x2\n\
    mov         r8,r0\n\
    mov         r1,r8\n\
    strb        r1,[r4,#0x18]\n\
    mov         r2,#0xd7\n\
    lsl         r2,r2,#0x3\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r3,r5,#0x0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011134\n\
    ldr         r0,DAT_08011150\n\
    add         r1,r0,#0x0\n\
    strh        r1,[r6,#0x0]\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x44\n\
    strh        r1,[r0,#0x0]\n\
    strh        r5,[r7,#0x0]\n\
    add         r0,#0x2\n\
    strh        r5,[r0,#0x0]\n\
    mov         r1,r8\n\
    str         r1,[r4,#0x48]\n\
    add         r1,r4,#0x0\n\
    add         r1,#0x58\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    mov         r1,r9\n\
    str         r0,[r1,#0x8]\n\
    strb        r0,[r1,#0x18]\n\
LAB_08011134:\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08011140:\n\
    .4byte 0x00000DDC\n\
DAT_08011144:\n\
    .4byte 0x00000DDE\n\
DAT_08011148:\n\
    .4byte 0x000008C7\n\
DAT_0801114c:\n\
    .4byte 0x020006A0\n\
DAT_08011150:\n\
    .4byte 0x000005AC\n\
    ");
}
__attribute__((naked)) void fun_08011154()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    add         r5,r0,#0x0\n\
    add         r7,r2,#0x0\n\
    mov         r8,r3\n\
    bl          fun_080020a4\n\
    ldr         r6,DAT_080111bc\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08011240\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080111c0\n\
    mov         r9,r1\n\
    add         r0,r9\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08011240\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_080111c4\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080111cc\n\
    ldr         r4,DAT_080111c8\n\
    ldrh        r0,[r4,#0x4]\n\
    strh        r0,[r7,#0x0]\n\
    strh        r0,[r5,#0x4]\n\
    ldrh        r0,[r4,#0x6]\n\
    sub         r0,#0x5a\n\
    mov         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    strh        r0,[r5,#0x6]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x4]\n\
    add         r0,r0,r6\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x6]\n\
    sub         r1,#0x14\n\
    b           LAB_08011234\n\
DAT_080111bc:\n\
    .4byte 0x00000DFA\n\
DAT_080111c0:\n\
    .4byte 0x00000DFC\n\
DAT_080111c4:\n\
    .4byte 0x00000E84\n\
DAT_080111c8:\n\
    .4byte 0x020006A0\n\
LAB_080111cc:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08011208\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0xe\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011210\n\
    ldr         r4,DAT_0801120c\n\
    ldrh        r0,[r4,#0x4]\n\
    strh        r0,[r7,#0x0]\n\
    strh        r0,[r5,#0x4]\n\
    ldrh        r0,[r4,#0x6]\n\
    add         r0,#0x82\n\
    mov         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    strh        r0,[r5,#0x6]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x4]\n\
    add         r0,r0,r6\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x6]\n\
    add         r1,#0x14\n\
    b           LAB_08011234\n\
\n\
.space 2\n\
\n\
DAT_08011208:\n\
    .4byte 0x00000E84\n\
DAT_0801120c:\n\
    .4byte 0x020006A0\n\
LAB_08011210:\n\
    ldr         r4,DAT_0801123c\n\
    ldrh        r0,[r4,#0x4]\n\
    sub         r0,#0x82\n\
    strh        r0,[r7,#0x0]\n\
    strh        r0,[r5,#0x4]\n\
    ldrh        r0,[r4,#0x6]\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x0]\n\
    strh        r0,[r5,#0x6]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x4]\n\
    sub         r1,#0x19\n\
    add         r0,r0,r6\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r4,#0x6]\n\
LAB_08011234:\n\
    add         r0,r9\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_0801143e\n\
\n\
.space 2\n\
\n\
DAT_0801123c:\n\
    .4byte 0x020006A0\n\
LAB_08011240:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080112c4\n\
    add         r0,r0,r1\n\
    ldrh        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_080112c8\n\
    mov         r10,r2\n\
    add         r0,r10\n\
    ldrh        r3,[r0,#0x0]\n\
    add         r0,r7,#0x0\n\
    mov         r1,r8\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08011268\n\
    b           LAB_0801143e\n\
LAB_08011268:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080112cc\n\
    mov         r9,r1\n\
    add         r0,r9\n\
    ldr         r6,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    and         r6,r0\n\
    cmp         r6,#0x0\n\
    beq         LAB_08011300\n\
    bl          fun_080020a4\n\
    add         r0,r10\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r5,DAT_080112d0\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r5,r2]\n\
    sub         r0,#0x14\n\
    cmp         r1,r0\n\
    bne         LAB_080112e0\n\
    ldr         r1,DAT_080112d4\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r4,DAT_080112d8\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080112dc\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x4]\n\
    ldr         r2,DAT_080112c4\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x6]\n\
    sub         r1,#0x5a\n\
    b           LAB_0801140e\n\
\n\
.space 2\n\
\n\
DAT_080112c4:\n\
    .4byte 0x00000DFA\n\
DAT_080112c8:\n\
    .4byte 0x00000DFC\n\
DAT_080112cc:\n\
    .4byte 0x00000E84\n\
DAT_080112d0:\n\
    .4byte 0x020006A0\n\
DAT_080112d4:\n\
    .4byte 0x0200DCA0\n\
DAT_080112d8:\n\
    .4byte 0x0200DC90\n\
DAT_080112dc:\n\
    .4byte 0x00000DFE\n\
LAB_080112e0:\n\
    add         r1,r5,#0x0\n\
    add         r1,#0x38\n\
    mov         r4,#0x0\n\
    mov         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    str         r0,[r5,#0x28]\n\
    bl          fun_080020a4\n\
    add         r0,r9\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_080112fc\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    b           LAB_08011432\n\
DAT_080112fc:\n\
    .4byte 0xFFFFFDFF\n\
LAB_08011300:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08011358\n\
    add         r0,r0,r2\n\
    ldr         r4,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0xe\n\
    and         r4,r0\n\
    cmp         r4,#0x0\n\
    beq         LAB_080113cc\n\
    bl          fun_080020a4\n\
    add         r0,r10\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r5,DAT_0801135c\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r5,r2]\n\
    add         r0,#0x14\n\
    cmp         r1,r0\n\
    bne         LAB_08011370\n\
    ldr         r0,DAT_08011360\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r4,DAT_08011364\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011368\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x4]\n\
    ldr         r2,DAT_0801136c\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x6]\n\
    add         r1,#0x82\n\
    b           LAB_0801140e\n\
\n\
.space 2\n\
\n\
DAT_08011358:\n\
    .4byte 0x00000E84\n\
DAT_0801135c:\n\
    .4byte 0x020006A0\n\
DAT_08011360:\n\
    .4byte 0x0200DCA0\n\
DAT_08011364:\n\
    .4byte 0x0200DC90\n\
DAT_08011368:\n\
    .4byte 0x00000DFE\n\
DAT_0801136c:\n\
    .4byte 0x00000DFA\n\
LAB_08011370:\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x38\n\
    mov         r4,#0x1\n\
    strb        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r9\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x11\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0801138c\n\
    str         r4,[r5,#0x28]\n\
LAB_0801138c:\n\
    bl          fun_080020a4\n\
    add         r0,r9\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_080113bc\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r1,DAT_080113c0\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r7,#0x0]\n\
    mov         r1,#0x0\n\
    strh        r0,[r5,#0x24]\n\
    ldr         r2,DAT_080113c4\n\
    add         r0,r2,#0x0\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x0]\n\
    strh        r0,[r5,#0x26]\n\
    strb        r1,[r5,#0x18]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080113c8\n\
    add         r0,r0,r1\n\
    strh        r6,[r0,#0x0]\n\
    b           LAB_0801143e\n\
DAT_080113bc:\n\
    .4byte 0xFFDFFFFF\n\
DAT_080113c0:\n\
    .4byte 0x0000085C\n\
DAT_080113c4:\n\
    .4byte 0x00000B8D\n\
DAT_080113c8:\n\
    .4byte 0x00000DD8\n\
LAB_080113cc:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08011414\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r5,DAT_08011418\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r5,r2]\n\
    sub         r0,#0x19\n\
    cmp         r1,r0\n\
    bne         LAB_08011428\n\
    ldr         r0,DAT_0801141c\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r4,DAT_08011420\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011424\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x4]\n\
    sub         r1,#0x8c\n\
    ldr         r2,DAT_08011414\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x6]\n\
LAB_0801140e:\n\
    add         r0,r10\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_0801143e\n\
DAT_08011414:\n\
    .4byte 0x00000DFA\n\
DAT_08011418:\n\
    .4byte 0x020006A0\n\
DAT_0801141c:\n\
    .4byte 0x0200DCA0\n\
DAT_08011420:\n\
    .4byte 0x0200DC90\n\
DAT_08011424:\n\
    .4byte 0x00000DFE\n\
LAB_08011428:\n\
    add         r1,r5,#0x0\n\
    add         r1,#0x38\n\
    mov         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    str         r0,[r5,#0x28]\n\
LAB_08011432:\n\
    strb        r4,[r5,#0x18]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0801144c\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_0801143e:\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0801144c:\n\
    .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_08011450()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r5,r0,#0x0\n\
    add         r6,r2,#0x0\n\
    add         r7,r3,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080114f8\n\
    mov         r8,r1\n\
    add         r0,r8\n\
    ldrh        r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_080114b0\n\
    mov         r0,#0x2\n\
    bl          fun_080017b8\n\
    ldr         r0,DAT_080114fc\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_08011500\n\
    ldr         r2,DAT_08011504\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x3\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
    ldr         r1,DAT_08011508\n\
    mov         r0,#0x2\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r5,#0x4]\n\
    ldr         r2,DAT_0801150c\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080114f8\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_08011510\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_08011514\n\
    mov         r0,#0x1\n\
    strb        r0,[r1,#0x18]\n\
LAB_080114b0:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0801150c\n\
    add         r0,r0,r2\n\
    ldrh        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrh        r3,[r0,#0x0]\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_080114ee\n\
    ldr         r0,DAT_08011514\n\
    mov         r4,#0x0\n\
    strb        r4,[r0,#0x18]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08011518\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    str         r0,[r5,#0x8]\n\
    strb        r0,[r5,#0x18]\n\
    mov         r0,#0x12\n\
    bl          fun_08001088\n\
LAB_080114ee:\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080114f8:\n\
    .4byte 0x00000DFC\n\
DAT_080114fc:\n\
    .4byte 0x0200DCA0\n\
DAT_08011500:\n\
    .4byte 0x0200DC90\n\
DAT_08011504:\n\
    .4byte 0x00000694\n\
DAT_08011508:\n\
    .4byte 0x02002610\n\
DAT_0801150c:\n\
    .4byte 0x00000DFA\n\
DAT_08011510:\n\
    .4byte 0x00000A9A\n\
DAT_08011514:\n\
    .4byte 0x020006A0\n\
DAT_08011518:\n\
    .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_0801151c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r3,DAT_0801155c\n\
    ldrh        r1,[r3,#0x6]\n\
    ldr         r5,DAT_08011560\n\
    add         r0,r1,r5\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x5\n\
    bhi         LAB_0801156e\n\
    mov         r0,#0x4\n\
    ldrsh       r1,[r3,r0]\n\
    mov         r0,#0xc1\n\
    lsl         r0,r0,#0x3\n\
    cmp         r1,r0\n\
    ble         LAB_0801156e\n\
    add         r0,#0x63\n\
    cmp         r1,r0\n\
    bgt         LAB_0801156e\n\
    mov         r0,#0x1\n\
    strb        r0,[r3,#0x18]\n\
    mov         r0,#0x2a\n\
    strh        r0,[r3,#0x10]\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0xce\n\
    lsl         r0,r0,#0x3\n\
    cmp         r1,r0\n\
    bls         LAB_08011564\n\
    sub         r0,r1,#0x1\n\
    strh        r0,[r2,#0x0]\n\
    b           LAB_08011572\n\
\n\
.space 2\n\
\n\
DAT_0801155c:\n\
    .4byte 0x020006A0\n\
DAT_08011560:\n\
    .4byte 0xFFFFF73B\n\
LAB_08011564:\n\
    mov         r0,#0x5\n\
    strh        r0,[r4,#0x10]\n\
    mov         r0,#0x2\n\
    strb        r0,[r4,#0x18]\n\
    b           LAB_08011572\n\
LAB_0801156e:\n\
    mov         r0,#0x5\n\
    strh        r0,[r4,#0x10]\n\
LAB_08011572:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_08011578()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r0,DAT_08011598\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x1a\n\
    beq         LAB_08011590\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0801159c\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r4,#0x18]\n\
LAB_08011590:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08011598:\n\
    .4byte 0x020025E0\n\
DAT_0801159c:\n\
    .4byte 0x00000E04\n\
\n\
.space 2\n\
\n\
    ");
}
