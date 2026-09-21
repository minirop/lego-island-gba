__attribute__((naked)) void fun_080029c8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x4\n\
    ldr         r7,DAT_08002a44\n\
    ldrh        r0,[r7,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080029dc\n\
    ldr         r0,DAT_08002a48\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08002a3c\n\
LAB_080029dc:\n\
    ldr         r4,DAT_08002a4c\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r4,r1]\n\
    cmp         r0,#0x0\n\
    bge         LAB_080029e8\n\
    add         r0,#0xff\n\
LAB_080029e8:\n\
    lsl         r0,r0,#0x8\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0xf\n\
    bls         LAB_080029f2\n\
    mov         r2,#0xf\n\
LAB_080029f2:\n\
    mov         r1,sp\n\
    mov         r0,#0xff\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08002a50\n\
    mov         r3,#0x1\n\
    add         r0,r3,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002a10\n\
    mov         r1,sp\n\
    mov         r0,sp\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,#0x40\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002a10:\n\
    ldr         r6,DAT_08002a54\n\
    mov         r0,sp\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r6,#0x0]\n\
    ldr         r5,DAT_08002a58\n\
    strh        r2,[r5,#0x0]\n\
    ldr         r0,DAT_08002a5c\n\
    ldrh        r1,[r4,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,r1,r0\n\
    strh        r0,[r4,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    mov         r1,#0xb8\n\
    lsl         r1,r1,#0x15\n\
    cmp         r0,r1\n\
    bls         LAB_08002a3c\n\
    strh        r3,[r7,#0x0]\n\
    ldr         r0,DAT_08002a48\n\
    strh        r3,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r6,#0x0]\n\
    strh        r0,[r5,#0x0]\n\
LAB_08002a3c:\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002a44:\n\
    .word 0x0200583C\n\
DAT_08002a48:\n\
    .word 0x02005CD0\n\
DAT_08002a4c:\n\
    .word 0x02005CDC\n\
DAT_08002a50:\n\
    .word 0x02005838\n\
DAT_08002a54:\n\
    .word 0x04000050\n\
DAT_08002a58:\n\
    .word 0x04000054\n\
DAT_08002a5c:\n\
    .word 0x02005840\n\
    ");
}
__attribute__((naked)) void fun_08002a60()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    ldr         r0,DAT_08002ab4\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002aac\n\
    mov         r4,#0x0\n\
    ldr         r5,DAT_08002ab8\n\
    add         r6,r5,#0x4\n\
LAB_08002a70:\n\
    lsl         r0,r4,#0x1\n\
    add         r0,r0,r4\n\
    lsl         r2,r0,#0x2\n\
    add         r3,r2,r5\n\
    ldrh        r0,[r3,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002aa2\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r2,r0\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r7,DAT_08002abc\n\
    add         r1,r1,r7\n\
    str         r1,[r0,#0x0]\n\
    add         r0,r2,r6\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r1,r0\n\
    blt         LAB_08002aa2\n\
    mov         r0,#0x0\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r1,DAT_08002ab4\n\
    ldrh        r0,[r3,#0x2]\n\
    ldr         r1,[r1,#0x0]\n\
    bl          _call_via_r1\n\
LAB_08002aa2:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x7\n\
    bls         LAB_08002a70\n\
LAB_08002aac:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002ab4:\n\
    .word 0x02005834\n\
DAT_08002ab8:\n\
    .word 0x02005780\n\
DAT_08002abc:\n\
    .word 0x00000444\n\
    ");
}
__attribute__((naked)) void fun_08002ac0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r6,r1,#0x0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     ldr        r0,DAT_08002b28\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08002b20\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_08002b2c\n\
     ldrh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_08002b30\n\
     cmp        r0,#0x0\n\
     beq        LAB_08002af4\n\
LAB_08002adc:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x7\n\
     bhi        LAB_08002af4\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08002adc\n\
LAB_08002af4:\n\
     mov        r0,#0x0\n\
     cmp        r4,#0x7\n\
     bhi        LAB_08002afc\n\
     mov        r0,#0x1\n\
LAB_08002afc:\n\
     bl         fun_080032b4\n\
     ldr        r2,DAT_08002b2c\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r4\n\
     lsl        r1,r1,#0x2\n\
     add        r4,r1,r2\n\
     mov        r3,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r1,r0\n\
     str        r3,[r0,#0x0]\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     str        r6,[r1,#0x0]\n\
     strh       r5,[r4,#0x2]\n\
LAB_08002b20:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08002b28:\n\
     .word 0x02005834\n\
DAT_08002b2c:\n\
     .word 0x02005780\n\
DAT_08002b30:\n\
     .word 0x08049C34\n\
    ");
}
__attribute__((naked)) void fun_08002b34()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_08002b74\n\
    ldr         r5,DAT_08002b78\n\
    ldr         r7,DAT_08002b7c\n\
    ldr         r4,DAT_08002b80\n\
    ldr         r3,DAT_08002b84\n\
LAB_08002b42:\n\
    lsl         r0,r2,#0x2\n\
    add         r1,r0,r4\n\
    add         r0,r0,r3\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0xd\n\
    bls         LAB_08002b42\n\
    ldr         r0,DAT_08002b88\n\
    str         r6,[r0,#0x0]\n\
    str         r5,[r0,#0x4]\n\
    ldr         r1,DAT_08002b8c\n\
    str         r1,[r0,#0x8]\n\
    ldr         r0,[r0,#0x8]\n\
    ldr         r0,DAT_08002b90\n\
    str         r5,[r0,#0x0]\n\
    add         r0,r7,#0x0\n\
    bl          fun_08002bb4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002b74:\n\
    .word 0x08000134\n\
DAT_08002b78:\n\
    .word 0x02005850\n\
DAT_08002b7c:\n\
    .word 0x0800329D\n\
DAT_08002b80:\n\
    .word 0x020057F0\n\
DAT_08002b84:\n\
    .word 0x080497EC\n\
DAT_08002b88:\n\
    .word 0x040000D4\n\
DAT_08002b8c:\n\
    .word 0x80000240\n\
DAT_08002b90:\n\
    .word 0x03007FFC\n\
    ");
}
__attribute__((naked)) void fun_08002b94()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_08002ba0\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08002ba0()
{
    asm("\n\
    ldr         r2,DAT_08002bac\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_08002bb0\n\
    and         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    bx          lr\n\
DAT_08002bac:\n\
    .word 0x02005CD8\n\
DAT_08002bb0:\n\
    .word 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08002bb4()
{
    asm("\n\
    ldr         r1,DAT_08002bc4\n\
    str         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08002bc0\n\
    ldr         r0,DAT_08002bc8\n\
    str         r0,[r1,#0x0]\n\
LAB_08002bc0:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08002bc4:\n\
    .word 0x020057E4\n\
DAT_08002bc8:\n\
    .word 0x0800329D\n\
    ");
}
__attribute__((naked)) void fun_08002bcc()
{
    asm("\n\
    ldr         r0,DAT_08002be8\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08002bec\n\
    and         r1,r2\n\
    strh        r1,[r0,#0x0]\n\
    add         r2,r0,#0x0\n\
    mov         r3,#0x1\n\
LAB_08002bda:\n\
    svc         0x2\n\
    ldrh        r1,[r2,#0x0]\n\
    add         r0,r3,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002bda\n\
    bx          lr\n\
DAT_08002be8:\n\
    .word 0x02005CD8\n\
DAT_08002bec:\n\
    .word 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08002bf0()
{
    asm("\n\
    ldr        r0,PTR_IF_08002bfc
    mov        r1,#0x1
    strh       r1,[r0,#0x0]
    ldr        r0,PTR_DAT_08002c00
    strh       r1,[r0,#0x0]
    bx         lr
PTR_IF_08002bfc:
    .word      IF
PTR_DAT_08002c00:
    .word      DAT_02005cd8\n\
    ");
}
