void fun_08010528()
{
}
__attribute__((naked)) void fun_0801052c()
{
    asm("\n\
    mov        r1,#0x1\n\
    strb       r1,[r0,#0x18]\n\
    bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08010534()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x2\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    beq         LAB_0801054c\n\
    cmp         r0,#0x1\n\
    beq         LAB_08010558\n\
    b           LAB_0801055e\n\
LAB_0801054c:\n\
    mov         r1,#0xee\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_0801055e\n\
LAB_08010558:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800eb28\n\
LAB_0801055e:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_08010564()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         r1,r3,#0x0\n\
    mov         r2,#0xc1\n\
    lsl         r2,r2,#0x3\n\
    ldr         r3,DAT_080105a0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0801059a\n\
    ldr         r1,DAT_080105a4\n\
    mov         r2,#0x0\n\
    mov         r0,#0xe\n\
    strh        r0,[r1,#0x10]\n\
    ldr         r0,DAT_080105a8\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_080105ac\n\
    ldr         r2,DAT_080105b0\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x4\n\
    strb        r0,[r4,#0x18]\n\
LAB_0801059a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080105a0:\n\
    .4byte 0x000008C7\n\
DAT_080105a4:\n\
    .4byte 0x020006A0\n\
DAT_080105a8:\n\
    .4byte 0x0200DCA0\n\
DAT_080105ac:\n\
    .4byte 0x0200DC90\n\
DAT_080105b0:\n\
    .4byte 0x00000373\n\
    ");
}
__attribute__((naked)) void fun_080105b4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         r1,r3,#0x0\n\
    ldr         r2,DAT_080105dc\n\
    ldr         r3,DAT_080105e0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_080105d6\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x8]\n\
    ldr         r1,DAT_080105e4\n\
    strb        r0,[r1,#0x18]\n\
    mov         r0,#0x1\n\
    strb        r0,[r4,#0x18]\n\
LAB_080105d6:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080105dc:\n\
    .4byte 0x000005AC\n\
DAT_080105e0:\n\
    .4byte 0x000008C7\n\
DAT_080105e4:\n\
    .4byte 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_080105e8()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    ldr         r0,DAT_0801062c\n\
    add         r4,r4,r0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010630\n\
    add         r0,r0,r1\n\
    ldrb        r4,[r4,#0x0]\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bls         LAB_08010640\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010634\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010638\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_0801063c\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    b           LAB_08010680\n\
\n\
.space 2\n\
\n\
DAT_0801062c:\n\
    .4byte 0x00000E05\n\
DAT_08010630:\n\
    .4byte 0x00000E07\n\
DAT_08010634:\n\
    .4byte 0x00000E08\n\
DAT_08010638:\n\
    .4byte 0x00000E0C\n\
DAT_0801063c:\n\
    .4byte 0x0200DC4C\n\
LAB_08010640:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010668\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bls         LAB_08010670\n\
    ldr         r1,DAT_0801066c\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010668\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x4\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_08010680\n\
\n\
.space 2\n\
\n\
DAT_08010668:\n\
    .4byte 0x00000E08\n\
DAT_0801066c:\n\
    .4byte 0x0200DC4C\n\
LAB_08010670:\n\
    ldr         r0,DAT_080106f0\n\
    mov         r4,#0x0\n\
    str         r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_080106f4\n\
    add         r0,r0,r2\n\
    strh        r4,[r0,#0x0]\n\
LAB_08010680:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080106f4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x78\n\
    bls         LAB_080106b0\n\
    ldr         r1,DAT_080106f8\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_080106fc\n\
    mov         r2,#0x8f\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_08010700\n\
    bl          fun_08010a4c\n\
    ldr         r1,DAT_08010704\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_080106b0:\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    ldr         r0,DAT_08010708\n\
    add         r4,r4,r0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0801070c\n\
    add         r0,r0,r1\n\
    ldrb        r4,[r4,#0x0]\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcs         LAB_0801071c\n\
    ldr         r1,DAT_08010710\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010714\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010718\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_0801075c\n\
DAT_080106f0:\n\
    .4byte 0x0200DC4C\n\
DAT_080106f4:\n\
    .4byte 0x00000E08\n\
DAT_080106f8:\n\
    .4byte 0x0200DCA0\n\
DAT_080106fc:\n\
    .4byte 0x0200DC90\n\
DAT_08010700:\n\
    .4byte 0x020006A0\n\
DAT_08010704:\n\
    .4byte 0x0200DC28\n\
DAT_08010708:\n\
    .4byte 0x00000E05\n\
DAT_0801070c:\n\
    .4byte 0x00000E06\n\
DAT_08010710:\n\
    .4byte 0x0200DC34\n\
DAT_08010714:\n\
    .4byte 0x00000E0A\n\
DAT_08010718:\n\
    .4byte 0x00000E0C\n\
LAB_0801071c:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010744\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bls         LAB_0801074c\n\
    ldr         r1,DAT_08010748\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010744\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x4\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_0801075c\n\
\n\
.space 2\n\
\n\
DAT_08010744:\n\
    .4byte 0x00000E0A\n\
DAT_08010748:\n\
    .4byte 0x0200DC34\n\
LAB_0801074c:\n\
    ldr         r0,DAT_08010790\n\
    mov         r4,#0x0\n\
    str         r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010794\n\
    add         r0,r0,r2\n\
    strh        r4,[r0,#0x0]\n\
LAB_0801075c:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010794\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x78\n\
    bls         LAB_0801078a\n\
    ldr         r1,DAT_08010798\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0801079c\n\
    ldr         r2,DAT_080107a0\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_080107a4\n\
    bl          fun_08010a4c\n\
    ldr         r1,DAT_080107a8\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0801078a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08010790:\n\
    .4byte 0x0200DC34\n\
DAT_08010794:\n\
    .4byte 0x00000E0A\n\
DAT_08010798:\n\
    .4byte 0x0200DCA0\n\
DAT_0801079c:\n\
    .4byte 0x0200DC90\n\
DAT_080107a0:\n\
    .4byte 0x0000023A\n\
DAT_080107a4:\n\
    .4byte 0x020006A0\n\
DAT_080107a8:\n\
    .4byte 0x0200DC28\n\
    ");
}
__attribute__((naked)) void fun_080107ac()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6}\n\
    sub         sp,#0x4\n\
    bl          fun_0800ddc8\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x30\n\
    bl          fun_08002c04\n\
    add         r0,#0x37\n\
    ldr         r1,DAT_08010894\n\
    mov         r9,r1\n\
    add         r4,r9\n\
    strb        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r5,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x1e\n\
    bl          fun_08002c04\n\
    add         r4,r9\n\
    ldrb        r1,[r4,#0x0]\n\
    sub         r1,#0x14\n\
    sub         r1,r1,r0\n\
    ldr         r2,DAT_08010898\n\
    mov         r8,r2\n\
    add         r5,r8\n\
    strb        r1,[r5,#0x0]\n\
    bl          fun_080020a4\n\
    add         r6,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r5,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r5,r8\n\
    add         r4,r9\n\
    add         r0,r8\n\
    ldrb        r4,[r4,#0x0]\n\
    ldrb        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
    asr         r0,r0,#0x1\n\
    ldrb        r5,[r5,#0x0]\n\
    add         r0,r5,r0\n\
    ldr         r1,DAT_0801089c\n\
    add         r6,r6,r1\n\
    strb        r0,[r6,#0x0]\n\
    mov         r0,#0x1\n\
    bl          fun_08039d38\n\
    ldr         r4,DAT_080108a0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_080108a4\n\
    str         r0,[r5,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r6,DAT_080108a8\n\
    str         r0,[r6,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,[r5,#0x0]\n\
    add         r0,r8\n\
    ldrb        r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x1\n\
    add         r0,#0x5\n\
    strh        r0,[r1,#0x2]\n\
    mov         r5,#0x80\n\
    strh        r5,[r1,#0x4]\n\
    bl          fun_080020a4\n\
    ldr         r1,[r6,#0x0]\n\
    add         r0,r9\n\
    ldrb        r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x1\n\
    add         r0,#0x5\n\
    strh        r0,[r1,#0x2]\n\
    strh        r5,[r1,#0x4]\n\
    sub         r4,#0x90\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_080108ac\n\
    str         r0,[r1,#0x0]\n\
    mov         r1,#0x3b\n\
    strh        r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r1,r2,#0x0\n\
    ldrh        r2,[r0,#0x12]\n\
    orr         r1,r2\n\
    strh        r1,[r0,#0x12]\n\
    ldr         r0,DAT_080108b0\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bls         LAB_08010888\n\
    b           LAB_080109c0\n\
LAB_08010888:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_080108b4\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_08010894:\n\
    .4byte 0x00000E07\n\
DAT_08010898:\n\
    .4byte 0x00000E06\n\
DAT_0801089c:\n\
    .4byte 0x00000E05\n\
DAT_080108a0:\n\
    .4byte 0x084495B8\n\
DAT_080108a4:\n\
    .4byte 0x0200DC24\n\
DAT_080108a8:\n\
    .4byte 0x0200DC18\n\
DAT_080108ac:\n\
    .4byte 0x0200DC20\n\
DAT_080108b0:\n\
    .4byte 0x020117E0\n\
DAT_080108b4:\n\
    .4byte 0x080108B8\n\
PTR_DAT_080108b8:\n\
    .4byte LAB_080108d8\n\
    .4byte LAB_080108d8\n\
    .4byte LAB_0801097c\n\
    .4byte LAB_080109c0\n\
    .4byte LAB_080109c0\n\
    .4byte LAB_080109c0\n\
    .4byte LAB_08010934\n\
    .4byte LAB_080108d8\n\
LAB_080108d8:\n\
    ldr         r4,DAT_08010924\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_08010928\n\
    str         r0,[r5,#0x0]\n\
    ldr         r2,DAT_0801092c\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x2]\n\
    sub         r1,#0x4\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x4]\n\
    sub         r1,#0x2c\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    add         r4,#0x20\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08010930\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,[r5,#0x0]\n\
    ldrh        r1,[r2,#0x2]\n\
    sub         r1,#0x1\n\
    strh        r1,[r0,#0x2]\n\
    ldrh        r1,[r2,#0x4]\n\
    add         r1,#0x20\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    bl          fun_0800482c\n\
    b           LAB_080109c0\n\
\n\
.space 2\n\
\n\
DAT_08010924:\n\
    .4byte 0x08449538\n\
DAT_08010928:\n\
    .4byte 0x0200DC50\n\
DAT_0801092c:\n\
    .4byte 0x020006A0\n\
DAT_08010930:\n\
    .4byte 0x0200DC3C\n\
LAB_08010934:\n\
    ldr         r4,DAT_0801096c\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_08010970\n\
    str         r0,[r5,#0x0]\n\
    ldr         r2,DAT_08010974\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x2]\n\
    add         r1,#0x5\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x4]\n\
    sub         r1,#0x2c\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    sub         r4,#0x20\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08010978\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,[r5,#0x0]\n\
    ldrh        r1,[r2,#0x2]\n\
    add         r1,#0x1b\n\
    b           LAB_080109b8\n\
\n\
.space 2\n\
\n\
DAT_0801096c:\n\
    .4byte 0x08449578\n\
DAT_08010970:\n\
    .4byte 0x0200DC1C\n\
DAT_08010974:\n\
    .4byte 0x020006A0\n\
DAT_08010978:\n\
    .4byte 0x0200DC3C\n\
LAB_0801097c:\n\
    ldr         r4,DAT_08010a1c\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r5,DAT_08010a20\n\
    str         r0,[r5,#0x0]\n\
    mov         r1,#0x40\n\
    ldrh        r2,[r0,#0x12]\n\
    orr         r1,r2\n\
    strh        r1,[r0,#0x12]\n\
    ldr         r2,DAT_08010a24\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x2]\n\
    sub         r1,#0x25\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,[r2,#0xc]\n\
    ldrh        r1,[r1,#0x4]\n\
    sub         r1,#0x2c\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    sub         r4,#0x20\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08010a28\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,[r5,#0x0]\n\
    ldrh        r1,[r2,#0x2]\n\
    add         r1,#0x2\n\
LAB_080109b8:\n\
    strh        r1,[r0,#0x2]\n\
    ldrh        r1,[r2,#0x4]\n\
    add         r1,#0x10\n\
    strh        r1,[r0,#0x4]\n\
LAB_080109c0:\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0xe1\n\
    lsl         r0,r0,#0x1\n\
    bl          fun_08002c04\n\
    add         r0,#0x96\n\
    lsl         r0,r0,#0x1\n\
    ldr         r1,DAT_08010a2c\n\
    add         r4,r4,r1\n\
    mov         r5,#0x0\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08010a30\n\
    add         r0,r0,r2\n\
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
    ldr         r0,DAT_08010a34\n\
    str         r5,[r0,#0x0]\n\
    ldr         r1,DAT_08010a38\n\
    mov         r0,#0x3c\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08010a3c\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_08010a40\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_08010a44\n\
    str         r5,[r0,#0x0]\n\
    ldr         r0,DAT_08010a48\n\
    str         r5,[r0,#0x0]\n\
    add         sp,#0x4\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08010a1c:\n\
    .4byte 0x08449578\n\
DAT_08010a20:\n\
    .4byte 0x0200DC44\n\
DAT_08010a24:\n\
    .4byte 0x020006A0\n\
DAT_08010a28:\n\
    .4byte 0x0200DC3C\n\
DAT_08010a2c:\n\
    .4byte 0x00000E0C\n\
DAT_08010a30:\n\
    .4byte 0x00000E05\n\
DAT_08010a34:\n\
    .4byte 0x0200DC48\n\
DAT_08010a38:\n\
    .4byte 0x0200DC40\n\
DAT_08010a3c:\n\
    .4byte 0x0200DC2C\n\
DAT_08010a40:\n\
    .4byte 0x0200DC28\n\
DAT_08010a44:\n\
    .4byte 0x0200DC4C\n\
DAT_08010a48:\n\
    .4byte 0x0200DC34\n\
    ");
}
