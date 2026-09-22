__attribute__((naked)) void fun_0800ed40()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r0,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    asr         r2,r0,#0x10\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    beq         LAB_0800ee00\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r5,#0x10]\n\
    ldrh        r0,[r0,#0x26]\n\
    cmp         r1,r0\n\
    bne         LAB_0800ed7c\n\
    ldr         r1,DAT_0800ee08\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r2\n\
    lsl         r0,r0,#0x2\n\
    add         r1,#0x4\n\
    add         r0,r0,r1\n\
    mov         r1,#0x0\n\
    ldrsh       r4,[r0,r1]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800ed7c\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ee0c\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800ed7c:\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r5,#0x10]\n\
    ldrh        r0,[r0,#0x22]\n\
    cmp         r1,r0\n\
    bne         LAB_0800eda8\n\
    ldr         r2,DAT_0800ee08\n\
    lsl         r1,r6,#0x10\n\
    asr         r1,r1,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    add         r2,#0x6\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r4,[r0,r1]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800eda8\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ee0c\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800eda8:\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r5,#0x10]\n\
    ldrh        r0,[r0,#0x28]\n\
    cmp         r1,r0\n\
    bne         LAB_0800edd4\n\
    ldr         r2,DAT_0800ee08\n\
    lsl         r1,r6,#0x10\n\
    asr         r1,r1,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    add         r2,#0x8\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r4,[r0,r1]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800edd4\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ee0c\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800edd4:\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r5,[r5,#0x10]\n\
    ldrh        r0,[r0,#0x24]\n\
    cmp         r5,r0\n\
    bne         LAB_0800ee00\n\
    ldr         r2,DAT_0800ee08\n\
    lsl         r1,r6,#0x10\n\
    asr         r1,r1,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    add         r2,#0xa\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r4,[r0,r1]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800ee00\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ee0c\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800ee00:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800ee08:\n\
    .word 0x0877CC10\n\
DAT_0800ee0c:\n\
    .word 0x00000E1C\n\
    ");
}
__attribute__((naked)) void fun_0800ee10()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    add         r5,r0,#0x0\n\
    str         r1,[sp,#0x4]\n\
    mov         r8,r2\n\
    mov         r10,r3\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800eea8\n\
    add         r0,r0,r1\n\
    ldr         r4,[r0,#0x0]\n\
    lsr         r4,r4,#0x8\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800eeac\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r4,r4,#0x10\n\
    lsl         r0,r0,#0x8\n\
    lsr         r4,r4,#0x10\n\
    lsr         r6,r0,#0x10\n\
    mov         r2,#0x0\n\
    ldr         r3,DAT_0800eeb0\n\
    add         r7,r3,#0x2\n\
    mov         r9,r7\n\
    mov         r0,#0xa\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    mov         r12,r0\n\
LAB_0800ee50:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r2\n\
    lsl         r1,r0,#0x2\n\
    add         r0,r1,r3\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r0,r7]\n\
    sub         r0,r4,r0\n\
    add         r0,#0x9\n\
    cmp         r0,#0x12\n\
    bhi         LAB_0800ee76\n\
    mov         r7,r9\n\
    add         r0,r1,r7\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    sub         r0,r6,r0\n\
    cmp         r0,r12\n\
    ble         LAB_0800ee76\n\
    cmp         r0,#0x9\n\
    ble         LAB_0800eeb4\n\
LAB_0800ee76:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x21\n\
    bls         LAB_0800ee50\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0800ee84:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r1,[r5,#0x0]\n\
    ldrh        r0,[r5,#0x10]\n\
    ldrh        r2,[r1,#0x28]\n\
    cmp         r0,r2\n\
    beq         LAB_0800ee98\n\
    ldrh        r1,[r1,#0x24]\n\
    cmp         r0,r1\n\
    bne         LAB_0800eec8\n\
LAB_0800ee98:\n\
    bl          fun_0800146c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800eeb8\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x28]\n\
    b           LAB_0800eee6\n\
DAT_0800eea8:\n\
    .word 0x00000E14\n\
DAT_0800eeac:\n\
    .word 0x00000E18\n\
DAT_0800eeb0:\n\
    .word 0x0877CC10\n\
LAB_0800eeb4:\n\
    add         r0,r2,#0x0\n\
    b           LAB_0800ee84\n\
LAB_0800eeb8:\n\
    bl          fun_08001454\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800eefc\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x24]\n\
    b           LAB_0800eee6\n\
LAB_0800eec8:\n\
    bl          fun_080014bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800eed8\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x26]\n\
    b           LAB_0800eee6\n\
LAB_0800eed8:\n\
    bl          fun_080014d4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800eefc\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x22]\n\
LAB_0800eee6:\n\
    strh        r0,[r5,#0x10]\n\
    lsl         r0,r4,#0x10\n\
    asr         r0,r0,#0x10\n\
    str         r0,[sp,#0x0]\n\
    add         r0,r5,#0x0\n\
    ldr         r1,[sp,#0x4]\n\
    mov         r2,r8\n\
    mov         r3,r10\n\
    bl          fun_0800ed40\n\
    b           LAB_0800f05e\n\
LAB_0800eefc:\n\
    lsl         r0,r4,#0x10\n\
    asr         r4,r0,#0x10\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    mov         r9,r0\n\
    cmp         r4,r1\n\
    bne         LAB_0800ef0c\n\
    b           LAB_0800f05e\n\
LAB_0800ef0c:\n\
    bl          fun_080014bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ef7c\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r0,#0x26]\n\
    ldrh        r3,[r5,#0x10]\n\
    cmp         r3,r1\n\
    beq         LAB_0800ef7c\n\
    ldr         r7,DAT_0800ef70\n\
    lsl         r0,r4,#0x1\n\
    add         r0,r0,r4\n\
    lsl         r6,r0,#0x2\n\
    add         r0,r7,#0x4\n\
    add         r0,r6,r0\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800ef7c\n\
    strh        r1,[r5,#0x10]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_0800ef74\n\
    add         r0,r0,r3\n\
    add         r4,r6,r7\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r4,r2]\n\
    lsl         r1,r1,#0x8\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_0800ef78\n\
    add         r0,r0,r3\n\
    add         r2,r7,#0x2\n\
    add         r2,r6,r2\n\
    mov         r7,#0x0\n\
    ldrsh       r1,[r2,r7]\n\
    lsl         r1,r1,#0x8\n\
    str         r1,[r0,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    mov         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r2,r10\n\
    strh        r0,[r2,#0x0]\n\
    bl          fun_08003bf8\n\
    b           LAB_0800f05e\n\
\n\
.space 2\n\
\n\
DAT_0800ef70:\n\
    .word 0x0877CC10\n\
DAT_0800ef74:\n\
    .word 0x00000E14\n\
DAT_0800ef78:\n\
    .word 0x00000E18\n\
LAB_0800ef7c:\n\
    bl          fun_080014d4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800efa8\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r2,[r0,#0x22]\n\
    ldrh        r3,[r5,#0x10]\n\
    cmp         r3,r2\n\
    beq         LAB_0800efa8\n\
    ldr         r7,DAT_0800f040\n\
    mov         r0,r9\n\
    asr         r1,r0,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r6,r0,#0x2\n\
    add         r0,r7,#0x6\n\
    add         r0,r6,r0\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f004\n\
LAB_0800efa8:\n\
    bl          fun_0800146c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800efd6\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r2,[r0,#0x28]\n\
    ldrh        r3,[r5,#0x10]\n\
    cmp         r3,r2\n\
    beq         LAB_0800efd6\n\
    ldr         r7,DAT_0800f040\n\
    mov         r0,r9\n\
    asr         r1,r0,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r6,r0,#0x2\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r6,r0\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f004\n\
LAB_0800efd6:\n\
    bl          fun_08001454\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f04c\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r2,[r0,#0x24]\n\
    ldrh        r3,[r5,#0x10]\n\
    cmp         r3,r2\n\
    beq         LAB_0800f04c\n\
    ldr         r7,DAT_0800f040\n\
    mov         r0,r9\n\
    asr         r1,r0,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r6,r0,#0x2\n\
    add         r0,r7,#0x0\n\
    add         r0,#0xa\n\
    add         r0,r6,r0\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f04c\n\
LAB_0800f004:\n\
    strh        r2,[r5,#0x10]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f044\n\
    add         r0,r0,r2\n\
    add         r4,r6,r7\n\
    mov         r3,#0x0\n\
    ldrsh       r1,[r4,r3]\n\
    lsl         r1,r1,#0x8\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f048\n\
    add         r0,r0,r1\n\
    add         r2,r7,#0x2\n\
    add         r2,r6,r2\n\
    mov         r3,#0x0\n\
    ldrsh       r1,[r2,r3]\n\
    lsl         r1,r1,#0x8\n\
    str         r1,[r0,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    mov         r7,r8\n\
    strh        r0,[r7,#0x0]\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_08003bf8\n\
    b           LAB_0800f05e\n\
\n\
.space 2\n\
\n\
DAT_0800f040:\n\
    .word 0x0877CC10\n\
DAT_0800f044:\n\
    .word 0x00000E14\n\
DAT_0800f048:\n\
    .word 0x00000E18\n\
LAB_0800f04c:\n\
    mov         r2,r9\n\
    asr         r0,r2,#0x10\n\
    str         r0,[sp,#0x0]\n\
    add         r0,r5,#0x0\n\
    ldr         r1,[sp,#0x4]\n\
    mov         r2,r8\n\
    mov         r3,r10\n\
    bl          fun_0800ed40\n\
LAB_0800f05e:\n\
    add         sp,#0x8\n\
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
    ");
}
__attribute__((naked)) void fun_0800f070()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r4,DAT_0800f0b4\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_0800f0b8\n\
    str         r0,[r5,#0x0]\n\
    sub         r4,#0x20\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_0800f0bc\n\
    str         r0,[r1,#0x0]\n\
    mov         r1,#0xc6\n\
    strh        r1,[r0,#0x2]\n\
    mov         r1,#0x7e\n\
    strh        r1,[r0,#0x4]\n\
    ldr         r2,[r5,#0x0]\n\
    mov         r1,#0xb6\n\
    strh        r1,[r2,#0x2]\n\
    mov         r1,#0x6e\n\
    strh        r1,[r2,#0x4]\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x2\n\
    add         r1,r3,#0x0\n\
    ldrh        r3,[r2,#0x12]\n\
    orr         r1,r3\n\
    strh        r1,[r2,#0x12]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x6]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800f0b4:\n\
    .word 0x08449508\n\
DAT_0800f0b8:\n\
    .word 0x0200DC88\n\
DAT_0800f0bc:\n\
    .word 0x0200DC84\n\
    ");
}
__attribute__((naked)) void fun_0800f0c0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    add         r7,r0,#0x0\n\
    mov         r9,r1\n\
    mov         r10,r2\n\
    mov         r8,r3\n\
    bl          fun_0800fb10\n\
    mov         r0,#0x2\n\
    str         r0,[r7,#0x8]\n\
    ldr         r4,DAT_0800f1c0\n\
    mov         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    bl          fun_0800ddc8\n\
    mov         r0,#0x4\n\
    strb        r0,[r7,#0x18]\n\
    mov         r1,r10\n\
    ldrh        r0,[r1,#0x0]\n\
    strh        r0,[r4,#0x4]\n\
    mov         r2,r8\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r4,#0x6]\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800f1c4\n\
    add         r0,r0,r5\n\
    mov         r3,#0x4\n\
    ldrsh       r1,[r7,r3]\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r6,DAT_0800f1c8\n\
    add         r0,r0,r6\n\
    mov         r2,#0x6\n\
    ldrsh       r1,[r7,r2]\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r4,r5\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x8\n\
    str         r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r4,r6\n\
    add         r0,r0,r6\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x8\n\
    str         r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_0800f1cc\n\
    add         r0,r0,r3\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_0800f070\n\
    ldr         r1,[r7,#0xc]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800f1a2\n\
    ldrh        r3,[r1,#0x0]\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x22]\n\
    cmp         r3,r2\n\
    bne         LAB_0800f162\n\
    ldr         r0,DAT_0800f1d0\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r7,#0xc]\n\
    add         r0,#0x11\n\
    strh        r0,[r1,#0xe]\n\
LAB_0800f162:\n\
    ldr         r1,[r7,#0xc]\n\
    ldrh        r0,[r1,#0x0]\n\
    mov         r3,r9\n\
    ldrh        r3,[r3,#0x26]\n\
    cmp         r0,r3\n\
    bne         LAB_0800f178\n\
    ldr         r0,DAT_0800f1d4\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r7,#0xc]\n\
    sub         r0,#0x18\n\
    strh        r0,[r1,#0xe]\n\
LAB_0800f178:\n\
    ldr         r0,[r7,#0xc]\n\
    ldrh        r2,[r0,#0x0]\n\
    mov         r1,r9\n\
    ldrh        r1,[r1,#0x28]\n\
    cmp         r2,r1\n\
    bne         LAB_0800f18c\n\
    ldr         r1,DAT_0800f1d8\n\
    strh        r1,[r0,#0xc]\n\
    ldr         r0,[r7,#0xc]\n\
    strh        r1,[r0,#0xe]\n\
LAB_0800f18c:\n\
    ldr         r1,[r7,#0xc]\n\
    ldrh        r3,[r1,#0x0]\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x24]\n\
    cmp         r3,r2\n\
    bne         LAB_0800f1a2\n\
    ldr         r0,DAT_0800f1d8\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r7,#0xc]\n\
    sub         r0,#0x1e\n\
    strh        r0,[r1,#0xe]\n\
LAB_0800f1a2:\n\
    mov         r3,r10\n\
    ldrh        r0,[r3,#0x0]\n\
    mov         r2,r8\n\
    ldrh        r1,[r2,#0x0]\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800f1c0:\n\
    .word 0x020006A0\n\
DAT_0800f1c4:\n\
    .word 0x00000E14\n\
DAT_0800f1c8:\n\
    .word 0x00000E18\n\
DAT_0800f1cc:\n\
    .word 0x00000E1C\n\
DAT_0800f1d0:\n\
    .word 0x0000FFCF\n\
DAT_0800f1d4:\n\
    .word 0x0000FFF8\n\
DAT_0800f1d8:\n\
    .word 0x0000FFE0\n\
    ");
}
__attribute__((naked)) void fun_0800f1dc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r3,r0,#0x0\n\
    ldr         r0,DAT_0800f244\n\
    ldrh        r5,[r0,#0x4]\n\
    ldrh        r4,[r0,#0x6]\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_0800f248\n\
    ldr         r1,[r3,#0xc]\n\
    cmp         r1,#0x0\n\
    bne         LAB_0800f1f6\n\
    b           LAB_0800f350\n\
LAB_0800f1f6:\n\
    ldr         r0,[r3,#0x0]\n\
    ldrh        r1,[r1,#0x0]\n\
    ldrh        r3,[r0,#0x22]\n\
    cmp         r1,r3\n\
    bne         LAB_0800f254\n\
    ldr         r3,DAT_0800f24c\n\
    add         r7,r6,#0x0\n\
LAB_0800f204:\n\
    lsl         r1,r2,#0x3\n\
    add         r0,r3,#0x2\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcc         LAB_0800f232\n\
    add         r0,r3,#0x6\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bhi         LAB_0800f232\n\
    add         r0,r1,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r5,r0\n\
    cmp         r6,r0\n\
    ble         LAB_0800f232\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_0800f250\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bhi         LAB_0800f232\n\
    b           LAB_0800f34c\n\
LAB_0800f232:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r7\n\
    bne         LAB_0800f204\n\
    b           LAB_0800f350\n\
DAT_0800f244:\n\
    .word 0x020006A0\n\
DAT_0800f248:\n\
    .word 0x0000270F\n\
DAT_0800f24c:\n\
    .word 0x0877EDC4\n\
DAT_0800f250:\n\
    .word 0xFFFF0000\n\
LAB_0800f254:\n\
    ldrh        r3,[r0,#0x26]\n\
    cmp         r1,r3\n\
    bne         LAB_0800f2a4\n\
    ldr         r3,DAT_0800f29c\n\
    add         r7,r6,#0x0\n\
LAB_0800f25e:\n\
    lsl         r1,r2,#0x3\n\
    add         r0,r3,#0x2\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcc         LAB_0800f28a\n\
    add         r0,r3,#0x6\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bhi         LAB_0800f28a\n\
    add         r0,r1,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r0,r5\n\
    cmp         r6,r0\n\
    ble         LAB_0800f28a\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_0800f2a0\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bls         LAB_0800f34c\n\
LAB_0800f28a:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r7\n\
    bne         LAB_0800f25e\n\
    b           LAB_0800f350\n\
DAT_0800f29c:\n\
    .word 0x0877EC64\n\
DAT_0800f2a0:\n\
    .word 0xFFFF0000\n\
LAB_0800f2a4:\n\
    ldrh        r3,[r0,#0x28]\n\
    cmp         r1,r3\n\
    bne         LAB_0800f2f8\n\
    ldr         r3,DAT_0800f2f0\n\
    add         r7,r3,#0x2\n\
    mov         r12,r7\n\
    mov         r8,r6\n\
LAB_0800f2b2:\n\
    lsl         r1,r2,#0x3\n\
    add         r0,r1,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bcc         LAB_0800f2de\n\
    add         r0,r3,#0x4\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bhi         LAB_0800f2de\n\
    mov         r7,r12\n\
    add         r0,r1,r7\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r0,r4\n\
    cmp         r6,r0\n\
    ble         LAB_0800f2de\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_0800f2f4\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bls         LAB_0800f34c\n\
LAB_0800f2de:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r8\n\
    bne         LAB_0800f2b2\n\
    b           LAB_0800f350\n\
DAT_0800f2f0:\n\
    .word 0x0877ED0C\n\
DAT_0800f2f4:\n\
    .word 0xFFFF0000\n\
LAB_0800f2f8:\n\
    ldrh        r0,[r0,#0x24]\n\
    cmp         r1,r0\n\
    bne         LAB_0800f350\n\
    ldr         r3,DAT_0800f344\n\
    add         r7,r3,#0x2\n\
    mov         r12,r7\n\
    mov         r8,r6\n\
LAB_0800f306:\n\
    lsl         r1,r2,#0x3\n\
    add         r0,r1,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bcc         LAB_0800f332\n\
    add         r0,r3,#0x4\n\
    add         r0,r1,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bhi         LAB_0800f332\n\
    mov         r7,r12\n\
    add         r0,r1,r7\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
    cmp         r6,r0\n\
    ble         LAB_0800f332\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_0800f348\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bls         LAB_0800f34c\n\
LAB_0800f332:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r8\n\
    bne         LAB_0800f306\n\
    b           LAB_0800f350\n\
DAT_0800f344:\n\
    .word 0x0877EBC4\n\
DAT_0800f348:\n\
    .word 0xFFFF0000\n\
LAB_0800f34c:\n\
    mov         r0,#0x1\n\
    b           LAB_0800f352\n\
LAB_0800f350:\n\
    mov         r0,#0x0\n\
LAB_0800f352:\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800f35c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    add         r7,r0,#0x0\n\
    str         r1,[sp,#0x0]\n\
    mov         r10,r2\n\
    str         r3,[sp,#0x4]\n\
    ldr         r0,DAT_0800f62c\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800f380\n\
    ldr         r0,DAT_0800f630\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
LAB_0800f380:\n\
    ldr         r4,DAT_0800f634\n\
    ldr         r1,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_0800f38e\n\
    bl          fun_0800f070\n\
    ldr         r1,[r4,#0x0]\n\
LAB_0800f38e:\n\
    ldr         r0,DAT_0800f630\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_0800f638\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800f3a6\n\
    ldr         r0,DAT_0800f630\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
LAB_0800f3a6:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f63c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0xd\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f3ce\n\
    add         r0,r7,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    mov         r2,r10\n\
    ldr         r3,[sp,#0x4]\n\
    bl          fun_0800fcbc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f3ce\n\
    b           LAB_0800f61a\n\
LAB_0800f3ce:\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800f640\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x4\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    cmp         r0,#0x0\n\
    bge         LAB_0800f3f4\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_0800f3f4:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f644\n\
    add         r0,r0,r1\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080014a0\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f432\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0xa\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    mov         r4,#0x80\n\
    lsl         r4,r4,#0x3\n\
    cmp         r0,r4\n\
    ble         LAB_0800f432\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    strh        r4,[r0,#0x0]\n\
LAB_0800f432:\n\
    bl          fun_08001484\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f462\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800f640\n\
    add         r0,r0,r4\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x6\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0x0\n\
    bge         LAB_0800f462\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_0800f462:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f640\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x3\n\
    bl          fun_08002c9c\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x12\n\
    add         r0,#0xc0\n\
    ldr         r2,DAT_0800f648\n\
    mov         r8,r2\n\
    lsl         r0,r0,#0x10\n\
    mov         r9,r0\n\
    asr         r4,r0,#0x10\n\
    mov         r5,#0xff\n\
    add         r0,r4,#0x0\n\
    and         r0,r5\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r8\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    mov         r1,#0x8\n\
    bl          fun_08002c84\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    add         r4,#0x40\n\
    and         r4,r5\n\
    lsl         r4,r4,#0x1\n\
    add         r4,r8\n\
    ldrh        r4,[r4,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    mov         r1,#0x8\n\
    bl          fun_08002c84\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    ldr         r0,DAT_0800f634\n\
    ldr         r2,[r0,#0x0]\n\
    cmp         r2,#0x0\n\
    beq         LAB_0800f4da\n\
    lsl         r0,r6,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r0,#0xc0\n\
    strh        r0,[r2,#0x2]\n\
    lsl         r0,r1,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r0,#0x75\n\
    strh        r0,[r2,#0x4]\n\
    mov         r0,r9\n\
    lsr         r1,r0,#0x10\n\
    add         r0,r2,#0x0\n\
    bl          fun_0800476c\n\
LAB_0800f4da:\n\
    add         r0,r7,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    mov         r2,r10\n\
    ldr         r3,[sp,#0x4]\n\
    bl          fun_0800ee10\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r7,#0x10]\n\
    ldr         r2,DAT_0800f64c\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,[r7,#0x0]\n\
    ldrh        r1,[r7,#0x10]\n\
    ldrh        r0,[r0,#0x26]\n\
    cmp         r1,r0\n\
    bne         LAB_0800f518\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f650\n\
    add         r4,r4,r2\n\
    ldr         r1,DAT_0800f640\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r0,r2]\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r0,r0,r1\n\
    str         r0,[r4,#0x0]\n\
LAB_0800f518:\n\
    ldr         r0,[r7,#0x0]\n\
    ldrh        r1,[r7,#0x10]\n\
    ldrh        r0,[r0,#0x22]\n\
    cmp         r1,r0\n\
    bne         LAB_0800f53e\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f650\n\
    add         r4,r4,r2\n\
    ldr         r1,DAT_0800f640\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r0,r2]\n\
    ldr         r0,[r4,#0x0]\n\
    add         r0,r0,r1\n\
    str         r0,[r4,#0x0]\n\
LAB_0800f53e:\n\
    ldr         r0,[r7,#0x0]\n\
    ldrh        r1,[r7,#0x10]\n\
    ldrh        r0,[r0,#0x28]\n\
    cmp         r1,r0\n\
    bne         LAB_0800f564\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f654\n\
    add         r4,r4,r2\n\
    ldr         r1,DAT_0800f640\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r0,r2]\n\
    ldr         r0,[r4,#0x0]\n\
    add         r0,r0,r1\n\
    str         r0,[r4,#0x0]\n\
LAB_0800f564:\n\
    ldr         r0,[r7,#0x0]\n\
    ldrh        r1,[r7,#0x10]\n\
    ldrh        r0,[r0,#0x24]\n\
    cmp         r1,r0\n\
    bne         LAB_0800f58a\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f654\n\
    add         r4,r4,r2\n\
    ldr         r1,DAT_0800f640\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r0,r2]\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r0,r0,r1\n\
    str         r0,[r4,#0x0]\n\
LAB_0800f58a:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f654\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x8\n\
    mov         r2,r10\n\
    strh        r0,[r2,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f650\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x8\n\
    ldr         r2,[sp,#0x4]\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r1,DAT_0800f658\n\
    mov         r2,r10\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x4]\n\
    ldr         r2,[sp,#0x4]\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x6]\n\
    mov         r1,r10\n\
    ldrh        r0,[r1,#0x0]\n\
    ldrh        r1,[r2,#0x0]\n\
    bl          fun_0803a140\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f640\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f61a\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800f65c\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f61a\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800f63c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0xd\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f61a\n\
    add         r0,r7,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_0800f1dc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f61a\n\
    ldr         r0,DAT_0800f660\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x12\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f61a\n\
    mov         r0,#0x5\n\
    strb        r0,[r7,#0x18]\n\
LAB_0800f61a:\n\
    add         sp,#0x8\n\
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
DAT_0800f62c:\n\
    .word 0x0200DC04\n\
DAT_0800f630:\n\
    .word 0x0000FDFF\n\
DAT_0800f634:\n\
    .word 0x0200DC88\n\
DAT_0800f638:\n\
    .word 0x0200DC84\n\
DAT_0800f63c:\n\
    .word 0x00000E84\n\
DAT_0800f640:\n\
    .word 0x00000E1C\n\
DAT_0800f644:\n\
    .word 0x00000E2A\n\
DAT_0800f648:\n\
    .word 0x08049824\n\
DAT_0800f64c:\n\
    .word 0x00000E26\n\
DAT_0800f650:\n\
    .word 0x00000E18\n\
DAT_0800f654:\n\
    .word 0x00000E14\n\
DAT_0800f658:\n\
    .word 0x020006A0\n\
DAT_0800f65c:\n\
    .word 0x00000DCA\n\
DAT_0800f660:\n\
    .word 0x0200D370\n\
    ");
}
__attribute__((naked)) void fun_0800f664()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    ldr         r0,[r4,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f750\n\
    ldr         r7,DAT_0800f6f0\n\
    ldr         r0,[r7,#0x8]\n\
    cmp         r0,#0x2\n\
    bne         LAB_0800f750\n\
    mov         r0,#0x10\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f750\n\
    ldr         r0,[r4,#0xc]\n\
    ldr         r1,[r4,#0x0]\n\
    ldrh        r2,[r0,#0x0]\n\
    add         r3,r0,#0x0\n\
    ldrh        r0,[r1,#0x26]\n\
    cmp         r2,r0\n\
    beq         LAB_0800f69a\n\
    ldrh        r0,[r1,#0x22]\n\
    cmp         r2,r0\n\
    bne         LAB_0800f6de\n\
LAB_0800f69a:\n\
    ldrh        r0,[r1,#0x22]\n\
    cmp         r2,r0\n\
    bne         LAB_0800f6b2\n\
    ldr         r0,DAT_0800f6f4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6\n\
    bne         LAB_0800f750\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r7,r2]\n\
    ldrh        r2,[r6,#0x0]\n\
    cmp         r0,r2\n\
    bgt         LAB_0800f750\n\
LAB_0800f6b2:\n\
    ldrh        r0,[r3,#0x0]\n\
    ldrh        r2,[r1,#0x26]\n\
    cmp         r0,r2\n\
    bne         LAB_0800f6ce\n\
    ldr         r0,DAT_0800f6f4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_0800f750\n\
    ldr         r0,DAT_0800f6f0\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r0,r2]\n\
    ldrh        r2,[r6,#0x0]\n\
    cmp         r0,r2\n\
    blt         LAB_0800f750\n\
LAB_0800f6ce:\n\
    ldr         r0,DAT_0800f6f0\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r0,r2]\n\
    ldrh        r2,[r5,#0x0]\n\
    sub         r0,r2,r0\n\
    add         r0,#0x9\n\
    cmp         r0,#0x12\n\
    bls         LAB_0800f738\n\
LAB_0800f6de:\n\
    ldrh        r0,[r3,#0x0]\n\
    ldrh        r2,[r1,#0x28]\n\
    cmp         r0,r2\n\
    beq         LAB_0800f6f8\n\
    ldrh        r2,[r1,#0x24]\n\
    cmp         r0,r2\n\
    bne         LAB_0800f750\n\
    b           LAB_0800f70c\n\
\n\
.space 2\n\
\n\
DAT_0800f6f0:\n\
    .word 0x020006A0\n\
DAT_0800f6f4:\n\
    .word 0x020117E0\n\
LAB_0800f6f8:\n\
    ldr         r0,DAT_0800f744\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_0800f750\n\
    ldr         r0,DAT_0800f748\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r0,r2]\n\
    ldrh        r2,[r5,#0x0]\n\
    cmp         r0,r2\n\
    blt         LAB_0800f750\n\
LAB_0800f70c:\n\
    ldrh        r3,[r3,#0x0]\n\
    ldrh        r1,[r1,#0x24]\n\
    cmp         r3,r1\n\
    bne         LAB_0800f728\n\
    ldr         r0,DAT_0800f744\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800f750\n\
    ldr         r0,DAT_0800f748\n\
    mov         r1,#0x6\n\
    ldrsh       r0,[r0,r1]\n\
    ldrh        r5,[r5,#0x0]\n\
    cmp         r0,r5\n\
    bgt         LAB_0800f750\n\
LAB_0800f728:\n\
    ldr         r0,DAT_0800f748\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r0,r2]\n\
    ldrh        r6,[r6,#0x0]\n\
    sub         r0,r6,r0\n\
    add         r0,#0x9\n\
    cmp         r0,#0x12\n\
    bhi         LAB_0800f750\n\
LAB_0800f738:\n\
    ldr         r0,DAT_0800f74c\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x2\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    b           LAB_0800f752\n\
DAT_0800f744:\n\
    .word 0x020117E0\n\
DAT_0800f748:\n\
    .word 0x020006A0\n\
DAT_0800f74c:\n\
    .word 0x0200D370\n\
LAB_0800f750:\n\
    mov         r0,#0x0\n\
LAB_0800f752:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800f758()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    mov         r12,r0\n\
    ldr         r0,DAT_0800f904\n\
    ldrh        r6,[r0,#0x4]\n\
    ldrh        r5,[r0,#0x6]\n\
    mov         r3,#0x0\n\
    ldr         r7,DAT_0800f908\n\
    mov         r1,r12\n\
    ldr         r2,[r1,#0xc]\n\
    ldr         r1,[r1,#0x0]\n\
    mov         r9,r0\n\
    ldrh        r2,[r2,#0x0]\n\
    ldrh        r1,[r1,#0x22]\n\
    cmp         r2,r1\n\
    bne         LAB_0800f7ce\n\
    ldr         r4,DAT_0800f90c\n\
    mov         r8,r7\n\
LAB_0800f784:\n\
    lsl         r2,r3,#0x3\n\
    add         r0,r4,#0x2\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bcc         LAB_0800f7be\n\
    add         r0,r4,#0x6\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bhi         LAB_0800f7be\n\
    lsl         r1,r7,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r2,r4\n\
    ldrh        r2,[r0,#0x0]\n\
    sub         r0,r6,r2\n\
    cmp         r1,r0\n\
    ble         LAB_0800f7be\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    mov         r10,r1\n\
    ldr         r1,DAT_0800f910\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bhi         LAB_0800f7be\n\
    mov         r7,r10\n\
    mov         r0,r9\n\
    strh        r2,[r0,#0x4]\n\
LAB_0800f7be:\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r0,r3,#0x3\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r8\n\
    bne         LAB_0800f784\n\
LAB_0800f7ce:\n\
    mov         r1,r12\n\
    ldr         r0,[r1,#0xc]\n\
    ldr         r1,[r1,#0x0]\n\
    mov         r12,r0\n\
    mov         r8,r1\n\
    ldrh        r2,[r0,#0x0]\n\
    ldrh        r4,[r1,#0x26]\n\
    cmp         r2,r4\n\
    bne         LAB_0800f830\n\
    ldr         r4,DAT_0800f914\n\
    ldr         r0,DAT_0800f908\n\
    mov         r10,r0\n\
LAB_0800f7e6:\n\
    lsl         r2,r3,#0x3\n\
    add         r0,r4,#0x2\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bcc         LAB_0800f820\n\
    add         r0,r4,#0x6\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bhi         LAB_0800f820\n\
    lsl         r1,r7,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r2,r4\n\
    ldrh        r2,[r0,#0x0]\n\
    sub         r0,r2,r6\n\
    cmp         r1,r0\n\
    ble         LAB_0800f820\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    str         r1,[sp,#0x0]\n\
    ldr         r1,DAT_0800f910\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bhi         LAB_0800f820\n\
    ldr         r7,[sp,#0x0]\n\
    mov         r0,r9\n\
    strh        r2,[r0,#0x4]\n\
LAB_0800f820:\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r0,r3,#0x3\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r10\n\
    bne         LAB_0800f7e6\n\
LAB_0800f830:\n\
    mov         r1,r12\n\
    ldrh        r2,[r1,#0x0]\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x28]\n\
    cmp         r2,r1\n\
    bne         LAB_0800f890\n\
    ldr         r4,DAT_0800f918\n\
    ldr         r2,DAT_0800f908\n\
    mov         r10,r2\n\
LAB_0800f842:\n\
    lsl         r2,r3,#0x3\n\
    add         r0,r2,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r6,r0\n\
    bcc         LAB_0800f880\n\
    add         r0,r4,#0x4\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r6,r0\n\
    bhi         LAB_0800f880\n\
    lsl         r1,r7,#0x10\n\
    asr         r1,r1,#0x10\n\
    str         r1,[sp,#0x0]\n\
    ldr         r1,DAT_0800f91c\n\
    add         r0,r2,r1\n\
    ldrh        r2,[r0,#0x0]\n\
    sub         r0,r2,r5\n\
    ldr         r1,[sp,#0x0]\n\
    cmp         r1,r0\n\
    ble         LAB_0800f880\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    str         r1,[sp,#0x0]\n\
    ldr         r1,DAT_0800f910\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bhi         LAB_0800f880\n\
    ldr         r7,[sp,#0x0]\n\
    mov         r0,r9\n\
    strh        r2,[r0,#0x6]\n\
LAB_0800f880:\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r0,r3,#0x3\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r10\n\
    bne         LAB_0800f842\n\
LAB_0800f890:\n\
    mov         r1,r12\n\
    ldrh        r2,[r1,#0x0]\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x24]\n\
    cmp         r2,r1\n\
    bne         LAB_0800f8f2\n\
    ldr         r4,DAT_0800f920\n\
    add         r2,r4,#0x2\n\
    mov         r10,r2\n\
    ldr         r0,DAT_0800f908\n\
    mov         r8,r0\n\
LAB_0800f8a6:\n\
    lsl         r2,r3,#0x3\n\
    add         r0,r2,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r6,r0\n\
    bcc         LAB_0800f8e2\n\
    add         r0,r4,#0x4\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r6,r0\n\
    bhi         LAB_0800f8e2\n\
    lsl         r1,r7,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r12,r1\n\
    mov         r1,r10\n\
    add         r0,r2,r1\n\
    ldrh        r2,[r0,#0x0]\n\
    sub         r0,r5,r2\n\
    cmp         r12,r0\n\
    ble         LAB_0800f8e2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    mov         r12,r1\n\
    ldr         r1,DAT_0800f910\n\
    add         r0,r0,r1\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3a\n\
    bhi         LAB_0800f8e2\n\
    mov         r7,r12\n\
    mov         r0,r9\n\
    strh        r2,[r0,#0x6]\n\
LAB_0800f8e2:\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r0,r3,#0x3\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,r8\n\
    bne         LAB_0800f8a6\n\
LAB_0800f8f2:\n\
    add         sp,#0x4\n\
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
DAT_0800f904:\n\
    .word 0x020006A0\n\
DAT_0800f908:\n\
    .word 0x0000270F\n\
DAT_0800f90c:\n\
    .word 0x0877EDC4\n\
DAT_0800f910:\n\
    .word 0xFFFF0000\n\
DAT_0800f914:\n\
    .word 0x0877EC64\n\
DAT_0800f918:\n\
    .word 0x0877ED0C\n\
DAT_0800f91c:\n\
    .word 0x0877ED0E\n\
DAT_0800f920:\n\
    .word 0x0877EBC4\n\
    ");
}
__attribute__((naked)) void fun_0800f924()
{
    asm("\n\
    push        {lr}\n\
    mov         r0,#0x67\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f93c\n\
    ldr         r0,DAT_0800f998\n\
    ldr         r1,DAT_0800f99c\n\
    add         r0,r0,r1\n\
    mov         r1,#0x2\n\
    str         r1,[r0,#0x0]\n\
LAB_0800f93c:\n\
    mov         r0,#0x6a\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f952\n\
    ldr         r0,DAT_0800f998\n\
    ldr         r2,DAT_0800f9a0\n\
    add         r0,r0,r2\n\
    mov         r1,#0x2\n\
    str         r1,[r0,#0x0]\n\
LAB_0800f952:\n\
    mov         r0,#0x6e\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f96e\n\
    ldr         r0,DAT_0800f998\n\
    ldr         r2,DAT_0800f9a4\n\
    add         r1,r0,r2\n\
    mov         r2,#0x2\n\
    str         r2,[r1,#0x0]\n\
    ldr         r1,DAT_0800f9a8\n\
    add         r0,r0,r1\n\
    str         r2,[r0,#0x0]\n\
LAB_0800f96e:\n\
    mov         r0,#0x6b\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f98a\n\
    ldr         r0,DAT_0800f998\n\
    ldr         r2,DAT_0800f9ac\n\
    add         r1,r0,r2\n\
    mov         r2,#0x2\n\
    str         r2,[r1,#0x0]\n\
    ldr         r1,DAT_0800f9b0\n\
    add         r0,r0,r1\n\
    str         r2,[r0,#0x0]\n\
LAB_0800f98a:\n\
    ldr         r0,DAT_0800f998\n\
    ldr         r2,DAT_0800f9b4\n\
    add         r0,r0,r2\n\
    mov         r1,#0x2\n\
    str         r1,[r0,#0x0]\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800f998:\n\
    .word 0x020006A0\n\
DAT_0800f99c:\n\
    .word 0x000008E8\n\
DAT_0800f9a0:\n\
    .word 0x00000908\n\
DAT_0800f9a4:\n\
    .word 0x00000928\n\
DAT_0800f9a8:\n\
    .word 0x000013C8\n\
DAT_0800f9ac:\n\
    .word 0x00001368\n\
DAT_0800f9b0:\n\
    .word 0x000013A8\n\
DAT_0800f9b4:\n\
    .word 0x00001388\n\
    ");
}
__attribute__((naked)) void fun_0800f9b8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    add         r5,r0,#0x0\n\
    add         r7,r1,#0x0\n\
    mov         r8,r2\n\
    mov         r9,r3\n\
    ldr         r4,DAT_0800fa1c\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f9d4\n\
    bl          fun_08003b00\n\
LAB_0800f9d4:\n\
    mov         r6,#0x0\n\
    str         r6,[r4,#0x0]\n\
    bl          fun_0800f924\n\
    ldr         r0,DAT_0800fa20\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_0800fa24\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r4,DAT_0800fa28\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800f9f8\n\
    bl          fun_08003b00\n\
LAB_0800f9f8:\n\
    str         r6,[r4,#0x0]\n\
    mov         r0,#0x6\n\
    strb        r0,[r5,#0x18]\n\
    ldr         r1,DAT_0800fa2c\n\
    mov         r0,#0x2\n\
    str         r0,[r1,#0x8]\n\
    add         r0,r5,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,r8\n\
    mov         r3,r9\n\
    bl          fun_0800f758\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800fa1c:\n\
    .word 0x0200DC04\n\
DAT_0800fa20:\n\
    .word 0x0200DC88\n\
DAT_0800fa24:\n\
    .word 0x0200DC84\n\
DAT_0800fa28:\n\
    .word 0x0200DC08\n\
DAT_0800fa2c:\n\
    .word 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_0800fa30()
{
    asm("\n\
    push       {r4,r5,r6,r7,lr}\n\
    lsl        r0,r0,#0x10\n\
    lsr        r5,r0,#0x10\n\
    lsl        r1,r1,#0x10\n\
    lsr        r4,r1,#0x10\n\
    mov        r3,#0x0\n\
    ldr        r1,DAT_0800fa70\n\
    add        r6,r1,#0x0\n\
LAB_0800fa40:\n\
    lsl        r0,r3,#0x1\n\
    add        r0,r0,r3\n\
    lsl        r2,r0,#0x2\n\
    add        r0,r2,r6\n\
    mov        r7,#0x0\n\
    ldrsh      r0,[r0,r7]\n\
    sub        r0,r5,r0\n\
    add        r0,#0x9\n\
    cmp        r0,#0x12\n\
    bhi        LAB_0800fa74\n\
    add        r0,r1,#0x2\n\
    add        r0,r2,r0\n\
    mov        r2,#0x0\n\
    ldrsh      r0,[r0,r2]\n\
    sub        r2,r4,r0\n\
    mov        r0,#0xa\n\
.syntax unified\n\
    rsbs       r0,r0,#0\n\
.syntax divided\n\
    cmp        r2,r0\n\
    ble        LAB_0800fa74\n\
    cmp        r2,#0x9\n\
    bgt        LAB_0800fa74\n\
    lsl        r0,r3,#0x10\n\
    asr        r0,r0,#0x10\n\
    b          LAB_0800fa82\n\
DAT_0800fa70:\n\
    .word 0x0877CC10\n\
LAB_0800fa74:\n\
    add        r0,r3,#0x1\n\
    lsl        r0,r0,#0x10\n\
    lsr        r3,r0,#0x10\n\
    cmp        r3,#0x21\n\
    bls        LAB_0800fa40\n\
    mov        r0,#0x1\n\
.syntax unified\n\
    rsbs       r0,r0,#0\n\
.syntax divided\n\
LAB_0800fa82:\n\
    pop        {r4,r5,r6,r7}\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}

__attribute__((naked)) void fun_0800fa88()
{
    asm("\n\
    push       {r4,r5,r6,r7,lr}\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_0800fae0\n\
    add        r0,r0,r1\n\
    ldr        r4,[r0,#0x0]\n\
    lsr        r4,r4,#0x8\n\
    bl         fun_080020a4\n\
    ldr        r7,DAT_0800fae4\n\
    add        r0,r0,r7\n\
    ldr        r0,[r0,#0x0]\n\
    lsl        r4,r4,#0x10\n\
    lsl        r0,r0,#0x8\n\
    lsr        r5,r4,#0x10\n\
    lsr        r4,r0,#0x10\n\
    mov        r2,#0x0\n\
    ldr        r3,DAT_0800fae8\n\
    add        r0,r3,#0x2\n\
    mov        r12,r0\n\
    mov        r6,#0xa\n\
.syntax unified\n\
    rsbs       r6,r6,#0\n\
.syntax divided\n\
LAB_0800fab4:\n\
    lsl        r0,r2,#0x1\n\
    add        r0,r0,r2\n\
    lsl        r1,r0,#0x2\n\
    add        r0,r1,r3\n\
    mov        r7,#0x0\n\
    ldrsh      r0,[r0,r7]\n\
    sub        r0,r5,r0\n\
    add        r0,#0x9\n\
    cmp        r0,#0x12\n\
    bhi        LAB_0800faec\n\
    mov        r7,r12\n\
    add        r0,r1,r7\n\
    mov        r1,#0x0\n\
    ldrsh      r0,[r0,r1]\n\
    sub        r0,r4,r0\n\
    cmp        r0,r6\n\
    ble        LAB_0800faec\n\
    cmp        r0,#0x9\n\
    bgt        LAB_0800faec\n\
    add        r0,r2,#0x0\n\
    b          LAB_0800fafa\n\
.space 2\n\
DAT_0800fae0:\n\
    .word 0x00000E14\n\
DAT_0800fae4:\n\
    .word 0x00000E18\n\
DAT_0800fae8:\n\
    .word 0x0877CC10\n\
LAB_0800faec:\n\
    add        r0,r2,#0x1\n\
    lsl        r0,r0,#0x10\n\
    lsr        r2,r0,#0x10\n\
    cmp        r2,#0x21\n\
    bls        LAB_0800fab4\n\
    mov        r0,#0x1\n\
.syntax unified\n\
    rsbs       r0,r0,#0\n\
.syntax divided\n\
LAB_0800fafa:\n\
    lsl        r0,r0,#0x10\n\
    asr        r0,r0,#0x10\n\
    pop        {r4,r5,r6,r7}\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}
