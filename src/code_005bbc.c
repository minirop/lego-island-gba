__attribute__((naked)) void fun_08005bbc()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r5,r2,#0x10\n\
    lsl         r3,r3,#0x10\n\
    lsr         r2,r3,#0x10\n\
    mov         r3,#0x0\n\
    cmp         r4,#0x1f\n\
    bls         LAB_08005be0\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x3\n\
    add         r0,r4,#0x0\n\
    sub         r0,#0x20\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
LAB_08005be0:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r4\n\
    add         r3,r3,r0\n\
    lsl         r3,r3,#0x1\n\
    ldr         r1,DAT_08005bfc\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r3\n\
    strh        r5,[r0,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005bfc:\n\
    .4byte 0x02007FA0\n\
    ");
}
__attribute__((naked)) void fun_08005c00()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r0,#0x0\n\
    add         r4,r2,#0x0\n\
    mov         r2,#0x0\n\
    cmp         r3,#0x1f\n\
    bls         LAB_08005c12\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x3\n\
    sub         r3,#0x20\n\
LAB_08005c12:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r3\n\
    add         r2,r2,r0\n\
    lsl         r2,r2,#0x1\n\
    ldr         r3,DAT_08005c74\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x20\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c30\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c30:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x40\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c44\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x4]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x2]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c44:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c58\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x8]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x4]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c58:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c6e\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0xc]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x6]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c6e:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005c74:\n\
    .4byte 0x02007FB4\n\
DAT_08005c78:\n\
    .4byte 0x02007FA0\n\
    ");
}
__attribute__((naked)) void fun_08005c7c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r2,#0x0\n\
    ldr         r2,DAT_08005cd4\n\
    ldrh        r2,[r2,#0x0]\n\
    mul         r1,r2\n\
    lsl         r0,r0,#0x1\n\
    add         r2,r1,r0\n\
    ldr         r4,DAT_08005cd8\n\
    ldr         r1,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005c9c\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x0]\n\
LAB_08005c9c:\n\
    ldr         r1,[r4,#0x4]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005cac\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x2]\n\
LAB_08005cac:\n\
    ldr         r1,[r4,#0x8]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005cbc\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x4]\n\
LAB_08005cbc:\n\
    ldr         r1,[r4,#0xc]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005ccc\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x6]\n\
LAB_08005ccc:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005cd4:\n\
    .4byte 0x02009040\n\
DAT_08005cd8:\n\
    .4byte 0x02007F80\n\
DAT_08005cdc:\n\
    .4byte 0x0000F3FF\n\
    ");
}
__attribute__((naked)) void fun_08005ce0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    add         r6,r4,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r3,r1,#0x10\n\
    add         r5,r3,#0x0\n\
    ldr         r2,DAT_08005d3c\n\
    ldr         r0,[r2,#0x0]\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005d02\n\
    ldr         r0,DAT_08005d40\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d02:\n\
    ldr         r2,[r2,#0x0]\n\
    mov         r0,#0x2\n\
    and         r0,r2\n\
    add         r1,r2,#0x0\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005d16\n\
    ldr         r0,DAT_08005d44\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d16:\n\
    mov         r0,#0x4\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005d26\n\
    ldr         r0,DAT_08005d48\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d26:\n\
    mov         r0,#0x8\n\
    and         r2,r0\n\
    cmp         r2,#0x0\n\
    beq         LAB_08005d36\n\
    ldr         r0,DAT_08005d4c\n\
    strh        r6,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r5,[r0,#0x0]\n\
LAB_08005d36:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005d3c:\n\
    .4byte 0x02007FB4\n\
DAT_08005d40:\n\
    .4byte 0x04000010\n\
DAT_08005d44:\n\
    .4byte 0x04000014\n\
DAT_08005d48:\n\
    .4byte 0x04000018\n\
DAT_08005d4c:\n\
    .4byte 0x0400001C\n\
    ");
}
__attribute__((naked)) void fun_08005d50()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r10\n\
    mov         r5,r9\n\
    mov         r4,r8\n\
    push        {r4,r5,r6}\n\
    sub         sp,#0x8\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08005de4\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    mov         r10,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08005de8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r6,#0xa0\n\
    lsl         r6,r6,#0x13\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005dec\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x13\n\
    mov         r9,r2\n\
    ldr         r0,DAT_08005df0\n\
    mov         r8,r0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_08005df4\n\
    strb        r1,[r0,#0x0]\n\
    mov         r5,#0x0\n\
    bl          fun_08002bcc\n\
    add         r0,sp,#0x4\n\
    strh        r5,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005df8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r0,DAT_08005dfc\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,r10\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r2,r8\n\
    mov         r1,r9\n\
    strh        r2,[r1,#0x0]\n\
    ldr         r0,DAT_08005e00\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005e04\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r1,DAT_08005e08\n\
    mov         r0,#0xb4\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08005de4:\n\
    .4byte 0x040000D4\n\
DAT_08005de8:\n\
    .4byte 0x8100C000\n\
DAT_08005dec:\n\
    .4byte 0x81000200\n\
DAT_08005df0:\n\
    .4byte 0x00001F04\n\
DAT_08005df4:\n\
    .4byte 0x02009AD4\n\
DAT_08005df8:\n\
    .4byte 0x81000100\n\
DAT_08005dfc:\n\
    .4byte 0x08756D44\n\
DAT_08005e00:\n\
    .4byte 0x08756D50\n\
DAT_08005e04:\n\
    .4byte 0x80000100\n\
DAT_08005e08:\n\
    .4byte 0x02009AD0\n\
    ");
}
__attribute__((naked)) void fun_08005e0c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x4\n\
    ldr         r1,DAT_08005e5c\n\
    ldrh        r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005e44\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08005e3c\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08005e3c\n\
    bl          fun_0800132c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005ee8\n\
LAB_08005e3c:\n\
    ldr         r0,DAT_08005e60\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005ee8\n\
LAB_08005e44:\n\
    ldr         r1,DAT_08005e60\n\
    ldrb        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    cmp         r4,#0x2\n\
    bls         LAB_08005e64\n\
    bl          fun_080010d8\n\
    b           LAB_08005ee8\n\
\n\
.space 2\n\
\n\
DAT_08005e5c:\n\
    .4byte 0x02009AD0\n\
DAT_08005e60:\n\
    .4byte 0x02009AD4\n\
LAB_08005e64:\n\
    bl          fun_08002bcc\n\
    mov         r1,sp\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r5,DAT_08005ea0\n\
    str         r1,[r5,#0x0]\n\
    mov         r6,#0xa0\n\
    lsl         r6,r6,#0x13\n\
    str         r6,[r5,#0x4]\n\
    ldr         r0,DAT_08005ea4\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x8]\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005eb4\n\
    ldr         r0,DAT_08005ea8\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_08005eac\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_08005eb0\n\
    b           LAB_08005ece\n\
DAT_08005ea0:\n\
    .4byte 0x040000D4\n\
DAT_08005ea4:\n\
    .4byte 0x81000100\n\
DAT_08005ea8:\n\
    .4byte 0x08756D44\n\
DAT_08005eac:\n\
    .4byte 0x0600A000\n\
DAT_08005eb0:\n\
    .4byte 0x00001F14\n\
LAB_08005eb4:\n\
    ldr         r0,DAT_08005ef4\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_08005ef8\n\
LAB_08005ece:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08005efc\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r5,#0x0]\n\
    str         r6,[r5,#0x4]\n\
    ldr         r0,DAT_08005f00\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x8]\n\
    ldr         r1,DAT_08005f04\n\
    mov         r0,#0xb4\n\
    strh        r0,[r1,#0x0]\n\
LAB_08005ee8:\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08005ef4:\n\
    .4byte 0x08756D44\n\
DAT_08005ef8:\n\
    .4byte 0x00001F04\n\
DAT_08005efc:\n\
    .4byte 0x08756D50\n\
DAT_08005f00:\n\
    .4byte 0x80000100\n\
DAT_08005f04:\n\
    .4byte 0x02009AD0\n\
    mov         r0,#0x0\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08005f0c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x4\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    bl          fun_08002bcc\n\
    mov         r1,sp\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r5,DAT_08005f50\n\
    str         r1,[r5,#0x0]\n\
    mov         r6,#0xa0\n\
    lsl         r6,r6,#0x13\n\
    str         r6,[r5,#0x4]\n\
    ldr         r0,DAT_08005f54\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x8]\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005f64\n\
    ldr         r0,DAT_08005f58\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_08005f5c\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_08005f60\n\
    b           LAB_08005f7e\n\
DAT_08005f50:\n\
    .4byte 0x040000D4\n\
DAT_08005f54:\n\
    .4byte 0x81000100\n\
DAT_08005f58:\n\
    .4byte 0x08756D44\n\
DAT_08005f5c:\n\
    .4byte 0x0600A000\n\
DAT_08005f60:\n\
    .4byte 0x00001F14\n\
LAB_08005f64:\n\
    ldr         r0,DAT_08005f9c\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_08005fa0\n\
LAB_08005f7e:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08005fa4\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r5,#0x0]\n\
    str         r6,[r5,#0x4]\n\
    ldr         r0,DAT_08005fa8\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x8]\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005f9c:\n\
    .4byte 0x08756D44\n\
DAT_08005fa0:\n\
    .4byte 0x00001F04\n\
DAT_08005fa4:\n\
    .4byte 0x08756D50\n\
DAT_08005fa8:\n\
    .4byte 0x80000100\n\
    ");
}
__attribute__((naked)) void fun_08005fac()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r10\n\
    mov         r5,r9\n\
    mov         r4,r8\n\
    push        {r4,r5,r6}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08006050\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    mov         r10,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08006054\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,#0xa0\n\
    lsl         r1,r1,#0x13\n\
    mov         r8,r1\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,DAT_08006058\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x13\n\
    ldr         r0,DAT_0800605c\n\
    mov         r9,r0\n\
    strh        r0,[r5,#0x0]\n\
    ldr         r6,DAT_08006060\n\
    ldr         r1,DAT_08006064\n\
    add         r0,r6,#0x0\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r0,DAT_08006068\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,r8\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,DAT_0800606c\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r1,DAT_08006070\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    add         r0,r6,#0x0\n\
    mov         r1,r10\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r0,r9\n\
    strh        r0,[r5,#0x0]\n\
    bl          fun_08006180\n\
    ldr         r1,DAT_08006074\n\
    mov         r0,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_0803c1ec\n\
    ldr         r1,DAT_08006078\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_08002188\n\
    ldr         r1,DAT_0800607c\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08006050:\n\
    .4byte 0x040000D4\n\
DAT_08006054:\n\
    .4byte 0x8100C000\n\
DAT_08006058:\n\
    .4byte 0x81000200\n\
DAT_0800605c:\n\
    .4byte 0x00001F44\n\
DAT_08006060:\n\
    .4byte 0x08064540\n\
DAT_08006064:\n\
    .4byte 0x0600A000\n\
DAT_08006068:\n\
    .4byte 0x08064340\n\
DAT_0800606c:\n\
    .4byte 0x80000100\n\
DAT_08006070:\n\
    .4byte 0x00001F14\n\
DAT_08006074:\n\
    .4byte 0x00007FFF\n\
DAT_08006078:\n\
    .4byte 0x020025B4\n\
DAT_0800607c:\n\
    .4byte 0x02009AD8\n\
\n\
    ");
}
