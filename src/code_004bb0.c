__attribute__((naked)) void fun_08004bb0()
{
    asm("\n\
    ldr         r1,DAT_08004bc0\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08004bc4\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08004bc8\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    bx          lr\n\
DAT_08004bc0:\n\
    .4byte 0x040000D4\n\
DAT_08004bc4:\n\
    .4byte 0x06004000\n\
DAT_08004bc8:\n\
    .4byte 0x80006000\n\
    ");
}
__attribute__((naked)) void fun_08004bcc()
{
    asm("\n\
    ldr         r2,DAT_08004bd8\n\
    str         r0,[r2,#0x0]\n\
    ldr         r0,DAT_08004bdc\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004bd8:\n\
    .4byte 0x02007FB8\n\
DAT_08004bdc:\n\
    .4byte 0x02007F7C\n\
    ");
}
__attribute__((naked)) void fun_08004be0()
{
    asm("\n\
    ldr         r1,DAT_08004be8\n\
    strh        r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004be8:\n\
    .4byte 0x02007F70\n\
    ");
}
__attribute__((naked)) void fun_08004bec()
{
    asm("\n\
    ldr         r1,DAT_08004bf4\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004bf4:\n\
    .4byte 0x02007FB0\n\
    ");
}
__attribute__((naked)) void fun_08004bf8()
{
    asm("\n\
    ldr         r1,DAT_08004c00\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004c00:\n\
    .4byte 0x02007F94\n\
    ");
}
__attribute__((naked)) void fun_08004c04()
{
    asm("\n\
    ldr         r1,DAT_08004c0c\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004c0c:\n\
    .4byte 0x02007FB4\n\
    ");
}
__attribute__((naked)) void fun_08004c10()
{
    asm("\n\
    ldr         r0,DAT_08004c18\n\
    ldrh        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004c18:\n\
    .4byte 0x02007FB4\n\
    ");
}
__attribute__((naked)) void fun_08004c1c()
{
    asm("\n\
    ldr         r1,DAT_08004c24\n\
    strh        r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004c24:\n\
    .4byte 0x02007F78\n\
    ");
}
__attribute__((naked)) void fun_08004c28()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r4,r1,#0x10\n\
    ldr         r0,DAT_08004c6c\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r6,DAT_08004c70\n\
LAB_08004c38:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004c74\n\
    ldr         r0,[r1,#0x10]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08004c76\n\
    ldmia       r6!,{r0}\n\
    and         r5,r0\n\
    and         r4,r0\n\
    ldr         r0,[r6,#0x0]\n\
    mvn         r0,r0\n\
    add         r3,r5,#0x0\n\
    and         r3,r0\n\
    add         r2,r4,#0x0\n\
    and         r2,r0\n\
    cmp         r3,#0x0\n\
    beq         LAB_08004c5a\n\
    mov         r3,#0x1\n\
LAB_08004c5a:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004c60\n\
    mov         r2,#0x1\n\
LAB_08004c60:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r1,r0\n\
    ldr         r1,[r0,#0x0]\n\
    b           LAB_08004c38\n\
DAT_08004c6c:\n\
    .4byte 0x02007FB0\n\
DAT_08004c70:\n\
    .4byte 0x08756CFC\n\
LAB_08004c74:\n\
    mov         r0,#0x0\n\
LAB_08004c76:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08004c7c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r4,r1,#0x10\n\
    ldr         r0,DAT_08004cc0\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r6,DAT_08004cc4\n\
LAB_08004c8c:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004cc8\n\
    ldr         r0,[r1,#0x10]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08004cca\n\
    ldmia       r6!,{r0}\n\
    and         r5,r0\n\
    and         r4,r0\n\
    ldr         r0,[r6,#0x0]\n\
    mvn         r0,r0\n\
    add         r3,r5,#0x0\n\
    and         r3,r0\n\
    add         r2,r4,#0x0\n\
    and         r2,r0\n\
    cmp         r3,#0x0\n\
    beq         LAB_08004cae\n\
    mov         r3,#0x1\n\
LAB_08004cae:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004cb4\n\
    mov         r2,#0x1\n\
LAB_08004cb4:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r1,r0\n\
    ldr         r1,[r0,#0x0]\n\
    b           LAB_08004c8c\n\
DAT_08004cc0:\n\
    .4byte 0x02007F94\n\
DAT_08004cc4:\n\
    .4byte 0x08756CFC\n\
LAB_08004cc8:\n\
    mov         r0,#0x0\n\
LAB_08004cca:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08004cd0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r0,#0x0\n\
    ldr         r1,DAT_08004d84\n\
    mov         r10,r1\n\
    ldr         r1,DAT_08004d88\n\
    add         r6,r1,#0x0\n\
    ldr         r1,DAT_08004d8c\n\
    mov         r9,r1\n\
LAB_08004ce8:\n\
    mov         r3,#0x0\n\
    lsl         r5,r0,#0x4\n\
    add         r0,#0x1\n\
    mov         r8,r0\n\
    add         r4,r5,#0x0\n\
LAB_08004cf2:\n\
    lsl         r2,r3,#0x6\n\
    add         r2,r4,r2\n\
    mov         r0,r10\n\
    add         r1,r2,r0\n\
    ldrh        r0,[r1,#0x0]\n\
    orr         r0,r6\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    orr         r0,r6\n\
    strh        r0,[r1,#0x2]\n\
    add         r2,r9\n\
    ldrh        r0,[r2,#0x0]\n\
    orr         r0,r6\n\
    strh        r0,[r2,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    orr         r0,r6\n\
    strh        r0,[r2,#0x2]\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r3,#0x20\n\
    bls         LAB_08004cf2\n\
    mov         r3,#0x0\n\
    ldr         r1,DAT_08004d90\n\
    mov         r12,r1\n\
    ldr         r0,DAT_08004d88\n\
    add         r4,r0,#0x0\n\
    ldr         r7,DAT_08004d94\n\
LAB_08004d2a:\n\
    lsl         r2,r3,#0x6\n\
    add         r2,r5,r2\n\
    mov         r0,r12\n\
    add         r1,r2,r0\n\
    ldrh        r0,[r1,#0x0]\n\
    orr         r0,r4\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    orr         r0,r4\n\
    strh        r0,[r1,#0x2]\n\
    add         r2,r2,r7\n\
    ldrh        r0,[r2,#0x0]\n\
    orr         r0,r4\n\
    strh        r0,[r2,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    orr         r0,r4\n\
    strh        r0,[r2,#0x2]\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r3,#0x14\n\
    bls         LAB_08004d2a\n\
    mov         r1,r8\n\
    lsl         r0,r1,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3\n\
    bls         LAB_08004ce8\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    ldr         r1,DAT_08004d98\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_08004d9c\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    ldr         r1,DAT_08004da0\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_08004da4\n\
    str         r0,[r1,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08004d84:\n\
    .4byte 0x02007FC0\n\
DAT_08004d88:\n\
    .4byte 0x0000FFFF\n\
DAT_08004d8c:\n\
    .4byte 0x02008800\n\
DAT_08004d90:\n\
    .4byte 0x02009050\n\
DAT_08004d94:\n\
    .4byte 0x02009590\n\
DAT_08004d98:\n\
    .4byte 0x02000378\n\
DAT_08004d9c:\n\
    .4byte 0x0200037C\n\
DAT_08004da0:\n\
    .4byte 0x02000380\n\
DAT_08004da4:\n\
    .4byte 0x02000384\n\
    ");
}
__attribute__((naked)) void fun_08004da8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r5,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r6,r1,#0x10\n\
    cmp         r6,#0x1\n\
    beq         LAB_08004de4\n\
    cmp         r6,#0x1\n\
    bgt         LAB_08004dc2\n\
    cmp         r6,#0x0\n\
    beq         LAB_08004dcc\n\
    b           LAB_08004e24\n\
LAB_08004dc2:\n\
    cmp         r6,#0x2\n\
    beq         LAB_08004dfc\n\
    cmp         r6,#0x3\n\
    beq         LAB_08004e14\n\
    b           LAB_08004e24\n\
LAB_08004dcc:\n\
    ldr         r7,DAT_08004dd8\n\
    ldr         r4,DAT_08004ddc\n\
    ldr         r0,DAT_08004de0\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x21\n\
    b           LAB_08004e20\n\
DAT_08004dd8:\n\
    .4byte 0x04000008\n\
DAT_08004ddc:\n\
    .4byte 0x02000278\n\
DAT_08004de0:\n\
    .4byte 0x02007FB4\n\
LAB_08004de4:\n\
    ldr         r7,DAT_08004df0\n\
    ldr         r4,DAT_08004df4\n\
    ldr         r0,DAT_08004df8\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x42\n\
    b           LAB_08004e20\n\
DAT_08004df0:\n\
    .4byte 0x0400000A\n\
DAT_08004df4:\n\
    .4byte 0x020002B8\n\
DAT_08004df8:\n\
    .4byte 0x02007FB4\n\
LAB_08004dfc:\n\
    ldr         r7,DAT_08004e08\n\
    ldr         r4,DAT_08004e0c\n\
    ldr         r0,DAT_08004e10\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x84\n\
    b           LAB_08004e20\n\
DAT_08004e08:\n\
    .4byte 0x0400000C\n\
DAT_08004e0c:\n\
    .4byte 0x020002F8\n\
DAT_08004e10:\n\
    .4byte 0x02007FB4\n\
LAB_08004e14:\n\
    ldr         r7,DAT_08004ec4\n\
    ldr         r4,DAT_08004ec8\n\
    ldr         r0,DAT_08004ecc\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x84\n\
    lsl         r2,r2,#0x1\n\
LAB_08004e20:\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
LAB_08004e24:\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r4,#0x4]\n\
    ldrh        r1,[r5,#0x8]\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    asr         r0,r0,#0x1f\n\
    mov         r1,#0x80\n\
    and         r0,r1\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x7\n\
    mov         r12,r2\n\
    ldr         r2,DAT_08004ed0\n\
    ldrh        r1,[r2,#0x0]\n\
    lsl         r1,r1,#0xb\n\
    mov         r8,r1\n\
    mov         r3,#0xc0\n\
    lsl         r3,r3,#0x13\n\
    add         r3,r8\n\
    str         r3,[r4,#0x20]\n\
    mov         r1,r12\n\
    orr         r0,r1\n\
    ldrh        r1,[r2,#0x0]\n\
    lsl         r1,r1,#0x8\n\
    orr         r0,r1\n\
    ldr         r1,DAT_08004ed4\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    orr         r0,r1\n\
    ldrh        r1,[r5,#0xa]\n\
    orr         r0,r1\n\
    strh        r0,[r7,#0x0]\n\
    ldrh        r0,[r2,#0x0]\n\
    add         r0,#0x2\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_08004ed8\n\
    lsl         r1,r6,#0x2\n\
    add         r0,r1,r0\n\
    str         r3,[r0,#0x0]\n\
    ldr         r0,DAT_08004edc\n\
    add         r1,r1,r0\n\
    ldr         r0,[r4,#0x4]\n\
    str         r0,[r1,#0x0]\n\
    ldrh        r0,[r5,#0xc]\n\
    mov         r1,#0x0\n\
    strh        r0,[r4,#0x28]\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r4,#0x4]\n\
    ldrh        r0,[r5,#0x4]\n\
    strh        r0,[r4,#0x8]\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0xa]\n\
    ldrh        r2,[r4,#0x8]\n\
    lsl         r0,r2,#0x3\n\
    strh        r0,[r4,#0xc]\n\
    ldrh        r2,[r4,#0xa]\n\
    lsl         r0,r2,#0x3\n\
    strh        r0,[r4,#0xe]\n\
    str         r1,[r4,#0x10]\n\
    str         r1,[r4,#0x14]\n\
    str         r1,[r4,#0x18]\n\
    str         r1,[r4,#0x1c]\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[r4,#0x2c]\n\
    str         r0,[r4,#0x30]\n\
    str         r1,[r4,#0x34]\n\
    str         r1,[r4,#0x38]\n\
    strh        r1,[r4,#0x3c]\n\
    ldr         r1,DAT_08004ee0\n\
    ldrh        r4,[r4,#0x8]\n\
    lsl         r0,r4,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08004ec4:\n\
    .4byte 0x0400000E\n\
DAT_08004ec8:\n\
    .4byte 0x02000338\n\
DAT_08004ecc:\n\
    .4byte 0x02007FB4\n\
DAT_08004ed0:\n\
    .4byte 0x02007F90\n\
DAT_08004ed4:\n\
    .4byte 0x02007F74\n\
DAT_08004ed8:\n\
    .4byte 0x02007FA0\n\
DAT_08004edc:\n\
    .4byte 0x02007F80\n\
DAT_08004ee0:\n\
    .4byte 0x02009040\n\
    ");
}
__attribute__((naked)) void fun_08004ee4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x34\n\
    str         r0,[sp,#0x8]\n\
    ldr         r0,DAT_08004ffc\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r1,r0,#0x6\n\
    ldr         r0,DAT_08005000\n\
    add         r4,r1,r0\n\
    mov         r0,#0x15\n\
    ldrh        r1,[r4,#0x3c]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0x3c]\n\
    bl          fun_08005060\n\
    ldr         r2,[r4,#0x2c]\n\
    str         r2,[sp,#0x10]\n\
    ldr         r3,[r4,#0x30]\n\
    str         r3,[sp,#0x14]\n\
    ldr         r5,[r4,#0x34]\n\
    str         r5,[sp,#0x18]\n\
    ldr         r0,[r4,#0x38]\n\
    str         r0,[sp,#0x1c]\n\
    ldr         r0,[r4,#0x10]\n\
    cmp         r0,#0x0\n\
    bge         LAB_08004f20\n\
    add         r0,#0x7\n\
LAB_08004f20:\n\
    lsl         r0,r0,#0xd\n\
    lsr         r2,r0,#0x10\n\
    ldr         r0,[r4,#0x14]\n\
    cmp         r0,#0x0\n\
    bge         LAB_08004f2c\n\
    add         r0,#0x7\n\
LAB_08004f2c:\n\
    lsl         r0,r0,#0xd\n\
    lsr         r1,r0,#0x10\n\
    ldr         r3,[sp,#0x8]\n\
    ldr         r6,[r3,#0x0]\n\
    ldrh        r4,[r6,#0xc]\n\
    str         r4,[sp,#0xc]\n\
    ldrh        r0,[r6,#0xa]\n\
    ldrh        r3,[r3,#0x6]\n\
    add         r5,r0,#0x0\n\
    mul         r5,r3\n\
    str         r5,[sp,#0x28]\n\
    ldrh        r4,[r6,#0x2]\n\
    str         r4,[sp,#0x20]\n\
    ldrh        r5,[r6,#0x0]\n\
    mov         r10,r5\n\
    add         r3,r4,#0x0\n\
    mov         r0,r10\n\
    str         r0,[sp,#0x24]\n\
    ldrh        r4,[r6,#0x6]\n\
    mov         r9,r4\n\
    ldrh        r5,[r6,#0x4]\n\
    mov         r8,r5\n\
    cmp         r10,r2\n\
    bcs         LAB_08004f5e\n\
    str         r2,[sp,#0x24]\n\
LAB_08004f5e:\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x20\n\
    cmp         r8,r0\n\
    ble         LAB_08004f6c\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
LAB_08004f6c:\n\
    ldr         r0,[sp,#0x20]\n\
    cmp         r0,r1\n\
    bcs         LAB_08004f74\n\
    add         r3,r1,#0x0\n\
LAB_08004f74:\n\
    add         r0,r1,#0x0\n\
    add         r0,#0x16\n\
    cmp         r9,r0\n\
    ble         LAB_08004f82\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r9,r0\n\
LAB_08004f82:\n\
    ldr         r1,[sp,#0x24]\n\
    cmp         r8,r1\n\
    bls         LAB_08005050\n\
    add         r5,r3,#0x0\n\
    cmp         r5,r9\n\
    bcs         LAB_08005050\n\
LAB_08004f8e:\n\
    ldr         r4,[sp,#0x24]\n\
    add         r2,r5,#0x1\n\
    str         r2,[sp,#0x2c]\n\
    cmp         r4,r8\n\
    bcs         LAB_08005046\n\
    mov         r7,sp\n\
    ldr         r0,DAT_08005004\n\
    add         r3,r0,#0x0\n\
LAB_08004f9e:\n\
    ldr         r1,[sp,#0x8]\n\
    ldrh        r0,[r1,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005008\n\
    mov         r2,r10\n\
    sub         r0,r4,r2\n\
    lsl         r0,r0,#0x10\n\
    ldr         r2,[sp,#0x20]\n\
    sub         r1,r5,r2\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    ldr         r2,[sp,#0xc]\n\
    mul         r1,r2\n\
    ldr         r2,[sp,#0x28]\n\
    add         r1,r2,r1\n\
    lsr         r0,r0,#0xf\n\
    add         r1,r1,r0\n\
    ldr         r0,[r6,#0x10]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004fce\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    and         r0,r3\n\
    strh        r0,[r7,#0x0]\n\
LAB_08004fce:\n\
    ldr         r0,[r6,#0x14]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004fdc\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    and         r0,r3\n\
    strh        r0,[r7,#0x2]\n\
LAB_08004fdc:\n\
    ldr         r0,[r6,#0x18]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004fea\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    and         r0,r3\n\
    strh        r0,[r7,#0x4]\n\
LAB_08004fea:\n\
    ldr         r0,[r6,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005026\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    and         r0,r3\n\
    strh        r0,[r7,#0x6]\n\
    b           LAB_08005026\n\
\n\
.space 2\n\
\n\
DAT_08004ffc:\n\
    .4byte 0x02007F78\n\
DAT_08005000:\n\
    .4byte 0x02000278\n\
DAT_08005004:\n\
    .4byte 0x0000F3FF\n\
LAB_08005008:\n\
    add         r0,r4,#0x0\n\
    ldr         r1,[sp,#0x10]\n\
    and         r0,r1\n\
    ldr         r2,[sp,#0x18]\n\
    add         r0,r0,r2\n\
    add         r1,r5,#0x0\n\
    ldr         r2,[sp,#0x14]\n\
    and         r1,r2\n\
    ldr         r2,[sp,#0x1c]\n\
    add         r1,r1,r2\n\
    mov         r2,sp\n\
    str         r3,[sp,#0x30]\n\
    bl          fun_08005c7c\n\
    ldr         r3,[sp,#0x30]\n\
LAB_08005026:\n\
    mov         r0,#0x3f\n\
    and         r0,r4\n\
    mov         r1,#0x1f\n\
    and         r1,r5\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r2,sp\n\
    str         r3,[sp,#0x30]\n\
    bl          fun_08005c00\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r3,[sp,#0x30]\n\
    cmp         r4,r8\n\
    bcc         LAB_08004f9e\n\
LAB_08005046:\n\
    ldr         r3,[sp,#0x2c]\n\
    lsl         r0,r3,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,r9\n\
    bcc         LAB_08004f8e\n\
LAB_08005050:\n\
    add         sp,#0x34\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_08005060()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x30\n\
    ldr         r3,DAT_080053d8\n\
    ldrh        r0,[r3,#0x0]\n\
    lsl         r1,r0,#0x6\n\
    ldr         r0,DAT_080053dc\n\
    add         r1,r1,r0\n\
    mov         r8,r1\n\
    ldr         r4,[r1,#0x10]\n\
    ldr         r7,[r1,#0x14]\n\
    ldr         r1,[r1,#0x2c]\n\
    str         r1,[sp,#0x14]\n\
    mov         r2,r8\n\
    ldr         r2,[r2,#0x30]\n\
    str         r2,[sp,#0x18]\n\
    mov         r5,r8\n\
    ldr         r5,[r5,#0x34]\n\
    str         r5,[sp,#0x1c]\n\
    mov         r0,r8\n\
    ldr         r0,[r0,#0x38]\n\
    str         r0,[sp,#0x20]\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x3c]\n\
    str         r1,[sp,#0x24]\n\
    mov         r0,#0x0\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x3c]\n\
    mov         r0,#0x1\n\
    ldrh        r5,[r2,#0x28]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_080050aa\n\
    b           LAB_0800544c\n\
LAB_080050aa:\n\
    lsr         r0,r4,#0x3\n\
    str         r0,[sp,#0x10]\n\
    lsr         r1,r7,#0x3\n\
    mov         r10,r1\n\
    mov         r1,#0x3f\n\
    add         r2,r0,#0x0\n\
    and         r2,r1\n\
    str         r2,[sp,#0x8]\n\
    mov         r2,#0x1f\n\
    mov         r5,r10\n\
    and         r5,r2\n\
    str         r5,[sp,#0xc]\n\
    ldr         r5,[sp,#0x14]\n\
    and         r0,r5\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,r10\n\
    ldr         r5,[sp,#0x18]\n\
    and         r0,r5\n\
    mov         r10,r0\n\
    mov         r0,#0x10\n\
    ldr         r5,[sp,#0x24]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005120\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x0\n\
    ble         LAB_08005120\n\
    mov         r5,r10\n\
    cmp         r5,#0x0\n\
    ble         LAB_08005120\n\
    ldr         r6,[sp,#0x8]\n\
    sub         r6,#0x1\n\
    and         r6,r1\n\
    ldr         r5,[sp,#0xc]\n\
    sub         r5,#0x1\n\
    and         r5,r2\n\
    sub         r0,#0x1\n\
    ldr         r1,[sp,#0x14]\n\
    and         r0,r1\n\
    ldr         r2,[sp,#0x1c]\n\
    add         r0,r0,r2\n\
    mov         r1,r10\n\
    sub         r1,#0x1\n\
    ldr         r2,[sp,#0x18]\n\
    and         r1,r2\n\
    ldr         r2,[sp,#0x20]\n\
    add         r1,r1,r2\n\
    ldrh        r3,[r3,#0x0]\n\
    lsl         r2,r3,#0x4\n\
    ldr         r3,DAT_080053e0\n\
    add         r2,r2,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
LAB_08005120:\n\
    mov         r0,#0x20\n\
    ldr         r3,[sp,#0x24]\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800517a\n\
    ldr         r1,[sp,#0x10]\n\
    add         r1,#0x1f\n\
    ldr         r5,[sp,#0x14]\n\
    and         r1,r5\n\
    mov         r0,r8\n\
    ldrh        r0,[r0,#0x8]\n\
    cmp         r1,r0\n\
    bcs         LAB_0800517a\n\
    mov         r2,r10\n\
    cmp         r2,#0x0\n\
    ble         LAB_0800517a\n\
    ldr         r6,[sp,#0x8]\n\
    add         r6,#0x1f\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    ldr         r5,[sp,#0xc]\n\
    sub         r5,#0x1\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r1,r3\n\
    mov         r1,r10\n\
    sub         r1,#0x1\n\
    ldr         r2,[sp,#0x18]\n\
    and         r1,r2\n\
    ldr         r3,[sp,#0x20]\n\
    add         r1,r1,r3\n\
    ldr         r2,DAT_080053d8\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r2,r2,#0x4\n\
    ldr         r3,DAT_080053e4\n\
    add         r2,r2,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
LAB_0800517a:\n\
    mov         r0,#0x40\n\
    ldr         r5,[sp,#0x24]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_080051d4\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x0\n\
    ble         LAB_080051d4\n\
    mov         r1,r10\n\
    add         r1,#0x15\n\
    ldr         r2,[sp,#0x18]\n\
    and         r1,r2\n\
    mov         r3,r8\n\
    ldrh        r3,[r3,#0xa]\n\
    cmp         r1,r3\n\
    bcs         LAB_080051d4\n\
    ldr         r6,[sp,#0x8]\n\
    sub         r6,#0x1\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    ldr         r5,[sp,#0xc]\n\
    add         r5,#0x15\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    ldr         r0,[sp,#0x10]\n\
    sub         r0,#0x1\n\
    ldr         r2,[sp,#0x14]\n\
    and         r0,r2\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r0,r3\n\
    ldr         r2,[sp,#0x20]\n\
    add         r1,r1,r2\n\
    ldr         r2,DAT_080053d8\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r2,r2,#0x4\n\
    ldr         r3,DAT_080053e8\n\
    add         r2,r2,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
LAB_080051d4:\n\
    mov         r0,#0x80\n\
    ldr         r3,[sp,#0x24]\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005230\n\
    ldr         r2,[sp,#0x10]\n\
    add         r2,#0x1f\n\
    ldr         r5,[sp,#0x14]\n\
    and         r2,r5\n\
    mov         r0,r8\n\
    ldrh        r0,[r0,#0x8]\n\
    cmp         r2,r0\n\
    bcs         LAB_08005230\n\
    mov         r1,r10\n\
    add         r1,#0x15\n\
    ldr         r3,[sp,#0x18]\n\
    and         r1,r3\n\
    mov         r5,r8\n\
    ldrh        r5,[r5,#0xa]\n\
    cmp         r1,r5\n\
    bcs         LAB_08005230\n\
    ldr         r6,[sp,#0x8]\n\
    add         r6,#0x1f\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    ldr         r5,[sp,#0xc]\n\
    add         r5,#0x15\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r2,r3\n\
    ldr         r2,[sp,#0x20]\n\
    add         r1,r1,r2\n\
    ldr         r2,DAT_080053d8\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r2,r2,#0x4\n\
    ldr         r3,DAT_080053ec\n\
    add         r2,r2,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
LAB_08005230:\n\
    mov         r0,#0x1\n\
    ldr         r3,[sp,#0x24]\n\
    and         r0,r3\n\
    lsl         r4,r4,#0x10\n\
    str         r4,[sp,#0x28]\n\
    lsl         r5,r7,#0x10\n\
    str         r5,[sp,#0x2c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080052ac\n\
    mov         r0,#0x15\n\
    mov         r9,r0\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0xa]\n\
    cmp         r9,r1\n\
    bls         LAB_08005254\n\
    mov         r2,r8\n\
    ldrh        r2,[r2,#0xa]\n\
    mov         r9,r2\n\
LAB_08005254:\n\
    ldr         r3,[sp,#0x10]\n\
    cmp         r3,#0x0\n\
    ble         LAB_080052ac\n\
    ldr         r6,[sp,#0x8]\n\
    sub         r6,#0x1\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    mov         r4,#0x0\n\
    cmp         r4,r9\n\
    bcs         LAB_080052ac\n\
    add         r7,r3,#0x0\n\
    sub         r7,#0x1\n\
    ldr         r5,[sp,#0x14]\n\
    and         r7,r5\n\
LAB_08005270:\n\
    ldr         r0,[sp,#0xc]\n\
    add         r5,r0,r4\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    mov         r2,r10\n\
    add         r1,r2,r4\n\
    ldr         r3,[sp,#0x18]\n\
    and         r1,r3\n\
    ldr         r0,[sp,#0x20]\n\
    add         r1,r1,r0\n\
    lsl         r2,r4,#0x6\n\
    ldr         r0,DAT_080053d8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x4\n\
    ldr         r3,DAT_080053f0\n\
    add         r0,r0,r3\n\
    add         r2,r2,r0\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r7,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r4,#0x1\n\
    cmp         r4,r9\n\
    bcc         LAB_08005270\n\
LAB_080052ac:\n\
    mov         r0,#0x2\n\
    ldr         r5,[sp,#0x24]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005324\n\
    mov         r0,#0x15\n\
    mov         r9,r0\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0xa]\n\
    cmp         r9,r1\n\
    bls         LAB_080052c8\n\
    mov         r2,r8\n\
    ldrh        r2,[r2,#0xa]\n\
    mov         r9,r2\n\
LAB_080052c8:\n\
    ldr         r1,[sp,#0x10]\n\
    add         r1,#0x1f\n\
    ldr         r3,[sp,#0x14]\n\
    and         r1,r3\n\
    mov         r5,r8\n\
    ldrh        r5,[r5,#0x8]\n\
    cmp         r1,r5\n\
    bcs         LAB_08005324\n\
    ldr         r6,[sp,#0x8]\n\
    add         r6,#0x1f\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    mov         r4,#0x0\n\
    cmp         r4,r9\n\
    bcs         LAB_08005324\n\
    add         r7,r1,#0x0\n\
LAB_080052e8:\n\
    ldr         r0,[sp,#0xc]\n\
    add         r5,r0,r4\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    mov         r2,r10\n\
    add         r1,r2,r4\n\
    ldr         r3,[sp,#0x18]\n\
    and         r1,r3\n\
    ldr         r0,[sp,#0x20]\n\
    add         r1,r1,r0\n\
    lsl         r2,r4,#0x6\n\
    ldr         r0,DAT_080053d8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x4\n\
    ldr         r3,DAT_080053f4\n\
    add         r0,r0,r3\n\
    add         r2,r2,r0\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r7,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r4,#0x1\n\
    cmp         r4,r9\n\
    bcc         LAB_080052e8\n\
LAB_08005324:\n\
    mov         r0,#0x4\n\
    ldr         r5,[sp,#0x24]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005398\n\
    mov         r0,#0x1f\n\
    mov         r9,r0\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x8]\n\
    cmp         r9,r1\n\
    bls         LAB_08005340\n\
    mov         r2,r8\n\
    ldrh        r2,[r2,#0x8]\n\
    mov         r9,r2\n\
LAB_08005340:\n\
    mov         r3,r10\n\
    cmp         r3,#0x0\n\
    ble         LAB_08005398\n\
    ldr         r5,[sp,#0xc]\n\
    sub         r5,#0x1\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    mov         r4,#0x0\n\
    cmp         r4,r9\n\
    bcs         LAB_08005398\n\
    mov         r7,r10\n\
    sub         r7,#0x1\n\
    ldr         r0,[sp,#0x18]\n\
    and         r7,r0\n\
LAB_0800535c:\n\
    ldr         r1,[sp,#0x8]\n\
    add         r6,r1,r4\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    ldr         r2,[sp,#0x10]\n\
    add         r0,r2,r4\n\
    ldr         r3,[sp,#0x14]\n\
    and         r0,r3\n\
    ldr         r1,[sp,#0x1c]\n\
    add         r0,r0,r1\n\
    lsl         r2,r4,#0x6\n\
    ldr         r1,DAT_080053d8\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x4\n\
    ldr         r3,DAT_080053f8\n\
    add         r1,r1,r3\n\
    add         r2,r2,r1\n\
    ldr         r3,[sp,#0x20]\n\
    add         r1,r7,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r4,#0x1\n\
    cmp         r4,r9\n\
    bcc         LAB_0800535c\n\
LAB_08005398:\n\
    mov         r0,#0x8\n\
    ldr         r5,[sp,#0x24]\n\
    and         r5,r0\n\
    cmp         r5,#0x0\n\
    beq         LAB_08005436\n\
    mov         r0,#0x1f\n\
    mov         r9,r0\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x8]\n\
    cmp         r9,r1\n\
    bls         LAB_080053b4\n\
    mov         r2,r8\n\
    ldrh        r2,[r2,#0x8]\n\
    mov         r9,r2\n\
LAB_080053b4:\n\
    mov         r1,r10\n\
    add         r1,#0x15\n\
    ldr         r3,[sp,#0x18]\n\
    and         r1,r3\n\
    mov         r5,r8\n\
    ldrh        r5,[r5,#0xa]\n\
    cmp         r1,r5\n\
    bcs         LAB_08005436\n\
    ldr         r5,[sp,#0xc]\n\
    add         r5,#0x15\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    mov         r4,#0x0\n\
    cmp         r4,r9\n\
    bcs         LAB_08005436\n\
    add         r7,r1,#0x0\n\
LAB_080053d4:\n\
    ldr         r0,[sp,#0x8]\n\
    b           LAB_080053fc\n\
DAT_080053d8:\n\
    .4byte 0x02007F78\n\
DAT_080053dc:\n\
    .4byte 0x02000278\n\
DAT_080053e0:\n\
    .4byte 0x02008780\n\
DAT_080053e4:\n\
    .4byte 0x02008FC0\n\
DAT_080053e8:\n\
    .4byte 0x020087C0\n\
DAT_080053ec:\n\
    .4byte 0x02009000\n\
DAT_080053f0:\n\
    .4byte 0x02009050\n\
DAT_080053f4:\n\
    .4byte 0x02009590\n\
DAT_080053f8:\n\
    .4byte 0x02007FC0\n\
LAB_080053fc:\n\
    add         r6,r0,r4\n\
    mov         r0,#0x3f\n\
    and         r6,r0\n\
    ldr         r1,[sp,#0x10]\n\
    add         r0,r1,r4\n\
    ldr         r2,[sp,#0x14]\n\
    and         r0,r2\n\
    ldr         r3,[sp,#0x1c]\n\
    add         r0,r0,r3\n\
    lsl         r2,r4,#0x6\n\
    ldr         r1,DAT_08005444\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x4\n\
    ldr         r3,DAT_08005448\n\
    add         r1,r1,r3\n\
    add         r2,r2,r1\n\
    ldr         r3,[sp,#0x20]\n\
    add         r1,r7,r3\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r4,#0x1\n\
    cmp         r4,r9\n\
    bcc         LAB_080053d4\n\
LAB_08005436:\n\
    ldr         r5,[sp,#0x28]\n\
    lsr         r0,r5,#0x10\n\
    ldr         r2,[sp,#0x2c]\n\
    lsr         r1,r2,#0x10\n\
    bl          fun_08005ce0\n\
    b           LAB_08005458\n\
DAT_08005444:\n\
    .4byte 0x02007F78\n\
DAT_08005448:\n\
    .4byte 0x02008800\n\
LAB_0800544c:\n\
    lsl         r0,r4,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r7,#0x10\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_08005ce0\n\
LAB_08005458:\n\
    add         sp,#0x30\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_08005468()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x38\n\
    ldr         r0,DAT_080054f8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r1,r0,#0x6\n\
    ldr         r0,DAT_080054fc\n\
    add         r1,r1,r0\n\
    mov         r8,r1\n\
    ldr         r0,[r1,#0x2c]\n\
    str         r0,[sp,#0x20]\n\
    ldr         r1,[r1,#0x30]\n\
    str         r1,[sp,#0x24]\n\
    mov         r2,r8\n\
    ldr         r2,[r2,#0x34]\n\
    str         r2,[sp,#0x28]\n\
    mov         r0,r8\n\
    ldr         r0,[r0,#0x38]\n\
    str         r0,[sp,#0x2c]\n\
    mov         r0,#0x15\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x3c]\n\
    orr         r0,r1\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x3c]\n\
    bl          fun_08005060\n\
    mov         r0,#0x1\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x28]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005580\n\
    mov         r2,r8\n\
    ldr         r0,[r2,#0x10]\n\
    cmp         r0,#0x0\n\
    bge         LAB_080054ba\n\
    add         r0,#0x7\n\
LAB_080054ba:\n\
    lsl         r0,r0,#0xd\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x18]\n\
    mov         r1,r8\n\
    ldr         r0,[r1,#0x14]\n\
    cmp         r0,#0x0\n\
    bge         LAB_080054ca\n\
    add         r0,#0x7\n\
LAB_080054ca:\n\
    lsl         r0,r0,#0xd\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x1c]\n\
    mov         r2,#0x16\n\
    str         r2,[sp,#0x34]\n\
    mov         r0,r8\n\
    ldrh        r0,[r0,#0xa]\n\
    cmp         r2,r0\n\
    bls         LAB_080054e2\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0xa]\n\
    str         r1,[sp,#0x34]\n\
LAB_080054e2:\n\
    mov         r2,#0x20\n\
    str         r2,[sp,#0x30]\n\
    mov         r0,r8\n\
    ldrh        r0,[r0,#0x8]\n\
    cmp         r2,r0\n\
    bls         LAB_080054f4\n\
    mov         r1,r8\n\
    ldrh        r1,[r1,#0x8]\n\
    str         r1,[sp,#0x30]\n\
LAB_080054f4:\n\
    mov         r7,#0x0\n\
    b           LAB_08005568\n\
DAT_080054f8:\n\
    .4byte 0x02007F78\n\
DAT_080054fc:\n\
    .4byte 0x02000278\n\
LAB_08005500:\n\
    mov         r6,#0x0\n\
    add         r0,r7,#0x1\n\
    mov         r10,r0\n\
    ldr         r1,[sp,#0x30]\n\
    cmp         r6,r1\n\
    bcs         LAB_08005562\n\
    add         r5,sp,#0x8\n\
    ldr         r2,[sp,#0x1c]\n\
    add         r2,r2,r7\n\
    mov         r9,r2\n\
    mov         r7,r9\n\
    ldr         r0,[sp,#0x24]\n\
    and         r7,r0\n\
LAB_0800551a:\n\
    ldr         r0,DAT_0800557c\n\
    ldrh        r1,[r5,#0x0]\n\
    orr         r0,r1\n\
    strh        r0,[r5,#0x0]\n\
    ldrh        r0,[r5,#0x2]\n\
    ldr         r2,DAT_0800557c\n\
    orr         r0,r2\n\
    strh        r0,[r5,#0x2]\n\
    ldr         r0,[sp,#0x18]\n\
    add         r4,r0,r6\n\
    add         r0,r4,#0x0\n\
    ldr         r1,[sp,#0x20]\n\
    and         r0,r1\n\
    ldr         r2,[sp,#0x28]\n\
    add         r0,r0,r2\n\
    ldr         r2,[sp,#0x2c]\n\
    add         r1,r7,r2\n\
    add         r2,r5,#0x0\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    mov         r0,#0x3f\n\
    and         r4,r0\n\
    add         r0,r4,#0x0\n\
    mov         r1,r9\n\
    mov         r2,#0x1f\n\
    and         r1,r2\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    ldr         r0,[sp,#0x30]\n\
    cmp         r6,r0\n\
    bcc         LAB_0800551a\n\
LAB_08005562:\n\
    mov         r1,r10\n\
    lsl         r0,r1,#0x10\n\
    lsr         r7,r0,#0x10\n\
LAB_08005568:\n\
    ldr         r2,[sp,#0x34]\n\
    cmp         r7,r2\n\
    bcc         LAB_08005500\n\
    mov         r1,r8\n\
    ldrh        r0,[r1,#0x10]\n\
    ldrh        r1,[r1,#0x14]\n\
    bl          fun_08005ce0\n\
    b           LAB_080055ce\n\
\n\
.space 2\n\
\n\
DAT_0800557c:\n\
    .4byte 0x0000FFFF\n\
LAB_08005580:\n\
    mov         r7,#0x0\n\
    add         r4,sp,#0x8\n\
    ldr         r2,DAT_080055e0\n\
    add         r5,r2,#0x0\n\
LAB_08005588:\n\
    mov         r6,#0x0\n\
    add         r0,r7,#0x1\n\
    mov         r10,r0\n\
LAB_0800558e:\n\
    ldrh        r0,[r4,#0x0]\n\
    orr         r0,r5\n\
    strh        r0,[r4,#0x0]\n\
    ldrh        r0,[r4,#0x2]\n\
    orr         r0,r5\n\
    strh        r0,[r4,#0x2]\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,sp\n\
    bl          fun_08005c00\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    cmp         r6,#0x1d\n\
    bls         LAB_0800558e\n\
    mov         r1,r10\n\
    lsl         r0,r1,#0x10\n\
    lsr         r7,r0,#0x10\n\
    cmp         r7,#0x13\n\
    bls         LAB_08005588\n\
    mov         r2,r8\n\
    ldrh        r0,[r2,#0x10]\n\
    ldrh        r1,[r2,#0x14]\n\
    bl          fun_08005ce0\n\
LAB_080055ce:\n\
    add         sp,#0x38\n\
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
DAT_080055e0:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_080055e4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    add         r6,r0,#0x0\n\
    add         r7,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    mov         r10,r3\n\
    ldrh        r0,[r4,#0x0]\n\
    strh        r0,[r4,#0x4]\n\
    ldrh        r0,[r4,#0x2]\n\
    strh        r0,[r4,#0x6]\n\
    strh        r6,[r4,#0x0]\n\
    strh        r7,[r4,#0x2]\n\
    ldrh        r0,[r4,#0x4]\n\
    cmp         r0,r6\n\
    bne         LAB_08005614\n\
    ldrh        r0,[r4,#0x6]\n\
    add         r3,r4,#0x0\n\
    add         r3,#0x8\n\
    cmp         r0,r7\n\
    bne         LAB_08005614\n\
    b           LAB_0800571e\n\
LAB_08005614:\n\
    lsl         r0,r6,#0x10\n\
    mov         r8,r0\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r7,#0x10\n\
    mov         r9,r1\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_08004c28\n\
    add         r5,r0,#0x0\n\
    cmp         r5,#0x0\n\
    beq         LAB_080056cc\n\
    ldr         r3,[r5,#0x0]\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080056cc\n\
    mov         r2,r8\n\
    asr         r1,r2,#0x10\n\
    ldrh        r0,[r3,#0x0]\n\
    mov         r12,r0\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r3,r2]\n\
    cmp         r1,r0\n\
    blt         LAB_080056cc\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r3,r2]\n\
    cmp         r1,r0\n\
    bge         LAB_080056cc\n\
    mov         r0,r9\n\
    asr         r1,r0,#0x10\n\
    ldrh        r2,[r3,#0x2]\n\
    mov         r8,r2\n\
    mov         r2,#0x2\n\
    ldrsh       r0,[r3,r2]\n\
    cmp         r1,r0\n\
    blt         LAB_080056cc\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r3,r2]\n\
    cmp         r1,r0\n\
    bge         LAB_080056cc\n\
    mov         r0,r12\n\
    sub         r2,r6,r0\n\
    lsl         r2,r2,#0x10\n\
    mov         r1,r8\n\
    sub         r0,r7,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldrh        r6,[r3,#0xa]\n\
    ldrh        r5,[r5,#0x6]\n\
    add         r1,r6,#0x0\n\
    mul         r1,r5\n\
    ldrh        r5,[r3,#0xc]\n\
    mul         r0,r5\n\
    add         r1,r1,r0\n\
    lsr         r2,r2,#0xf\n\
    add         r2,r1,r2\n\
    ldr         r1,[r3,#0x10]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005692\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_080056c8\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0x8]\n\
LAB_08005692:\n\
    ldr         r1,[r3,#0x14]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080056a2\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_080056c8\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0xa]\n\
LAB_080056a2:\n\
    ldr         r1,[r3,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080056b2\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_080056c8\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
LAB_080056b2:\n\
    ldr         r1,[r3,#0x1c]\n\
    add         r3,r4,#0x0\n\
    add         r3,#0x8\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800571e\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_080056c8\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0xe]\n\
    b           LAB_0800571e\n\
DAT_080056c8:\n\
    .4byte 0x0000F3FF\n\
LAB_080056cc:\n\
    ldr         r0,DAT_08005734\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r7\n\
    lsl         r0,r6,#0x1\n\
    add         r2,r1,r0\n\
    ldr         r5,DAT_08005738\n\
    ldr         r1,[r5,#0x0]\n\
    add         r3,r4,#0x0\n\
    add         r3,#0x8\n\
    cmp         r1,#0x0\n\
    beq         LAB_080056ee\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_0800573c\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0x8]\n\
LAB_080056ee:\n\
    ldr         r1,[r5,#0x4]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080056fe\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_0800573c\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x2]\n\
LAB_080056fe:\n\
    ldr         r1,[r5,#0x8]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800570e\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_0800573c\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x4]\n\
LAB_0800570e:\n\
    ldr         r1,[r5,#0xc]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800571e\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_0800573c\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x6]\n\
LAB_0800571e:\n\
    mov         r1,r10\n\
    add         r0,r3,#0x0\n\
    ldmia       r0!,{r2,r6}\n\
    stmia       r1!,{r2,r6}\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005734:\n\
    .4byte 0x02009040\n\
DAT_08005738:\n\
    .4byte 0x02007F80\n\
DAT_0800573c:\n\
    .4byte 0x0000F3FF\n\
    ");
}
__attribute__((naked)) void fun_08005740()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r2,r0,#0x0\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x3c]\n\
    ldr         r1,[r2,#0x10]\n\
    ldr         r0,[r2,#0x18]\n\
    cmp         r1,r0\n\
    ble         LAB_08005754\n\
    mov         r0,#0x2\n\
    strh        r0,[r2,#0x3c]\n\
LAB_08005754:\n\
    ldr         r1,[r2,#0x10]\n\
    ldr         r0,[r2,#0x18]\n\
    cmp         r1,r0\n\
    bge         LAB_08005764\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r2,#0x3c]\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_08005764:\n\
    ldr         r3,[r2,#0x14]\n\
    ldr         r1,[r2,#0x1c]\n\
    cmp         r3,r1\n\
    ble         LAB_08005774\n\
    mov         r0,#0x8\n\
    ldrh        r4,[r2,#0x3c]\n\
    orr         r0,r4\n\
    strh        r0,[r2,#0x3c]\n\
LAB_08005774:\n\
    cmp         r3,r1\n\
    bge         LAB_08005780\n\
    mov         r0,#0x4\n\
    ldrh        r1,[r2,#0x3c]\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_08005780:\n\
    ldrh        r1,[r2,#0x3c]\n\
    mov         r0,#0x4\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08005792\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005798\n\
LAB_08005792:\n\
    mov         r0,#0x10\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_08005798:\n\
    ldrh        r1,[r2,#0x3c]\n\
    mov         r0,#0x6\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080057a8\n\
    mov         r0,#0x20\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_080057a8:\n\
    ldrh        r1,[r2,#0x3c]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080057ba\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080057c0\n\
LAB_080057ba:\n\
    mov         r0,#0x40\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_080057c0:\n\
    ldrh        r1,[r2,#0x3c]\n\
    mov         r0,#0xa\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080057d0\n\
    mov         r0,#0x80\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x3c]\n\
LAB_080057d0:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080057d8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r6,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    lsl         r7,r6,#0x10\n\
    lsr         r0,r7,#0x10\n\
    lsl         r1,r4,#0x10\n\
    mov         r8,r1\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_08004c28\n\
    add         r3,r0,#0x0\n\
    cmp         r3,#0x0\n\
    beq         LAB_08005872\n\
    ldr         r5,[r3,#0x0]\n\
    ldrh        r0,[r3,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005872\n\
    asr         r2,r7,#0x10\n\
    ldrh        r7,[r5,#0x0]\n\
    mov         r12,r7\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r5,r1]\n\
    cmp         r2,r0\n\
    blt         LAB_08005872\n\
    mov         r7,#0x4\n\
    ldrsh       r0,[r5,r7]\n\
    cmp         r2,r0\n\
    bge         LAB_08005872\n\
    mov         r0,r8\n\
    asr         r1,r0,#0x10\n\
    ldrh        r2,[r5,#0x2]\n\
    mov         r7,#0x2\n\
    ldrsh       r0,[r5,r7]\n\
    cmp         r1,r0\n\
    blt         LAB_08005872\n\
    mov         r7,#0x6\n\
    ldrsh       r0,[r5,r7]\n\
    cmp         r1,r0\n\
    bge         LAB_08005872\n\
    mov         r0,r12\n\
    sub         r1,r6,r0\n\
    lsl         r1,r1,#0x10\n\
    sub         r0,r4,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldrh        r4,[r5,#0xa]\n\
    ldrh        r6,[r3,#0x6]\n\
    add         r2,r4,#0x0\n\
    mul         r2,r6\n\
    add         r3,r2,#0x0\n\
    ldrh        r7,[r5,#0xc]\n\
    mul         r0,r7\n\
    add         r3,r3,r0\n\
    lsr         r1,r1,#0xf\n\
    add         r3,r3,r1\n\
    ldr         r1,[r5,#0x10]\n\
    add         r1,r1,r3\n\
    mov         r2,#0xc0\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r2,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    ldr         r1,[r5,#0x14]\n\
    add         r1,r1,r3\n\
    add         r4,r2,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r4,r1\n\
    ldr         r1,[r5,#0x18]\n\
    add         r1,r1,r3\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r2,r1\n\
    lsr         r0,r0,#0xa\n\
    lsr         r4,r4,#0x8\n\
    orr         r0,r4\n\
    b           LAB_080058a4\n\
LAB_08005872:\n\
    ldr         r0,DAT_080058b4\n\
    ldrh        r0,[r0,#0x0]\n\
    mul         r4,r0\n\
    lsl         r0,r6,#0x1\n\
    add         r4,r4,r0\n\
    ldr         r5,DAT_080058b8\n\
    ldr         r1,[r5,#0x0]\n\
    add         r1,r1,r4\n\
    mov         r2,#0xc0\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r2,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    ldr         r1,[r5,#0x4]\n\
    add         r1,r1,r4\n\
    add         r3,r2,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r3,r1\n\
    ldr         r1,[r5,#0x8]\n\
    add         r1,r1,r4\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r2,r1\n\
    lsr         r0,r0,#0xa\n\
    lsr         r3,r3,#0x8\n\
    orr         r0,r3\n\
LAB_080058a4:\n\
    lsr         r2,r2,#0x6\n\
    orr         r0,r2\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080058b4:\n\
    .4byte 0x02009040\n\
DAT_080058b8:\n\
    .4byte 0x02007F80\n\
    ");
}
__attribute__((naked)) void fun_080058bc()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x18\n\
    lsl         r2,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    ldr         r0,DAT_0800592c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005944\n\
    lsr         r5,r2,#0x13\n\
    lsr         r3,r1,#0x13\n\
    ldr         r0,DAT_08005930\n\
    ldr         r0,[r0,#0x0]\n\
    and         r5,r0\n\
    ldr         r0,DAT_08005934\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldr         r0,DAT_08005938\n\
    ldr         r0,[r0,#0x0]\n\
    and         r3,r0\n\
    ldr         r0,DAT_0800593c\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    add         r0,r5,#0x0\n\
    add         r1,r3,#0x0\n\
    bl          fun_080057d8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    ldr         r1,DAT_08005940\n\
    mov         r0,#0x7\n\
    and         r0,r2\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x8\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005916\n\
    mov         r0,#0x4\n\
    orr         r1,r0\n\
LAB_08005916:\n\
    mov         r0,#0x10\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005926\n\
    mov         r0,#0x8\n\
    orr         r1,r0\n\
    lsl         r0,r1,#0x10\n\
    lsr         r1,r0,#0x10\n\
LAB_08005926:\n\
    add         r0,r1,#0x0\n\
    b           LAB_0800599e\n\
\n\
.space 2\n\
\n\
DAT_0800592c:\n\
    .4byte 0x02007F70\n\
DAT_08005930:\n\
    .4byte 0x02000378\n\
DAT_08005934:\n\
    .4byte 0x02000380\n\
DAT_08005938:\n\
    .4byte 0x0200037C\n\
DAT_0800593c:\n\
    .4byte 0x02000384\n\
DAT_08005940:\n\
    .4byte 0x08756D38\n\
LAB_08005944:\n\
    ldr         r4,DAT_080059a8\n\
    lsr         r5,r2,#0x13\n\
    lsr         r3,r1,#0x13\n\
    ldr         r0,DAT_080059ac\n\
    ldr         r0,[r0,#0x0]\n\
    and         r5,r0\n\
    ldr         r0,DAT_080059b0\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldr         r0,DAT_080059b4\n\
    ldr         r0,[r0,#0x0]\n\
    and         r3,r0\n\
    ldr         r0,DAT_080059b8\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    add         r2,sp,#0x8\n\
    ldr         r0,DAT_080059bc\n\
    add         r1,r0,#0x0\n\
    ldrh        r0,[r2,#0x0]\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    ldrh        r0,[r2,#0x2]\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x2]\n\
    add         r0,r5,#0x0\n\
    add         r1,r3,#0x0\n\
    mov         r3,sp\n\
    bl          fun_080055e4\n\
    ldrh        r4,[r4,#0x0]\n\
    lsl         r0,r4,#0x1\n\
    mov         r2,sp\n\
    add         r1,r2,r0\n\
    ldr         r0,DAT_080059c0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    ldr         r1,DAT_080059c4\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
LAB_0800599e:\n\
    add         sp,#0x18\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080059a8:\n\
    .4byte 0x02007F7C\n\
DAT_080059ac:\n\
    .4byte 0x02000378\n\
DAT_080059b0:\n\
    .4byte 0x02000380\n\
DAT_080059b4:\n\
    .4byte 0x0200037C\n\
DAT_080059b8:\n\
    .4byte 0x02000384\n\
DAT_080059bc:\n\
    .4byte 0x0000FFFF\n\
DAT_080059c0:\n\
    .4byte 0x000003FF\n\
DAT_080059c4:\n\
    .4byte 0x02007FB8\n\
    ");
}
__attribute__((naked)) void fun_080059c8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r2,#0x0\n\
    add         r5,r3,#0x0\n\
    ldr         r6,[sp,#0x14]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r2,DAT_08005a20\n\
    mov         r12,r2\n\
    lsl         r3,r0,#0x6\n\
    add         r2,r3,r2\n\
    strh        r1,[r2,#0x28]\n\
    mov         r1,r12\n\
    add         r1,#0x2c\n\
    add         r1,r3,r1\n\
    str         r4,[r1,#0x0]\n\
    mov         r1,r12\n\
    add         r1,#0x30\n\
    add         r1,r3,r1\n\
    str         r5,[r1,#0x0]\n\
    mov         r1,r12\n\
    add         r1,#0x34\n\
    add         r1,r3,r1\n\
    str         r6,[r1,#0x0]\n\
    mov         r1,r12\n\
    add         r1,#0x38\n\
    add         r3,r3,r1\n\
    ldr         r7,[sp,#0x18]\n\
    str         r7,[r3,#0x0]\n\
    ldr         r1,DAT_08005a24\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r0,r1\n\
    bne         LAB_08005a18\n\
    ldr         r0,DAT_08005a28\n\
    str         r4,[r0,#0x0]\n\
    ldr         r0,DAT_08005a2c\n\
    str         r5,[r0,#0x0]\n\
    ldr         r0,DAT_08005a30\n\
    str         r6,[r0,#0x0]\n\
    ldr         r0,DAT_08005a34\n\
    str         r7,[r0,#0x0]\n\
LAB_08005a18:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005a20:\n\
    .4byte 0x02000278\n\
DAT_08005a24:\n\
    .4byte 0x02007F7C\n\
DAT_08005a28:\n\
    .4byte 0x02000378\n\
DAT_08005a2c:\n\
    .4byte 0x0200037C\n\
DAT_08005a30:\n\
    .4byte 0x02000380\n\
DAT_08005a34:\n\
    .4byte 0x02000384\n\
    ");
}
__attribute__((naked)) void fun_08005a38()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    cmp         r0,#0x1\n\
    beq         LAB_08005a64\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08005a50\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005a5a\n\
    b           LAB_08005a76\n\
LAB_08005a50:\n\
    cmp         r2,#0x2\n\
    beq         LAB_08005a6c\n\
    cmp         r2,#0x3\n\
    beq         LAB_08005a74\n\
    b           LAB_08005a76\n\
LAB_08005a5a:\n\
    ldr         r3,DAT_08005a60\n\
    b           LAB_08005a76\n\
\n\
.space 2\n\
\n\
DAT_08005a60:\n\
    .4byte 0x04000008\n\
LAB_08005a64:\n\
    ldr         r3,DAT_08005a68\n\
    b           LAB_08005a76\n\
DAT_08005a68:\n\
    .4byte 0x0400000A\n\
LAB_08005a6c:\n\
    ldr         r3,DAT_08005a70\n\
    b           LAB_08005a76\n\
DAT_08005a70:\n\
    .4byte 0x0400000C\n\
LAB_08005a74:\n\
    ldr         r3,LAB_08005a84\n\
LAB_08005a76:\n\
    ldr         r0,LAB_08005a88\n\
    ldrh        r2,[r3,#0x0]\n\
    and         r0,r2\n\
    orr         r0,r1\n\
    strh        r0,[r3,#0x0]\n\
    bx          lr\n\
.space 2\n\
LAB_08005a84:\n\
    .4byte 0x0400000e\n\
LAB_08005a88:\n\
    .4byte 0x0000fffc\n\
    ");
}
__attribute__((naked)) void fun_08005a8c()
{
    asm("\n\
    lsl        r0,r0,#0x10\n\
    lsr        r0,r0,#0xa\n\
    ldr        r3,DAT_08005aa0\n\
    add        r0,r0,r3\n\
    ldr        r3,[r0,#0x10]\n\
    str        r3,[r1,#0x0]\n\
    ldr        r0,[r0,#0x14]\n\
    str        r0,[r2,#0x0]\n\
    bx         lr\n\
\n\
.space 2\n\
\n\
DAT_08005aa0:\n\
    .4byte 0x02000278\n\
    ");
}
__attribute__((naked)) void fun_08005aa4()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0xa\n\
    ldr         r3,DAT_08005ac4\n\
    add         r0,r0,r3\n\
    ldr         r3,[r0,#0x10]\n\
    str         r3,[r0,#0x18]\n\
    ldr         r3,[r0,#0x14]\n\
    str         r3,[r0,#0x1c]\n\
    str         r1,[r0,#0x10]\n\
    str         r2,[r0,#0x14]\n\
    bl          fun_08005740\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005ac4:\n\
    .4byte 0x02000278\n\
    ");
}
__attribute__((naked)) void fun_08005ac8()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r2,r0,#0x0\n\
    add         r3,r1,#0x0\n\
    ldr         r0,DAT_08005b0c\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r1,r0,#0x6\n\
    ldr         r0,DAT_08005b10\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x10]\n\
    str         r0,[r1,#0x18]\n\
    ldr         r0,[r1,#0x14]\n\
    str         r0,[r1,#0x1c]\n\
    cmp         r2,#0x0\n\
    blt         LAB_08005af0\n\
    add         r0,r2,#0x0\n\
    add         r0,#0xf0\n\
    ldrh        r4,[r1,#0xc]\n\
    cmp         r0,r4\n\
    bgt         LAB_08005af0\n\
    str         r2,[r1,#0x10]\n\
LAB_08005af0:\n\
    cmp         r3,#0x0\n\
    blt         LAB_08005b00\n\
    add         r0,r3,#0x0\n\
    add         r0,#0xa0\n\
    ldrh        r2,[r1,#0xe]\n\
    cmp         r0,r2\n\
    bgt         LAB_08005b00\n\
    str         r3,[r1,#0x14]\n\
LAB_08005b00:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08005740\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005b0c:\n\
    .4byte 0x02007F78\n\
DAT_08005b10:\n\
    .4byte 0x02000278\n\
    ");
}
__attribute__((naked)) void fun_08005b14()
{
    asm("\n\
    push        {lr}\n\
    add         r3,r0,#0x0\n\
    ldr         r0,DAT_08005b38\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x6\n\
    ldr         r2,DAT_08005b3c\n\
    add         r0,r0,r2\n\
    ldr         r2,[r0,#0x10]\n\
    str         r2,[r0,#0x18]\n\
    ldr         r2,[r0,#0x14]\n\
    str         r2,[r0,#0x1c]\n\
    str         r3,[r0,#0x10]\n\
    str         r1,[r0,#0x14]\n\
    bl          fun_08005740\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005b38:\n\
    .4byte 0x02007F78\n\
DAT_08005b3c:\n\
    .4byte 0x02000278\n\
    ");
}
__attribute__((naked)) void fun_08005b40()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    cmp         r0,#0x1\n\
    beq         LAB_08005b6c\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08005b58\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005b62\n\
    b           LAB_08005b7e\n\
LAB_08005b58:\n\
    cmp         r2,#0x2\n\
    beq         LAB_08005b74\n\
    cmp         r2,#0x3\n\
    beq         LAB_08005b7c\n\
    b           LAB_08005b7e\n\
LAB_08005b62:\n\
    ldr         r3,DAT_08005b68\n\
    b           LAB_08005b7e\n\
\n\
.space 2\n\
\n\
DAT_08005b68:\n\
    .4byte 0x04000008\n\
LAB_08005b6c:\n\
    ldr         r3,DAT_08005b70\n\
    b           LAB_08005b7e\n\
DAT_08005b70:\n\
    .4byte 0x0400000A\n\
LAB_08005b74:\n\
    ldr         r3,DAT_08005b78\n\
    b           LAB_08005b7e\n\
DAT_08005b78:\n\
    .4byte 0x0400000C\n\
LAB_08005b7c:\n\
    ldr         r3,DAT_08005b8c\n\
LAB_08005b7e:\n\
    ldr         r0,DAT_08005b90\n\
    ldrh        r2,[r3,#0x0]\n\
    and         r0,r2\n\
    lsl         r1,r1,#0x2\n\
    orr         r0,r1\n\
    strh        r0,[r3,#0x0]\n\
    bx          lr\n\
DAT_08005b8c:\n\
    .4byte 0x0400000E\n\
DAT_08005b90:\n\
    .4byte 0x0000FFF3\n\
\n\
    ");
}
