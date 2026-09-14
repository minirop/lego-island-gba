__attribute__((naked)) void fun_0800c5c8()
{
    asm("\n\
    bl         fun_080020a4\n\
    ldr        r3,DAT_0800c604\n\
    add        r0,r0,r3\n\
    mov        r1,#0x0\n\
    strh       r1,[r0,#0x0]\n\
    ldr        r0,[sp,#0x0]\n\
    ldr        r1,[sp,#0x4]\n\
    mov        r2,r10\n\
    mov        r3,r8\n\
    bl         fun_0800d090\n\
    ldr        r0,[sp,#0x0]\n\
    ldr        r1,[sp,#0x4]\n\
    mov        r2,r10\n\
    mov        r3,r8\n\
    bl         fun_0800d120\n\
    mov        r0,#0x0\n\
    add        sp,#0x8\n\
    pop        {r3,r4,r5}\n\
    mov        r8,r3\n\
    mov        r9,r4\n\
    mov        r10,r5\n\
    pop        {r4,r5,r6,r7}\n\
    pop        {r1}\n\
    bx         r1\n\
\n\
.space 2\n\
\n\
DAT_0800c600:\n\
    .4byte 0x0200D370\n\
DAT_0800c604:\n\
    .4byte 0x00000DE8\n\
    ");
}
__attribute__((naked)) void fun_0800c608()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r12,r2\n\
    mov         r8,r3\n\
    ldr         r5,DAT_0800c68c\n\
    ldrh        r4,[r5,#0x0]\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x4d\n\
    mov         r10,r5\n\
    cmp         r4,r0\n\
    blt         LAB_0800c626\n\
    b           LAB_0800c8d2\n\
LAB_0800c626:\n\
    ldr         r1,DAT_0800c690\n\
    lsl         r2,r4,#0x5\n\
    add         r0,r1,#0x0\n\
    add         r0,#0xc\n\
    add         r0,r2,r0\n\
    ldr         r0,[r0,#0x0]\n\
    add         r3,r1,#0x0\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800c63a\n\
    b           LAB_0800c8c0\n\
LAB_0800c63a:\n\
    add         r0,r2,r3\n\
    mov         r1,r12\n\
    ldrh        r6,[r1,#0x0]\n\
    ldrh        r1,[r0,#0x4]\n\
    sub         r6,r6,r1\n\
    mov         r9,r6\n\
    mov         r6,r8\n\
    ldrh        r6,[r6,#0x0]\n\
    ldrh        r0,[r0,#0x6]\n\
    sub         r0,r6,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r6,r9\n\
    lsl         r1,r6,#0x10\n\
    mov         r6,#0x98\n\
    lsl         r6,r6,#0xd\n\
    add         r1,r1,r6\n\
    lsr         r1,r1,#0x10\n\
    cmp         r1,#0x26\n\
    bls         LAB_0800c664\n\
    b           LAB_0800c8c0\n\
LAB_0800c664:\n\
    lsl         r0,r0,#0x10\n\
    asr         r1,r0,#0x10\n\
    mov         r0,#0x14\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bgt         LAB_0800c672\n\
    b           LAB_0800c8c0\n\
LAB_0800c672:\n\
    cmp         r1,#0x13\n\
    ble         LAB_0800c678\n\
    b           LAB_0800c8c0\n\
LAB_0800c678:\n\
    ldrh        r5,[r5,#0x0]\n\
    sub         r0,r4,r5\n\
    cmp         r0,#0x4c\n\
    bls         LAB_0800c682\n\
    b           switchD_0800c68a_caseD_10\n\
LAB_0800c682:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800c694\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800c68c:\n\
    .4byte 0x02000690\n\
DAT_0800c690:\n\
    .4byte 0x020006A0\n\
DAT_0800c694:\n\
    .4byte 0x0800C698\n\
switchD_0800c68a_switchdataD_0800c698:\n\
    .4byte switchD_0800c68a_caseD_0\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_1\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_1b\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_1d\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_25\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_10\n\
    .4byte switchD_0800c68a_caseD_43\n\
    .4byte switchD_0800c68a_caseD_43\n\
    .4byte switchD_0800c68a_caseD_43\n\
    .4byte switchD_0800c68a_caseD_43\n\
    .4byte switchD_0800c68a_caseD_43\n\
    .4byte switchD_0800c68a_caseD_48\n\
    .4byte switchD_0800c68a_caseD_48\n\
    .4byte switchD_0800c68a_caseD_48\n\
    .4byte switchD_0800c68a_caseD_48\n\
    .4byte switchD_0800c68a_caseD_48\n\
switchD_0800c68a_caseD_0:\n\
    mov         r0,#0xd\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
    ldr         r1,DAT_0800c7f4\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800c7f8\n\
    ldr         r2,DAT_0800c7fc\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x0\n\
    bl          fun_080017b8\n\
    mov         r0,#0x1\n\
    b           LAB_0800c8d4\n\
\n\
.space 2\n\
\n\
DAT_0800c7f4:\n\
    .4byte 0x0200DCA0\n\
DAT_0800c7f8:\n\
    .4byte 0x0200DC90\n\
DAT_0800c7fc:\n\
    .4byte 0x00000147\n\
switchD_0800c68a_caseD_1d:\n\
    mov         r0,#0x1\n\
    str         r0,[r3,#0x28]\n\
    mov         r3,r10\n\
    ldrh        r3,[r3,#0x0]\n\
    sub         r0,r4,r3\n\
    b           LAB_0800c8aa\n\
switchD_0800c68a_caseD_1b:\n\
    mov         r0,#0xb\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
    b           switchD_0800c68a_caseD_10\n\
switchD_0800c68a_caseD_43:\n\
    add         r0,r2,r3\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r6,[r0,#0x4]\n\
    ldrh        r2,[r1,#0x0]\n\
    cmp         r6,r2\n\
    bne         LAB_0800c836\n\
    ldrh        r0,[r0,#0x6]\n\
    ldrh        r1,[r1,#0x2]\n\
    cmp         r0,r1\n\
    bne         LAB_0800c836\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x2\n\
    mov         r2,#0x1\n\
    bl          fun_080003e0\n\
    b           LAB_0800c840\n\
LAB_0800c836:\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x1\n\
    mov         r2,#0x1\n\
    bl          fun_080003e0\n\
LAB_0800c840:\n\
    ldr         r0,DAT_0800c850\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_0800d97c\n\
    b           LAB_0800c8b2\n\
DAT_0800c850:\n\
    .4byte 0x02000690\n\
switchD_0800c68a_caseD_48:\n\
    mov         r0,#0x64\n\
    bl          fun_08002c04\n\
    cmp         r0,#0x18\n\
    bgt         LAB_0800c86a\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x2\n\
    mov         r2,#0x1\n\
    bl          fun_080003e0\n\
    b           LAB_0800c874\n\
LAB_0800c86a:\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080003e0\n\
LAB_0800c874:\n\
    ldr         r0,DAT_0800c884\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_0800d97c\n\
    b           LAB_0800c8b2\n\
DAT_0800c884:\n\
    .4byte 0x02000690\n\
switchD_0800c68a_caseD_25:\n\
    mov         r0,#0x11\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    b           switchD_0800c68a_caseD_10\n\
switchD_0800c68a_caseD_1:\n\
    mov         r3,r10\n\
    ldrh        r3,[r3,#0x0]\n\
    sub         r0,r4,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_080017b8\n\
    mov         r0,#0x12\n\
    b           LAB_0800c8b4\n\
switchD_0800c68a_caseD_10:\n\
    ldr         r0,DAT_0800c8bc\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
LAB_0800c8aa:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_080017b8\n\
LAB_0800c8b2:\n\
    mov         r0,#0x1e\n\
LAB_0800c8b4:\n\
    bl          fun_08001088\n\
    mov         r0,#0x1\n\
    b           LAB_0800c8d4\n\
DAT_0800c8bc:\n\
    .4byte 0x02000690\n\
LAB_0800c8c0:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    mov         r5,r10\n\
    ldrh        r0,[r5,#0x0]\n\
    add         r0,#0x4d\n\
    cmp         r4,r0\n\
    bge         LAB_0800c8d2\n\
    b           LAB_0800c626\n\
LAB_0800c8d2:\n\
    mov         r0,#0x0\n\
LAB_0800c8d4:\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800c8e4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r10,r2\n\
    mov         r9,r3\n\
    mov         r4,#0x1\n\
    ldr         r0,DAT_0800c924\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcc         LAB_0800c8fe\n\
    b           LAB_0800caa0\n\
LAB_0800c8fe:\n\
    mov         r0,#0xa\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    mov         r8,r0\n\
LAB_0800c904:\n\
    ldr         r0,DAT_0800c928\n\
    lsl         r1,r4,#0x5\n\
    add         r0,#0xc\n\
    add         r0,r1,r0\n\
    ldr         r0,[r0,#0x0]\n\
    add         r7,r1,#0x0\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800c916\n\
    b           LAB_0800ca90\n\
LAB_0800c916:\n\
    cmp         r4,#0x47\n\
    beq         LAB_0800c91e\n\
    cmp         r4,#0x49\n\
    bne         LAB_0800c92c\n\
LAB_0800c91e:\n\
    mov         r2,#0x32\n\
    b           LAB_0800c92e\n\
\n\
.space 2\n\
\n\
DAT_0800c924:\n\
    .4byte 0x02000690\n\
DAT_0800c928:\n\
    .4byte 0x020006A0\n\
LAB_0800c92c:\n\
    mov         r2,#0x24\n\
LAB_0800c92e:\n\
    ldr         r3,DAT_0800ca00\n\
    add         r1,r7,r3\n\
    mov         r5,r10\n\
    ldrh        r5,[r5,#0x0]\n\
    ldrh        r6,[r1,#0x4]\n\
    sub         r0,r5,r6\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r5,r9\n\
    ldrh        r5,[r5,#0x0]\n\
    ldrh        r1,[r1,#0x6]\n\
    sub         r0,r5,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    ldr         r0,DAT_0800ca04\n\
    add         r5,r0,#0x0\n\
    ldrb        r6,[r5,#0x0]\n\
    cmp         r6,#0x6\n\
    bne         LAB_0800c960\n\
    lsl         r0,r3,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r2\n\
    bge         LAB_0800c960\n\
    cmn         r0,r2\n\
    bgt         LAB_0800c972\n\
LAB_0800c960:\n\
    ldrb        r0,[r5,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_0800c97e\n\
    lsl         r0,r3,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmn         r0,r2\n\
    ble         LAB_0800c97e\n\
    cmp         r0,r2\n\
    bge         LAB_0800c97e\n\
LAB_0800c972:\n\
    lsl         r0,r1,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r8\n\
    ble         LAB_0800c97e\n\
    cmp         r0,#0x9\n\
    ble         LAB_0800c9e8\n\
LAB_0800c97e:\n\
    ldrb        r6,[r5,#0x0]\n\
    cmp         r6,#0x4\n\
    bne         LAB_0800c99c\n\
    lsl         r0,r1,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmn         r0,r2\n\
    ble         LAB_0800c99c\n\
    cmp         r0,r2\n\
    bge         LAB_0800c99c\n\
    lsl         r0,r3,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r8\n\
    ble         LAB_0800c99c\n\
    cmp         r0,#0x9\n\
    ble         LAB_0800c9e8\n\
LAB_0800c99c:\n\
    ldrb        r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800c9ba\n\
    lsl         r0,r1,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r2\n\
    bge         LAB_0800c9ba\n\
    cmn         r0,r2\n\
    ble         LAB_0800c9ba\n\
    lsl         r0,r3,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r8\n\
    ble         LAB_0800c9ba\n\
    cmp         r0,#0x9\n\
    ble         LAB_0800c9e8\n\
LAB_0800c9ba:\n\
    ldrb        r0,[r5,#0x0]\n\
    cmp         r0,#0x5\n\
    beq         LAB_0800c9cc\n\
    cmp         r0,#0x3\n\
    beq         LAB_0800c9cc\n\
    cmp         r0,#0x7\n\
    beq         LAB_0800c9cc\n\
    cmp         r0,#0x1\n\
    bne         LAB_0800ca90\n\
LAB_0800c9cc:\n\
    lsl         r0,r1,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsr         r1,r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r1,#0\n\
.syntax divided\n\
    cmp         r0,r2\n\
    ble         LAB_0800ca90\n\
    cmp         r0,r1\n\
    bge         LAB_0800ca90\n\
    lsl         r0,r3,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,r2\n\
    ble         LAB_0800ca90\n\
    cmp         r0,r1\n\
    bge         LAB_0800ca90\n\
LAB_0800c9e8:\n\
    cmp         r4,#0x60\n\
    bgt         LAB_0800ca12\n\
    cmp         r4,#0x5d\n\
    bge         LAB_0800ca90\n\
    cmp         r4,#0x33\n\
    beq         LAB_0800ca90\n\
    cmp         r4,#0x33\n\
    bgt         LAB_0800ca08\n\
    cmp         r4,#0x4\n\
    beq         LAB_0800ca90\n\
    b           LAB_0800ca64\n\
\n\
.space 2\n\
\n\
DAT_0800ca00:\n\
    .4byte 0x020006A0\n\
DAT_0800ca04:\n\
    .4byte 0x020117E0\n\
LAB_0800ca08:\n\
    cmp         r4,#0x47\n\
    beq         LAB_0800ca90\n\
    cmp         r4,#0x49\n\
    beq         LAB_0800ca90\n\
    b           LAB_0800ca64\n\
LAB_0800ca12:\n\
    cmp         r4,#0x9a\n\
    bgt         LAB_0800ca20\n\
    cmp         r4,#0x97\n\
    bge         LAB_0800ca2a\n\
    cmp         r4,#0x62\n\
    beq         LAB_0800ca90\n\
    b           LAB_0800ca64\n\
LAB_0800ca20:\n\
    cmp         r4,#0xa6\n\
    bgt         LAB_0800ca64\n\
    cmp         r4,#0x9f\n\
    blt         LAB_0800ca64\n\
    b           LAB_0800ca90\n\
LAB_0800ca2a:\n\
    ldr         r0,DAT_0800ca54\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r5,#0x0\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ca90\n\
    ldr         r0,DAT_0800ca58\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r1,DAT_0800ca5c\n\
    ldr         r2,DAT_0800ca60\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x1\n\
    b           LAB_0800caa2\n\
DAT_0800ca54:\n\
    .4byte 0x0200D370\n\
DAT_0800ca58:\n\
    .4byte 0x0200DCA0\n\
DAT_0800ca5c:\n\
    .4byte 0x0200DC90\n\
DAT_0800ca60:\n\
    .4byte 0x00000645\n\
LAB_0800ca64:\n\
    ldr         r0,DAT_0800ca88\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r6,#0x0\n\
    mov         r5,#0x1\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ca90\n\
    ldr         r0,DAT_0800ca8c\n\
    add         r0,r7,r0\n\
    ldrh        r1,[r0,#0x16]\n\
    orr         r1,r5\n\
    strh        r1,[r0,#0x16]\n\
    mov         r0,#0x1\n\
    b           LAB_0800caa2\n\
DAT_0800ca88:\n\
    .4byte 0x0200D370\n\
DAT_0800ca8c:\n\
    .4byte 0x020006A0\n\
LAB_0800ca90:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r0,DAT_0800cab0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcs         LAB_0800caa0\n\
    b           LAB_0800c904\n\
LAB_0800caa0:\n\
    mov         r0,#0x0\n\
LAB_0800caa2:\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_0800cab0:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_0800cab4()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r1,#0x0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    add         r0,r5,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800cb00\n\
    add         r0,r0,r1\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800cade\n\
    b           switchD_0800cafc_caseD_6d\n\
LAB_0800cade:\n\
    ldr         r1,DAT_0800cb04\n\
    mov         r0,#0x9\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,#0x29\n\
    bl          fun_08001088\n\
    add         r0,r5,#0x0\n\
    sub         r0,#0x63\n\
    cmp         r0,#0x19\n\
    bls         LAB_0800caf4\n\
    b           switchD_0800cafc_caseD_6d\n\
LAB_0800caf4:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800cb08\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800cb00:\n\
    .4byte 0x00000DE6\n\
DAT_0800cb04:\n\
    .4byte 0x0200254C\n\
DAT_0800cb08:\n\
    .4byte 0x0800CB0C\n\
switchD_0800c68a_switchdataD_0800cb0c:\n\
    .4byte switchD_0800cafc_caseD_63\n\
    .4byte switchD_0800cafc_caseD_64\n\
    .4byte switchD_0800cafc_caseD_65\n\
    .4byte switchD_0800cafc_caseD_66\n\
    .4byte switchD_0800cafc_caseD_67\n\
    .4byte switchD_0800cafc_caseD_68\n\
    .4byte switchD_0800cafc_caseD_64\n\
    .4byte switchD_0800cafc_caseD_6a\n\
    .4byte switchD_0800cafc_caseD_6b\n\
    .4byte switchD_0800cafc_caseD_6c\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6e\n\
    .4byte switchD_0800cafc_caseD_6f\n\
    .4byte switchD_0800cafc_caseD_64\n\
    .4byte switchD_0800cafc_caseD_71\n\
    .4byte switchD_0800cafc_caseD_72\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_6d\n\
    .4byte switchD_0800cafc_caseD_7c\n\
switchD_0800cafc_caseD_6a:\n\
    ldr         r0,DAT_0800cb84\n\
    ldr         r2,DAT_0800cb88\n\
    ldr         r1,DAT_0800cb8c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cb90\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cb84:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cb88:\n\
    .4byte 0x08669620\n\
DAT_0800cb8c:\n\
    .4byte 0x020025B4\n\
DAT_0800cb90:\n\
    .4byte 0x00002CD4\n\
switchD_0800cafc_caseD_6e:\n\
    ldr         r0,DAT_0800cba4\n\
    ldr         r2,DAT_0800cba8\n\
    ldr         r1,DAT_0800cbac\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cbb0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cba4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cba8:\n\
    .4byte 0x08669620\n\
DAT_0800cbac:\n\
    .4byte 0x020025B4\n\
DAT_0800cbb0:\n\
    .4byte 0x00002D04\n\
switchD_0800cafc_caseD_67:\n\
    ldr         r0,DAT_0800cbc4\n\
    ldr         r2,DAT_0800cbc8\n\
    ldr         r1,DAT_0800cbcc\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cbd0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cbc4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cbc8:\n\
    .4byte 0x08669620\n\
DAT_0800cbcc:\n\
    .4byte 0x020025B4\n\
DAT_0800cbd0:\n\
    .4byte 0x00002D34\n\
switchD_0800cafc_caseD_68:\n\
    ldr         r0,DAT_0800cbe4\n\
    ldr         r2,DAT_0800cbe8\n\
    ldr         r1,DAT_0800cbec\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cbf0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cbe4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cbe8:\n\
    .4byte 0x08669620\n\
DAT_0800cbec:\n\
    .4byte 0x020025B4\n\
DAT_0800cbf0:\n\
    .4byte 0x00002D64\n\
switchD_0800cafc_caseD_7c:\n\
    ldr         r0,DAT_0800cc04\n\
    ldr         r2,DAT_0800cc08\n\
    ldr         r1,DAT_0800cc0c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cc10\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cc04:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cc08:\n\
    .4byte 0x08669620\n\
DAT_0800cc0c:\n\
    .4byte 0x020025B4\n\
DAT_0800cc10:\n\
    .4byte 0x00002D94\n\
switchD_0800cafc_caseD_63:\n\
    ldr         r0,DAT_0800cc24\n\
    ldr         r2,DAT_0800cc28\n\
    ldr         r1,DAT_0800cc2c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cc30\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cc24:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cc28:\n\
    .4byte 0x08669620\n\
DAT_0800cc2c:\n\
    .4byte 0x020025B4\n\
DAT_0800cc30:\n\
    .4byte 0x00002DC4\n\
switchD_0800cafc_caseD_66:\n\
    ldr         r0,DAT_0800cc44\n\
    ldr         r2,DAT_0800cc48\n\
    ldr         r1,DAT_0800cc4c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cc50\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cc44:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cc48:\n\
    .4byte 0x08669620\n\
DAT_0800cc4c:\n\
    .4byte 0x020025B4\n\
DAT_0800cc50:\n\
    .4byte 0x00002DF4\n\
switchD_0800cafc_caseD_6c:\n\
    ldr         r0,DAT_0800cc64\n\
    ldr         r2,DAT_0800cc68\n\
    ldr         r1,DAT_0800cc6c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cc70\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cc64:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cc68:\n\
    .4byte 0x08669620\n\
DAT_0800cc6c:\n\
    .4byte 0x020025B4\n\
DAT_0800cc70:\n\
    .4byte 0x00002E24\n\
switchD_0800cafc_caseD_6f:\n\
    ldr         r0,DAT_0800cc84\n\
    ldr         r2,DAT_0800cc88\n\
    ldr         r1,DAT_0800cc8c\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cc90\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cc84:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cc88:\n\
    .4byte 0x08669620\n\
DAT_0800cc8c:\n\
    .4byte 0x020025B4\n\
DAT_0800cc90:\n\
    .4byte 0x00002E84\n\
switchD_0800cafc_caseD_6b:\n\
    ldr         r0,DAT_0800cca4\n\
    ldr         r2,DAT_0800cca8\n\
    ldr         r1,DAT_0800ccac\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800ccb0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cca4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cca8:\n\
    .4byte 0x08669620\n\
DAT_0800ccac:\n\
    .4byte 0x020025B4\n\
DAT_0800ccb0:\n\
    .4byte 0x00002EB4\n\
switchD_0800cafc_caseD_72:\n\
    ldr         r0,DAT_0800ccc4\n\
    ldr         r2,DAT_0800ccc8\n\
    ldr         r1,DAT_0800cccc\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800ccd0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800ccc4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800ccc8:\n\
    .4byte 0x08669620\n\
DAT_0800cccc:\n\
    .4byte 0x020025B4\n\
DAT_0800ccd0:\n\
    .4byte 0x00002EE4\n\
switchD_0800cafc_caseD_64:\n\
    ldr         r0,DAT_0800cce4\n\
    ldr         r2,DAT_0800cce8\n\
    ldr         r1,DAT_0800ccec\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800ccf0\n\
    b           LAB_0800cd00\n\
\n\
.space 2\n\
\n\
DAT_0800cce4:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cce8:\n\
    .4byte 0x08669620\n\
DAT_0800ccec:\n\
    .4byte 0x020025B4\n\
DAT_0800ccf0:\n\
    .4byte 0x00002F14\n\
switchD_0800cafc_caseD_71:\n\
    ldr         r0,DAT_0800cd0c\n\
    ldr         r2,DAT_0800cd10\n\
    ldr         r1,DAT_0800cd14\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cd18\n\
LAB_0800cd00:\n\
    add         r2,r2,r3\n\
    add         r1,r1,r2\n\
    ldr         r1,[r1,#0x0]\n\
    bl          strcpy\n\
    b           switchD_0800cafc_caseD_6d\n\
DAT_0800cd0c:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cd10:\n\
    .4byte 0x08669620\n\
DAT_0800cd14:\n\
    .4byte 0x020025B4\n\
DAT_0800cd18:\n\
    .4byte 0x00002F44\n\
switchD_0800cafc_caseD_65:\n\
    ldr         r0,DAT_0800cd38\n\
    ldr         r2,DAT_0800cd3c\n\
    ldr         r1,DAT_0800cd40\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r3,DAT_0800cd44\n\
    add         r2,r2,r3\n\
    add         r1,r1,r2\n\
    ldr         r1,[r1,#0x0]\n\
    bl          strcpy\n\
switchD_0800cafc_caseD_6d:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800cd38:\n\
    .4byte 0x0200C5F0\n\
DAT_0800cd3c:\n\
    .4byte 0x08669620\n\
DAT_0800cd40:\n\
    .4byte 0x020025B4\n\
DAT_0800cd44:\n\
    .4byte 0x00002F74\n\
    ");
}
__attribute__((naked)) void fun_0800cd48()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800cdc8\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    mov         r1,#0x3\n\
    bl          __umodsi3\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800cdc2\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800cdc2\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    mov         r1,#0x3\n\
    bl          __udivsi3\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x8\n\
    mov         r1,#0x94\n\
    lsl         r1,r1,#0xe\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800cdc2\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    mov         r1,#0x3\n\
    bl          __udivsi3\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x8\n\
    mov         r2,#0x94\n\
    lsl         r2,r2,#0xe\n\
    add         r0,r0,r2\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_080017b8\n\
    ldr         r1,DAT_0800cdcc\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800cdd0\n\
    ldr         r2,DAT_0800cdd4\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
LAB_0800cdc2:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800cdc8:\n\
    .4byte 0x00000DE6\n\
DAT_0800cdcc:\n\
    .4byte 0x0200DCA0\n\
DAT_0800cdd0:\n\
    .4byte 0x0200DC90\n\
DAT_0800cdd4:\n\
    .4byte 0x000001E1\n\
    ");
}
void fun_0800cdd8()
{
}
__attribute__((naked)) void fun_0800cddc()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r2,#0x0\n\
    add         r6,r3,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ce08\n\
    add         r0,r0,r1\n\
    ldrh        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ce0c\n\
    add         r0,r0,r1\n\
    ldrh        r3,[r0,#0x0]\n\
    add         r0,r5,#0x0\n\
    add         r1,r6,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800eaa4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800ce08:\n\
    .4byte 0x00000DDC\n\
DAT_0800ce0c:\n\
    .4byte 0x00000DDE\n\
    ");
}
__attribute__((naked)) void fun_0800ce10()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r0,DAT_0800ce30\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x5\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_0800ce34\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bhi         LAB_0800ce6c\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800ce38\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800ce30:\n\
    .4byte 0x0200D370\n\
DAT_0800ce34:\n\
    .4byte 0x020117E0\n\
DAT_0800ce38:\n\
    .4byte 0x0800CE3C\n\
PTR_DAT_0800ce3c:\n\
    .4byte DAT_0800ce5c\n\
    .4byte DAT_0800ce5c\n\
    .4byte DAT_0800ce68\n\
    .4byte DAT_0800ce60\n\
    .4byte DAT_0800ce60\n\
    .4byte DAT_0800ce60\n\
    .4byte DAT_0800ce64\n\
    .4byte DAT_0800ce5c\n\
\n\
DAT_0800ce5c:\n\
    .4byte 0xE0042038\n\
DAT_0800ce60:\n\
    .4byte 0xE002203A\n\
DAT_0800ce64:\n\
    .4byte 0xE000203B\n\
DAT_0800ce68:\n\
    .4byte 0x82202039\n\
\n\
\n\
LAB_0800ce6c:\n\
    bl          fun_080107ac\n\
    mov         r0,#0x5\n\
    strb        r0,[r4,#0x18]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800ce7c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r2,#0x0\n\
    add         r4,r3,#0x0\n\
    ldr         r0,DAT_0800ced4\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r6,#0x4\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ce8e\n\
    mov         r6,#0x2\n\
LAB_0800ce8e:\n\
    bl          fun_080014d4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ce9e\n\
    ldrh        r1,[r4,#0x0]\n\
    add         r0,r1,r6\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800ce9e:\n\
    bl          fun_08001454\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ceae\n\
    ldrh        r1,[r5,#0x0]\n\
    sub         r0,r1,r6\n\
    strh        r0,[r5,#0x0]\n\
LAB_0800ceae:\n\
    bl          fun_080014bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800cebe\n\
    ldrh        r1,[r4,#0x0]\n\
    sub         r0,r1,r6\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800cebe:\n\
    bl          fun_0800146c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800cece\n\
    ldrh        r1,[r5,#0x0]\n\
    add         r0,r1,r6\n\
    strh        r0,[r5,#0x0]\n\
LAB_0800cece:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800ced4:\n\
    .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_0800ced8()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_08010c1c\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_0800cee4()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0800fc10\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800cef0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r5,#0x0\n\
    ldr         r6,DAT_0800cf20\n\
LAB_0800cef6:\n\
    lsl         r0,r5,#0x2\n\
    add         r4,r0,r6\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800cf08\n\
    bl          fun_08003b00\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
LAB_0800cf08:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,#0x8\n\
    bls         LAB_0800cef6\n\
    ldr         r1,DAT_0800cf24\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800cf20:\n\
    .4byte 0x0200D3D0\n\
DAT_0800cf24:\n\
    .4byte 0x0200D394\n\
\n\
    ");
}
