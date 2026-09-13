__attribute__((naked)) void fun_08007de0()
{
    asm("\n\
    ldr         r2,PTR_DAT_08007df8\n\
    ldr         r0,PTR_DAT_08007dfc\n\
    str         r0,[r2,#0x0]\n\
    ldr         r1,PTR_DAT_08007e00\n\
    str         r1,[r2,#0x4]\n\
    ldr         r0,PTR_DAT_08007e04\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x4]\n\
    str         r0,[r1,#0x8]\n\
    mov         r0,#0x1\n\
    bx          lr\n\
PTR_DAT_08007df8:\n\
    .4byte DAT_0200c5d0\n\
PTR_DAT_08007dfc:\n\
    .4byte DAT_080c5f80\n\
PTR_DAT_08007e00:\n\
    .4byte DAT_0200c5e0\n\
PTR_DAT_08007e04:\n\
    .4byte DAT_080c5f1c\n\
    ");
}
__attribute__((naked)) void fun_08007e08()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r1,#0xff\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08007eb0\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08007eb4\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r5,#0xa0\n\
    lsl         r5,r5,#0x13\n\
    str         r5,[r4,#0x4]\n\
    ldr         r0,DAT_08007eb8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_08007ebc\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0xc\n\
    mov         r0,#0x3\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_0803c24c\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    ldr         r1,PTR_PTR_08007ec0\n\
    ldr         r6,PTR_DAT_08007ec4\n\
    ldrb        r2,[r6,#0x0]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_0800306c\n\
    ldr         r1,PTR_PTR_08007ec8\n\
    ldrb        r2,[r6,#0x0]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    str         r5,[r4,#0x4]\n\
    ldr         r0,DAT_08007ecc\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r1,PTR_DAT_08007ed0\n\
    mov         r0,#0xb4\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r4,PTR_DAT_08007ed4\n\
    ldrb        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007e9e\n\
    ldrb        r6,[r6,#0x0]\n\
    cmp         r6,#0x9\n\
    bne         LAB_08007e9e\n\
    ldr         r2,DAT_08007ed8\n\
    add         r0,r2,#0x0\n\
    mov         r1,#0xf\n\
    bl          fun_0803c1ec\n\
    bl          fun_0803c1a4\n\
    ldr         r2,PTR_DAT_08007edc\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x85\n\
    bl          fun_0803c010\n\
LAB_08007e9e:\n\
    ldr         r0,PTR_DAT_08007ec4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08007ee0\n\
    mov         r0,#0x19\n\
    bl          fun_080016f0\n\
    b           LAB_08007eee\n\
\n\
.space 2\n\
\n\
DAT_08007eb0:\n\
    .4byte 0x040000D4\n\
DAT_08007eb4:\n\
    .4byte 0x8100C000\n\
DAT_08007eb8:\n\
    .4byte 0x81000200\n\
DAT_08007ebc:\n\
    .4byte 0x00001F54\n\
PTR_PTR_08007ec0:\n\
    .4byte PTR_DAT_0877bb2c\n\
PTR_DAT_08007ec4:\n\
    .4byte DAT_0200254c\n\
PTR_PTR_08007ec8:\n\
    .4byte PTR_DAT_0877bb68\n\
DAT_08007ecc:\n\
    .4byte 0x80000100\n\
PTR_DAT_08007ed0:\n\
    .4byte DAT_02009ad0\n\
PTR_DAT_08007ed4:\n\
    .4byte DAT_0200c5f0\n\
DAT_08007ed8:\n\
    .4byte 0x00007FFF\n\
PTR_DAT_08007edc:\n\
    .4byte DAT_0865fd94\n\
LAB_08007ee0:\n\
    cmp         r0,#0x7\n\
    beq         LAB_08007ee8\n\
    cmp         r0,#0xb\n\
    bne         LAB_08007eee\n\
LAB_08007ee8:\n\
    mov         r0,#0x6\n\
    bl          fun_080016f0\n\
LAB_08007eee:\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08007ef8()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08007f18\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007f40\n\
    ldr         r0,DAT_08007f1c\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0xc\n\
    beq         LAB_08007f36\n\
    cmp         r0,#0xc\n\
    bgt         LAB_08007f20\n\
    cmp         r0,#0xb\n\
    beq         LAB_08007f26\n\
    b           LAB_08007f3c\n\
DAT_08007f18:\n\
    .4byte 0x02005CE0\n\
DAT_08007f1c:\n\
    .4byte 0x0200254C\n\
LAB_08007f20:\n\
    cmp         r0,#0xd\n\
    beq         LAB_08007f2e\n\
    b           LAB_08007f3c\n\
LAB_08007f26:\n\
    mov         r0,#0x24\n\
    bl          fun_08001070\n\
    b           LAB_08007f40\n\
LAB_08007f2e:\n\
    mov         r0,#0x8\n\
    bl          fun_08001070\n\
    b           LAB_08007f40\n\
LAB_08007f36:\n\
    bl          fun_08017d50\n\
    b           LAB_08007f40\n\
LAB_08007f3c:\n\
    bl          fun_080010d8\n\
LAB_08007f40:\n\
    ldr         r2,DAT_08007f6c\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0xe\n\
    bgt         LAB_08007f4c\n\
    cmp         r0,#0xb\n\
    bge         LAB_08007f94\n\
LAB_08007f4c:\n\
    ldr         r1,DAT_08007f70\n\
    ldrh        r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08007f94\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0xc\n\
    beq         LAB_08007f8a\n\
    cmp         r0,#0xc\n\
    bgt         LAB_08007f74\n\
    cmp         r0,#0xb\n\
    beq         LAB_08007f7a\n\
    b           LAB_08007f90\n\
\n\
.space 2\n\
\n\
DAT_08007f6c:\n\
    .4byte 0x0200254C\n\
DAT_08007f70:\n\
    .4byte 0x02009AD0\n\
LAB_08007f74:\n\
    cmp         r0,#0xd\n\
    beq         LAB_08007f82\n\
    b           LAB_08007f90\n\
LAB_08007f7a:\n\
    mov         r0,#0x24\n\
    bl          fun_08001070\n\
    b           LAB_08007f94\n\
LAB_08007f82:\n\
    mov         r0,#0x8\n\
    bl          fun_08001070\n\
    b           LAB_08007f94\n\
LAB_08007f8a:\n\
    bl          fun_08017d50\n\
    b           LAB_08007f94\n\
LAB_08007f90:\n\
    bl          fun_080010d8\n\
LAB_08007f94:\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08007f9c()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0800457c\n\
    ldr         r1,DAT_08007fac\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08007fac:\n\
    .4byte 0x0200C5F0\n\
    ");
}
__attribute__((naked)) void fun_08007fb0()
{
    asm("\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08007fb4()
{
    asm("\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08007fb8()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08007fcc\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0xc\n\
    beq         LAB_08007fe6\n\
    cmp         r0,#0xc\n\
    bgt         LAB_08007fd0\n\
    cmp         r0,#0xb\n\
    beq         LAB_08007fd6\n\
    b           LAB_08007fec\n\
DAT_08007fcc:\n\
    .4byte 0x0200254C\n\
LAB_08007fd0:\n\
    cmp         r0,#0xd\n\
    beq         LAB_08007fde\n\
    b           LAB_08007fec\n\
LAB_08007fd6:\n\
    mov         r0,#0x24\n\
    bl          fun_08001070\n\
    b           LAB_08007ff0\n\
LAB_08007fde:\n\
    mov         r0,#0x8\n\
    bl          fun_08001070\n\
    b           LAB_08007ff0\n\
LAB_08007fe6:\n\
    bl          fun_08017d50\n\
    b           LAB_08007ff0\n\
LAB_08007fec:\n\
    bl          fun_080010d8\n\
LAB_08007ff0:\n\
    pop         {r0}\n\
    bx          r0\n\
    ldr         r2,DAT_0800800c\n\
    ldr         r0,DAT_08008010\n\
    str         r0,[r2,#0x0]\n\
    ldr         r1,DAT_08008014\n\
    str         r1,[r2,#0x4]\n\
    ldr         r0,DAT_08008018\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x4]\n\
    str         r0,[r1,#0x8]\n\
    mov         r0,#0x1\n\
    bx          lr\n\
DAT_0800800c:\n\
    .4byte 0x0200C630\n\
DAT_08008010:\n\
    .4byte 0x08107C9C\n\
DAT_08008014:\n\
    .4byte 0x0200C620\n\
DAT_08008018:\n\
    .4byte 0x08107C38\n\
    ");
}
__attribute__((naked)) void fun_08007ff4()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_0800801c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r2,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08008140\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08008144\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r0,sp\n\
    strh        r2,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08008148\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_0800814c\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0xc\n\
    mov         r0,#0x3\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    ldr         r0,DAT_08008150\n\
    bl          fun_080045f0\n\
    mov         r0,#0x1\n\
    bl          fun_08004670\n\
    mov         r3,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r0,PTR_DAT_08008154\n\
LAB_0800806e:\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    add         r3,#0x1\n\
    cmp         r3,#0x9\n\
    bls         LAB_0800806e\n\
    ldr         r0,PTR_DAT_08008158\n\
    mov         r4,#0x0\n\
    str         r4,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_08008630\n\
    ldr         r0,PTR_DAT_0800815c\n\
    str         r4,[r0,#0x0]\n\
    mov         r3,#0x0\n\
    ldr         r6,PTR_DAT_08008160\n\
    ldr         r0,PTR_DAT_08008164\n\
    mov         r12,r0\n\
    ldr         r5,PTR_DAT_08008168\n\
LAB_08008092:\n\
    mov         r2,r12\n\
    add         r2,#0x4\n\
    mov         r12,r2\n\
    sub         r2,#0x4\n\
    stmia       r2!,{r4}\n\
    lsl         r2,r3,#0x1\n\
    strh        r4,[r6,#0x0]\n\
    strh        r4,[r5,#0x0]\n\
    ldr         r0,PTR_DAT_0800816c\n\
    add         r0,r2,r0\n\
    mov         r7,#0x88\n\
    lsl         r7,r7,#0x1\n\
    strh        r7,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_08008170\n\
    add         r0,r2,r0\n\
    mov         r1,#0x2b\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_08008174\n\
    add         r0,r2,r0\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_08008178\n\
    add         r2,r2,r0\n\
    strh        r4,[r2,#0x0]\n\
    add         r6,#0x2\n\
    add         r5,#0x2\n\
    add         r3,#0x1\n\
    cmp         r3,#0x9\n\
    bls         LAB_08008092\n\
    ldr         r0,PTR_DAT_0800817c\n\
    ldr         r3,DAT_08008180\n\
    str         r3,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_08008184\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,PTR_DAT_08008188\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_0800818c\n\
    mov         r1,#0x0\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_08008190\n\
    str         r1,[r0,#0x0]\n\
    ldr         r2,PTR_DAT_08008194\n\
    mov         r0,#0x1\n\
    str         r0,[r2,#0x0]\n\
    ldr         r0,PTR_DAT_08008198\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_0800819c\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080081a0\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080081a4\n\
    str         r3,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080081a8\n\
    str         r7,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_080081ac\n\
    mov         r0,#0x8f\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,PTR_DAT_080081b0\n\
    mov         r0,#0x5f\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_080081b4\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    ldr         r1,DAT_08008140\n\
    ldr         r0,DAT_080081b8\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080081bc\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    ldr         r2,DAT_080081c0\n\
    add         r0,r2,#0x0\n\
    add         r1,r2,#0x0\n\
    bl          fun_0803c1ec\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08008140:\n\
    .4byte 0x040000D4\n\
DAT_08008144:\n\
    .4byte 0x8100C000\n\
DAT_08008148:\n\
    .4byte 0x81000200\n\
DAT_0800814c:\n\
    .4byte 0x00001F44\n\
DAT_08008150:\n\
    .4byte 0x084496C8\n\
PTR_DAT_08008154:\n\
    .4byte DAT_0200c860\n\
PTR_DAT_08008158:\n\
    .4byte DAT_0200c680\n\
PTR_DAT_0800815c:\n\
    .4byte DAT_0200c6b8\n\
PTR_DAT_08008160:\n\
    .4byte DAT_0200c700\n\
PTR_DAT_08008164:\n\
    .4byte DAT_0200c7b0\n\
PTR_DAT_08008168:\n\
    .4byte DAT_0200c6c0\n\
PTR_DAT_0800816c:\n\
    .4byte DAT_0200c6e0\n\
PTR_DAT_08008170:\n\
    .4byte DAT_0200c840\n\
PTR_DAT_08008174:\n\
    .4byte DAT_0200c660\n\
PTR_DAT_08008178:\n\
    .4byte DAT_0200c750\n\
PTR_DAT_0800817c:\n\
    .4byte DAT_0200c68c\n\
DAT_08008180:\n\
    .4byte 0x0000044B\n\
PTR_DAT_08008184:\n\
    .4byte DAT_0200c674\n\
PTR_DAT_08008188:\n\
    .4byte DAT_0200c838\n\
PTR_DAT_0800818c:\n\
    .4byte DAT_0200c808\n\
PTR_DAT_08008190:\n\
    .4byte DAT_0200c644\n\
PTR_DAT_08008194:\n\
    .4byte DAT_0200c648\n\
PTR_DAT_08008198:\n\
    .4byte DAT_0200c718\n\
PTR_DAT_0800819c:\n\
    .4byte DAT_0200c764\n\
PTR_DAT_080081a0:\n\
    .4byte DAT_0200c6f4\n\
PTR_DAT_080081a4:\n\
    .4byte DAT_0200c64c\n\
PTR_DAT_080081a8:\n\
    .4byte DAT_0200c67c\n\
PTR_DAT_080081ac:\n\
    .4byte DAT_0200c80c\n\
PTR_DAT_080081b0:\n\
    .4byte DAT_0200c79c\n\
DAT_080081b4:\n\
    .4byte 0x080D6F38\n\
DAT_080081b8:\n\
    .4byte 0x080D6D38\n\
DAT_080081bc:\n\
    .4byte 0x80000100\n\
DAT_080081c0:\n\
    .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_080081c4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    ldr         r0,PTR_DAT_08008214\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080081d8\n\
    b           LAB_08008480\n\
LAB_080081d8:\n\
    bl          fun_0803c1a4\n\
    ldr         r0,PTR_DAT_08008218\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080081e6\n\
    b           LAB_08008418\n\
LAB_080081e6:\n\
    mov         r7,#0x0\n\
    ldr         r0,PTR_DAT_0800821c\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r7,r0\n\
    bcc         LAB_080081f2\n\
    b           LAB_08008454\n\
LAB_080081f2:\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    ldr         r1,PTR_DAT_08008220\n\
    mov         r9,r1\n\
    mov         r5,#0x0\n\
    ldr         r2,PTR_DAT_08008224\n\
    mov         r10,r2\n\
LAB_08008200:\n\
    ldr         r0,PTR_DAT_08008228\n\
    mov         r3,r8\n\
    add         r1,r3,r0\n\
    ldr         r2,[r1,#0x0]\n\
    cmp         r2,#0x0\n\
    beq         LAB_0800822c\n\
    sub         r0,r2,#0x1\n\
    str         r0,[r1,#0x0]\n\
    b           LAB_080083da\n\
\n\
.space 2\n\
\n\
PTR_DAT_08008214:\n\
    .4byte DAT_0200c764\n\
PTR_DAT_08008218:\n\
    .4byte DAT_0200c674\n\
PTR_DAT_0800821c:\n\
    .4byte DAT_0200c648\n\
PTR_DAT_08008220:\n\
    .4byte DAT_0200c720\n\
PTR_DAT_08008224:\n\
    .4byte DAT_0200c6e0\n\
PTR_DAT_08008228:\n\
    .4byte DAT_0200c690\n\
LAB_0800822c:\n\
    ldr         r1,PTR_DAT_080082c8\n\
    add         r1,r8\n\
    ldr         r0,[r1,#0x0]\n\
    add         r3,r0,#0x1\n\
    str         r3,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_080082cc\n\
    add         r0,r5,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r6,r5,#0x0\n\
    cmp         r0,#0x0\n\
    bne         LAB_080082ec\n\
    mov         r4,r10\n\
    add         r1,r5,r4\n\
    lsr         r0,r3,#0x2\n\
    ldrh        r2,[r1,#0x0]\n\
    sub         r0,r2,r0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_080082d0\n\
    add         r4,r5,r0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800826a\n\
    mov         r3,r9\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r0,#0x0\n\
    ble         LAB_0800826a\n\
    mov         r0,#0x0\n\
    bl          fun_080016f0\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800826a:\n\
    mov         r4,r10\n\
    add         r3,r5,r4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r3,r1]\n\
    mov         r2,r9\n\
    ldr         r1,[r2,#0x0]\n\
    asr         r1,r1,#0x1\n\
    lsl         r2,r1,#0x3\n\
    mov         r1,#0x78\n\
    sub         r1,r1,r2\n\
    cmp         r0,r1\n\
    bge         LAB_08008298\n\
    mov         r0,#0x78\n\
    sub         r0,r0,r2\n\
    mov         r1,#0x0\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r0,PTR_DAT_080082d4\n\
    add         r0,r8\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080082cc\n\
    add         r0,r6,r0\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
LAB_08008298:\n\
    ldr         r0,PTR_DAT_080082d8\n\
    ldr         r2,[r0,#0x0]\n\
    lsl         r2,r2,#0x2\n\
    ldr         r0,PTR_DAT_080082dc\n\
    ldr         r1,[r0,#0x0]\n\
    add         r1,r1,r7\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_080082e0\n\
    add         r2,r2,r4\n\
    ldr         r0,[r2,#0x0]\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r3,r2]\n\
    ldr         r2,DAT_080082e4\n\
    add         r2,r5,r2\n\
    mov         r3,#0x0\n\
    ldrsh       r2,[r2,r3]\n\
    ldr         r3,DAT_080082e8\n\
    bl          fun_0803c138\n\
    b           LAB_080083da\n\
\n\
.space 2\n\
\n\
PTR_DAT_080082c8:\n\
    .4byte DAT_0200c7e0\n\
PTR_DAT_080082cc:\n\
    .4byte DAT_0200c6c0\n\
PTR_DAT_080082d0:\n\
    .4byte DAT_0200c660\n\
PTR_DAT_080082d4:\n\
    .4byte DAT_0200c7b0\n\
PTR_DAT_080082d8:\n\
    .4byte DAT_020025b4\n\
PTR_DAT_080082dc:\n\
    .4byte DAT_0200c64c\n\
DAT_080082e0:\n\
    .4byte 0x08669624\n\
DAT_080082e4:\n\
    .4byte 0x0200C840\n\
DAT_080082e8:\n\
    .4byte 0x0865FD94\n\
LAB_080082ec:\n\
    ldr         r0,PTR_DAT_0800832c\n\
    add         r0,r5,r0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_08008330\n\
    add         r1,r8\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    cmp         r0,#0xb4\n\
    bhi         LAB_08008348\n\
    ldr         r0,PTR_DAT_08008334\n\
    ldr         r2,[r0,#0x0]\n\
    lsl         r2,r2,#0x2\n\
    ldr         r0,PTR_DAT_08008338\n\
    ldr         r1,[r0,#0x0]\n\
    add         r1,r1,r7\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_0800833c\n\
    add         r2,r2,r4\n\
    ldr         r0,[r2,#0x0]\n\
    ldr         r1,DAT_08008340\n\
    add         r1,r5,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r1,r2]\n\
    ldr         r2,DAT_08008344\n\
    bl          fun_0803c010\n\
    b           LAB_080083da\n\
\n\
.space 2\n\
\n\
PTR_DAT_0800832c:\n\
    .4byte DAT_0200c660\n\
PTR_DAT_08008330:\n\
    .4byte DAT_0200c7b0\n\
PTR_DAT_08008334:\n\
    .4byte DAT_020025b4\n\
PTR_DAT_08008338:\n\
    .4byte DAT_0200c64c\n\
DAT_0800833c:\n\
    .4byte 0x08669624\n\
DAT_08008340:\n\
    .4byte 0x0200C840\n\
DAT_08008344:\n\
    .4byte 0x0865FD94\n\
LAB_08008348:\n\
    ldr         r0,PTR_DAT_080083f0\n\
    add         r0,r5,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080083da\n\
    ldr         r0,PTR_DAT_080083f4\n\
    add         r4,r5,r0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800836e\n\
    mov         r3,r9\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r0,#0x0\n\
    ble         LAB_0800836e\n\
    mov         r0,#0x0\n\
    bl          fun_080016f0\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800836e:\n\
    mov         r4,r10\n\
    add         r3,r5,r4\n\
    ldr         r0,PTR_DAT_080083f8\n\
    add         r0,r8\n\
    ldr         r0,[r0,#0x0]\n\
    sub         r0,#0xb4\n\
    lsr         r0,r0,#0x2\n\
    ldrh        r1,[r3,#0x0]\n\
    sub         r0,r1,r0\n\
    mov         r2,#0x0\n\
    strh        r0,[r3,#0x0]\n\
    mov         r4,#0x0\n\
    ldrsh       r1,[r3,r4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x0]\n\
    lsl         r0,r0,#0x3\n\
    add         r1,r1,r0\n\
    mov         r0,#0x40\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bge         LAB_080083ae\n\
    ldr         r0,PTR_DAT_080083f4\n\
    add         r0,r6,r0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080083f0\n\
    add         r0,r6,r0\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_080083fc\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
LAB_080083ae:\n\
    ldr         r0,PTR_DAT_08008400\n\
    ldr         r2,[r0,#0x0]\n\
    lsl         r2,r2,#0x2\n\
    ldr         r0,PTR_DAT_08008404\n\
    ldr         r1,[r0,#0x0]\n\
    add         r1,r1,r7\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r2,r2,r0\n\
    ldr         r0,DAT_08008408\n\
    add         r2,r2,r0\n\
    ldr         r0,[r2,#0x0]\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r3,r2]\n\
    ldr         r2,DAT_0800840c\n\
    add         r2,r5,r2\n\
    mov         r3,#0x0\n\
    ldrsh       r2,[r2,r3]\n\
    ldr         r3,DAT_08008410\n\
    bl          fun_0803c138\n\
LAB_080083da:\n\
    mov         r4,#0x4\n\
    add         r8,r4\n\
    add         r9,r4\n\
    add         r5,#0x2\n\
    add         r7,#0x1\n\
    ldr         r0,DAT_08008414\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r7,r0\n\
    bcs         LAB_080083ee\n\
    b           LAB_08008200\n\
LAB_080083ee:\n\
    b           LAB_08008454\n\
PTR_DAT_080083f0:\n\
    .4byte DAT_0200c700\n\
PTR_DAT_080083f4:\n\
    .4byte DAT_0200c750\n\
PTR_DAT_080083f8:\n\
    .4byte DAT_0200c7b0\n\
PTR_DAT_080083fc:\n\
    .4byte DAT_0200c644\n\
PTR_DAT_08008400:\n\
    .4byte DAT_020025b4\n\
PTR_DAT_08008404:\n\
    .4byte DAT_0200c64c\n\
DAT_08008408:\n\
    .4byte 0x08669624\n\
DAT_0800840c:\n\
    .4byte 0x0200C840\n\
DAT_08008410:\n\
    .4byte 0x0865FD94\n\
DAT_08008414:\n\
    .4byte 0x0200C648\n\
LAB_08008418:\n\
    mov         r7,#0x0\n\
    ldr         r0,DAT_08008490\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r7,r0\n\
    bcs         LAB_08008454\n\
    ldr         r5,DAT_08008494\n\
    ldr         r4,DAT_08008498\n\
LAB_08008426:\n\
    ldr         r0,DAT_0800849c\n\
    ldr         r2,[r0,#0x0]\n\
    lsl         r2,r2,#0x2\n\
    ldr         r0,DAT_080084a0\n\
    ldr         r1,[r0,#0x0]\n\
    add         r1,r1,r7\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r2,r2,r0\n\
    add         r2,r2,r5\n\
    ldr         r0,[r2,#0x0]\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r4,r2]\n\
    ldr         r2,DAT_080084a4\n\
    bl          fun_0803c010\n\
    add         r4,#0x2\n\
    add         r7,#0x1\n\
    ldr         r0,DAT_08008490\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r7,r0\n\
    bcc         LAB_08008426\n\
LAB_08008454:\n\
    ldr         r0,PTR_DAT_080084a8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008480\n\
    ldr         r1,PTR_DAT_080084ac\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08008490\n\
    mov         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_080084b0\n\
    mov         r1,#0x0\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080084b4\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_080084b8\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_080084bc\n\
    cmp         r1,r0\n\
    bls         LAB_08008480\n\
    bl          fun_080010d8\n\
LAB_08008480:\n\
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
DAT_08008490:\n\
    .4byte 0x0200C648\n\
DAT_08008494:\n\
    .4byte 0x08669624\n\
DAT_08008498:\n\
    .4byte 0x0200C840\n\
DAT_0800849c:\n\
    .4byte 0x020025B4\n\
DAT_080084a0:\n\
    .4byte 0x0200C64C\n\
DAT_080084a4:\n\
    .4byte 0x0865FD94\n\
PTR_DAT_080084a8:\n\
    .4byte DAT_0200c688\n\
PTR_DAT_080084ac:\n\
    .4byte DAT_0200c764\n\
PTR_DAT_080084b0:\n\
    .4byte DAT_0200c718\n\
PTR_DAT_080084b4:\n\
    .4byte DAT_0200c6f4\n\
PTR_DAT_080084b8:\n\
    .4byte DAT_0200c68c\n\
DAT_080084bc:\n\
    .4byte 0x000004B7\n\
    ");
}
__attribute__((naked)) void fun_080084c0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    ldr         r0,DAT_080085ec\n\
    ldr         r3,[r0,#0x0]\n\
    sub         r5,r3,#0x1\n\
    ldr         r1,DAT_080085f0\n\
    ldrh        r2,[r1,#0x0]\n\
    mov         r8,r0\n\
    add         r6,r1,#0x0\n\
    cmp         r2,#0x0\n\
    beq         LAB_080084f0\n\
    mov         r0,#0x97\n\
    lsl         r0,r0,#0x3\n\
    cmp         r3,r0\n\
    bhi         LAB_080084f0\n\
    add         r1,r3,#0x1\n\
    mov         r0,r8\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_080085f4\n\
    str         r1,[r0,#0x0]\n\
LAB_080084f0:\n\
    ldr         r4,DAT_080085f8\n\
    mov         r2,r8\n\
    ldr         r1,[r2,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r0,r0,r4\n\
    ldrb        r3,[r0,#0x1]\n\
    cmp         r3,#0x1\n\
    bne         LAB_0800850a\n\
    ldrh        r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080085da\n\
LAB_0800850a:\n\
    ldr         r0,PTR_DAT_080085fc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080085da\n\
    add         r2,r1,#0x0\n\
    ldr         r1,PTR_DAT_08008600\n\
    ldr         r0,PTR_DAT_08008604\n\
    mov         r12,r0\n\
    cmp         r3,#0x0\n\
    bne         LAB_08008544\n\
    mov         r9,r1\n\
    ldr         r7,PTR_DAT_08008608\n\
    add         r6,r4,#0x0\n\
    ldr         r4,[r1,#0x0]\n\
    ldr         r3,[r7,#0x0]\n\
LAB_08008528:\n\
    add         r4,#0x1\n\
    add         r3,#0xa\n\
    add         r5,r2,#0x0\n\
    add         r2,r5,#0x1\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r2\n\
    lsl         r0,r0,#0x4\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008528\n\
    str         r3,[r7,#0x0]\n\
    mov         r2,r9\n\
    str         r4,[r2,#0x0]\n\
LAB_08008544:\n\
    ldr         r1,[r1,#0x0]\n\
    mov         r0,r12\n\
    str         r1,[r0,#0x0]\n\
    add         r0,r5,#0x1\n\
    mov         r2,r8\n\
    str         r0,[r2,#0x0]\n\
    mov         r7,#0x0\n\
    cmp         r7,r1\n\
    bcs         LAB_080085d4\n\
    mov         r0,#0x0\n\
    mov         r9,r0\n\
    ldr         r1,DAT_0800860c\n\
    mov         r10,r1\n\
    mov         r8,r0\n\
    mov         r3,#0x0\n\
LAB_08008562:\n\
    ldr         r1,PTR_DAT_08008610\n\
    lsl         r5,r7,#0x1\n\
    add         r1,r5,r1\n\
    mov         r0,#0x88\n\
    lsl         r0,r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_08008614\n\
    lsl         r6,r7,#0x2\n\
    add         r0,r6,r0\n\
    str         r3,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_08008618\n\
    add         r1,r5,r1\n\
    ldr         r0,PTR_DAT_08008608\n\
    ldr         r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x1\n\
    sub         r0,#0x2b\n\
    mov         r2,r8\n\
    sub         r0,r2,r0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r4,PTR_DAT_0800861c\n\
    add         r4,r6,r4\n\
    ldr         r0,PTR_DAT_08008620\n\
    ldr         r2,[r0,#0x0]\n\
    lsl         r2,r2,#0x2\n\
    ldr         r0,DAT_080085f4\n\
    ldr         r1,[r0,#0x0]\n\
    add         r1,r1,r7\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    add         r2,r2,r0\n\
    add         r2,r10\n\
    ldr         r0,[r2,#0x0]\n\
    str         r3,[sp,#0x0]\n\
    bl          fun_08045770\n\
    str         r0,[r4,#0x0]\n\
    ldr         r0,PTR_DAT_08008624\n\
    add         r0,r5,r0\n\
    mov         r1,r9\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,PTR_DAT_08008628\n\
    add         r5,r5,r0\n\
    strh        r1,[r5,#0x0]\n\
    ldr         r0,PTR_DAT_0800862c\n\
    add         r6,r6,r0\n\
    mov         r2,r9\n\
    str         r2,[r6,#0x0]\n\
    mov         r0,#0xa\n\
    add         r8,r0\n\
    ldr         r3,[sp,#0x0]\n\
    add         r3,#0x14\n\
    add         r7,#0x1\n\
    ldr         r0,PTR_DAT_08008600\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r7,r0\n\
    bcc         LAB_08008562\n\
LAB_080085d4:\n\
    ldr         r1,PTR_DAT_080085fc\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_080085da:\n\
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
DAT_080085ec:\n\
    .4byte 0x0200C68C\n\
DAT_080085f0:\n\
    .4byte 0x0200C688\n\
DAT_080085f4:\n\
    .4byte 0x0200C64C\n\
DAT_080085f8:\n\
    .4byte 0x08669620\n\
PTR_DAT_080085fc:\n\
    .4byte DAT_0200c764\n\
PTR_DAT_08008600:\n\
    .4byte DAT_0200c648\n\
PTR_DAT_08008604:\n\
    .4byte DAT_0200c644\n\
PTR_DAT_08008608:\n\
    .4byte DAT_0200c718\n\
DAT_0800860c:\n\
    .4byte 0x08669624\n\
PTR_DAT_08008610:\n\
    .4byte DAT_0200c6e0\n\
PTR_DAT_08008614:\n\
    .4byte DAT_0200c690\n\
PTR_DAT_08008618:\n\
    .4byte DAT_0200c840\n\
PTR_DAT_0800861c:\n\
    .4byte DAT_0200c720\n\
PTR_DAT_08008620:\n\
    .4byte DAT_020025b4\n\
PTR_DAT_08008624:\n\
    .4byte DAT_0200c6c0\n\
PTR_DAT_08008628:\n\
    .4byte DAT_0200c700\n\
PTR_DAT_0800862c:\n\
    .4byte DAT_0200c7e0\n\
    ");
}
__attribute__((naked)) void fun_08008630()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r7,r0,#0x0\n\
    ldr         r5,DAT_0800867c\n\
    lsl         r4,r7,#0x2\n\
    add         r5,r4,r5\n\
    mov         r6,#0x0\n\
    str         r6,[r5,#0x0]\n\
    ldr         r0,DAT_08008680\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x4\n\
    ldr         r1,DAT_08008684\n\
    add         r0,r0,r1\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08008688\n\
    add         r2,r4,r1\n\
    str         r0,[r2,#0x0]\n\
    strh        r6,[r0,#0x6]\n\
    ldr         r1,[r2,#0x0]\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x10]\n\
    ldr         r1,[r2,#0x0]\n\
    mov         r0,#0x8f\n\
    strh        r0,[r1,#0x4]\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,DAT_0800868c\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008690\n\
    ldr         r1,[r2,#0x0]\n\
    mov         r0,#0x88\n\
    lsl         r0,r0,#0x1\n\
    b           LAB_08008694\n\
\n\
.space 2\n\
\n\
DAT_0800867c:\n\
    .4byte 0x0200C770\n\
DAT_08008680:\n\
    .4byte 0x0877BBA4\n\
DAT_08008684:\n\
    .4byte 0x08448B58\n\
DAT_08008688:\n\
    .4byte 0x0200C810\n\
DAT_0800868c:\n\
    .4byte 0x0877BBCC\n\
LAB_08008690:\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,DAT_080086b0\n\
LAB_08008694:\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r1,DAT_080086b4\n\
    lsl         r0,r7,#0x1\n\
    add         r0,r0,r1\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_080086b8\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080086b0:\n\
    .4byte 0x0000FFC0\n\
DAT_080086b4:\n\
    .4byte 0x0200C860\n\
DAT_080086b8:\n\
    .4byte 0x0200C808\n\
    ");
}
__attribute__((naked)) void fun_080086bc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    ldr         r0,DAT_08008728\n\
    mov         r10,r0\n\
    ldr         r1,DAT_0800872c\n\
    mov         r9,r1\n\
    mov         r7,#0x0\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x0]\n\
LAB_080086d6:\n\
    ldr         r0,DAT_08008730\n\
    ldr         r1,[sp,#0x0]\n\
    add         r0,r1,r0\n\
    ldrh        r4,[r0,#0x0]\n\
    cmp         r4,#0x1\n\
    beq         LAB_080086e4\n\
    b           LAB_08008970\n\
LAB_080086e4:\n\
    ldr         r0,DAT_08008734\n\
    add         r0,r7,r0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r8,r7\n\
    cmp         r0,#0x2d\n\
    beq         LAB_080086f2\n\
    b           LAB_08008800\n\
LAB_080086f2:\n\
    ldr         r1,DAT_08008738\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008706\n\
    strh        r4,[r1,#0x0]\n\
    mov         r0,#0x9\n\
    bl          fun_080016f0\n\
    ldr         r1,DAT_0800873c\n\
    str         r0,[r1,#0x0]\n\
LAB_08008706:\n\
    mov         r2,r10\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r0,#0x78\n\
    bne         LAB_0800874e\n\
    ldr         r2,DAT_08008740\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800874e\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    cmp         r1,r0\n\
    bne         LAB_08008748\n\
    sub         r0,r1,#0x1\n\
    str         r0,[r2,#0x0]\n\
    ldr         r0,DAT_08008744\n\
    strh        r4,[r0,#0x0]\n\
    b           LAB_08008768\n\
DAT_08008728:\n\
    .4byte 0x0200C67C\n\
DAT_0800872c:\n\
    .4byte 0x0200C770\n\
DAT_08008730:\n\
    .4byte 0x0200C860\n\
DAT_08008734:\n\
    .4byte 0x0877BBA4\n\
DAT_08008738:\n\
    .4byte 0x0200C714\n\
DAT_0800873c:\n\
    .4byte 0x0200C684\n\
DAT_08008740:\n\
    .4byte 0x0200C838\n\
DAT_08008744:\n\
    .4byte 0x0200C678\n\
LAB_08008748:\n\
    sub         r0,r1,#0x1\n\
    str         r0,[r2,#0x0]\n\
    b           LAB_08008768\n\
LAB_0800874e:\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008760\n\
    mov         r2,r10\n\
    ldr         r0,[r2,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r2,#0x0]\n\
    b           LAB_08008768\n\
LAB_08008760:\n\
    mov         r1,r10\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
LAB_08008768:\n\
    ldr         r4,DAT_080087e8\n\
    mov         r0,#0x4\n\
    bl          fun_08002c04\n\
    ldr         r6,DAT_080087ec\n\
    mov         r1,#0x0\n\
    ldrsb       r1,[r6,r1]\n\
    sub         r0,#0x1\n\
    mul         r1,r0\n\
    ldr         r0,[r4,#0x0]\n\
    add         r0,r0,r1\n\
    str         r0,[r4,#0x0]\n\
    ldr         r5,DAT_080087f0\n\
    mov         r0,#0x8\n\
    bl          fun_08002c04\n\
    ldr         r1,[r5,#0x0]\n\
    sub         r1,#0x4\n\
    add         r1,r1,r0\n\
    str         r1,[r5,#0x0]\n\
    ldr         r0,DAT_080087f4\n\
    ldr         r3,[r0,#0x0]\n\
    add         r2,r3,#0x0\n\
    sub         r2,#0x14\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,r2\n\
    bcs         LAB_080087a4\n\
    str         r2,[r4,#0x0]\n\
    mov         r0,#0x1\n\
    strb        r0,[r6,#0x0]\n\
LAB_080087a4:\n\
    add         r2,r3,#0x0\n\
    add         r2,#0x14\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,r2\n\
    bls         LAB_080087b8\n\
    str         r2,[r4,#0x0]\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strb        r0,[r6,#0x0]\n\
LAB_080087b8:\n\
    ldr         r0,DAT_080087f8\n\
    ldr         r0,[r0,#0x0]\n\
    add         r2,r0,#0x0\n\
    sub         r2,#0xa\n\
    cmp         r1,r2\n\
    bcs         LAB_080087c6\n\
    str         r2,[r5,#0x0]\n\
LAB_080087c6:\n\
    add         r1,r0,#0x0\n\
    add         r1,#0x1e\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,r1\n\
    bls         LAB_080087d2\n\
    str         r1,[r5,#0x0]\n\
LAB_080087d2:\n\
    ldr         r3,DAT_080087fc\n\
    add         r2,r7,r3\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r4,#0x0]\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    strh        r0,[r1,#0x4]\n\
    add         r6,r3,#0x0\n\
    b           LAB_080088ee\n\
\n\
.space 2\n\
\n\
DAT_080087e8:\n\
    .4byte 0x0200C640\n\
DAT_080087ec:\n\
    .4byte 0x0200C650\n\
DAT_080087f0:\n\
    .4byte 0x0200C7A0\n\
DAT_080087f4:\n\
    .4byte 0x0200C67C\n\
DAT_080087f8:\n\
    .4byte 0x0200C80C\n\
DAT_080087fc:\n\
    .4byte 0x0200C810\n\
LAB_08008800:\n\
    cmp         r0,#0x67\n\
    bne         LAB_0800885c\n\
    ldr         r0,DAT_08008824\n\
    add         r1,r7,r0\n\
    ldr         r1,[r1,#0x0]\n\
    add         r6,r0,#0x0\n\
    ldrh        r1,[r1,#0x2]\n\
    cmp         r1,#0x78\n\
    bne         LAB_0800882c\n\
    ldr         r2,DAT_08008828\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800882c\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    cmp         r1,r0\n\
    beq         LAB_08008882\n\
    b           LAB_0800889c\n\
DAT_08008824:\n\
    .4byte 0x0200C810\n\
DAT_08008828:\n\
    .4byte 0x0200C838\n\
LAB_0800882c:\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008840\n\
    mov         r2,r8\n\
    add         r0,r2,r6\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    sub         r0,#0x1\n\
    b           LAB_0800884a\n\
LAB_08008840:\n\
    mov         r1,r8\n\
    add         r0,r1,r6\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x1\n\
LAB_0800884a:\n\
    strh        r0,[r1,#0x2]\n\
    add         r0,r7,r6\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08008858\n\
    ldr         r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x4]\n\
    b           LAB_080088ee\n\
DAT_08008858:\n\
    .4byte 0x0200C79C\n\
LAB_0800885c:\n\
    ldr         r1,DAT_0800888c\n\
    add         r0,r7,r1\n\
    ldr         r3,[r0,#0x0]\n\
    add         r6,r1,#0x0\n\
    ldrh        r2,[r3,#0x2]\n\
    cmp         r2,#0x78\n\
    bne         LAB_080088a2\n\
    ldr         r2,DAT_08008890\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080088a2\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    cmp         r1,r0\n\
    bne         LAB_0800889c\n\
    ldr         r0,DAT_08008894\n\
    add         r0,r7,r0\n\
    ldr         r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x0]\n\
LAB_08008882:\n\
    sub         r0,r1,#0x1\n\
    str         r0,[r2,#0x0]\n\
    ldr         r0,DAT_08008898\n\
    strh        r4,[r0,#0x0]\n\
    b           LAB_080088ee\n\
DAT_0800888c:\n\
    .4byte 0x0200C810\n\
DAT_08008890:\n\
    .4byte 0x0200C838\n\
DAT_08008894:\n\
    .4byte 0x0877BBF4\n\
DAT_08008898:\n\
    .4byte 0x0200C678\n\
LAB_0800889c:\n\
    sub         r0,r1,#0x1\n\
    str         r0,[r2,#0x0]\n\
    b           LAB_080088ee\n\
LAB_080088a2:\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080088b6\n\
    mov         r2,r8\n\
    add         r0,r2,r6\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    sub         r0,#0x1\n\
    b           LAB_080088c0\n\
LAB_080088b6:\n\
    mov         r1,r8\n\
    add         r0,r1,r6\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x2]\n\
    add         r0,#0x1\n\
LAB_080088c0:\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r0,DAT_08008998\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x7\n\
    bl          __umodsi3\n\
    cmp         r0,#0x0\n\
    bne         LAB_080088ee\n\
    add         r0,r7,r6\n\
    ldr         r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800899c\n\
    add         r0,r7,r0\n\
    ldr         r4,[r0,#0x0]\n\
    ldrh        r2,[r5,#0x0]\n\
    sub         r0,r2,r4\n\
    add         r0,#0x1\n\
    ldr         r1,DAT_080089a0\n\
    add         r1,r7,r1\n\
    ldr         r1,[r1,#0x0]\n\
    bl          __umodsi3\n\
    add         r4,r4,r0\n\
    strh        r4,[r5,#0x0]\n\
LAB_080088ee:\n\
    add         r0,r7,r6\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r2,#0x2\n\
    ldrsh       r1,[r0,r2]\n\
    mov         r0,#0x40\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bge         LAB_08008908\n\
    ldr         r0,DAT_080089a4\n\
    add         r0,r8\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008918\n\
LAB_08008908:\n\
    ldr         r0,DAT_080089a8\n\
    cmp         r1,r0\n\
    bgt         LAB_08008970\n\
    ldr         r1,DAT_080089a4\n\
    add         r0,r7,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08008970\n\
LAB_08008918:\n\
    add         r0,r7,r6\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_080089ac\n\
    ldr         r2,[sp,#0x0]\n\
    add         r0,r2,r0\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r1,DAT_080089b0\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_080089b4\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_080089b8\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    mov         r1,#0xa\n\
    bl          __umodsi3\n\
    bl          fun_08008630\n\
    ldr         r0,DAT_080089bc\n\
    add         r0,r7,r0\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x2d\n\
    bne         LAB_08008970\n\
    mov         r0,#0x88\n\
    lsl         r0,r0,#0x1\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x0]\n\
    ldr         r4,DAT_080089c0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008970\n\
    ldr         r0,DAT_080089c4\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08001704\n\
    strh        r5,[r4,#0x0]\n\
LAB_08008970:\n\
    mov         r2,#0x4\n\
    add         r9,r2\n\
    add         r7,#0x4\n\
    ldr         r0,[sp,#0x0]\n\
    add         r0,#0x2\n\
    str         r0,[sp,#0x0]\n\
    ldr         r0,DAT_080089a4\n\
    add         r0,#0x24\n\
    cmp         r9,r0\n\
    bhi         LAB_08008986\n\
    b           LAB_080086d6\n\
LAB_08008986:\n\
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
DAT_08008998:\n\
    .4byte 0x0200C6B8\n\
DAT_0800899c:\n\
    .4byte 0x0877BBCC\n\
DAT_080089a0:\n\
    .4byte 0x0877BC1C\n\
DAT_080089a4:\n\
    .4byte 0x0200C770\n\
DAT_080089a8:\n\
    .4byte 0x0000010F\n\
DAT_080089ac:\n\
    .4byte 0x0200C860\n\
DAT_080089b0:\n\
    .4byte 0x0200C808\n\
DAT_080089b4:\n\
    .4byte 0x0200C838\n\
DAT_080089b8:\n\
    .4byte 0x0200C680\n\
DAT_080089bc:\n\
    .4byte 0x0877BBA4\n\
DAT_080089c0:\n\
    .4byte 0x0200C714\n\
DAT_080089c4:\n\
    .4byte 0x0200C684\n\
    ");
}
__attribute__((naked)) void fun_080089c8()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r6,DAT_08008a04\n\
    mov         r5,#0x0\n\
    strh        r5,[r6,#0x0]\n\
    ldr         r4,DAT_08008a08\n\
    ldrh        r1,[r4,#0x0]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080089e0\n\
    bl          fun_080010d8\n\
LAB_080089e0:\n\
    ldrh        r1,[r4,#0x0]\n\
    mov         r4,#0x1\n\
    add         r0,r4,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080089f0\n\
    bl          fun_080010d8\n\
LAB_080089f0:\n\
    ldr         r1,DAT_08008a0c\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080089fc\n\
    strh        r5,[r1,#0x0]\n\
    strh        r4,[r6,#0x0]\n\
LAB_080089fc:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08008a04:\n\
    .4byte 0x0200C688\n\
DAT_08008a08:\n\
    .4byte 0x02005CE0\n\
DAT_08008a0c:\n\
    .4byte 0x0200C678\n\
    ");
}
__attribute__((naked)) void fun_08008a10()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r1,DAT_08008a40\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_08008a44\n\
    lsl         r4,r4,#0x1\n\
    add         r4,r4,r0\n\
    mov         r0,#0x0\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r1,DAT_08008a48\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_08008a4c\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08008a40:\n\
    .4byte 0x0200C810\n\
DAT_08008a44:\n\
    .4byte 0x0200C860\n\
DAT_08008a48:\n\
    .4byte 0x0200C808\n\
DAT_08008a4c:\n\
    .4byte 0x0200C838\n\
    push        {lr}\n\
    bl          fun_0800457c\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08008a50()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_08008a5c()
{
    asm("\n\
    push        {lr}\n\
    ldr         r1,DAT_08008a7c\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_080081c4\n\
    bl          fun_080084c0\n\
    bl          fun_080089c8\n\
    bl          fun_080086bc\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08008a7c:\n\
    .4byte 0x0200C6B8\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08008a80()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_08008a84()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_08008a88()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    sub         sp,#0x4\n\
    ldr         r0,DAT_08008b80\n\
    mov         r8,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008aa6\n\
    bl          fun_0800117c\n\
    mov         r0,#0x1\n\
    bl          fun_08002ccc\n\
LAB_08008aa6:\n\
    mov         r0,sp\n\
    mov         r7,#0x0\n\
    strh        r7,[r0,#0x0]\n\
    ldr         r6,DAT_08008b84\n\
    str         r0,[r6,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    str         r1,[r6,#0x4]\n\
    ldr         r0,DAT_08008b88\n\
    str         r0,[r6,#0x8]\n\
    ldr         r0,[r6,#0x8]\n\
    mov         r0,sp\n\
    strh        r7,[r0,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    mov         r2,#0xa0\n\
    lsl         r2,r2,#0x13\n\
    mov         r9,r2\n\
    str         r2,[r6,#0x4]\n\
    ldr         r0,DAT_08008b8c\n\
    str         r0,[r6,#0x8]\n\
    ldr         r0,[r6,#0x8]\n\
    mov         r4,#0x80\n\
    lsl         r4,r4,#0x13\n\
    ldr         r2,DAT_08008b90\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r0,DAT_08008b94\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08008b98\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    ldr         r4,DAT_08008b9c\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_08008ba0\n\
    str         r0,[r5,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r4,DAT_08008ba4\n\
    str         r0,[r4,#0x0]\n\
    ldr         r2,[r5,#0x0]\n\
    mov         r1,#0x0\n\
    strh        r1,[r2,#0x0]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08008ba8\n\
    bl          fun_080045f0\n\
    ldr         r1,DAT_08008bac\n\
    mov         r0,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_0803c1ec\n\
    ldr         r1,[r5,#0x0]\n\
    mov         r2,#0x84\n\
    strh        r2,[r1,#0x4]\n\
    ldr         r0,DAT_08008bb0\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r1,[r4,#0x0]\n\
    strh        r2,[r1,#0x4]\n\
    mov         r0,#0xd2\n\
    strh        r0,[r1,#0x2]\n\
    mov         r2,r8\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008b3e\n\
    bl          fun_08008fc8\n\
LAB_08008b3e:\n\
    ldr         r0,DAT_08008bb4\n\
    str         r0,[r6,#0x0]\n\
    mov         r0,r9\n\
    str         r0,[r6,#0x4]\n\
    ldr         r0,DAT_08008bb8\n\
    str         r0,[r6,#0x8]\n\
    ldr         r0,[r6,#0x8]\n\
    ldr         r4,DAT_08008bbc\n\
    ldr         r1,DAT_08008bc0\n\
    ldrb        r2,[r1,#0x0]\n\
    lsr         r0,r2,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    strb        r7,[r1,#0x0]\n\
    mov         r1,r8\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008b66\n\
    mov         r0,#0x0\n\
    bl          fun_0800929c\n\
LAB_08008b66:\n\
    ldrh        r0,[r4,#0x0]\n\
    bl          fun_08008d6c\n\
    ldr         r0,DAT_08008bc4\n\
    strb        r7,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08008b80:\n\
    .4byte 0x02005750\n\
DAT_08008b84:\n\
    .4byte 0x040000D4\n\
DAT_08008b88:\n\
    .4byte 0x8100C000\n\
DAT_08008b8c:\n\
    .4byte 0x81000200\n\
DAT_08008b90:\n\
    .4byte 0x00001F54\n\
DAT_08008b94:\n\
    .4byte 0x081476A0\n\
DAT_08008b98:\n\
    .4byte 0x00001F44\n\
DAT_08008b9c:\n\
    .4byte 0x08108E40\n\
DAT_08008ba0:\n\
    .4byte 0x02009B00\n\
DAT_08008ba4:\n\
    .4byte 0x02009AF0\n\
DAT_08008ba8:\n\
    .4byte 0x08108E90\n\
DAT_08008bac:\n\
    .4byte 0x00007FFF\n\
DAT_08008bb0:\n\
    .4byte 0x0000FFFE\n\
DAT_08008bb4:\n\
    .4byte 0x08150140\n\
DAT_08008bb8:\n\
    .4byte 0x80000100\n\
DAT_08008bbc:\n\
    .4byte 0x0200C8C0\n\
DAT_08008bc0:\n\
    .4byte 0x02000694\n\
DAT_08008bc4:\n\
    .4byte 0x0200C880\n\
    ");
}
__attribute__((naked)) void fun_08008bc8()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r0,DAT_08008c04\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08008bde\n\
    ldr         r0,DAT_08008c08\n\
    ldrh        r0,[r0,#0xa]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008bde\n\
    b           LAB_08008d18\n\
LAB_08008bde:\n\
    ldr         r1,DAT_08008c0c\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008c18\n\
    ldr         r0,DAT_08008c10\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r4,#0x80\n\
    lsl         r4,r4,#0x1\n\
    add         r1,r4,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800482c\n\
    ldr         r0,DAT_08008c14\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r4,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800482c\n\
    b           LAB_08008c1c\n\
DAT_08008c04:\n\
    .4byte 0x02005750\n\
DAT_08008c08:\n\
    .4byte 0x0200C890\n\
DAT_08008c0c:\n\
    .4byte 0x0200C880\n\
DAT_08008c10:\n\
    .4byte 0x02009B00\n\
DAT_08008c14:\n\
    .4byte 0x02009AF0\n\
LAB_08008c18:\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
LAB_08008c1c:\n\
    ldr         r0,DAT_08008c3c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x20\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008c94\n\
    ldr         r0,DAT_08008c40\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008c48\n\
    ldr         r0,DAT_08008c44\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008c50\n\
    b           LAB_08008c94\n\
\n\
.space 2\n\
\n\
DAT_08008c3c:\n\
    .4byte 0x02005CE0\n\
DAT_08008c40:\n\
    .4byte 0x02005750\n\
DAT_08008c44:\n\
    .4byte 0x0200C8C0\n\
LAB_08008c48:\n\
    ldr         r0,DAT_08008cb4\n\
    ldrh        r0,[r0,#0xe]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008c94\n\
LAB_08008c50:\n\
    ldr         r1,DAT_08008cb4\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r1,#0xe]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008c64\n\
    ldr         r0,DAT_08008cb8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008c8c\n\
LAB_08008c64:\n\
    ldr         r0,DAT_08008cbc\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08008d6c\n\
    ldr         r0,DAT_08008cc0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xaf\n\
    lsl         r1,r1,#0x1\n\
    bl          fun_080047d0\n\
    ldr         r1,DAT_08008cc4\n\
    mov         r0,#0xa\n\
    strb        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08008cb8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008c94\n\
LAB_08008c8c:\n\
    ldr         r1,DAT_08008cb4\n\
    ldrh        r0,[r1,#0xe]\n\
    sub         r0,#0x1\n\
    strh        r0,[r1,#0xe]\n\
LAB_08008c94:\n\
    ldr         r0,DAT_08008cc8\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    ldr         r2,DAT_08008cb8\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d18\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008ccc\n\
    ldr         r0,DAT_08008cbc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x12\n\
    bls         LAB_08008cd4\n\
    b           LAB_08008d54\n\
\n\
.space 2\n\
\n\
DAT_08008cb4:\n\
    .4byte 0x0200C890\n\
DAT_08008cb8:\n\
    .4byte 0x02005750\n\
DAT_08008cbc:\n\
    .4byte 0x0200C8C0\n\
DAT_08008cc0:\n\
    .4byte 0x02009B00\n\
DAT_08008cc4:\n\
    .4byte 0x0200C880\n\
DAT_08008cc8:\n\
    .4byte 0x02005CE0\n\
LAB_08008ccc:\n\
    ldr         r0,DAT_08008d40\n\
    ldrh        r0,[r0,#0xe]\n\
    cmp         r0,#0x26\n\
    bhi         LAB_08008d18\n\
LAB_08008cd4:\n\
    ldr         r1,DAT_08008d40\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r1,#0xe]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008ce6\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08008d0e\n\
LAB_08008ce6:\n\
    ldr         r0,DAT_08008d44\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08008d6c\n\
    ldr         r0,DAT_08008d48\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xaf\n\
    lsl         r1,r1,#0x1\n\
    bl          fun_080047d0\n\
    ldr         r1,DAT_08008d4c\n\
    mov         r0,#0xa\n\
    strb        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08008d50\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d54\n\
LAB_08008d0e:\n\
    ldr         r1,DAT_08008d40\n\
    ldrh        r0,[r1,#0xe]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0xe]\n\
    ldr         r2,DAT_08008d50\n\
LAB_08008d18:\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d54\n\
    bl          fun_08009078\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d30\n\
    bl          fun_0800920c\n\
LAB_08008d30:\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d62\n\
    bl          fun_080097cc\n\
    b           LAB_08008d62\n\
DAT_08008d40:\n\
    .4byte 0x0200C890\n\
DAT_08008d44:\n\
    .4byte 0x0200C8C0\n\
DAT_08008d48:\n\
    .4byte 0x02009AF0\n\
DAT_08008d4c:\n\
    .4byte 0x0200C880\n\
DAT_08008d50:\n\
    .4byte 0x02005750\n\
LAB_08008d54:\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008d62\n\
    bl          fun_080010d8\n\
LAB_08008d62:\n\
    mov         r0,#0x0\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08008d6c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x34\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    bl          fun_0803c1a4\n\
    bl          fun_08002bcc\n\
    mov         r0,#0x0\n\
    bl          fun_08002fbc\n\
    mov         r0,#0x1\n\
    bl          fun_08002f58\n\
    ldr         r0,DAT_08008e20\n\
    mov         r7,#0xc0\n\
    lsl         r7,r7,#0x13\n\
    add         r1,r7,#0x0\n\
    bl          fun_0803d070\n\
    lsl         r4,r6,#0x1\n\
    lsl         r0,r6,#0x19\n\
    lsr         r5,r0,#0x18\n\
    add         r0,r5,#0x0\n\
    bl          fun_080096fc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008e34\n\
    ldr         r1,DAT_08008e24\n\
    lsl         r0,r6,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_08008e28\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,#0x81\n\
    str         r1,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r0,#0xe\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x68\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    add         r0,r5,#0x0\n\
    bl          fun_080096fc\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1\n\
    bls         LAB_08008e64\n\
    ldr         r4,DAT_08008e2c\n\
    add         r0,r5,#0x0\n\
    bl          fun_080096fc\n\
    add         r2,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    add         r0,sp,#0x20\n\
    add         r1,r4,#0x0\n\
    bl          fun_080455fc\n\
    add         r0,sp,#0x20\n\
    bl          fun_08045770\n\
    lsl         r0,r0,#0x2\n\
    mov         r1,#0x66\n\
    sub         r1,r1,r0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    ldr         r3,DAT_08008e30\n\
    add         r0,sp,#0x20\n\
    mov         r2,#0x97\n\
    bl          fun_0803c138\n\
    b           LAB_08008e64\n\
\n\
.space 2\n\
\n\
DAT_08008e20:\n\
    .4byte 0x081476A0\n\
DAT_08008e24:\n\
    .4byte 0x0877BC44\n\
DAT_08008e28:\n\
    .4byte 0x0600A000\n\
DAT_08008e2c:\n\
    .4byte 0x08107E3C\n\
DAT_08008e30:\n\
    .4byte 0x0865FD94\n\
LAB_08008e34:\n\
    ldr         r1,DAT_08008e50\n\
    add         r2,r4,#0x1\n\
    add         r0,sp,#0x20\n\
    bl          fun_080455fc\n\
    cmp         r6,#0x4\n\
    bhi         LAB_08008e58\n\
    ldr         r3,DAT_08008e54\n\
    add         r0,sp,#0x20\n\
    mov         r1,#0x3a\n\
    mov         r2,#0x4c\n\
    bl          fun_0803c138\n\
    b           LAB_08008e64\n\
DAT_08008e50:\n\
    .4byte 0x08107E3C\n\
DAT_08008e54:\n\
    .4byte 0x0865FD94\n\
LAB_08008e58:\n\
    ldr         r3,DAT_08008ef0\n\
    add         r0,sp,#0x20\n\
    mov         r1,#0x36\n\
    mov         r2,#0x4c\n\
    bl          fun_0803c138\n\
LAB_08008e64:\n\
    add         r0,r5,#0x1\n\
    add         r5,r0,#0x0\n\
    bl          fun_080096fc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08008f00\n\
    ldr         r1,DAT_08008ef4\n\
    lsl         r0,r6,#0x1\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_08008ef8\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    mov         r2,#0x81\n\
    str         r2,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r0,#0x82\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x68\n\
    str         r0,[sp,#0x14]\n\
    str         r2,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    add         r0,r5,#0x0\n\
    bl          fun_080096fc\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1\n\
    bls         LAB_08008f34\n\
    ldr         r4,DAT_08008efc\n\
    add         r0,r5,#0x0\n\
    bl          fun_080096fc\n\
    add         r2,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    add         r0,sp,#0x20\n\
    add         r1,r4,#0x0\n\
    bl          fun_080455fc\n\
    add         r0,sp,#0x20\n\
    bl          fun_08045770\n\
    lsl         r0,r0,#0x2\n\
    mov         r1,#0x89\n\
    sub         r1,r1,r0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    ldr         r3,DAT_08008ef0\n\
    add         r0,sp,#0x20\n\
    mov         r2,#0x97\n\
    bl          fun_0803c138\n\
    b           LAB_08008f34\n\
DAT_08008ef0:\n\
    .4byte 0x0865FD94\n\
DAT_08008ef4:\n\
    .4byte 0x0877BC44\n\
DAT_08008ef8:\n\
    .4byte 0x0600A000\n\
DAT_08008efc:\n\
    .4byte 0x08107E3C\n\
LAB_08008f00:\n\
    ldr         r1,DAT_08008f20\n\
    lsl         r2,r6,#0x1\n\
    add         r2,#0x2\n\
    add         r0,sp,#0x20\n\
    bl          fun_080455fc\n\
    cmp         r6,#0x3\n\
    bhi         LAB_08008f28\n\
    ldr         r3,DAT_08008f24\n\
    add         r0,sp,#0x20\n\
    mov         r1,#0xad\n\
    mov         r2,#0x4c\n\
    bl          fun_0803c138\n\
    b           LAB_08008f34\n\
\n\
.space 2\n\
\n\
DAT_08008f20:\n\
    .4byte 0x08107E3C\n\
DAT_08008f24:\n\
    .4byte 0x0865FD94\n\
LAB_08008f28:\n\
    ldr         r3,DAT_08008f60\n\
    add         r0,sp,#0x20\n\
    mov         r1,#0xa9\n\
    mov         r2,#0x4c\n\
    bl          fun_0803c138\n\
LAB_08008f34:\n\
    ldr         r1,DAT_08008f64\n\
    ldr         r2,DAT_08008f68\n\
    lsl         r0,r6,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08008f6c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    cmp         r6,#0x0\n\
    bne         LAB_08008f74\n\
    ldr         r0,DAT_08008f70\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r1,#0x12]\n\
    orr         r0,r2\n\
    b           LAB_08008f7e\n\
DAT_08008f60:\n\
    .4byte 0x0865FD94\n\
DAT_08008f64:\n\
    .4byte 0x040000D4\n\
DAT_08008f68:\n\
    .4byte 0x0877BCEC\n\
DAT_08008f6c:\n\
    .4byte 0x80000100\n\
DAT_08008f70:\n\
    .4byte 0x02009B00\n\
LAB_08008f74:\n\
    ldr         r0,DAT_08008f94\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08008f98\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
LAB_08008f7e:\n\
    strh        r0,[r1,#0x12]\n\
    cmp         r6,#0x13\n\
    bne         LAB_08008fa0\n\
    ldr         r0,DAT_08008f9c\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r1,#0x12]\n\
    orr         r0,r2\n\
    b           LAB_08008faa\n\
DAT_08008f94:\n\
    .4byte 0x02009B00\n\
DAT_08008f98:\n\
    .4byte 0x0000FDFF\n\
DAT_08008f9c:\n\
    .4byte 0x02009AF0\n\
LAB_08008fa0:\n\
    ldr         r0,DAT_08008fc0\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08008fc4\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
LAB_08008faa:\n\
    strh        r0,[r1,#0x12]\n\
    bl          fun_08002bcc\n\
    mov         r0,#0x0\n\
    bl          fun_08002f58\n\
    add         sp,#0x34\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08008fc0:\n\
    .4byte 0x02009AF0\n\
DAT_08008fc4:\n\
    .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_08008fc8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r4,DAT_08009064\n\
    mov         r3,#0x0\n\
    strh        r3,[r4,#0xe]\n\
    strh        r3,[r4,#0xa]\n\
    ldr         r2,DAT_08009068\n\
    str         r2,[r4,#0x24]\n\
    ldr         r0,DAT_0800906c\n\
    ldrh        r0,[r0,#0x4]\n\
    strh        r0,[r4,#0x20]\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r4,#0x20]\n\
    sub         r0,r0,r1\n\
    lsl         r0,r0,#0x4\n\
    ldr         r1,DAT_08009070\n\
    add         r0,r0,r1\n\
    str         r0,[r4,#0x28]\n\
    mov         r0,#0xff\n\
    strb        r0,[r2,#0x1]\n\
    strh        r3,[r2,#0x2]\n\
    ldr         r5,DAT_08009074\n\
    add         r0,r5,#0x0\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x10]\n\
    add         r0,r5,#0x0\n\
    sub         r0,#0x20\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x14]\n\
    add         r0,r5,#0x0\n\
    sub         r0,#0x10\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x18]\n\
    add         r5,#0x10\n\
    add         r0,r5,#0x0\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x1c]\n\
    ldr         r1,[r4,#0x10]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    add         r2,r0,#0x0\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r4,#0x14]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r4,#0x18]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r4,#0x1c]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,[r4,#0x14]\n\
    mov         r1,#0xb4\n\
    mov         r2,#0x50\n\
    bl          fun_08004894\n\
    ldr         r0,[r4,#0x18]\n\
    mov         r1,#0x3c\n\
    mov         r2,#0x50\n\
    bl          fun_08004894\n\
    ldr         r0,[r4,#0x1c]\n\
    mov         r1,#0xb4\n\
    mov         r2,#0x50\n\
    bl          fun_08004894\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08009064:\n\
    .4byte 0x0200C890\n\
DAT_08009068:\n\
    .4byte 0x02005760\n\
DAT_0800906c:\n\
    .4byte 0x02005750\n\
DAT_08009070:\n\
    .4byte 0x02005710\n\
DAT_08009074:\n\
    .4byte 0x08108E70\n\
    ");
}
__attribute__((naked)) void fun_08009078()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r4,DAT_080090a0\n\
    ldrh        r0,[r4,#0x4]\n\
    sub         r0,#0x1\n\
    strh        r0,[r4,#0x4]\n\
    bl          fun_08002968\n\
    cmp         r0,#0x2\n\
    bne         LAB_0800908e\n\
    mov         r0,#0x3c\n\
    strh        r0,[r4,#0x4]\n\
LAB_0800908e:\n\
    ldrh        r0,[r4,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080090a4\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
    b           LAB_080090a8\n\
\n\
.space 2\n\
\n\
DAT_080090a0:\n\
    .4byte 0x0200C890\n\
LAB_080090a4:\n\
    add         r0,#0x1\n\
    strh        r0,[r4,#0x4]\n\
LAB_080090a8:\n\
    ldr         r5,DAT_080090e8\n\
    ldr         r0,[r5,#0x24]\n\
    ldrb        r1,[r0,#0x4]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x4]\n\
    ldr         r0,[r5,#0x28]\n\
    ldrb        r0,[r0,#0x4]\n\
    ldrb        r1,[r5,#0x6]\n\
    cmp         r0,r1\n\
    beq         LAB_080090c2\n\
    strb        r0,[r5,#0x6]\n\
    mov         r0,#0x1e\n\
    strh        r0,[r5,#0x8]\n\
LAB_080090c2:\n\
    ldrh        r0,[r5,#0x8]\n\
    sub         r0,#0x1\n\
    strh        r0,[r5,#0x8]\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_080090d6\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
LAB_080090d6:\n\
    ldrh        r4,[r5,#0xa]\n\
    cmp         r4,#0x1\n\
    bne         LAB_080090de\n\
    b           LAB_080091fa\n\
LAB_080090de:\n\
    cmp         r4,#0x1\n\
    bgt         LAB_080090ec\n\
    cmp         r4,#0x0\n\
    beq         LAB_080090f6\n\
    b           LAB_080091fa\n\
DAT_080090e8:\n\
    .4byte 0x0200C890\n\
LAB_080090ec:\n\
    cmp         r4,#0x2\n\
    beq         LAB_08009100\n\
    cmp         r4,#0x3\n\
    beq         LAB_08009132\n\
    b           LAB_080091fa\n\
LAB_080090f6:\n\
    bl          fun_0800980c\n\
    ldr         r0,[r5,#0x24]\n\
    strh        r4,[r0,#0x2]\n\
    b           LAB_080091fa\n\
LAB_08009100:\n\
    ldr         r2,[r5,#0x28]\n\
    mov         r1,#0xff\n\
    ldrb        r0,[r2,#0x1]\n\
    eor         r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r3,r0,#0x1f\n\
    ldrh        r1,[r5,#0x2e]\n\
    ldrb        r0,[r2,#0x1]\n\
    eor         r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r0,r0,#0x1f\n\
    ldrh        r1,[r5,#0x2c]\n\
    cmp         r3,r1\n\
    bne         LAB_08009124\n\
    cmp         r0,#0x0\n\
    beq         LAB_080091fa\n\
LAB_08009124:\n\
    strh        r3,[r5,#0x2c]\n\
    ldrb        r0,[r2,#0x1]\n\
    strh        r0,[r5,#0x2e]\n\
    mov         r0,#0x2\n\
    bl          fun_0800929c\n\
    b           LAB_080091fa\n\
LAB_08009132:\n\
    ldrh        r0,[r5,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009186\n\
    ldr         r2,[r5,#0x28]\n\
    mov         r1,#0xff\n\
    ldrb        r0,[r2,#0x1]\n\
    eor         r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r4,r0,#0x1f\n\
    ldrh        r1,[r5,#0x2e]\n\
    ldrb        r2,[r2,#0x1]\n\
    eor         r1,r2\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r0,r0,#0x1f\n\
    cmp         r4,#0x0\n\
    beq         LAB_0800915a\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800915e\n\
LAB_0800915a:\n\
    bl          fun_080097cc\n\
LAB_0800915e:\n\
    cmp         r4,#0x0\n\
    beq         LAB_0800917a\n\
    ldr         r4,DAT_080091c4\n\
    ldr         r0,[r4,#0x28]\n\
    ldrh        r0,[r0,#0x2]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800917a\n\
    bl          fun_080098c8\n\
    ldrh        r1,[r4,#0x20]\n\
    cmp         r1,#0x1\n\
    bne         LAB_0800917a\n\
    ldr         r0,[r4,#0x24]\n\
    strh        r1,[r0,#0x2]\n\
LAB_0800917a:\n\
    ldr         r0,DAT_080091c4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x2]\n\
    ldrh        r0,[r0,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080091a6\n\
LAB_08009186:\n\
    ldr         r4,DAT_080091c4\n\
    ldrh        r0,[r4,#0x2]\n\
    add         r0,#0x1\n\
    mov         r5,#0x0\n\
    strh        r0,[r4,#0x2]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x74\n\
    bls         LAB_080091a6\n\
    strh        r5,[r4,#0xa]\n\
    mov         r0,#0x0\n\
    bl          fun_0800929c\n\
    bl          fun_0800980c\n\
    strh        r5,[r4,#0x2]\n\
LAB_080091a6:\n\
    ldr         r1,DAT_080091c4\n\
    ldrh        r0,[r1,#0xa]\n\
    cmp         r0,#0x3\n\
    bne         LAB_080091d6\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r2,[r1,#0x0]\n\
    ldrh        r0,[r1,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080091c8\n\
    mov         r1,#0x1\n\
    and         r1,r2\n\
    b           LAB_080091ce\n\
\n\
.space 2\n\
\n\
DAT_080091c4:\n\
    .4byte 0x0200C890\n\
LAB_080091c8:\n\
    lsr         r1,r2,#0x5\n\
    mov         r0,#0x1\n\
    and         r1,r0\n\
LAB_080091ce:\n\
    add         r6,r1,#0x0\n\
    add         r0,r6,#0x0\n\
    bl          fun_08009860\n\
LAB_080091d6:\n\
    cmp         r6,#0x0\n\
    beq         LAB_080091e8\n\
    ldr         r0,DAT_080091e4\n\
    ldrh        r0,[r0,#0x2]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_080091ec\n\
\n\
.space 2\n\
\n\
DAT_080091e4:\n\
    .4byte 0x0200C890\n\
LAB_080091e8:\n\
    ldr         r0,DAT_08009200\n\
    ldrh        r0,[r0,#0x2]\n\
LAB_080091ec:\n\
    lsl         r2,r0,#0x8\n\
    ldr         r0,DAT_08009204\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08009208\n\
    lsl         r0,r2,#0x4\n\
    lsr         r0,r0,#0x14\n\
    strh        r0,[r1,#0x0]\n\
LAB_080091fa:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009200:\n\
    .4byte 0x0200C890\n\
DAT_08009204:\n\
    .4byte 0x04000028\n\
DAT_08009208:\n\
    .4byte 0x0400002A\n\
    ");
}
__attribute__((naked)) void fun_0800920c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r4,DAT_08009250\n\
    ldrh        r5,[r4,#0xa]\n\
    add         r1,r5,#0x0\n\
    cmp         r1,#0x3\n\
    beq         LAB_08009238\n\
    cmp         r1,#0x2\n\
    bne         LAB_08009222\n\
    ldrh        r0,[r4,#0x2c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009238\n\
LAB_08009222:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08009232\n\
    ldrh        r0,[r4,#0xe]\n\
    bl          fun_080096fc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009238\n\
LAB_08009232:\n\
    ldrh        r0,[r4,#0xa]\n\
    add         r0,#0x1\n\
    strh        r0,[r4,#0xa]\n\
LAB_08009238:\n\
    ldr         r4,DAT_08009250\n\
    ldrh        r0,[r4,#0xa]\n\
    cmp         r5,r0\n\
    beq         LAB_08009292\n\
    ldrh        r0,[r4,#0xa]\n\
    cmp         r0,#0x1\n\
    beq         LAB_08009264\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08009254\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800925e\n\
    b           LAB_0800928a\n\
DAT_08009250:\n\
    .4byte 0x0200C890\n\
LAB_08009254:\n\
    cmp         r0,#0x2\n\
    beq         LAB_0800926e\n\
    cmp         r0,#0x3\n\
    beq         LAB_0800927a\n\
    b           LAB_0800928a\n\
LAB_0800925e:\n\
    bl          fun_0800980c\n\
    b           LAB_0800928a\n\
LAB_08009264:\n\
    bl          fun_0803c1a4\n\
    mov         r0,#0x0\n\
    strh        r0,[r4,#0xc]\n\
    b           LAB_0800928a\n\
LAB_0800926e:\n\
    mov         r0,#0x0\n\
    strh        r0,[r4,#0xc]\n\
    ldr         r1,[r4,#0x24]\n\
    ldrh        r0,[r4,#0xe]\n\
    strb        r0,[r1,#0x1]\n\
    b           LAB_0800928a\n\
LAB_0800927a:\n\
    ldrh        r0,[r4,#0x20]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009286\n\
    ldr         r1,[r4,#0x24]\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x2]\n\
LAB_08009286:\n\
    mov         r0,#0x0\n\
    strh        r0,[r4,#0x0]\n\
LAB_0800928a:\n\
    ldr         r0,DAT_08009298\n\
    ldrh        r0,[r0,#0xa]\n\
    bl          fun_0800929c\n\
LAB_08009292:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009298:\n\
    .4byte 0x0200C890\n\
    ");
}
__attribute__((naked)) void fun_0800929c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x20\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    bl          fun_08002bcc\n\
    mov         r0,#0x0\n\
    bl          fun_08002fbc\n\
    mov         r0,#0x1\n\
    bl          fun_08002f58\n\
    cmp         r4,#0x1\n\
    beq         LAB_08009350\n\
    cmp         r4,#0x1\n\
    bgt         LAB_080092ca\n\
    cmp         r4,#0x0\n\
    beq         LAB_080092d8\n\
    b           LAB_08009682\n\
LAB_080092ca:\n\
    cmp         r4,#0x2\n\
    bne         LAB_080092d0\n\
    b           LAB_0800946c\n\
LAB_080092d0:\n\
    cmp         r4,#0x3\n\
    bne         LAB_080092d6\n\
    b           LAB_08009578\n\
LAB_080092d6:\n\
    b           LAB_08009682\n\
LAB_080092d8:\n\
    ldr         r5,DAT_0800933c\n\
    ldr         r1,[r5,#0x14]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080092ec\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
LAB_080092ec:\n\
    ldr         r1,[r5,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080092fe\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
LAB_080092fe:\n\
    ldr         r1,[r5,#0x1c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08009310\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
LAB_08009310:\n\
    ldr         r0,DAT_08009340\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08008d6c\n\
    ldr         r0,DAT_08009344\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r1,DAT_08009348\n\
    add         r0,r1,#0x0\n\
    ldrh        r3,[r2,#0x12]\n\
    and         r0,r3\n\
    strh        r0,[r2,#0x12]\n\
    ldr         r0,DAT_0800934c\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r2,[r0,#0x12]\n\
    and         r1,r2\n\
    strh        r1,[r0,#0x12]\n\
    ldr         r1,[r5,#0x24]\n\
    mov         r0,#0xff\n\
    strb        r0,[r1,#0x1]\n\
    ldr         r0,[r5,#0x24]\n\
    strh        r4,[r0,#0x2]\n\
    b           LAB_08009682\n\
DAT_0800933c:\n\
    .4byte 0x0200C890\n\
DAT_08009340:\n\
    .4byte 0x0200C8C0\n\
DAT_08009344:\n\
    .4byte 0x02009B00\n\
DAT_08009348:\n\
    .4byte 0x0000FDFF\n\
DAT_0800934c:\n\
    .4byte 0x02009AF0\n\
LAB_08009350:\n\
    ldr         r0,DAT_08009440\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    add         r3,r0,#0x0\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08009444\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r2,DAT_08009448\n\
    ldr         r1,[r2,#0x10]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r2,#0x1c]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r2,#0x18]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_0800944c\n\
    mov         r4,#0xc0\n\
    lsl         r4,r4,#0x13\n\
    mov         r3,#0x0\n\
    ldr         r1,DAT_08009450\n\
LAB_08009390:\n\
    add         r0,r2,r4\n\
    strb        r3,[r0,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,r1\n\
    bls         LAB_08009390\n\
    ldr         r6,DAT_08009454\n\
    add         r0,r7,#0x0\n\
    add         r1,r6,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r9,r1\n\
    mov         r1,#0x78\n\
    str         r1,[sp,#0x0]\n\
    mov         r0,#0xa0\n\
    str         r0,[sp,#0x4]\n\
    mov         r5,#0xf0\n\
    str         r5,[sp,#0x8]\n\
    mov         r2,#0x0\n\
    mov         r8,r2\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r1,[sp,#0x14]\n\
    str         r0,[sp,#0x18]\n\
    str         r5,[sp,#0x1c]\n\
    add         r0,r6,#0x0\n\
    mov         r1,r9\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    ldr         r1,DAT_08009458\n\
    ldr         r4,DAT_08009448\n\
    ldrh        r3,[r4,#0xe]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r6,#0x0\n\
    bl          fun_0803d070\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,#0x81\n\
    str         r1,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r0,#0xe\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x68\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    str         r5,[sp,#0x1c]\n\
    add         r0,r6,#0x0\n\
    mov         r1,r9\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    ldr         r1,DAT_0800945c\n\
    ldr         r2,DAT_08009460\n\
    ldrh        r3,[r4,#0xe]\n\
    lsr         r0,r3,#0x1\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08009464\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    ldr         r1,[r4,#0x14]\n\
    ldr         r0,DAT_08009468\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    mov         r3,r8\n\
    strh        r3,[r4,#0x2c]\n\
    ldr         r1,[r4,#0x24]\n\
    mov         r0,#0xff\n\
    strb        r0,[r1,#0x1]\n\
    ldr         r0,[r4,#0x24]\n\
    strh        r3,[r0,#0x2]\n\
    b           LAB_08009682\n\
DAT_08009440:\n\
    .4byte 0x02009B00\n\
DAT_08009444:\n\
    .4byte 0x02009AF0\n\
DAT_08009448:\n\
    .4byte 0x0200C890\n\
DAT_0800944c:\n\
    .4byte 0x081476A0\n\
DAT_08009450:\n\
    .4byte 0x000095FF\n\
DAT_08009454:\n\
    .4byte 0x0600A000\n\
DAT_08009458:\n\
    .4byte 0x0877BC44\n\
DAT_0800945c:\n\
    .4byte 0x040000D4\n\
DAT_08009460:\n\
    .4byte 0x0877BCEC\n\
DAT_08009464:\n\
    .4byte 0x80000100\n\
DAT_08009468:\n\
    .4byte 0x0000FDFF\n\
LAB_0800946c:\n\
    ldr         r0,DAT_08009530\n\
    ldr         r1,[r0,#0x14]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_08009534\n\
    mov         r4,#0xc0\n\
    lsl         r4,r4,#0x13\n\
    mov         r3,#0x0\n\
    ldr         r1,DAT_08009538\n\
LAB_08009488:\n\
    add         r0,r2,r4\n\
    strb        r3,[r0,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,r1\n\
    bls         LAB_08009488\n\
    ldr         r5,DAT_0800953c\n\
    add         r0,r7,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803d070\n\
    mov         r7,#0xc0\n\
    lsl         r7,r7,#0x13\n\
    mov         r1,#0x78\n\
    str         r1,[sp,#0x0]\n\
    mov         r2,#0xa0\n\
    str         r2,[sp,#0x4]\n\
    mov         r6,#0xf0\n\
    str         r6,[sp,#0x8]\n\
    str         r1,[sp,#0xc]\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x10]\n\
    str         r1,[sp,#0x14]\n\
    str         r2,[sp,#0x18]\n\
    str         r6,[sp,#0x1c]\n\
    add         r0,r5,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x78\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    ldr         r4,DAT_08009530\n\
    ldrh        r0,[r4,#0x2c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009550\n\
    ldr         r1,DAT_08009540\n\
    ldrh        r2,[r4,#0x2e]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803d070\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,#0x81\n\
    str         r1,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r0,#0x82\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x68\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    str         r6,[sp,#0x1c]\n\
    add         r0,r5,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    ldr         r1,DAT_08009544\n\
    ldr         r2,DAT_08009548\n\
    ldrh        r3,[r4,#0x2e]\n\
    lsr         r0,r3,#0x1\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_0800954c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    ldr         r1,[r4,#0x1c]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    b           LAB_08009558\n\
DAT_08009530:\n\
    .4byte 0x0200C890\n\
DAT_08009534:\n\
    .4byte 0x081476A0\n\
DAT_08009538:\n\
    .4byte 0x000095FF\n\
DAT_0800953c:\n\
    .4byte 0x0600A000\n\
DAT_08009540:\n\
    .4byte 0x0877BC44\n\
DAT_08009544:\n\
    .4byte 0x040000D4\n\
DAT_08009548:\n\
    .4byte 0x0877BCEC\n\
DAT_0800954c:\n\
    .4byte 0x80000100\n\
LAB_08009550:\n\
    ldr         r1,[r4,#0x1c]\n\
    ldr         r0,DAT_08009570\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
LAB_08009558:\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r3,DAT_08009574\n\
    ldr         r1,[r3,#0x18]\n\
    ldr         r0,DAT_08009570\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    mov         r2,#0x0\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,[r3,#0x24]\n\
    strh        r2,[r0,#0x2]\n\
    b           LAB_08009682\n\
\n\
.space 2\n\
\n\
DAT_08009570:\n\
    .4byte 0x0000FDFF\n\
DAT_08009574:\n\
    .4byte 0x0200C890\n\
LAB_08009578:\n\
    ldr         r5,DAT_0800969c\n\
    ldr         r1,[r5,#0x1c]\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x2\n\
    add         r2,r3,#0x0\n\
    mov         r0,#0x0\n\
    mov         r10,r0\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,[r5,#0x18]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_080096a0\n\
    ldr         r6,DAT_080096a4\n\
    add         r1,r6,#0x0\n\
    bl          fun_0803d070\n\
    mov         r7,#0xc0\n\
    lsl         r7,r7,#0x13\n\
    mov         r1,#0x78\n\
    mov         r9,r1\n\
    str         r1,[sp,#0x0]\n\
    mov         r2,#0xa0\n\
    mov         r8,r2\n\
    str         r2,[sp,#0x4]\n\
    mov         r4,#0xf0\n\
    str         r4,[sp,#0x8]\n\
    mov         r3,r10\n\
    str         r3,[sp,#0xc]\n\
    str         r3,[sp,#0x10]\n\
    str         r1,[sp,#0x14]\n\
    str         r2,[sp,#0x18]\n\
    str         r4,[sp,#0x1c]\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    ldr         r1,DAT_080096a8\n\
    ldrh        r5,[r5,#0xe]\n\
    lsl         r0,r5,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r6,#0x0\n\
    bl          fun_0803d070\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,#0x81\n\
    str         r1,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r0,#0xe\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x68\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    str         r4,[sp,#0x1c]\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    mov         r0,r9\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,r8\n\
    str         r1,[sp,#0x4]\n\
    str         r4,[sp,#0x8]\n\
    mov         r2,r10\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    str         r4,[sp,#0x1c]\n\
    add         r0,r7,#0x0\n\
    add         r1,r6,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    mov         r4,#0x0\n\
LAB_08009628:\n\
    add         r0,r3,#0x0\n\
    add         r0,#0x78\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r1,#0x0\n\
LAB_08009632:\n\
    add         r0,r3,r6\n\
    strb        r4,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r1,#0x77\n\
    bls         LAB_08009632\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x9f\n\
    bls         LAB_08009628\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    mov         r5,#0xc0\n\
    lsl         r5,r5,#0x13\n\
    mov         r4,#0x0\n\
LAB_0800965a:\n\
    mov         r1,#0x0\n\
    add         r2,#0x1\n\
LAB_0800965e:\n\
    add         r0,r3,r5\n\
    strb        r4,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r1,#0x77\n\
    bls         LAB_0800965e\n\
    add         r0,r3,#0x0\n\
    add         r0,#0x78\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r0,r2,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x9f\n\
    bls         LAB_0800965a\n\
LAB_08009682:\n\
    bl          fun_08002bcc\n\
    mov         r0,#0x0\n\
    bl          fun_08002f58\n\
    add         sp,#0x20\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800969c:\n\
    .4byte 0x0200C890\n\
DAT_080096a0:\n\
    .4byte 0x081476A0\n\
DAT_080096a4:\n\
    .4byte 0x0600A000\n\
DAT_080096a8:\n\
    .4byte 0x0877BC44\n\
\n\
    ");
}
