__attribute__((naked)) void fun_0800e85c()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e8f2\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    mov         r0,#0xc\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800e8b8\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e8f2\n\
    mov         r0,#0x31\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e8c0\n\
    mov         r0,#0x31\n\
    bl          fun_080018bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e8c0\n\
    ldr         r1,DAT_0800e8bc\n\
    mov         r0,#0x71\n\
    b           LAB_0800e8c6\n\
\n\
.space 2\n\
\n\
DAT_0800e8b8:\n\
    .word 0x00000DB7\n\
DAT_0800e8bc:\n\
    .word 0x0200DC90\n\
LAB_0800e8c0:\n\
    ldr         r1,DAT_0800e8f8\n\
    ldr         r2,DAT_0800e8fc\n\
    add         r0,r2,#0x0\n\
LAB_0800e8c6:\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_0800e900\n\
    mov         r1,#0xec\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r0,r1\n\
    mov         r1,#0x5\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800e904\n\
    add         r0,r0,r2\n\
    mov         r1,#0x4\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e908\n\
    add         r0,r0,r1\n\
    mov         r1,#0xb\n\
    strb        r1,[r0,#0x0]\n\
LAB_0800e8f2:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e8f8:\n\
    .word 0x0200DC90\n\
DAT_0800e8fc:\n\
    .word 0x0000055C\n\
DAT_0800e900:\n\
    .word 0x020006A0\n\
DAT_0800e904:\n\
    .word 0x00000E04\n\
DAT_0800e908:\n\
    .word 0x00000DB7\n\
    ");
}
__attribute__((naked)) void fun_0800e90c()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800e948\n\
    add         r0,r0,r4\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e942\n\
    bl          fun_0800e740\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e94c\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    add         r1,#0x2\n\
    add         r4,r4,r1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800e942:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e948:\n\
    .word 0x00000DBA\n\
DAT_0800e94c:\n\
    .word 0x00000DB8\n\
    ");
}
__attribute__((naked)) void fun_0800e950()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r4,#0x0\n\
    ldr         r0,DAT_0800e9b0\n\
    mov         r8,r0\n\
    ldr         r6,DAT_0800e9b4\n\
    mov         r1,#0x1c\n\
    add         r1,r8\n\
    mov         r10,r1\n\
    mov         r3,#0x2c\n\
    mov         r9,r3\n\
    ldr         r7,DAT_0800e9b8\n\
LAB_0800e96e:\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    lsl         r5,r4,#0x5\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e988\n\
    mov         r1,r8\n\
    add         r0,r5,r1\n\
    mov         r1,r9\n\
    mul         r1,r4\n\
    add         r1,r1,r6\n\
    bl          fun_080004ac\n\
LAB_0800e988:\n\
    ldr         r3,DAT_0800e9b0\n\
    add         r0,r3,#0x0\n\
    add         r0,#0xc\n\
    add         r0,r5,r0\n\
    mov         r1,#0x0\n\
    str         r1,[r0,#0x0]\n\
    cmp         r4,#0x5a\n\
    beq         LAB_0800e9d2\n\
    cmp         r4,#0x5a\n\
    bgt         LAB_0800e9bc\n\
    cmp         r4,#0x0\n\
    beq         LAB_0800ea32\n\
    cmp         r4,#0x0\n\
    blt         LAB_0800ea1c\n\
    cmp         r4,#0x49\n\
    bgt         LAB_0800ea1c\n\
    cmp         r4,#0x47\n\
    blt         LAB_0800ea1c\n\
    b           LAB_0800e9d2\n\
\n\
.space 2\n\
\n\
DAT_0800e9b0:\n\
    .word 0x020006A0\n\
DAT_0800e9b4:\n\
    .word 0x0877CF10\n\
DAT_0800e9b8:\n\
    .word 0x0200D430\n\
LAB_0800e9bc:\n\
    cmp         r4,#0x62\n\
    beq         LAB_0800ea04\n\
    cmp         r4,#0x62\n\
    bgt         LAB_0800e9ca\n\
    cmp         r4,#0x61\n\
    beq         LAB_0800e9ea\n\
    b           LAB_0800ea1c\n\
LAB_0800e9ca:\n\
    cmp         r4,#0x9e\n\
    bgt         LAB_0800ea1c\n\
    cmp         r4,#0x9b\n\
    blt         LAB_0800ea1c\n\
LAB_0800e9d2:\n\
    mov         r3,r8\n\
    add         r0,r5,r3\n\
    mov         r1,r9\n\
    mul         r1,r4\n\
    add         r1,r1,r6\n\
    lsl         r2,r4,#0x1\n\
    add         r2,r2,r4\n\
    lsl         r2,r2,#0x2\n\
    add         r2,r2,r7\n\
    bl          fun_0803cddc\n\
    b           LAB_0800ea32\n\
LAB_0800e9ea:\n\
    ldr         r2,DAT_0800e9fc\n\
    add         r0,r5,r3\n\
    ldr         r3,DAT_0800ea00\n\
    add         r1,r6,r3\n\
    add         r2,r7,r2\n\
    bl          fun_0803cf8c\n\
    b           LAB_0800ea32\n\
\n\
.space 2\n\
\n\
DAT_0800e9fc:\n\
    .word 0x0000048C\n\
DAT_0800ea00:\n\
    .word 0x000010AC\n\
LAB_0800ea04:\n\
    mov         r2,#0x93\n\
    lsl         r2,r2,#0x3\n\
    add         r0,r5,r3\n\
    ldr         r3,DAT_0800ea18\n\
    add         r1,r6,r3\n\
    add         r2,r7,r2\n\
    bl          fun_0803d01c\n\
    b           LAB_0800ea32\n\
\n\
.space 2\n\
\n\
DAT_0800ea18:\n\
    .word 0x000010D8\n\
LAB_0800ea1c:\n\
    mov         r1,r8\n\
    add         r0,r5,r1\n\
    mov         r1,r9\n\
    mul         r1,r4\n\
    add         r1,r1,r6\n\
    lsl         r2,r4,#0x1\n\
    add         r2,r2,r4\n\
    lsl         r2,r2,#0x2\n\
    add         r2,r2,r7\n\
    bl          fun_0803c9fc\n\
LAB_0800ea32:\n\
    mov         r3,r10\n\
    add         r2,r5,r3\n\
    ldr         r1,DAT_0800ea84\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    ldr         r1,DAT_0800ea88\n\
    add         r0,r4,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r2,DAT_0800ea8c\n\
    cmp         r4,#0xa6\n\
    bls         LAB_0800e96e\n\
    ldr         r1,DAT_0800ea90\n\
    mov         r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
    add         r0,r3,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800ea94\n\
    add         r0,r2,#0x0\n\
    bl          fun_0803c830\n\
    ldr         r0,DAT_0800ea98\n\
    bl          fun_080045f0\n\
    ldr         r1,DAT_0800ea9c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800eaa0\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800ea84:\n\
    .word 0x0877F91C\n\
DAT_0800ea88:\n\
    .word 0x02000690\n\
DAT_0800ea8c:\n\
    .word 0x020006A0\n\
DAT_0800ea90:\n\
    .word 0x02002524\n\
DAT_0800ea94:\n\
    .word 0x0877CF10\n\
DAT_0800ea98:\n\
    .word 0x084496C8\n\
DAT_0800ea9c:\n\
    .word 0x0200DC0C\n\
DAT_0800eaa0:\n\
    .word 0x0200DC10\n\
    ");
}
__attribute__((naked)) void fun_0800eaa4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    lsl         r3,r3,#0x10\n\
    lsr         r3,r3,#0x10\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bls         LAB_0800eaba\n\
    add         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800eaba:\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bcs         LAB_0800eac4\n\
    sub         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800eac4:\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r3,r0\n\
    bls         LAB_0800eace\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800eace:\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r3,r0\n\
    bcs         LAB_0800ead8\n\
    sub         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800ead8:\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_0800eae8\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r3,r0\n\
    bne         LAB_0800eae8\n\
    mov         r0,#0x1\n\
    b           LAB_0800eb20\n\
LAB_0800eae8:\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bls         LAB_0800eaf2\n\
    add         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800eaf2:\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bcs         LAB_0800eafc\n\
    sub         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800eafc:\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r3,r0\n\
    bls         LAB_0800eb06\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800eb06:\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r3,r0\n\
    bcs         LAB_0800eb10\n\
    sub         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800eb10:\n\
    mov         r0,#0x0\n\
    ldrh        r4,[r4,#0x0]\n\
    cmp         r2,r4\n\
    bne         LAB_0800eb20\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r3,r1\n\
    bne         LAB_0800eb20\n\
    mov         r0,#0x1\n\
LAB_0800eb20:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800eb28()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x2c\n\
    add         r4,r0,#0x0\n\
    ldr         r1,DAT_0800eb58\n\
    mov         r0,sp\n\
    mov         r2,#0x2c\n\
    bl          memcpy\n\
    mov         r0,#0x64\n\
    bl          fun_08002c04\n\
    mov         r1,#0x16\n\
    bl          __umodsi3\n\
    lsl         r0,r0,#0x1\n\
    add         r0,sp\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    ldrh        r2,[r4,#0x16]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800eb5c\n\
    mov         r0,#0x0\n\
    b           LAB_0800eb70\n\
DAT_0800eb58:\n\
    .word 0x0844D93C\n\
LAB_0800eb5c:\n\
    ldr         r0,DAT_0800eb94\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_0800eb98\n\
    ldrh        r1,[r4,#0x16]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0x16]\n\
    mov         r0,#0x1\n\
LAB_0800eb70:\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800eba4\n\
    mov         r1,#0x0\n\
    ldr         r3,DAT_0800eb9c\n\
    ldr         r2,DAT_0800eba0\n\
LAB_0800eb7a:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r2\n\
    cmp         r0,r4\n\
    beq         LAB_0800eb8c\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,#0xf3\n\
    bls         LAB_0800eb7a\n\
LAB_0800eb8c:\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r3,#0x0]\n\
    mov         r0,#0x1\n\
    b           LAB_0800eba6\n\
DAT_0800eb94:\n\
    .word 0x0200DC90\n\
DAT_0800eb98:\n\
    .word 0x0000FFFE\n\
DAT_0800eb9c:\n\
    .word 0x020025BC\n\
DAT_0800eba0:\n\
    .word 0x020006A0\n\
LAB_0800eba4:\n\
    mov         r0,#0x0\n\
LAB_0800eba6:\n\
    add         sp,#0x2c\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
    ");
}
int fun_0800ebb0()
{
    return 0;
}
__attribute__((naked)) void fun_0800ebb4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r0,#0x1\n\
    ldrh        r2,[r4,#0x16]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ebe4\n\
    ldr         r0,DAT_0800ebdc\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_0800ebe0\n\
    ldrh        r1,[r4,#0x16]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0x16]\n\
    mov         r0,#0x1\n\
    b           LAB_0800ebe6\n\
DAT_0800ebdc:\n\
    .word 0x0200DC90\n\
DAT_0800ebe0:\n\
    .word 0x0000FFFE\n\
LAB_0800ebe4:\n\
    mov         r0,#0x0\n\
LAB_0800ebe6:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800ebec()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0xc\n\
    add         r7,r0,#0x0\n\
    ldr         r0,[sp,#0x2c]\n\
    ldr         r4,[sp,#0x30]\n\
    ldr         r5,[sp,#0x34]\n\
    ldr         r6,[sp,#0x38]\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    str         r1,[sp,#0x0]\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r10,r2\n\
    lsl         r3,r3,#0x10\n\
    lsr         r3,r3,#0x10\n\
    mov         r8,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r9,r0\n\
    str         r0,[sp,#0x4]\n\
    lsl         r4,r4,#0x18\n\
    lsr         r4,r4,#0x18\n\
    str         r4,[sp,#0x8]\n\
    lsl         r5,r5,#0x18\n\
    lsr         r5,r5,#0x18\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    mov         r4,#0x1\n\
    add         r0,r4,#0x0\n\
    ldrh        r2,[r7,#0x16]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ecc0\n\
    add         r0,r1,#0x0\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ec98\n\
    add         r0,r4,#0x0\n\
    ldrh        r1,[r7,#0x16]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ec60\n\
    ldr         r0,DAT_0800ec88\n\
    mov         r2,r10\n\
    strh        r2,[r0,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_0800ec8c\n\
    ldrh        r1,[r7,#0x16]\n\
    and         r0,r1\n\
    strh        r0,[r7,#0x16]\n\
LAB_0800ec60:\n\
    ldr         r0,[sp,#0x0]\n\
    bl          fun_080018e4\n\
    mov         r2,sp\n\
    ldrb        r2,[r2,#0x8]\n\
    strb        r2,[r7,#0x18]\n\
    ldr         r0,DAT_0800ec90\n\
    cmp         r6,r0\n\
    beq         LAB_0800ec7c\n\
    add         r0,r6,#0x0\n\
    bl          fun_080017b8\n\
    ldr         r0,DAT_0800ec94\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800ec7c:\n\
    mov         r0,r9\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    mov         r0,#0x1\n\
    b           LAB_0800ecc2\n\
DAT_0800ec88:\n\
    .word 0x0200DC90\n\
DAT_0800ec8c:\n\
    .word 0x0000FFFE\n\
DAT_0800ec90:\n\
    .word 0x000003E7\n\
DAT_0800ec94:\n\
    .word 0x0200DCA0\n\
LAB_0800ec98:\n\
    add         r0,r4,#0x0\n\
    ldrh        r1,[r7,#0x16]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ecb6\n\
    ldr         r0,DAT_0800ecd4\n\
    mov         r2,r8\n\
    strh        r2,[r0,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_0800ecd8\n\
    ldrh        r1,[r7,#0x16]\n\
    and         r0,r1\n\
    strh        r0,[r7,#0x16]\n\
LAB_0800ecb6:\n\
    ldr         r0,[sp,#0x4]\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
    strb        r5,[r7,#0x18]\n\
LAB_0800ecc0:\n\
    mov         r0,#0x0\n\
LAB_0800ecc2:\n\
    add         sp,#0xc\n\
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
DAT_0800ecd4:\n\
    .word 0x0200DC90\n\
DAT_0800ecd8:\n\
    .word 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_0800ecdc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    mov         r6,#0x0\n\
    mov         r2,#0x0\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r0,#0x10]\n\
    ldrh        r7,[r1,#0x26]\n\
    cmp         r0,r7\n\
    bne         LAB_0800ecf2\n\
    mov         r2,#0x18\n\
LAB_0800ecf2:\n\
    ldrh        r7,[r1,#0x22]\n\
    cmp         r0,r7\n\
    bne         LAB_0800ecfa\n\
    mov         r2,#0xee\n\
LAB_0800ecfa:\n\
    ldrh        r1,[r1,#0x24]\n\
    cmp         r0,r1\n\
    bne         LAB_0800ed02\n\
    mov         r6,#0xe2\n\
LAB_0800ed02:\n\
    lsl         r0,r2,#0x18\n\
    asr         r0,r0,#0x18\n\
    ldrh        r4,[r4,#0x0]\n\
    add         r0,r4,r0\n\
    strh        r0,[r3,#0x0]\n\
    lsl         r0,r6,#0x18\n\
    asr         r0,r0,#0x18\n\
    ldrh        r5,[r5,#0x0]\n\
    add         r0,r5,r0\n\
    ldr         r1,[sp,#0x14]\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
.space 2\n\
    ");
}
