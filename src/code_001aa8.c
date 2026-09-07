void fun_08001aa8();
int fun_080456c8(const char*, int*);
void fun_08000584();
void fun_08001b9c();

extern int DAT_02005200;

__attribute__((naked)) void fun_08001aa8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    mov         r6,#0x1\n\
    ldr         r1,DAT_08001b7c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0xe0\n\
    lsl         r0,r0,#0x14\n\
    ldr         r4,DAT_08001b80\n\
    ldr         r1,DAT_08001b84\n\
    mov         r8,r1\n\
    add         r1,r4,#0x0\n\
    mov         r2,r8\n\
    bl          fun_0803d09c\n\
    ldr         r0,DAT_08001b88\n\
    ldr         r7,DAT_08001b8c\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x4\n\
    bl          fun_0803d09c\n\
    ldr         r0,DAT_08001b90\n\
    ldr         r5,DAT_08001b94\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x2\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803d09c\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,DAT_08001b98\n\
    cmp         r1,r0\n\
    beq         LAB_08001aec\n\
    mov         r6,#0x0\n\
LAB_08001aec:\n\
    cmp         r6,#0x0\n\
    beq         LAB_08001b44\n\
    ldr         r0,[r4,#0x4]\n\
    mov         r12,r0\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
    str         r0,[r4,#0x4]\n\
    add         r1,r4,#0x0\n\
    mov         r2,r8\n\
    mov         r3,#0x0\n\
    add         r4,r7,#0x0\n\
LAB_08001b02:\n\
    ldrb        r7,[r1,#0x0]\n\
    add         r3,r7,r3\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,r2\n\
    bcc         LAB_08001b02\n\
    add         r1,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r0,#0x0\n\
LAB_08001b14:\n\
    ldrb        r4,[r1,#0x0]\n\
    add         r2,r4,r2\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,#0x4\n\
    bcc         LAB_08001b14\n\
    add         r3,r3,r2\n\
    add         r1,r5,#0x0\n\
    mov         r4,#0xd8\n\
    lsl         r4,r4,#0x2\n\
    mov         r2,#0x0\n\
    mov         r0,#0x0\n\
LAB_08001b2c:\n\
    ldrb        r5,[r1,#0x0]\n\
    add         r2,r5,r2\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_08001b2c\n\
    add         r3,r3,r2\n\
    cmp         r12,r3\n\
    beq         LAB_08001b40\n\
    mov         r6,#0x0\n\
LAB_08001b40:\n\
    cmp         r6,#0x0\n\
    bne         LAB_08001b68\n\
LAB_08001b44:\n\
    ldr         r0,DAT_08001b80\n\
    ldr         r2,DAT_08001b84\n\
    mov         r1,#0x0\n\
    bl          fun_08044fdc\n\
    ldr         r0,DAT_08001b8c\n\
    mov         r1,#0x0\n\
    mov         r2,#0x4\n\
    bl          fun_08044fdc\n\
    ldr         r0,DAT_08001b94\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x2\n\
    mov         r1,#0x0\n\
    bl          fun_08044fdc\n\
    bl          fun_08000584\n\
LAB_08001b68:\n\
    ldr         r1,DAT_08001b7c\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r6,#0x0\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08001b7c:\n\
    .4byte 0x04000208\n\
DAT_08001b80:\n\
    .4byte 0x02002620\n\
DAT_08001b84:\n\
    .4byte 0x00002BE0\n\
DAT_08001b88:\n\
    .4byte 0x0E002BE0\n\
DAT_08001b8c:\n\
    .4byte 0x02005200\n\
DAT_08001b90:\n\
    .4byte 0x0E002BE4\n\
DAT_08001b94:\n\
    .4byte 0x02005210\n\
DAT_08001b98:\n\
    .4byte 0x48FED829\n\
    ");
}
__attribute__((naked)) void fun_08001b9c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x4\n\
    ldr         r1,DAT_08001c60\n\
    mov         r0,sp\n\
    mov         r2,#0x4\n\
    bl          fun_08044f7c\n\
    ldr         r1,DAT_08001c64\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08001c68\n\
    mov         r1,#0xea\n\
    lsl         r1,r1,#0x4\n\
    add         r3,r0,r1\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x5\n\
    add         r1,r0,r2\n\
    mov         r2,#0x0\n\
    str         r2,[r1,#0x0]\n\
    str         r2,[r3,#0x0]\n\
    str         r2,[r0,#0x0]\n\
    ldr         r4,DAT_08001c6c\n\
    add         r3,r0,r4\n\
    ldr         r6,DAT_08001c70\n\
    add         r1,r0,r6\n\
    str         r2,[r1,#0x0]\n\
    str         r2,[r3,#0x0]\n\
    str         r2,[r0,#0x4]\n\
    ldr         r3,DAT_08001c74\n\
    mov         r1,#0x0\n\
LAB_08001bd8:\n\
    ldrb        r4,[r0,#0x0]\n\
    add         r2,r4,r2\n\
    add         r0,#0x1\n\
    add         r1,#0x1\n\
    cmp         r1,r3\n\
    bcc         LAB_08001bd8\n\
    add         r3,r2,#0x0\n\
    mov         r0,sp\n\
    mov         r2,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r5,DAT_08001c68\n\
    ldr         r4,DAT_08001c78\n\
LAB_08001bf0:\n\
    ldrb        r6,[r0,#0x0]\n\
    add         r2,r6,r2\n\
    add         r0,#0x1\n\
    add         r1,#0x1\n\
    cmp         r1,#0x4\n\
    bcc         LAB_08001bf0\n\
    add         r3,r3,r2\n\
    add         r1,r4,#0x0\n\
    mov         r4,#0xd8\n\
    lsl         r4,r4,#0x2\n\
    mov         r2,#0x0\n\
    mov         r0,#0x0\n\
LAB_08001c08:\n\
    ldrb        r6,[r1,#0x0]\n\
    add         r2,r6,r2\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_08001c08\n\
    add         r3,r3,r2\n\
    str         r3,[r5,#0x4]\n\
    ldr         r0,DAT_08001c7c\n\
    str         r0,[r5,#0x0]\n\
    mov         r4,#0xe0\n\
    lsl         r4,r4,#0x14\n\
    ldr         r2,DAT_08001c74\n\
    add         r0,r5,#0x0\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d100\n\
    ldr         r1,DAT_08001c80\n\
    mov         r0,sp\n\
    mov         r2,#0x4\n\
    bl          fun_0803d100\n\
    ldr         r0,DAT_08001c78\n\
    ldr         r1,DAT_08001c84\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x2\n\
    bl          fun_0803d100\n\
    ldr         r0,DAT_08001c88\n\
    str         r0,[r5,#0x0]\n\
    add         r0,r5,#0x0\n\
    add         r1,r4,#0x0\n\
    mov         r2,#0x4\n\
    bl          fun_0803d100\n\
    ldr         r1,DAT_08001c64\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08001c60:\n\
    .4byte 0x0804978C\n\
DAT_08001c64:\n\
    .4byte 0x04000208\n\
DAT_08001c68:\n\
    .4byte 0x02002620\n\
DAT_08001c6c:\n\
    .4byte 0x00000EA4\n\
DAT_08001c70:\n\
    .4byte 0x00001D44\n\
DAT_08001c74:\n\
    .4byte 0x00002BE0\n\
DAT_08001c78:\n\
    .4byte 0x02005210\n\
DAT_08001c7c:\n\
    .4byte 0xFA988912\n\
DAT_08001c80:\n\
    .4byte 0x0E002BE0\n\
DAT_08001c84:\n\
    .4byte 0x0E002BE4\n\
DAT_08001c88:\n\
    .4byte 0x48FED829\n\
    ");
}
__attribute__((naked)) void fun_08001c8c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    bl          fun_08001aa8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    ldr         r4,DAT_08001cf4\n\
    add         r1,r4,#0x0\n\
    bl          fun_080456c8\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001cd6\n\
    bl          fun_080020a4\n\
    mov         r1,#0x0\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    bl          fun_08044fdc\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    add         r1,r4,#0x0\n\
    ldmia       r1!,{r2,r3,r4}\n\
    stmia       r0!,{r2,r3,r4}\n\
    bl          fun_08001b9c\n\
LAB_08001cd6:\n\
    ldr         r3,DAT_08001cf8\n\
    ldr         r4,DAT_08001cfc\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    ldrb        r1,[r4,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r2\n\
    add         r1,r3,#0x0\n\
    add         r1,#0x14\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001d00\n\
    mov         r0,#0x0\n\
    b           LAB_08001e00\n\
DAT_08001cf4:\n\
    .4byte 0x08049790\n\
DAT_08001cf8:\n\
    .4byte 0x02002620\n\
DAT_08001cfc:\n\
    .4byte 0x02005570\n\
LAB_08001d00:\n\
    mov         r0,#0x0\n\
    mov         r12,r0\n\
    ldr         r1,DAT_08001e10\n\
    mov         r9,r1\n\
    add         r7,r3,#0x0\n\
    add         r6,r4,#0x0\n\
    add         r5,r2,#0x0\n\
    mov         r2,#0x8a\n\
    lsl         r2,r2,#0x3\n\
    add         r2,r2,r7\n\
    mov         r10,r2\n\
LAB_08001d16:\n\
    mov         r3,r12\n\
    lsl         r4,r3,#0x5\n\
    mov         r0,r9\n\
    add         r3,r4,r0\n\
    mov         r0,#0x4\n\
    ldrh        r1,[r3,#0x12]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001da6\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x2\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    add         r1,r7,#0x0\n\
    add         r1,#0x1e\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x4]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    add         r1,r7,#0x0\n\
    add         r1,#0x20\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x6]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r8\n\
    ldr         r1,DAT_08001e14\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r3,#0x18]\n\
    mov         r1,r9\n\
    add         r1,#0x8\n\
    add         r1,r4,r1\n\
    ldrb        r4,[r6,#0x0]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    add         r2,r10\n\
    ldr         r0,[r2,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x1\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    ldr         r4,DAT_08001e18\n\
    add         r1,r7,r4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x12]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_08001e1c\n\
    add         r0,r7,r4\n\
    add         r2,r2,r0\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r3,#0x10]\n\
    mov         r0,r8\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
LAB_08001da6:\n\
    mov         r0,r12\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r12,r0\n\
    cmp         r0,#0xf3\n\
    bls         LAB_08001d16\n\
    mov         r4,#0x0\n\
    ldr         r0,DAT_08001e20\n\
    mov         r10,r0\n\
    ldr         r6,DAT_08001e24\n\
    mov         r5,#0xea\n\
    lsl         r5,r5,#0x4\n\
    ldr         r1,DAT_08001e28\n\
    add         r1,r10\n\
    mov         r9,r1\n\
    mov         r2,#0xa8\n\
    lsl         r2,r2,#0x1\n\
    mov         r8,r2\n\
LAB_08001dcc:\n\
    add         r0,r4,#0x0\n\
    bl          fun_080034c0\n\
    lsl         r3,r4,#0x1\n\
    ldrb        r2,[r6,#0x0]\n\
    add         r1,r2,#0x0\n\
    mul         r1,r5\n\
    add         r1,r3,r1\n\
    ldr         r2,DAT_08001e2c\n\
    add         r2,r10\n\
    add         r1,r1,r2\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x4]\n\
    ldrb        r2,[r6,#0x0]\n\
    add         r1,r2,#0x0\n\
    mul         r1,r5\n\
    add         r3,r3,r1\n\
    add         r3,r9\n\
    ldrh        r1,[r3,#0x0]\n\
    strh        r1,[r0,#0x6]\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,r8\n\
    bls         LAB_08001dcc\n\
    ldr         r0,[sp,#0x0]\n\
LAB_08001e00:\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08001e10:\n\
    .4byte 0x020006A0\n\
DAT_08001e14:\n\
    .4byte 0x020029D4\n\
DAT_08001e18:\n\
    .4byte 0x00000282\n\
DAT_08001e1c:\n\
    .4byte 0x000006B4\n\
DAT_08001e20:\n\
    .4byte 0x02002620\n\
DAT_08001e24:\n\
    .4byte 0x02005570\n\
DAT_08001e28:\n\
    .4byte 0x00000A88\n\
DAT_08001e2c:\n\
    .4byte 0x000007E6\n\
    ");
}
__attribute__((naked)) void fun_08001e30()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08001f78\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x6\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001e58\n\
    mov         r0,#0x0\n\
    bl          fun_08018d48\n\
LAB_08001e58:\n\
    mov         r4,#0x0\n\
    mov         r12,r4\n\
    ldr         r0,DAT_08001f7c\n\
    mov         r9,r0\n\
    ldr         r7,DAT_08001f80\n\
    ldr         r6,DAT_08001f84\n\
    mov         r5,#0xea\n\
    lsl         r5,r5,#0x4\n\
    mov         r1,#0x8a\n\
    lsl         r1,r1,#0x3\n\
    add         r1,r1,r7\n\
    mov         r10,r1\n\
LAB_08001e70:\n\
    mov         r0,r12\n\
    lsl         r4,r0,#0x5\n\
    mov         r1,r9\n\
    add         r3,r4,r1\n\
    mov         r0,#0x4\n\
    ldrh        r1,[r3,#0x12]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f00\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x2\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x1e\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x4]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x20\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x6]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r8\n\
    ldr         r1,DAT_08001f88\n\
    add         r0,r0,r1\n\
    ldrb        r1,[r3,#0x18]\n\
    strb        r1,[r0,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    add         r2,r10\n\
    mov         r0,r9\n\
    add         r0,#0x8\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    mov         r4,r8\n\
    lsl         r2,r4,#0x1\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    ldr         r4,DAT_08001f8c\n\
    add         r0,r7,r4\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x12]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_08001f90\n\
    add         r0,r7,r4\n\
    add         r2,r2,r0\n\
    ldrh        r0,[r3,#0x10]\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,r8\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
LAB_08001f00:\n\
    mov         r0,r12\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r12,r0\n\
    cmp         r0,#0xf3\n\
    bls         LAB_08001e70\n\
    bl          fun_080020a4\n\
    ldr         r6,DAT_08001f78\n\
    add         r0,r0,r6\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x6\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f26\n\
    bl          fun_08001f94\n\
LAB_08001f26:\n\
    ldr         r2,DAT_08001f80\n\
    ldr         r4,DAT_08001f84\n\
    mov         r3,#0xea\n\
    lsl         r3,r3,#0x4\n\
    ldrb        r0,[r4,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r3\n\
    add         r2,#0x14\n\
    add         r1,r1,r2\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldrb        r4,[r4,#0x0]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r3\n\
    add         r1,r0,r2\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f50\n\
    mov         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
LAB_08001f50:\n\
    bl          fun_08001b9c\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    ldr         r0,[r0,#0x0]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001f68\n\
    mov         r0,#0x1\n\
    bl          fun_08018d48\n\
LAB_08001f68:\n\
    mov         r0,#0x1\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08001f78:\n\
    .4byte 0x00000E84\n\
DAT_08001f7c:\n\
    .4byte 0x020006A0\n\
DAT_08001f80:\n\
    .4byte 0x02002620\n\
DAT_08001f84:\n\
    .4byte 0x02005570\n\
DAT_08001f88:\n\
    .4byte 0x020029D4\n\
DAT_08001f8c:\n\
    .4byte 0x00000282\n\
DAT_08001f90:\n\
    .4byte 0x000006B4\n\
    ");
}
__attribute__((naked)) void fun_08001f94()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r5,#0x0\n\
    ldr         r0,DAT_08001ffc\n\
    mov         r8,r0\n\
    ldr         r7,DAT_08002000\n\
    mov         r6,#0xea\n\
    lsl         r6,r6,#0x4\n\
    ldr         r1,DAT_08002004\n\
    add         r1,r8\n\
    mov         r10,r1\n\
    mov         r2,#0xa8\n\
    lsl         r2,r2,#0x1\n\
    mov         r9,r2\n\
LAB_08001fb6:\n\
    add         r0,r5,#0x0\n\
    bl          fun_080034c0\n\
    lsl         r4,r5,#0x1\n\
    ldrb        r1,[r7,#0x0]\n\
    add         r2,r1,#0x0\n\
    mul         r2,r6\n\
    add         r2,r4,r2\n\
    ldr         r1,DAT_08002008\n\
    add         r1,r8\n\
    add         r2,r2,r1\n\
    ldrh        r0,[r0,#0x4]\n\
    strh        r0,[r2,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_080034c0\n\
    ldrb        r2,[r7,#0x0]\n\
    add         r1,r2,#0x0\n\
    mul         r1,r6\n\
    add         r4,r4,r1\n\
    add         r4,r10\n\
    ldrh        r0,[r0,#0x6]\n\
    strh        r0,[r4,#0x0]\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,r9\n\
    bls         LAB_08001fb6\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08001ffc:\n\
    .4byte 0x02002620\n\
DAT_08002000:\n\
    .4byte 0x02005570\n\
DAT_08002004:\n\
    .4byte 0x00000A88\n\
DAT_08002008:\n\
    .4byte 0x000007E6\n\
    ");
}
__attribute__((naked)) void fun_0800200c()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    mov         r1,#0x0\n\
    bl          fun_08044fdc\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    ldr         r1,DAT_08002034\n\
    ldmia       r1!,{r2,r3,r4}\n\
    stmia       r0!,{r2,r3,r4}\n\
    bl          fun_08001b9c\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002034:\n\
    .4byte 0x08049790\n\
    ");
}
__attribute__((naked)) void fun_08002038()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    ldr         r4,DAT_08002070\n\
    add         r1,r4,#0x0\n\
    bl          fun_080456c8\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800206a\n\
    bl          fun_080020a4\n\
    mov         r1,#0x0\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    bl          fun_08044fdc\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    add         r1,r4,#0x0\n\
    ldmia       r1!,{r2,r3,r4}\n\
    stmia       r0!,{r2,r3,r4}\n\
    bl          fun_08001b9c\n\
LAB_0800206a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002070:\n\
    .4byte 0x08049790\n\
    ");
}
__attribute__((naked)) void fun_08002074()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    mov         r4,#0x0\n\
    mov         r1,#0xea\n\
    lsl         r1,r1,#0x4\n\
    mul         r0,r1\n\
    ldr         r1,DAT_0800209c\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_080020a0\n\
    bl          fun_080456c8\n\
    cmp         r0,#0x0\n\
    bne         LAB_08002092\n\
    mov         r4,#0x1\n\
LAB_08002092:\n\
    add         r0,r4,#0x0\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_0800209c:\n\
    .4byte 0x02002628\n\
DAT_080020a0:\n\
    .4byte 0x08049790\n\
    ");
}
__attribute__((naked)) void fun_080020a4()
{
    asm("\n\
    ldr         r1,DAT_080020b4\n\
    mov         r0,#0xea\n\
    lsl         r0,r0,#0x4\n\
    ldrb        r1,[r1,#0x0]\n\
    mul         r0,r1\n\
    ldr         r1,DAT_080020b8\n\
    add         r0,r0,r1\n\
    bx          lr\n\
DAT_080020b4:\n\
    .4byte 0x02005570\n\
DAT_080020b8:\n\
    .4byte 0x02002620\n\
    ");
}
__attribute__((naked)) void fun_080020bc()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x18\n\
    bne         LAB_080020c8\n\
    mov         r2,#0xfb\n\
    lsl         r2,r2,#0x3\n\
LAB_080020c8:\n\
    ldr         r1,DAT_080020d8\n\
    add         r0,r2,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bls         LAB_080020dc\n\
    mov         r0,#0x1\n\
    b           LAB_08002102\n\
DAT_080020d8:\n\
    .4byte 0xFFFFF830\n\
LAB_080020dc:\n\
    ldr         r1,DAT_08002104\n\
    mov         r0,#0xea\n\
    lsl         r0,r0,#0x4\n\
    ldrb        r1,[r1,#0x0]\n\
    mul         r1,r0\n\
    ldr         r0,DAT_08002108\n\
    add         r1,r1,r0\n\
    ldr         r0,DAT_0800210c\n\
    add         r1,r1,r0\n\
    ldr         r0,DAT_08002110\n\
    add         r2,r2,r0\n\
    mov         r0,#0x1\n\
    lsl         r0,r2\n\
    ldr         r1,[r1,#0x0]\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08002100\n\
    mov         r1,#0x1\n\
LAB_08002100:\n\
    add         r0,r1,#0x0\n\
LAB_08002102:\n\
    bx          lr\n\
DAT_08002104:\n\
    .4byte 0x02005570\n\
DAT_08002108:\n\
    .4byte 0x02002620\n\
DAT_0800210c:\n\
    .4byte 0x00000E88\n\
DAT_08002110:\n\
    .4byte 0xFFFFF830\n\
    ");
}
__attribute__((naked)) void fun_08002114()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r3,#0x18\n\
    bne         LAB_08002120\n\
    mov         r3,#0xfb\n\
    lsl         r3,r3,#0x3\n\
LAB_08002120:\n\
    ldr         r1,DAT_08002150\n\
    add         r0,r3,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bhi         LAB_0800214e\n\
    ldr         r1,DAT_08002154\n\
    mov         r0,#0xea\n\
    lsl         r0,r0,#0x4\n\
    ldrb        r1,[r1,#0x0]\n\
    add         r2,r1,#0x0\n\
    mul         r2,r0\n\
    ldr         r0,DAT_08002158\n\
    add         r2,r2,r0\n\
    ldr         r0,DAT_0800215c\n\
    add         r2,r2,r0\n\
    ldr         r1,DAT_08002150\n\
    add         r0,r3,r1\n\
    mov         r1,#0x1\n\
    lsl         r1,r0\n\
    ldr         r0,[r2,#0x0]\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x0]\n\
LAB_0800214e:\n\
    bx          lr\n\
DAT_08002150:\n\
    .4byte 0xFFFFF830\n\
DAT_08002154:\n\
    .4byte 0x02005570\n\
DAT_08002158:\n\
    .4byte 0x02002620\n\
DAT_0800215c:\n\
    .4byte 0x00000E88\n\
    ");
}

void fun_08002160()
{
    int iVar1;

    fun_08001aa8();
    iVar1 = fun_080456c8("SWD", &DAT_02005200);
    if (iVar1 != 0) {
        fun_08000584();
        fun_08001b9c();
    }
}

__attribute__((naked)) void fun_08002188()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_08001aa8\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002198\n\
    mov         r0,#0x1\n\
    b           LAB_0800219a\n\
LAB_08002198:\n\
    mov         r0,#0x0\n\
LAB_0800219a:\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
    ");
}
