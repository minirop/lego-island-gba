__attribute__((naked)) void fun_080455fc()
{
    asm("\n\
    push        {r1,r2,r3}\n\
    push        {r4,lr}\n\
    sub         sp,#0x58\n\
    ldr         r1,[sp,#0x60]\n\
    mov         r3,sp\n\
    mov         r4,#0x0\n\
    mov         r2,#0x82\n\
    lsl         r2,r2,#0x2\n\
    strh        r2,[r3,#0xc]\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x10]\n\
    ldr         r0,DAT_08045634\n\
    str         r0,[sp,#0x8]\n\
    str         r0,[sp,#0x14]\n\
    ldr         r0,DAT_08045638\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[sp,#0x54]\n\
    add         r2,sp,#0x64\n\
    mov         r0,sp\n\
    bl          fun_080458b8\n\
    ldr         r1,[sp,#0x0]\n\
    strb        r4,[r1,#0x0]\n\
    add         sp,#0x58\n\
    pop         {r4}\n\
    pop         {r3}\n\
    add         sp,#0xc\n\
    bx          r3\n\
DAT_08045634:\n\
    .4byte 0x7FFFFFFF\n\
DAT_08045638:\n\
    .4byte 0x087D6554\n\
    ");
}
__attribute__((naked)) void fun_0804563c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r2,r0,#0x0\n\
    lsl         r1,r1,#0x18\n\
    lsr         r7,r1,#0x18\n\
    mov         r0,#0x3\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    bne         LAB_080456a2\n\
    mov         r5,#0x0\n\
    mov         r0,#0x0\n\
    ldr         r4,[r2,#0x0]\n\
LAB_08045652:\n\
    lsl         r5,r5,#0x8\n\
    orr         r5,r7\n\
    add         r0,#0x1\n\
    cmp         r0,#0x3\n\
    bls         LAB_08045652\n\
    add         r3,r2,#0x0\n\
    ldr         r0,DAT_08045678\n\
    mov         r12,r0\n\
    add         r0,r4,r0\n\
    bic         r0,r4\n\
    ldr         r6,DAT_0804567c\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    bne         LAB_080456a0\n\
    add         r1,r5,#0x0\n\
    eor         r1,r4\n\
    ldr         r2,DAT_08045678\n\
    b           LAB_08045696\n\
\n\
.space 2\n\
\n\
DAT_08045678:\n\
    .4byte 0xFEFEFEFF\n\
DAT_0804567c:\n\
    .4byte 0x80808080\n\
LAB_08045680:\n\
    add         r3,#0x4\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r1,r12\n\
    add         r0,r2,r1\n\
    bic         r0,r2\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    bne         LAB_080456a0\n\
    add         r1,r5,#0x0\n\
    eor         r1,r2\n\
    mov         r2,r12\n\
LAB_08045696:\n\
    add         r0,r1,r2\n\
    bic         r0,r1\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045680\n\
LAB_080456a0:\n\
    add         r2,r3,#0x0\n\
LAB_080456a2:\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080456b8\n\
    cmp         r0,r7\n\
    beq         LAB_080456c2\n\
LAB_080456ac:\n\
    add         r2,#0x1\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080456b8\n\
    cmp         r0,r7\n\
    bne         LAB_080456ac\n\
LAB_080456b8:\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,r7\n\
    beq         LAB_080456c2\n\
    mov         r0,#0x0\n\
    b           LAB_080456c4\n\
LAB_080456c2:\n\
    add         r0,r2,#0x0\n\
LAB_080456c4:\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080456c8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r2,r0,#0x0\n\
    add         r3,r1,#0x0\n\
    orr         r0,r3\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804570e\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r1,r0\n\
    bne         LAB_0804570e\n\
    ldr         r5,DAT_080456f4\n\
    ldr         r4,DAT_080456f8\n\
LAB_080456e4:\n\
    ldr         r1,[r2,#0x0]\n\
    add         r0,r1,r5\n\
    bic         r0,r1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_080456fc\n\
    mov         r0,#0x0\n\
    b           LAB_08045720\n\
DAT_080456f4:\n\
    .4byte 0xFEFEFEFF\n\
DAT_080456f8:\n\
    .4byte 0x80808080\n\
LAB_080456fc:\n\
    add         r2,#0x4\n\
    add         r3,#0x4\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r1,r0\n\
    beq         LAB_080456e4\n\
    b           LAB_0804570e\n\
LAB_0804570a:\n\
    add         r2,#0x1\n\
    add         r3,#0x1\n\
LAB_0804570e:\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804571a\n\
    ldrb        r1,[r3,#0x0]\n\
    cmp         r0,r1\n\
    beq         LAB_0804570a\n\
LAB_0804571a:\n\
    ldrb        r2,[r2,#0x0]\n\
    ldrb        r3,[r3,#0x0]\n\
    sub         r0,r2,r3\n\
LAB_08045720:\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08045724()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r6,r0,#0x0\n\
    add         r3,r6,#0x0\n\
    add         r2,r1,#0x0\n\
    add         r0,r2,#0x0\n\
    orr         r0,r6\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804575c\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r5,DAT_08045744\n\
    add         r0,r1,r5\n\
    bic         r0,r1\n\
    ldr         r4,DAT_08045748\n\
    b           LAB_08045756\n\
DAT_08045744:\n\
    .4byte 0xFEFEFEFF\n\
DAT_08045748:\n\
    .4byte 0x80808080\n\
LAB_0804574c:\n\
    ldmia       r2!,{r0}\n\
    stmia       r3!,{r0}\n\
    ldr         r1,[r2,#0x0]\n\
    add         r0,r1,r5\n\
    bic         r0,r1\n\
LAB_08045756:\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804574c\n\
LAB_0804575c:\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    add         r2,#0x1\n\
    add         r3,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804575c\n\
    add         r0,r6,#0x0\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08045770()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r1,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    mov         r0,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080457a8\n\
    add         r2,r1,#0x0\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r4,DAT_0804578c\n\
    add         r0,r1,r4\n\
    bic         r0,r1\n\
    ldr         r3,DAT_08045790\n\
    b           LAB_0804579c\n\
DAT_0804578c:\n\
    .4byte 0xFEFEFEFF\n\
DAT_08045790:\n\
    .4byte 0x80808080\n\
LAB_08045794:\n\
    add         r2,#0x4\n\
    ldr         r1,[r2,#0x0]\n\
    add         r0,r1,r4\n\
    bic         r0,r1\n\
LAB_0804579c:\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045794\n\
    add         r1,r2,#0x0\n\
    b           LAB_080457a8\n\
LAB_080457a6:\n\
    add         r1,#0x1\n\
LAB_080457a8:\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080457a6\n\
    sub         r0,r1,r5\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080457b4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r7,r0,#0x0\n\
    add         r4,r7,#0x0\n\
    add         r3,r1,#0x0\n\
    add         r0,r3,#0x0\n\
    orr         r0,r7\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080457f6\n\
    cmp         r2,#0x3\n\
    bls         LAB_080457f6\n\
    ldr         r1,[r3,#0x0]\n\
    ldr         r6,DAT_080457d8\n\
    add         r0,r1,r6\n\
    bic         r0,r1\n\
    ldr         r5,DAT_080457dc\n\
    b           LAB_080457f0\n\
DAT_080457d8:\n\
    .4byte 0xFEFEFEFF\n\
DAT_080457dc:\n\
    .4byte 0x80808080\n\
LAB_080457e0:\n\
    sub         r2,#0x4\n\
    ldmia       r3!,{r0}\n\
    stmia       r4!,{r0}\n\
    cmp         r2,#0x3\n\
    bls         LAB_080457f6\n\
    ldr         r1,[r3,#0x0]\n\
    add         r0,r1,r6\n\
    bic         r0,r1\n\
LAB_080457f0:\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_080457e0\n\
LAB_080457f6:\n\
    cmp         r2,#0x0\n\
    beq         LAB_0804580a\n\
    sub         r2,#0x1\n\
    ldrb        r0,[r3,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    add         r3,#0x1\n\
    add         r4,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080457f6\n\
LAB_0804580a:\n\
    add         r0,r2,#0x0\n\
    sub         r2,#0x1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045820\n\
    mov         r1,#0x0\n\
LAB_08045814:\n\
    strb        r1,[r4,#0x0]\n\
    add         r4,#0x1\n\
    add         r0,r2,#0x0\n\
    sub         r2,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045814\n\
LAB_08045820:\n\
    add         r0,r7,#0x0\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08045824()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r1,#0x0\n\
    ldr         r1,[r4,#0x8]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804583c\n\
    add         r1,r4,#0x0\n\
    bl          fun_08047d00\n\
    mov         r1,#0x0\n\
    str         r1,[r4,#0x8]\n\
    str         r1,[r4,#0x4]\n\
    b           LAB_08045840\n\
LAB_0804583c:\n\
    str         r1,[r4,#0x4]\n\
    mov         r0,#0x0\n\
LAB_08045840:\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08045844()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r4,DAT_080458b4\n\
    add         sp,r4\n\
    add         r5,r0,#0x0\n\
    ldr         r0,[r5,#0x54]\n\
    str         r0,[sp,#0x54]\n\
    mov         r3,sp\n\
    mov         r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    ldrh        r4,[r5,#0xc]\n\
    and         r0,r4\n\
    mov         r4,#0x0\n\
    strh        r0,[r3,#0xc]\n\
    ldrh        r0,[r5,#0xe]\n\
    strh        r0,[r3,#0xe]\n\
    ldr         r0,[r5,#0x1c]\n\
    str         r0,[sp,#0x1c]\n\
    ldr         r0,[r5,#0x24]\n\
    str         r0,[sp,#0x24]\n\
    add         r0,sp,#0x58\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x10]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x3\n\
    str         r0,[sp,#0x8]\n\
    str         r0,[sp,#0x14]\n\
    str         r4,[sp,#0x18]\n\
    mov         r0,sp\n\
    bl          fun_080458b8\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    blt         LAB_08045894\n\
    mov         r0,sp\n\
    bl          fun_08047890\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045894\n\
    mov         r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
LAB_08045894:\n\
    mov         r1,sp\n\
    mov         r0,#0x40\n\
    ldrh        r1,[r1,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080458a8\n\
    mov         r0,#0x40\n\
    ldrh        r1,[r5,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r5,#0xc]\n\
LAB_080458a8:\n\
    add         r0,r4,#0x0\n\
    mov         r3,#0x8b\n\
    lsl         r3,r3,#0x3\n\
    add         sp,r3\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
DAT_080458b4:\n\
    .4byte 0xFFFFFBA8\n\
    ");
}
__attribute__((naked)) void fun_080458b8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r3,r2,#0x0\n\
    ldr         r0,[r4,#0x54]\n\
    add         r1,r4,#0x0\n\
    add         r2,r5,#0x0\n\
    bl          fun_080458cc\n\
    pop         {r4,r5,pc}\n\
    ");
}
__attribute__((naked)) void fun_080458cc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    ldr         r4,LAB_08045934\n\
    add         sp,r4\n\
    str         r0,[sp,#0x1dc]\n\
    str         r1,[sp,#0x1e0]\n\
    add         r4,r2,#0x0\n\
    mov         r10,r3\n\
    bl          fun_08047fc8\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[sp,#0x1f8]\n\
    mov         r1,#0x0\n\
    add         r0,sp,#0x1d0\n\
    str         r1,[r0,#0x0]\n\
    ldr         r1,[sp,#0x1e0]\n\
    ldr         r0,[r1,#0x54]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080458fe\n\
    ldr         r0,LAB_08045938\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x54]\n\
LAB_080458fe:\n\
    ldr         r2,[sp,#0x1e0]\n\
    ldr         r1,[r2,#0x54]\n\
    ldr         r0,[r1,#0x38]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804590e\n\
    add         r0,r1,#0x0\n\
    bl          fun_08047a20\n\
LAB_0804590e:\n\
    mov         r0,#0x8\n\
    ldr         r1,[sp,#0x1e0]\n\
    ldrh        r1,[r1,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045922\n\
    ldr         r2,[sp,#0x1e0]\n\
    ldr         r0,[r2,#0x10]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804593c\n\
LAB_08045922:\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08046990\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804593c\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    bl          fun_0804681c\n\
LAB_08045934:\n\
    .4byte 0xFFFFFDE0\n\
LAB_08045938:\n\
    str         r4,[r2,#0x54]\n\
    lsr         r5,r7,#0x1\n\
LAB_0804593c:\n\
    mov         r0,#0x1a\n\
    ldr         r1,[sp,#0x1e0]\n\
    ldrh        r1,[r1,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0xa\n\
    bne         LAB_08045960\n\
    ldr         r2,[sp,#0x1e0]\n\
    mov         r1,#0xe\n\
    ldrsh       r0,[r2,r1]\n\
    cmp         r0,#0x0\n\
    blt         LAB_08045960\n\
    add         r0,r2,#0x0\n\
    add         r1,r4,#0x0\n\
    mov         r2,r10\n\
    bl          fun_08045844\n\
    bl          fun_0804681c\n\
LAB_08045960:\n\
    str         r4,[sp,#0x1e4]\n\
    add         r1,sp,#0x1c\n\
    add         r5,sp,#0x28\n\
    str         r5,[sp,#0x1c]\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x8]\n\
    str         r0,[r1,#0x4]\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x1f0]\n\
    mov         r9,r1\n\
    mov         r4,#0xe6\n\
    lsl         r4,r4,#0x1\n\
    add         r4,sp\n\
    str         r4,[sp,#0x214]\n\
    mov         r0,#0xe8\n\
    lsl         r0,r0,#0x1\n\
    add         r0,sp\n\
    str         r0,[sp,#0x218]\n\
LAB_08045984:\n\
    ldr         r1,[sp,#0x1e4]\n\
    mov         r8,r1\n\
LAB_08045988:\n\
    ldr         r0,DAT_08045a34\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_08045a38\n\
    ldr         r3,[r1,#0x0]\n\
    ldr         r2,[sp,#0x218]\n\
    str         r2,[sp,#0x0]\n\
    ldr         r1,[sp,#0x214]\n\
    ldr         r2,[sp,#0x1e4]\n\
    bl          fun_080485d0\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    ble         LAB_080459b6\n\
    ldr         r0,[sp,#0x1e4]\n\
    add         r0,r0,r4\n\
    str         r0,[sp,#0x1e4]\n\
    add         r0,sp,#0x1cc\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x25\n\
    bne         LAB_08045988\n\
    ldr         r1,[sp,#0x1e4]\n\
    sub         r1,#0x1\n\
    str         r1,[sp,#0x1e4]\n\
LAB_080459b6:\n\
    ldr         r2,[sp,#0x1e4]\n\
    mov         r0,r8\n\
    sub         r6,r2,r0\n\
    cmp         r6,#0x0\n\
    beq         LAB_080459ee\n\
    str         r0,[r5,#0x0]\n\
    str         r6,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r6\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080459e8\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080459e6\n\
    bl          fun_08046808\n\
LAB_080459e6:\n\
    add         r5,sp,#0x28\n\
LAB_080459e8:\n\
    ldr         r2,[sp,#0x1f0]\n\
    add         r2,r2,r6\n\
    str         r2,[sp,#0x1f0]\n\
LAB_080459ee:\n\
    cmp         r4,#0x0\n\
    bgt         LAB_080459f6\n\
    bl          fun_080467f0\n\
LAB_080459f6:\n\
    ldr         r4,[sp,#0x1f4]\n\
    add         r4,#0x1\n\
    str         r4,[sp,#0x1f4]\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x1ec]\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x208]\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x1f4]\n\
    mov         r6,#0x1\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
    ldr         r0,DAT_08045a3c\n\
    add         r0,sp\n\
    strb        r2,[r0,#0x0]\n\
LAB_08045a12:\n\
    ldr         r0,[sp,#0x1e4]\n\
    ldrb        r0,[r0,#0x0]\n\
    str         r0,[sp,#0x1e8]\n\
    ldr         r1,[sp,#0x1e4]\n\
    add         r1,#0x1\n\
    str         r1,[sp,#0x1e4]\n\
LAB_08045a1e:\n\
    ldr         r0,[sp,#0x1e8]\n\
    sub         r0,#0x20\n\
    cmp         r0,#0x58\n\
    bls         LAB_08045a28\n\
    b           switchD_08045a30_caseD_21\n\
LAB_08045a28:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_08045a40\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_08045a34:\n\
    .4byte 0x087D6554\n\
DAT_08045a38:\n\
    .4byte 0x087D6558\n\
DAT_08045a3c:\n\
    .4byte 0x000001C9\n\
DAT_08045a40:\n\
    .4byte 0x08045A44\n\
switchD_08045a30_switchdataD_08045a44:\n\
    .4byte switchD_08045a30_caseD_20\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_23\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_2a\n\
    .4byte switchD_08045a30_caseD_2b\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_2d\n\
    .4byte switchD_08045a30_caseD_2e\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_30\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_31\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_44\n\
    .4byte switchD_08045a30_caseD_45\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_45\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_4c\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_4f\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_55\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_58\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_63\n\
    .4byte switchD_08045a30_caseD_64\n\
    .4byte switchD_08045a30_caseD_45\n\
    .4byte switchD_08045a30_caseD_45\n\
    .4byte switchD_08045a30_caseD_45\n\
    .4byte switchD_08045a30_caseD_68\n\
    .4byte switchD_08045a30_caseD_64\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_6c\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_6e\n\
    .4byte switchD_08045a30_caseD_6f\n\
    .4byte switchD_08045a30_caseD_70\n\
    .4byte switchD_08045a30_caseD_71\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_73\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_75\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_21\n\
    .4byte switchD_08045a30_caseD_78\n\
switchD_08045a30_caseD_20:\n\
    ldr         r1,DAT_08045bbc\n\
    add         r1,sp\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045bb4\n\
    b           LAB_08045a12\n\
LAB_08045bb4:\n\
    mov         r0,#0x20\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08045a12\n\
\n\
.space 2\n\
\n\
DAT_08045bbc:\n\
    .4byte 0x000001C9\n\
switchD_08045a30_caseD_23:\n\
    mov         r0,#0x1\n\
    b           LAB_08045c8c\n\
switchD_08045a30_caseD_2a:\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[sp,#0x1f4]\n\
    cmp         r0,#0x0\n\
    blt         LAB_08045bd6\n\
    b           LAB_08045a12\n\
LAB_08045bd6:\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[sp,#0x1f4]\n\
switchD_08045a30_caseD_2d:\n\
    mov         r0,#0x4\n\
    b           LAB_08045ca0\n\
switchD_08045a30_caseD_2b:\n\
    ldr         r1,DAT_08045be8\n\
    add         r1,sp\n\
    mov         r0,#0x2b\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08045a12\n\
DAT_08045be8:\n\
    .4byte 0x000001C9\n\
switchD_08045a30_caseD_2e:\n\
    ldr         r2,[sp,#0x1e4]\n\
    ldrb        r2,[r2,#0x0]\n\
    str         r2,[sp,#0x1e8]\n\
    ldr         r4,[sp,#0x1e4]\n\
    add         r4,#0x1\n\
    str         r4,[sp,#0x1e4]\n\
    cmp         r2,#0x2a\n\
    bne         LAB_08045c16\n\
    mov         r0,#0x4\n\
    add         r10,r0\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
    add         r6,r4,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r6,r0\n\
    blt         LAB_08045c12\n\
    b           LAB_08045a12\n\
LAB_08045c12:\n\
    add         r6,r0,#0x0\n\
    b           LAB_08045a12\n\
LAB_08045c16:\n\
    mov         r4,#0x0\n\
    ldr         r0,[sp,#0x1e8]\n\
    b           LAB_08045c36\n\
LAB_08045c1c:\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x1\n\
    sub         r0,#0x30\n\
    ldr         r1,[sp,#0x1e8]\n\
    add         r4,r0,r1\n\
    ldr         r2,[sp,#0x1e4]\n\
    ldrb        r2,[r2,#0x0]\n\
    str         r2,[sp,#0x1e8]\n\
    ldr         r0,[sp,#0x1e4]\n\
    add         r0,#0x1\n\
    str         r0,[sp,#0x1e4]\n\
    add         r0,r2,#0x0\n\
LAB_08045c36:\n\
    sub         r0,#0x30\n\
    cmp         r0,#0x9\n\
    bls         LAB_08045c1c\n\
    add         r6,r4,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r6,r0\n\
    blt         LAB_08045c48\n\
    b           LAB_08045a1e\n\
LAB_08045c48:\n\
    add         r6,r0,#0x0\n\
    b           LAB_08045a1e\n\
switchD_08045a30_caseD_30:\n\
    mov         r0,#0x80\n\
    b           LAB_08045ca0\n\
switchD_08045a30_caseD_31:\n\
    mov         r4,#0x0\n\
LAB_08045c52:\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x1\n\
    sub         r0,#0x30\n\
    ldr         r2,[sp,#0x1e8]\n\
    add         r4,r0,r2\n\
    ldr         r0,[sp,#0x1e4]\n\
    ldrb        r0,[r0,#0x0]\n\
    str         r0,[sp,#0x1e8]\n\
    ldr         r1,[sp,#0x1e4]\n\
    add         r1,#0x1\n\
    str         r1,[sp,#0x1e4]\n\
    sub         r0,#0x30\n\
    cmp         r0,#0x9\n\
    bls         LAB_08045c52\n\
    str         r4,[sp,#0x1f4]\n\
    b           LAB_08045a1e\n\
switchD_08045a30_caseD_4c:\n\
    mov         r0,#0x8\n\
    b           LAB_08045c8c\n\
switchD_08045a30_caseD_68:\n\
    mov         r0,#0x40\n\
    b           LAB_08045c96\n\
switchD_08045a30_caseD_6c:\n\
    ldr         r0,[sp,#0x1e4]\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6c\n\
    bne         LAB_08045c94\n\
    ldr         r1,[sp,#0x1e4]\n\
    add         r1,#0x1\n\
    str         r1,[sp,#0x1e4]\n\
    mov         r0,#0x20\n\
LAB_08045c8c:\n\
    ldr         r2,[sp,#0x1ec]\n\
    orr         r2,r0\n\
    str         r2,[sp,#0x1ec]\n\
    b           LAB_08045a12\n\
LAB_08045c94:\n\
    mov         r0,#0x10\n\
LAB_08045c96:\n\
    ldr         r4,[sp,#0x1ec]\n\
    orr         r4,r0\n\
    str         r4,[sp,#0x1ec]\n\
    b           LAB_08045a12\n\
switchD_08045a30_caseD_71:\n\
    mov         r0,#0x20\n\
LAB_08045ca0:\n\
    ldr         r1,[sp,#0x1ec]\n\
    orr         r1,r0\n\
    str         r1,[sp,#0x1ec]\n\
    b           LAB_08045a12\n\
switchD_08045a30_caseD_63:\n\
    add         r2,sp,#0x68\n\
    mov         r8,r2\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    strb        r0,[r2,#0x0]\n\
    b           LAB_080460e8\n\
switchD_08045a30_caseD_44:\n\
    mov         r0,#0x10\n\
    ldr         r1,[sp,#0x1ec]\n\
    orr         r1,r0\n\
    str         r1,[sp,#0x1ec]\n\
switchD_08045a30_caseD_64:\n\
    mov         r0,#0x10\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045cd2\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    b           LAB_08045cee\n\
LAB_08045cd2:\n\
    mov         r0,#0x40\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045cea\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    mov         r1,#0x0\n\
    ldrsh       r4,[r0,r1]\n\
    b           LAB_08045cf4\n\
LAB_08045cea:\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
LAB_08045cee:\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
LAB_08045cf4:\n\
    cmp         r4,#0x0\n\
    bge         LAB_08045d02\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    ldr         r1,DAT_08045d08\n\
    add         r1,sp\n\
    mov         r0,#0x2d\n\
    strb        r0,[r1,#0x0]\n\
LAB_08045d02:\n\
    mov         r2,#0x1\n\
    b           LAB_08045fee\n\
\n\
.space 2\n\
\n\
DAT_08045d08:\n\
    .4byte 0x000001C9\n\
switchD_08045a30_caseD_45:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r6,r0\n\
    bne         LAB_08045d18\n\
    mov         r6,#0x6\n\
    b           LAB_08045d28\n\
LAB_08045d18:\n\
    ldr         r4,[sp,#0x1e8]\n\
    cmp         r4,#0x67\n\
    beq         LAB_08045d22\n\
    cmp         r4,#0x47\n\
    bne         LAB_08045d28\n\
LAB_08045d22:\n\
    cmp         r6,#0x0\n\
    bne         LAB_08045d28\n\
    mov         r6,#0x1\n\
LAB_08045d28:\n\
    mov         r0,#0x8\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    mov         r2,#0x8\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x8\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,[r0,#0x4]\n\
    str         r1,[sp,#0x1fc]\n\
    str         r2,[sp,#0x200]\n\
    ldr         r0,[sp,#0x1fc]\n\
    ldr         r1,[sp,#0x200]\n\
    bl          fun_08048fdc\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045d7c\n\
    ldr         r3,DAT_08045d70\n\
    ldr         r2,DAT_08045d6c\n\
    ldr         r0,[sp,#0x1fc]\n\
    ldr         r1,[sp,#0x200]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045d62\n\
    ldr         r1,DAT_08045d74\n\
    add         r1,sp\n\
    mov         r0,#0x2d\n\
    strb        r0,[r1,#0x0]\n\
LAB_08045d62:\n\
    ldr         r2,DAT_08045d78\n\
    mov         r8,r2\n\
    mov         r3,#0x3\n\
    b           LAB_080460f2\n\
\n\
.space 2\n\
\n\
DAT_08045d6c:\n\
    .4byte 0x00000000\n\
DAT_08045d70:\n\
    .4byte 0x00000000\n\
DAT_08045d74:\n\
    .4byte 0x000001C9\n\
DAT_08045d78:\n\
    .4byte 0x086CCCE4\n\
LAB_08045d7c:\n\
    ldr         r0,[sp,#0x1fc]\n\
    ldr         r1,[sp,#0x200]\n\
    bl          fun_08049000\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045d94\n\
    ldr         r4,DAT_08045d90\n\
    mov         r8,r4\n\
    mov         r3,#0x3\n\
    b           LAB_080460f2\n\
DAT_08045d90:\n\
    .4byte 0x086CCCE8\n\
LAB_08045d94:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldr         r1,[sp,#0x1ec]\n\
    orr         r1,r0\n\
    str         r1,[sp,#0x1ec]\n\
    str         r1,[sp,#0x0]\n\
    add         r0,sp,#0x1c8\n\
    str         r0,[sp,#0x4]\n\
    add         r0,sp,#0x1d4\n\
    str         r0,[sp,#0x8]\n\
    ldr         r2,[sp,#0x1e8]\n\
    str         r2,[sp,#0xc]\n\
    add         r0,sp,#0x1d8\n\
    str         r0,[sp,#0x10]\n\
    ldr         r0,[sp,#0x1dc]\n\
    ldr         r1,[sp,#0x1fc]\n\
    ldr         r2,[sp,#0x200]\n\
    add         r3,r6,#0x0\n\
    bl          fun_0804682c\n\
    mov         r8,r0\n\
    ldr         r4,[sp,#0x1e8]\n\
    cmp         r4,#0x67\n\
    beq         LAB_08045dc8\n\
    cmp         r4,#0x47\n\
    bne         LAB_08045dea\n\
LAB_08045dc8:\n\
    add         r0,sp,#0x1d4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    ble         LAB_08045dd8\n\
    cmp         r1,r6\n\
    ble         LAB_08045de6\n\
LAB_08045dd8:\n\
    mov         r0,#0x45\n\
    ldr         r1,[sp,#0x1e8]\n\
    cmp         r1,#0x67\n\
    bne         LAB_08045de2\n\
    mov         r0,#0x65\n\
LAB_08045de2:\n\
    str         r0,[sp,#0x1e8]\n\
    b           LAB_08045dea\n\
LAB_08045de6:\n\
    mov         r2,#0x67\n\
    str         r2,[sp,#0x1e8]\n\
LAB_08045dea:\n\
    ldr         r4,[sp,#0x1e8]\n\
    cmp         r4,#0x65\n\
    bgt         LAB_08045e10\n\
    add         r0,sp,#0x1d4\n\
    ldr         r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    str         r1,[r0,#0x0]\n\
    add         r0,sp,#0x14\n\
    ldr         r2,[sp,#0x1e8]\n\
    bl          fun_08046920\n\
    str         r0,[sp,#0x1e8]\n\
    add         r0,sp,#0x1d8\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,[sp,#0x204]\n\
    add         r3,r1,r0\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08045e50\n\
    b           LAB_08045e46\n\
LAB_08045e10:\n\
    ldr         r4,[sp,#0x1e8]\n\
    cmp         r4,#0x66\n\
    bne         LAB_08045e38\n\
    add         r0,sp,#0x1d4\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    ble         LAB_08045e34\n\
    add         r3,r0,#0x0\n\
    cmp         r6,#0x0\n\
    bne         LAB_08045e2e\n\
    mov         r0,#0x1\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045e60\n\
LAB_08045e2e:\n\
    add         r0,r3,#0x1\n\
    add         r3,r0,r6\n\
    b           LAB_08045e60\n\
LAB_08045e34:\n\
    add         r3,r6,#0x2\n\
    b           LAB_08045e60\n\
LAB_08045e38:\n\
    add         r0,sp,#0x1d4\n\
    ldr         r1,[r0,#0x0]\n\
    add         r0,sp,#0x1d8\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r1,r0\n\
    blt         LAB_08045e54\n\
    add         r3,r1,#0x0\n\
LAB_08045e46:\n\
    mov         r0,#0x1\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045e60\n\
LAB_08045e50:\n\
    add         r3,#0x1\n\
    b           LAB_08045e60\n\
LAB_08045e54:\n\
    cmp         r1,#0x0\n\
    bgt         LAB_08045e5e\n\
    add         r0,#0x2\n\
    sub         r3,r0,r1\n\
    b           LAB_08045e60\n\
LAB_08045e5e:\n\
    add         r3,r0,#0x1\n\
LAB_08045e60:\n\
    add         r0,sp,#0x1c8\n\
    ldrb        r0,[r0,#0x0]\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045e6e\n\
    b           LAB_080460f6\n\
LAB_08045e6e:\n\
    ldr         r1,DAT_08045e78\n\
    add         r1,sp\n\
    mov         r0,#0x2d\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_080460f6\n\
DAT_08045e78:\n\
    .4byte 0x000001C9\n\
switchD_08045a30_caseD_6e:\n\
    mov         r0,#0x10\n\
    ldr         r4,[sp,#0x1ec]\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045e96\n\
    mov         r0,#0x4\n\
    add         r10,r0\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,[sp,#0x1f0]\n\
    str         r1,[r0,#0x0]\n\
    b           fun_08045984\n\
LAB_08045e96:\n\
    mov         r0,#0x40\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r2,r0\n\
    cmp         r2,#0x0\n\
    beq         LAB_08045eb2\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,sp,#0x1f0\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    b           fun_08045984\n\
LAB_08045eb2:\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,[sp,#0x1f0]\n\
    str         r4,[r0,#0x0]\n\
    b           fun_08045984\n\
switchD_08045a30_caseD_4f:\n\
    mov         r0,#0x10\n\
    ldr         r1,[sp,#0x1ec]\n\
    orr         r1,r0\n\
    str         r1,[sp,#0x1ec]\n\
switchD_08045a30_caseD_6f:\n\
    mov         r0,#0x10\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045eea\n\
    mov         r0,#0x40\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045eea\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldrh        r4,[r0,#0x0]\n\
    b           LAB_08045ef4\n\
LAB_08045eea:\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
LAB_08045ef4:\n\
    mov         r2,#0x0\n\
    b           LAB_08045fe6\n\
switchD_08045a30_caseD_70:\n\
    mov         r0,#0x4\n\
    add         r10,r0\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
    mov         r2,#0x2\n\
    ldr         r1,DAT_08045f14\n\
    str         r1,[sp,#0x210]\n\
    ldr         r0,[sp,#0x1ec]\n\
    orr         r0,r2\n\
    str         r0,[sp,#0x1ec]\n\
    mov         r1,#0x78\n\
    str         r1,[sp,#0x1e8]\n\
    b           LAB_08045fe6\n\
DAT_08045f14:\n\
    .4byte 0x086CCCEC\n\
switchD_08045a30_caseD_73:\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r8,r0\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045f2c\n\
    ldr         r4,DAT_08045f4c\n\
    mov         r8,r4\n\
LAB_08045f2c:\n\
    cmp         r6,#0x0\n\
    blt         LAB_08045f50\n\
    mov         r0,r8\n\
    mov         r1,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_080485fc\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045f48\n\
    mov         r1,r8\n\
    sub         r3,r0,r1\n\
    cmp         r3,r6\n\
    bgt         LAB_08045f48\n\
    b           LAB_080460ea\n\
LAB_08045f48:\n\
    add         r3,r6,#0x0\n\
    b           LAB_080460ea\n\
DAT_08045f4c:\n\
    .4byte 0x086CCD00\n\
LAB_08045f50:\n\
    mov         r0,r8\n\
    bl          fun_08045770\n\
    add         r3,r0,#0x0\n\
    b           LAB_080460ea\n\
switchD_08045a30_caseD_55:\n\
    mov         r0,#0x10\n\
    ldr         r2,[sp,#0x1ec]\n\
    orr         r2,r0\n\
    str         r2,[sp,#0x1ec]\n\
switchD_08045a30_caseD_75:\n\
    mov         r0,#0x10\n\
    ldr         r4,[sp,#0x1ec]\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045f72\n\
    mov         r0,#0x4\n\
    add         r10,r0\n\
    b           LAB_08045f8c\n\
LAB_08045f72:\n\
    mov         r0,#0x40\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045f88\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldrh        r4,[r0,#0x0]\n\
    b           LAB_08045f92\n\
LAB_08045f88:\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
LAB_08045f8c:\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
LAB_08045f92:\n\
    mov         r2,#0x1\n\
    b           LAB_08045fe6\n\
switchD_08045a30_caseD_58:\n\
    ldr         r0,DAT_08045f9c\n\
    str         r0,[sp,#0x210]\n\
    b           LAB_08045fa4\n\
DAT_08045f9c:\n\
    .4byte 0x086CCD08\n\
switchD_08045a30_caseD_78:\n\
    ldr         r1,DAT_08045fc4\n\
    str         r1,[sp,#0x210]\n\
LAB_08045fa4:\n\
    mov         r0,#0x10\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045fc8\n\
    mov         r0,#0x40\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045fc8\n\
    mov         r2,#0x4\n\
    add         r10,r2\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldrh        r4,[r0,#0x0]\n\
    b           LAB_08045fd2\n\
DAT_08045fc4:\n\
    .4byte 0x086CCCEC\n\
LAB_08045fc8:\n\
    mov         r4,#0x4\n\
    add         r10,r4\n\
    mov         r0,r10\n\
    sub         r0,#0x4\n\
    ldr         r4,[r0,#0x0]\n\
LAB_08045fd2:\n\
    mov         r2,#0x2\n\
    mov         r0,#0x1\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08045fe6\n\
    cmp         r4,#0x0\n\
    beq         LAB_08045fe6\n\
    orr         r1,r2\n\
    str         r1,[sp,#0x1ec]\n\
LAB_08045fe6:\n\
    ldr         r1,DAT_08046030\n\
    add         r1,sp\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_08045fee:\n\
    str         r6,[sp,#0x208]\n\
    cmp         r6,#0x0\n\
    blt         LAB_08045ffe\n\
    mov         r0,#0x81\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r1,r0\n\
    str         r1,[sp,#0x1ec]\n\
LAB_08045ffe:\n\
    mov         r0,#0xe2\n\
    lsl         r0,r0,#0x1\n\
    add         r0,sp\n\
    mov         r8,r0\n\
    cmp         r4,#0x0\n\
    bne         LAB_08046014\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    ldr         r1,[sp,#0x208]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080460cc\n\
LAB_08046014:\n\
    cmp         r2,#0x1\n\
    beq         LAB_08046072\n\
    cmp         r2,#0x1\n\
    bcc         LAB_08046038\n\
    cmp         r2,#0x2\n\
    beq         LAB_080460ac\n\
    ldr         r2,DAT_08046034\n\
    mov         r8,r2\n\
    mov         r0,r8\n\
    bl          fun_08045770\n\
    add         r3,r0,#0x0\n\
    b           LAB_080460f2\n\
\n\
.space 2\n\
\n\
DAT_08046030:\n\
    .4byte 0x000001C9\n\
DAT_08046034:\n\
    .4byte 0x086CCD1C\n\
LAB_08046038:\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    mov         r2,#0x7\n\
LAB_0804603e:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r8,r0\n\
    add         r0,r4,#0x0\n\
    and         r0,r2\n\
    add         r1,r0,#0x0\n\
    add         r1,#0x30\n\
    mov         r0,r8\n\
    strb        r1,[r0,#0x0]\n\
    lsr         r4,r4,#0x3\n\
    cmp         r4,#0x0\n\
    bne         LAB_0804603e\n\
    mov         r0,#0x1\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_080460cc\n\
    cmp         r1,#0x30\n\
    beq         LAB_080460cc\n\
    mov         r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    add         r8,r4\n\
    mov         r0,#0x30\n\
    mov         r1,r8\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_080460cc\n\
LAB_08046072:\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    cmp         r4,#0x9\n\
    bls         LAB_0804609c\n\
LAB_0804607a:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r8,r2\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0xa\n\
    bl          fun_08043718\n\
    add         r0,#0x30\n\
    mov         r1,r8\n\
    strb        r0,[r1,#0x0]\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0xa\n\
    bl          fun_080436a0\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x9\n\
    bhi         LAB_0804607a\n\
LAB_0804609c:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r8,r2\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x30\n\
    mov         r4,r8\n\
    strb        r0,[r4,#0x0]\n\
    b           LAB_080460cc\n\
LAB_080460ac:\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    mov         r1,#0xf\n\
LAB_080460b2:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r8,r0\n\
    add         r0,r4,#0x0\n\
    and         r0,r1\n\
    ldr         r2,[sp,#0x210]\n\
    add         r0,r2,r0\n\
    ldrb        r0,[r0,#0x0]\n\
    mov         r2,r8\n\
    strb        r0,[r2,#0x0]\n\
    lsr         r4,r4,#0x4\n\
    cmp         r4,#0x0\n\
    bne         LAB_080460b2\n\
LAB_080460cc:\n\
    add         r4,sp,#0x14\n\
    mov         r1,r8\n\
    sub         r0,r4,r1\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x1\n\
    add         r3,r0,r2\n\
    b           LAB_080460f6\n\
switchD_08045a30_caseD_21:\n\
    ldr         r4,[sp,#0x1e8]\n\
    cmp         r4,#0x0\n\
    bne         LAB_080460e2\n\
    b           fun_080467f0\n\
LAB_080460e2:\n\
    add         r0,sp,#0x68\n\
    mov         r8,r0\n\
    strb        r4,[r0,#0x0]\n\
LAB_080460e8:\n\
    mov         r3,#0x1\n\
LAB_080460ea:\n\
    ldr         r1,DAT_08046114\n\
    add         r1,sp\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_080460f2:\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
LAB_080460f6:\n\
    str         r3,[sp,#0x20c]\n\
    ldr         r2,[sp,#0x208]\n\
    cmp         r3,r2\n\
    bge         LAB_08046100\n\
    str         r2,[sp,#0x20c]\n\
LAB_08046100:\n\
    ldr         r0,DAT_08046114\n\
    add         r0,sp\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046118\n\
    ldr         r4,[sp,#0x20c]\n\
    add         r4,#0x1\n\
    str         r4,[sp,#0x20c]\n\
    b           LAB_08046128\n\
\n\
.space 2\n\
\n\
DAT_08046114:\n\
    .4byte 0x000001C9\n\
LAB_08046118:\n\
    mov         r0,#0x2\n\
    ldr         r1,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046128\n\
    ldr         r2,[sp,#0x20c]\n\
    add         r2,#0x2\n\
    str         r2,[sp,#0x20c]\n\
LAB_08046128:\n\
    mov         r0,#0x84\n\
    ldr         r4,[sp,#0x1ec]\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    bne         LAB_080461a8\n\
    ldr         r0,[sp,#0x1f4]\n\
    ldr         r1,[sp,#0x20c]\n\
    sub         r4,r0,r1\n\
    cmp         r4,#0x0\n\
    ble         LAB_080461a8\n\
    ldr         r1,DAT_080461d4\n\
    cmp         r4,#0x10\n\
    ble         LAB_0804617c\n\
    mov         r6,r9\n\
LAB_08046144:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,r7,#0x0\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046172\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804616e\n\
    b           fun_08046808\n\
LAB_0804616e:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_080461d4\n\
LAB_08046172:\n\
    sub         r4,#0x10\n\
    add         r7,r5,#0x0\n\
    add         r7,#0x8\n\
    cmp         r4,#0x10\n\
    bgt         LAB_08046144\n\
LAB_0804617c:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r2,#0x8]\n\
    add         r5,r7,#0x0\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080461a8\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080461a6\n\
    b           fun_08046808\n\
LAB_080461a6:\n\
    add         r5,sp,#0x28\n\
LAB_080461a8:\n\
    ldr         r1,DAT_080461d8\n\
    add         r1,sp\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080461dc\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x1\n\
    str         r0,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804621c\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    b           LAB_0804620c\n\
\n\
.space 2\n\
\n\
DAT_080461d4:\n\
    .4byte 0x086CCCC4\n\
DAT_080461d8:\n\
    .4byte 0x000001C9\n\
LAB_080461dc:\n\
    mov         r2,#0x2\n\
    ldr         r0,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804621c\n\
    add         r1,sp,#0x1c4\n\
    mov         r0,#0x30\n\
    strb        r0,[r1,#0x0]\n\
    add         r0,sp,#0x1e8\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x1]\n\
    str         r1,[r5,#0x0]\n\
    str         r2,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,#0x2\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804621c\n\
    ldr         r0,[sp,#0x1e0]\n\
LAB_0804620c:\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804621a\n\
    b           fun_08046808\n\
LAB_0804621a:\n\
    add         r5,sp,#0x28\n\
LAB_0804621c:\n\
    mov         r0,#0x84\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x80\n\
    bne         LAB_08046298\n\
    ldr         r0,[sp,#0x1f4]\n\
    ldr         r1,[sp,#0x20c]\n\
    sub         r4,r0,r1\n\
    cmp         r4,#0x0\n\
    ble         LAB_08046298\n\
    ldr         r1,DAT_08046334\n\
    cmp         r4,#0x10\n\
    ble         LAB_0804626c\n\
    mov         r6,r9\n\
LAB_08046238:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046266\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046262\n\
    b           fun_08046808\n\
LAB_08046262:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_08046334\n\
LAB_08046266:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_08046238\n\
LAB_0804626c:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r2,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046298\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046296\n\
    b           fun_08046808\n\
LAB_08046296:\n\
    add         r5,sp,#0x28\n\
LAB_08046298:\n\
    ldr         r0,[sp,#0x208]\n\
    sub         r4,r0,r3\n\
    cmp         r4,#0x0\n\
    ble         LAB_08046306\n\
    ldr         r1,DAT_08046334\n\
    cmp         r4,#0x10\n\
    ble         LAB_080462dc\n\
    mov         r6,r9\n\
LAB_080462a8:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080462d6\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080462d2\n\
    b           fun_08046808\n\
LAB_080462d2:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_08046334\n\
LAB_080462d6:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_080462a8\n\
LAB_080462dc:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046306\n\
    ldr         r0,[sp,#0x1e0]\n\
    str         r3,[sp,#0x21c]\n\
    bl          fun_08045824\n\
    ldr         r3,[sp,#0x21c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046304\n\
    b           fun_08046808\n\
LAB_08046304:\n\
    add         r5,sp,#0x28\n\
LAB_08046306:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldr         r2,[sp,#0x1ec]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046338\n\
    mov         r4,r8\n\
    str         r4,[r5,#0x0]\n\
    str         r3,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r3\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    bgt         LAB_0804632e\n\
    b           LAB_0804674e\n\
LAB_0804632e:\n\
    ldr         r0,[sp,#0x1e0]\n\
    b           LAB_08046744\n\
\n\
.space 2\n\
\n\
DAT_08046334:\n\
    .4byte 0x086CCCD4\n\
LAB_08046338:\n\
    ldr         r2,[sp,#0x1e8]\n\
    cmp         r2,#0x65\n\
    bgt         LAB_08046340\n\
    b           LAB_08046624\n\
LAB_08046340:\n\
    ldr         r3,DAT_0804640c\n\
    ldr         r2,DAT_08046408\n\
    ldr         r0,[sp,#0x1fc]\n\
    ldr         r1,[sp,#0x200]\n\
    bl          fun_08044228\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046418\n\
    ldr         r0,DAT_08046410\n\
    str         r0,[r5,#0x0]\n\
    mov         r6,#0x1\n\
    str         r6,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804637c\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804637a\n\
    b           fun_08046808\n\
LAB_0804637a:\n\
    add         r5,sp,#0x28\n\
LAB_0804637c:\n\
    add         r0,sp,#0x1d4\n\
    ldr         r1,[r0,#0x0]\n\
    add         r4,sp,#0x1d8\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r1,r0\n\
    blt         LAB_08046392\n\
    ldr         r0,[sp,#0x1ec]\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046392\n\
    b           LAB_0804674e\n\
LAB_08046392:\n\
    ldr         r0,[sp,#0x1f8]\n\
    str         r0,[r5,#0x0]\n\
    str         r6,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080463ba\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080463b8\n\
    b           fun_08046808\n\
LAB_080463b8:\n\
    add         r5,sp,#0x28\n\
LAB_080463ba:\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r4,r0,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_080463c4\n\
    b           LAB_0804674e\n\
LAB_080463c4:\n\
    ldr         r1,DAT_08046414\n\
    cmp         r4,#0x10\n\
    ble         LAB_080463fc\n\
    mov         r6,r9\n\
LAB_080463cc:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080463f6\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080463f2\n\
    b           fun_08046808\n\
LAB_080463f2:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_08046414\n\
LAB_080463f6:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_080463cc\n\
LAB_080463fc:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r4\n\
    b           LAB_08046732\n\
DAT_08046408:\n\
    .4byte 0x00000000\n\
DAT_0804640c:\n\
    .4byte 0x00000000\n\
DAT_08046410:\n\
    .4byte 0x086CCD38\n\
DAT_08046414:\n\
    .4byte 0x086CCCD4\n\
LAB_08046418:\n\
    add         r6,sp,#0x1d4\n\
    ldr         r2,[r6,#0x0]\n\
    cmp         r2,#0x0\n\
    bgt         LAB_08046500\n\
    ldr         r0,DAT_080464f8\n\
    str         r0,[r5,#0x0]\n\
    mov         r4,#0x1\n\
    str         r4,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804644a\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046448\n\
    b           fun_08046808\n\
LAB_08046448:\n\
    add         r5,sp,#0x28\n\
LAB_0804644a:\n\
    ldr         r2,[sp,#0x1f8]\n\
    str         r2,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046474\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046472\n\
    b           fun_08046808\n\
LAB_08046472:\n\
    add         r5,sp,#0x28\n\
LAB_08046474:\n\
    ldr         r0,[r6,#0x0]\n\
.syntax unified\n\
    rsbs        r4,r0,#0\n\
.syntax divided\n\
    cmp         r4,#0x0\n\
    ble         LAB_080464da\n\
    ldr         r1,DAT_080464fc\n\
    cmp         r4,#0x10\n\
    ble         LAB_080464b4\n\
    mov         r6,r9\n\
LAB_08046484:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080464ae\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080464aa\n\
    b           fun_08046808\n\
LAB_080464aa:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_080464fc\n\
LAB_080464ae:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_08046484\n\
LAB_080464b4:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080464da\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080464d8\n\
    b           fun_08046808\n\
LAB_080464d8:\n\
    add         r5,sp,#0x28\n\
LAB_080464da:\n\
    mov         r2,r8\n\
    str         r2,[r5,#0x0]\n\
    add         r0,sp,#0x1d8\n\
    ldr         r1,[r0,#0x0]\n\
    str         r1,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    add         r0,r0,r1\n\
    str         r0,[r4,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x4]\n\
    b           LAB_0804673c\n\
.space 2\n\
DAT_080464f8:\n\
    .4byte 0x086CCD38\n\
DAT_080464fc:\n\
    .4byte 0x086CCCD4\n\
LAB_08046500:\n\
    add         r4,sp,#0x1d8\n\
    ldr         r1,[r4,#0x0]\n\
    cmp         r2,r1\n\
    blt         LAB_080465bc\n\
    mov         r0,r8\n\
    str         r0,[r5,#0x0]\n\
    str         r1,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r1\n\
    str         r0,[r2,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046532\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046530\n\
    b           fun_08046808\n\
LAB_08046530:\n\
    add         r5,sp,#0x28\n\
LAB_08046532:\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r4,r1,r0\n\
    cmp         r4,#0x0\n\
    ble         LAB_0804659a\n\
    ldr         r1,DAT_080465b4\n\
    cmp         r4,#0x10\n\
    ble         LAB_08046574\n\
    mov         r6,r9\n\
LAB_08046544:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804656e\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804656a\n\
    b           fun_08046808\n\
LAB_0804656a:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_080465b4\n\
LAB_0804656e:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_08046544\n\
LAB_08046574:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804659a\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046598\n\
    b           fun_08046808\n\
LAB_08046598:\n\
    add         r5,sp,#0x28\n\
LAB_0804659a:\n\
    mov         r1,#0x1\n\
    ldr         r0,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080465a6\n\
    b           LAB_0804674e\n\
LAB_080465a6:\n\
    ldr         r0,DAT_080465b8\n\
    str         r0,[r5,#0x0]\n\
    str         r1,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,#0x1\n\
    b           LAB_08046732\n\
DAT_080465b4:\n\
    .4byte 0x086CCCD4\n\
DAT_080465b8:\n\
    .4byte 0x086CCD3C\n\
LAB_080465bc:\n\
    mov         r0,r8\n\
    str         r0,[r5,#0x0]\n\
    str         r2,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080465e4\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080465e2\n\
    b           fun_08046808\n\
LAB_080465e2:\n\
    add         r5,sp,#0x28\n\
LAB_080465e4:\n\
    ldr         r0,[r6,#0x0]\n\
    add         r8,r0\n\
    ldr         r0,DAT_08046620\n\
    str         r0,[r5,#0x0]\n\
    mov         r0,#0x1\n\
    str         r0,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046614\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046612\n\
    b           fun_08046808\n\
LAB_08046612:\n\
    add         r5,sp,#0x28\n\
LAB_08046614:\n\
    mov         r0,r8\n\
    str         r0,[r5,#0x0]\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r6,#0x0]\n\
    sub         r1,r1,r0\n\
    b           LAB_0804672a\n\
DAT_08046620:\n\
    .4byte 0x086CCD3C\n\
LAB_08046624:\n\
    add         r4,sp,#0x1d8\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08046636\n\
    mov         r1,#0x1\n\
    ldr         r0,[sp,#0x1ec]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080466fc\n\
LAB_08046636:\n\
    add         r1,sp,#0x1c4\n\
    mov         r2,r8\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    add         r8,r0\n\
    mov         r0,#0x2e\n\
    strb        r0,[r1,#0x1]\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x2\n\
    str         r0,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,#0x2\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804666e\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804666c\n\
    b           fun_08046808\n\
LAB_0804666c:\n\
    add         r5,sp,#0x28\n\
LAB_0804666e:\n\
    ldr         r3,DAT_08046698\n\
    ldr         r2,DAT_08046694\n\
    ldr         r0,[sp,#0x1fc]\n\
    ldr         r1,[sp,#0x200]\n\
    bl          fun_08044274\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804669c\n\
    mov         r2,r8\n\
    str         r2,[r5,#0x0]\n\
    ldr         r1,[r4,#0x0]\n\
    sub         r0,r1,#0x1\n\
    str         r0,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    sub         r0,#0x1\n\
    add         r0,r0,r1\n\
    b           LAB_08046708\n\
.space 2\n\
DAT_08046694:\n\
    .4byte 0x00000000\n\
DAT_08046698:\n\
    .4byte 0x00000000\n\
LAB_0804669c:\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r4,r0,#0x1\n\
    cmp         r4,#0x0\n\
    ble         LAB_08046724\n\
    ldr         r1,DAT_080466f8\n\
    cmp         r4,#0x10\n\
    ble         LAB_080466dc\n\
    mov         r6,r9\n\
LAB_080466ac:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080466d6\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    beq         LAB_080466d2\n\
    b           fun_08046808\n\
LAB_080466d2:\n\
    add         r5,sp,#0x28\n\
    ldr         r1,DAT_080466f8\n\
LAB_080466d6:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_080466ac\n\
LAB_080466dc:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r1,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046724\n\
    ldr         r0,[sp,#0x1e0]\n\
    b           LAB_0804671a\n\
DAT_080466f8:\n\
    .4byte 0x086CCCD4\n\
LAB_080466fc:\n\
    mov         r2,r8\n\
    str         r2,[r5,#0x0]\n\
    str         r1,[r5,#0x4]\n\
    mov         r4,r9\n\
    ldr         r0,[r4,#0x8]\n\
    add         r0,#0x1\n\
LAB_08046708:\n\
    str         r0,[r4,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046724\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
LAB_0804671a:\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
    add         r5,sp,#0x28\n\
LAB_08046724:\n\
    add         r0,sp,#0x14\n\
    str         r0,[r5,#0x0]\n\
    ldr         r1,[sp,#0x204]\n\
LAB_0804672a:\n\
    str         r1,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r1\n\
LAB_08046732:\n\
    str         r0,[r2,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
LAB_0804673c:\n\
    cmp         r0,#0x7\n\
    ble         LAB_0804674e\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
LAB_08046744:\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
    add         r5,sp,#0x28\n\
LAB_0804674e:\n\
    mov         r0,#0x4\n\
    ldr         r4,[sp,#0x1ec]\n\
    and         r4,r0\n\
    cmp         r4,#0x0\n\
    beq         LAB_080467ba\n\
    ldr         r0,[sp,#0x1f4]\n\
    ldr         r1,[sp,#0x20c]\n\
    sub         r4,r0,r1\n\
    cmp         r4,#0x0\n\
    ble         LAB_080467ba\n\
    ldr         r1,LAB_080467ec\n\
    cmp         r4,#0x10\n\
    ble         LAB_08046798\n\
    mov         r6,r9\n\
LAB_0804676a:\n\
    str         r1,[r5,#0x0]\n\
    mov         r0,#0x10\n\
    str         r0,[r5,#0x4]\n\
    ldr         r0,[r6,#0x8]\n\
    add         r0,#0x10\n\
    str         r0,[r6,#0x8]\n\
    add         r5,#0x8\n\
    ldr         r0,[r6,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r6,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_08046792\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
    add         r5,sp,#0x28\n\
    ldr         r1,LAB_080467ec\n\
LAB_08046792:\n\
    sub         r4,#0x10\n\
    cmp         r4,#0x10\n\
    bgt         LAB_0804676a\n\
LAB_08046798:\n\
    str         r1,[r5,#0x0]\n\
    str         r4,[r5,#0x4]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,r0,r4\n\
    str         r0,[r2,#0x8]\n\
    ldr         r0,[r2,#0x4]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x4]\n\
    cmp         r0,#0x7\n\
    ble         LAB_080467ba\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
LAB_080467ba:\n\
    ldr         r0,[sp,#0x20c]\n\
    ldr         r4,[sp,#0x1f4]\n\
    cmp         r0,r4\n\
    bge         LAB_080467c4\n\
    add         r0,r4,#0x0\n\
LAB_080467c4:\n\
    ldr         r1,[sp,#0x1f0]\n\
    add         r1,r1,r0\n\
    str         r1,[sp,#0x1f0]\n\
    mov         r2,r9\n\
    ldr         r0,[r2,#0x8]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080467de\n\
    ldr         r0,[sp,#0x1e0]\n\
    mov         r1,r9\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
LAB_080467de:\n\
    mov         r0,#0x0\n\
    mov         r4,r9\n\
    str         r0,[r4,#0x4]\n\
    add         r5,sp,#0x28\n\
    bl          fun_08045984\n\
    mov         r0,r0\n\
LAB_080467ec:\n\
    ldmia       r4!,{r2,r6,r7}\n\
    lsr         r4,r5,#0x1\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x8]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046802\n\
    ldr         r0,[sp,#0x1e0]\n\
    bl          fun_08045824\n\
    cmp         r0,#0x0\n\
    bne         fun_08046808\n\
LAB_08046802:\n\
    mov         r0,#0x0\n\
    mov         r1,r9\n\
    str         r0,[r1,#0x4]\n\
    mov         r0,#0x40\n\
    ldr         r2,[sp,#0x1e0]\n\
    ldrh        r2,[r2,#0xc]\n\
    and         r0,r2\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804681a\n\
    ldr         r1,[sp,#0x1f0]\n\
LAB_0804681a:\n\
    add         r0,r1,#0x0\n\
    mov         r3,#0x88\n\
    lsl         r3,r3,#0x2\n\
    add         sp,r3\n\
    pop         {r3, r4, r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4, r5, r6, r7, pc}\n\
    ");
}
__attribute__((naked)) void fun_0804682c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x1c\n\
    str         r0,[sp,#0x18]\n\
    add         r5,r2,#0x0\n\
    add         r4,r1,#0x0\n\
    mov         r8,r3\n\
    ldr         r6,[sp,#0x3c]\n\
    ldr         r0,[sp,#0x44]\n\
    mov         r10,r0\n\
    ldr         r1,[sp,#0x48]\n\
    mov         r9,r1\n\
    cmp         r1,#0x66\n\
    bne         LAB_08046852\n\
    mov         r7,#0x3\n\
    b           LAB_08046862\n\
LAB_08046852:\n\
    mov         r0,r9\n\
    cmp         r0,#0x65\n\
    beq         LAB_0804685c\n\
    cmp         r0,#0x45\n\
    bne         LAB_08046860\n\
LAB_0804685c:\n\
    mov         r1,#0x1\n\
    add         r8,r1\n\
LAB_08046860:\n\
    mov         r7,#0x2\n\
LAB_08046862:\n\
    lsl         r0,r4,#0x1f\n\
    lsr         r0,r0,#0x1f\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046878\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_080444e0\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x2d\n\
LAB_08046878:\n\
    ldr         r1,[sp,#0x40]\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,r8\n\
    str         r0,[sp,#0x0]\n\
    mov         r1,r10\n\
    str         r1,[sp,#0x4]\n\
    add         r0,sp,#0x10\n\
    str         r0,[sp,#0x8]\n\
    add         r0,sp,#0x14\n\
    str         r0,[sp,#0xc]\n\
    ldr         r0,[sp,#0x18]\n\
    add         r2,r5,#0x0\n\
    add         r1,r4,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_08046b98\n\
    add         r7,r0,#0x0\n\
    mov         r1,r9\n\
    cmp         r1,#0x67\n\
    beq         LAB_080468a4\n\
    cmp         r1,#0x47\n\
    bne         LAB_080468ac\n\
LAB_080468a4:\n\
    mov         r0,#0x1\n\
    and         r6,r0\n\
    cmp         r6,#0x0\n\
    beq         LAB_08046900\n\
LAB_080468ac:\n\
    mov         r0,r8\n\
    add         r6,r7,r0\n\
    mov         r1,r9\n\
    cmp         r1,#0x66\n\
    bne         LAB_080468dc\n\
    ldrb        r0,[r7,#0x0]\n\
    cmp         r0,#0x30\n\
    bne         LAB_080468d6\n\
    ldr         r3,DAT_0804691c\n\
    ldr         r2,DAT_08046918\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044274\n\
    cmp         r0,#0x0\n\
    beq         LAB_080468d6\n\
    mov         r1,r8\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    add         r0,#0x1\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x0]\n\
LAB_080468d6:\n\
    mov         r1,r10\n\
    ldr         r0,[r1,#0x0]\n\
    add         r6,r6,r0\n\
LAB_080468dc:\n\
    ldr         r3,DAT_0804691c\n\
    ldr         r2,DAT_08046918\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044228\n\
    cmp         r0,#0x0\n\
    bne         LAB_080468ee\n\
    str         r6,[sp,#0x14]\n\
LAB_080468ee:\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,r6\n\
    bcs         LAB_08046900\n\
    mov         r1,#0x30\n\
LAB_080468f6:\n\
    strb        r1,[r0,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[sp,#0x14]\n\
    cmp         r0,r6\n\
    bcc         LAB_080468f6\n\
LAB_08046900:\n\
    ldr         r0,[sp,#0x14]\n\
    sub         r0,r0,r7\n\
    ldr         r1,[sp,#0x4c]\n\
    str         r0,[r1,#0x0]\n\
    add         r0,r7,#0x0\n\
    add         sp,#0x1c\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08046918:\n\
    .4byte 0x00000000\n\
DAT_0804691c:\n\
    .4byte 0x00000000\n\
    ");
}
__attribute__((naked)) void fun_08046920()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x134\n\
    add         r7,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    strb        r2,[r7,#0x0]\n\
    add         r5,r7,#0x1\n\
    cmp         r6,#0x0\n\
    bge         LAB_08046936\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
    mov         r0,#0x2d\n\
LAB_08046936:\n\
    strb        r0,[r7,#0x1]\n\
    add         r5,#0x1\n\
    add         r4,sp,#0x134\n\
    cmp         r6,#0x9\n\
    ble         LAB_0804697a\n\
LAB_08046942:\n\
    sub         r4,#0x1\n\
    add         r0,r6,#0x0\n\
    mov         r1,#0xa\n\
    bl          fun_080435d0\n\
    add         r0,#0x30\n\
    strb        r0,[r4,#0x0]\n\
    add         r0,r6,#0x0\n\
    mov         r1,#0xa\n\
    bl          fun_08043504\n\
    add         r6,r0,#0x0\n\
    cmp         r6,#0x9\n\
    bgt         LAB_08046942\n\
    sub         r4,#0x1\n\
    add         r0,#0x30\n\
    strb        r0,[r4,#0x0]\n\
    add         r0,sp,#0x134\n\
    cmp         r4,r0\n\
    bcs         LAB_08046988\n\
    add         r1,r0,#0x0\n\
LAB_0804696c:\n\
    ldrb        r0,[r4,#0x0]\n\
    strb        r0,[r5,#0x0]\n\
    add         r4,#0x1\n\
    add         r5,#0x1\n\
    cmp         r4,r1\n\
    bcc         LAB_0804696c\n\
    b           LAB_08046988\n\
LAB_0804697a:\n\
    mov         r0,#0x30\n\
    strb        r0,[r5,#0x0]\n\
    add         r5,#0x1\n\
    add         r0,r6,#0x0\n\
    add         r0,#0x30\n\
    strb        r0,[r5,#0x0]\n\
    add         r5,#0x1\n\
LAB_08046988:\n\
    sub         r0,r5,r7\n\
    add         sp,#0x134\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08046990()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r0,[r4,#0x54]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080469a0\n\
    ldr         r0,DAT_080469cc\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r4,#0x54]\n\
LAB_080469a0:\n\
    ldr         r1,[r4,#0x54]\n\
    ldr         r0,[r1,#0x38]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080469ae\n\
    add         r0,r1,#0x0\n\
    bl          fun_08047a20\n\
LAB_080469ae:\n\
    ldrh        r1,[r4,#0xc]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    asr         r5,r0,#0x10\n\
    cmp         r5,#0x0\n\
    bne         LAB_08046a08\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080469d0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08046a3a\n\
\n\
.space 2\n\
\n\
DAT_080469cc:\n\
    .4byte 0x087D6554\n\
LAB_080469d0:\n\
    mov         r0,#0x4\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046a00\n\
    ldr         r1,[r4,#0x30]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080469ee\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x40\n\
    cmp         r1,r0\n\
    beq         LAB_080469ec\n\
    ldr         r0,[r4,#0x54]\n\
    bl          fun_08047a80\n\
LAB_080469ec:\n\
    str         r5,[r4,#0x30]\n\
LAB_080469ee:\n\
    mov         r0,#0x25\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    mov         r1,#0x0\n\
    strh        r0,[r4,#0xc]\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,[r4,#0x10]\n\
    str         r0,[r4,#0x0]\n\
LAB_08046a00:\n\
    mov         r0,#0x8\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
LAB_08046a08:\n\
    ldr         r0,[r4,#0x10]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046a14\n\
    add         r0,r4,#0x0\n\
    bl          fun_08047fd8\n\
LAB_08046a14:\n\
    ldrh        r1,[r4,#0xc]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046a2a\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x14]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[r4,#0x18]\n\
    b           LAB_08046a38\n\
LAB_08046a2a:\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046a36\n\
    ldr         r1,[r4,#0x14]\n\
LAB_08046a36:\n\
    str         r1,[r4,#0x8]\n\
LAB_08046a38:\n\
    mov         r0,#0x0\n\
LAB_08046a3a:\n\
    pop         {r4,r5,pc}\n\
    ");
}
__attribute__((naked)) void fun_08046a3c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x18\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    ldr         r7,[r1,#0x10]\n\
    ldr         r0,[r0,#0x10]\n\
    cmp         r0,r7\n\
    bge         LAB_08046a58\n\
    mov         r0,#0x0\n\
    b           LAB_08046b8c\n\
LAB_08046a58:\n\
    ldr         r0,[sp,#0x4]\n\
    add         r0,#0x14\n\
    mov         r8,r0\n\
    sub         r7,#0x1\n\
    lsl         r0,r7,#0x2\n\
    mov         r1,r8\n\
    add         r1,r1,r0\n\
    str         r1,[sp,#0xc]\n\
    ldr         r4,[sp,#0x0]\n\
    add         r4,#0x14\n\
    add         r5,r4,r0\n\
    ldr         r1,[r1,#0x0]\n\
    add         r1,#0x1\n\
    ldr         r2,[r5,#0x0]\n\
    mov         r10,r2\n\
    mov         r0,r10\n\
    bl          fun_080436a0\n\
    str         r0,[sp,#0x8]\n\
    mov         r3,r8\n\
    str         r3,[sp,#0x14]\n\
    str         r4,[sp,#0x10]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046b02\n\
    mov         r6,#0x0\n\
    mov         r9,r6\n\
    ldr         r0,DAT_08046aec\n\
    mov         r12,r0\n\
LAB_08046a90:\n\
    mov         r2,r8\n\
    add         r2,#0x4\n\
    mov         r8,r2\n\
    sub         r2,#0x4\n\
    ldmia       r2!,{r1}\n\
    add         r0,r1,#0x0\n\
    mov         r3,r12\n\
    and         r0,r3\n\
    ldr         r2,[sp,#0x8]\n\
    mul         r0,r2\n\
    mov         r3,r9\n\
    add         r2,r0,r3\n\
    lsr         r0,r1,#0x10\n\
    ldr         r3,[sp,#0x8]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r3\n\
    lsr         r0,r2,#0x10\n\
    add         r3,r1,r0\n\
    lsr         r0,r3,#0x10\n\
    mov         r9,r0\n\
    ldr         r0,[r4,#0x0]\n\
    mov         r1,r12\n\
    and         r0,r1\n\
    and         r2,r1\n\
    sub         r0,r0,r2\n\
    add         r2,r0,r6\n\
    asr         r6,r2,#0x10\n\
    ldr         r0,[r4,#0x0]\n\
    lsr         r1,r0,#0x10\n\
    mov         r0,r12\n\
    and         r3,r0\n\
    sub         r1,r1,r3\n\
    add         r0,r1,r6\n\
    asr         r6,r0,#0x10\n\
    strh        r0,[r4,#0x0]\n\
    strh        r2,[r4,#0x2]\n\
    add         r4,#0x4\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r8,r1\n\
    bls         LAB_08046a90\n\
    mov         r2,r10\n\
    cmp         r2,#0x0\n\
    bne         LAB_08046b02\n\
    ldr         r4,[sp,#0x10]\n\
    b           LAB_08046af2\n\
\n\
.space 2\n\
\n\
DAT_08046aec:\n\
    .4byte 0x0000FFFF\n\
LAB_08046af0:\n\
    sub         r7,#0x1\n\
LAB_08046af2:\n\
    sub         r5,#0x4\n\
    cmp         r5,r4\n\
    bls         LAB_08046afe\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046af0\n\
LAB_08046afe:\n\
    ldr         r3,[sp,#0x0]\n\
    str         r7,[r3,#0x10]\n\
LAB_08046b02:\n\
    ldr         r0,[sp,#0x0]\n\
    ldr         r1,[sp,#0x4]\n\
    bl          fun_08048c2c\n\
    cmp         r0,#0x0\n\
    blt         LAB_08046b8a\n\
    ldr         r0,[sp,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[sp,#0x8]\n\
    mov         r6,#0x0\n\
    mov         r9,r6\n\
    ldr         r4,[sp,#0x10]\n\
    ldr         r1,[sp,#0x14]\n\
    mov         r8,r1\n\
    lsl         r2,r7,#0x2\n\
    mov         r10,r2\n\
    ldr         r5,DAT_08046b74\n\
LAB_08046b24:\n\
    mov         r3,r8\n\
    add         r3,#0x4\n\
    mov         r8,r3\n\
    sub         r3,#0x4\n\
    ldmia       r3!,{r1}\n\
    add         r0,r1,#0x0\n\
    and         r0,r5\n\
    mov         r3,r9\n\
    add         r2,r0,r3\n\
    lsr         r1,r1,#0x10\n\
    lsr         r0,r2,#0x10\n\
    add         r3,r1,r0\n\
    lsr         r0,r3,#0x10\n\
    mov         r9,r0\n\
    ldr         r1,[r4,#0x0]\n\
    add         r0,r1,#0x0\n\
    and         r0,r5\n\
    and         r2,r5\n\
    sub         r0,r0,r2\n\
    add         r2,r0,r6\n\
    asr         r6,r2,#0x10\n\
    lsr         r1,r1,#0x10\n\
    and         r3,r5\n\
    sub         r1,r1,r3\n\
    add         r0,r1,r6\n\
    asr         r6,r0,#0x10\n\
    strh        r0,[r4,#0x0]\n\
    strh        r2,[r4,#0x2]\n\
    add         r4,#0x4\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r8,r1\n\
    bls         LAB_08046b24\n\
    ldr         r4,[sp,#0x10]\n\
    mov         r2,r10\n\
    add         r5,r4,r2\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046b8a\n\
    b           LAB_08046b7a\n\
\n\
.space 2\n\
\n\
DAT_08046b74:\n\
    .4byte 0x0000FFFF\n\
LAB_08046b78:\n\
    sub         r7,#0x1\n\
LAB_08046b7a:\n\
    sub         r5,#0x4\n\
    cmp         r5,r4\n\
    bls         LAB_08046b86\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046b78\n\
LAB_08046b86:\n\
    ldr         r3,[sp,#0x0]\n\
    str         r7,[r3,#0x10]\n\
LAB_08046b8a:\n\
    ldr         r0,[sp,#0x8]\n\
LAB_08046b8c:\n\
    add         sp,#0x18\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08046b98()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x84\n\
    mov         r10,r0\n\
    str         r3,[sp,#0xc]\n\
    ldr         r4,[sp,#0xac]\n\
    str         r1,[sp,#0x40]\n\
    str         r2,[sp,#0x44]\n\
    ldr         r2,[r0,#0x40]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08046bd0\n\
    ldr         r0,[r0,#0x44]\n\
    str         r0,[r2,#0x4]\n\
    mov         r0,r10\n\
    ldr         r1,[r0,#0x44]\n\
    mov         r0,#0x1\n\
    lsl         r0,r1\n\
    str         r0,[r2,#0x8]\n\
    mov         r0,r10\n\
    add         r1,r2,#0x0\n\
    bl          fun_08048764\n\
    mov         r0,#0x0\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x40]\n\
LAB_08046bd0:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x18\n\
    ldr         r1,[sp,#0x40]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046bec\n\
    mov         r0,#0x1\n\
    str         r0,[r4,#0x0]\n\
    ldr         r0,DAT_08046be8\n\
    and         r1,r0\n\
    str         r1,[sp,#0x40]\n\
    b           LAB_08046bee\n\
DAT_08046be8:\n\
    .4byte 0x7FFFFFFF\n\
LAB_08046bec:\n\
    str         r0,[r4,#0x0]\n\
LAB_08046bee:\n\
    ldr         r1,DAT_08046c30\n\
    ldr         r2,[sp,#0x40]\n\
    add         r0,r2,#0x0\n\
    and         r0,r1\n\
    cmp         r0,r1\n\
    bne         LAB_08046c44\n\
    ldr         r0,DAT_08046c34\n\
    ldr         r3,[sp,#0xa8]\n\
    str         r0,[r3,#0x0]\n\
    ldr         r0,DAT_08046c38\n\
    mov         r9,r0\n\
    ldr         r1,[sp,#0x44]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08046c16\n\
    ldr         r0,DAT_08046c3c\n\
    and         r2,r0\n\
    cmp         r2,#0x0\n\
    bne         LAB_08046c16\n\
    ldr         r2,DAT_08046c40\n\
    mov         r9,r2\n\
LAB_08046c16:\n\
    ldr         r3,[sp,#0xb0]\n\
    cmp         r3,#0x0\n\
    beq         LAB_08046c68\n\
    mov         r1,r9\n\
    ldrb        r0,[r1,#0x3]\n\
    add         r1,#0x3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046c28\n\
    add         r1,#0x5\n\
LAB_08046c28:\n\
    ldr         r2,[sp,#0xb0]\n\
    str         r1,[r2,#0x0]\n\
    b           LAB_08046c68\n\
\n\
.space 2\n\
\n\
DAT_08046c30:\n\
    .4byte 0x7FF00000\n\
DAT_08046c34:\n\
    .4byte 0x0000270F\n\
DAT_08046c38:\n\
    .4byte 0x086CCD4C\n\
DAT_08046c3c:\n\
    .4byte 0x000FFFFF\n\
DAT_08046c40:\n\
    .4byte 0x086CCD40\n\
LAB_08046c44:\n\
    ldr         r3,LAB_08046c74\n\
    ldr         r2,LAB_08046c70\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08044228\n\
    cmp         r0,#0x0\n\
    bne         LAB_08046c7c\n\
    mov         r0,#0x1\n\
    ldr         r3,[sp,#0xa8]\n\
    str         r0,[r3,#0x0]\n\
    ldr         r0,LAB_08046c78\n\
    mov         r9,r0\n\
    ldr         r1,[sp,#0xb0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08046c68\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
LAB_08046c68:\n\
    mov         r0,r9\n\
    bl          fun_08047882\n\
    mov         r0,r0\n\
LAB_08046c70:\n\
    mov         r0,r0\n\
    mov         r0,r0\n\
LAB_08046c74:\n\
    mov         r0,r0\n\
    mov         r0,r0\n\
LAB_08046c78:\n\
    ldmia       r5!,{r4,r6}\n\
    lsr         r4,r5,#0x1\n\
LAB_08046c7c:\n\
    add         r0,sp,#0x8\n\
    str         r0,[sp,#0x0]\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x40]\n\
    ldr         r2,[sp,#0x44]\n\
    add         r3,sp,#0x4\n\
    bl          fun_08048e64\n\
    str         r0,[sp,#0x5c]\n\
    ldr         r2,[sp,#0x40]\n\
    lsl         r0,r2,#0x1\n\
    lsr         r0,r0,#0x15\n\
    mov         r8,r0\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046ccc\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    str         r0,[sp,#0x48]\n\
    str         r1,[sp,#0x4c]\n\
    ldr         r0,DAT_08046cc0\n\
    ldr         r1,[sp,#0x48]\n\
    and         r1,r0\n\
    str         r1,[sp,#0x48]\n\
    ldr         r0,DAT_08046cc4\n\
    add         r2,r1,#0x0\n\
    orr         r2,r0\n\
    str         r2,[sp,#0x48]\n\
    ldr         r3,DAT_08046cc8\n\
    add         r8,r3\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x58]\n\
    ldr         r6,[sp,#0x8]\n\
    b           LAB_08046d2c\n\
\n\
.space 2\n\
\n\
DAT_08046cc0:\n\
    .4byte 0x000FFFFF\n\
DAT_08046cc4:\n\
    .4byte 0x3FF00000\n\
DAT_08046cc8:\n\
    .4byte 0xFFFFFC01\n\
LAB_08046ccc:\n\
    ldr         r1,[sp,#0x8]\n\
    ldr         r0,[sp,#0x4]\n\
    add         r2,r1,r0\n\
    ldr         r3,DAT_08046cf4\n\
    add         r3,r3,r2\n\
    mov         r8,r3\n\
    add         r6,r1,#0x0\n\
    cmp         r3,#0x20\n\
    ble         LAB_08046cfc\n\
    mov         r0,#0x40\n\
    sub         r0,r0,r3\n\
    ldr         r4,[sp,#0x40]\n\
    lsl         r4,r0\n\
    ldr         r1,DAT_08046cf8\n\
    add         r0,r2,r1\n\
    ldr         r2,[sp,#0x44]\n\
    lsr         r2,r0\n\
    add         r0,r2,#0x0\n\
    orr         r4,r0\n\
    b           LAB_08046d06\n\
DAT_08046cf4:\n\
    .4byte 0x00000432\n\
DAT_08046cf8:\n\
    .4byte 0x00000412\n\
LAB_08046cfc:\n\
    mov         r0,#0x20\n\
    mov         r3,r8\n\
    sub         r0,r0,r3\n\
    ldr         r4,[sp,#0x44]\n\
    lsl         r4,r0\n\
LAB_08046d06:\n\
    add         r0,r4,#0x0\n\
    bl          fun_080443f0\n\
    cmp         r4,#0x0\n\
    bge         LAB_08046d18\n\
    ldr         r3,DAT_08046ddc\n\
    ldr         r2,DAT_08046dd8\n\
    bl          fun_08043c64\n\
LAB_08046d18:\n\
    str         r0,[sp,#0x48]\n\
    str         r1,[sp,#0x4c]\n\
    ldr         r1,DAT_08046de0\n\
    ldr         r0,[sp,#0x48]\n\
    add         r1,r0,r1\n\
    str         r1,[sp,#0x48]\n\
    ldr         r2,DAT_08046de4\n\
    add         r8,r2\n\
    mov         r3,#0x1\n\
    str         r3,[sp,#0x58]\n\
LAB_08046d2c:\n\
    ldr         r2,DAT_08046de8\n\
    ldr         r3,DAT_08046dec\n\
    ldr         r0,[sp,#0x48]\n\
    ldr         r1,[sp,#0x4c]\n\
    bl          fun_08043c94\n\
    ldr         r2,DAT_08046df0\n\
    ldr         r3,DAT_08046df4\n\
    bl          fun_08043ccc\n\
    ldr         r2,DAT_08046df8\n\
    ldr         r3,DAT_08046dfc\n\
    bl          fun_08043c64\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    mov         r0,r8\n\
    bl          fun_080443f0\n\
    ldr         r2,DAT_08046e00\n\
    ldr         r3,DAT_08046e04\n\
    bl          fun_08043ccc\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08043c64\n\
    str         r0,[sp,#0x6c]\n\
    str         r1,[sp,#0x70]\n\
    bl          fun_0804446c\n\
    str         r0,[sp,#0x24]\n\
    ldr         r2,DAT_08046e08\n\
    ldr         r3,DAT_08046e0c\n\
    ldr         r0,[sp,#0x6c]\n\
    ldr         r1,[sp,#0x70]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08046d9c\n\
    ldr         r0,[sp,#0x24]\n\
    bl          fun_080443f0\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x6c]\n\
    ldr         r1,[sp,#0x70]\n\
    bl          fun_08044274\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046d9c\n\
    ldr         r0,[sp,#0x24]\n\
    sub         r0,#0x1\n\
    str         r0,[sp,#0x24]\n\
LAB_08046d9c:\n\
    mov         r1,#0x1\n\
    str         r1,[sp,#0x2c]\n\
    ldr         r2,[sp,#0x24]\n\
    cmp         r2,#0x16\n\
    bhi         LAB_08046dc6\n\
    ldr         r1,DAT_08046e10\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r3,[r0,#0x4]\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08046dc2\n\
    ldr         r3,[sp,#0x24]\n\
    sub         r3,#0x1\n\
    str         r3,[sp,#0x24]\n\
LAB_08046dc2:\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x2c]\n\
LAB_08046dc6:\n\
    mov         r1,r8\n\
    sub         r0,r6,r1\n\
    sub         r4,r0,#0x1\n\
    cmp         r4,#0x0\n\
    blt         LAB_08046e14\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x10]\n\
    str         r4,[sp,#0x34]\n\
    b           LAB_08046e1c\n\
DAT_08046dd8:\n\
    .4byte 0x41F00000\n\
DAT_08046ddc:\n\
    .4byte 0x00000000\n\
DAT_08046de0:\n\
    .4byte 0xFE100000\n\
DAT_08046de4:\n\
    .4byte 0xFFFFFBCD\n\
DAT_08046de8:\n\
    .4byte 0x3FF80000\n\
DAT_08046dec:\n\
    .4byte 0x00000000\n\
DAT_08046df0:\n\
    .4byte 0x3FD287A7\n\
DAT_08046df4:\n\
    .4byte 0x636F4361\n\
DAT_08046df8:\n\
    .4byte 0x3FC68A28\n\
DAT_08046dfc:\n\
    .4byte 0x8B60C8B3\n\
DAT_08046e00:\n\
    .4byte 0x3FD34413\n\
DAT_08046e04:\n\
    .4byte 0x509F79FB\n\
DAT_08046e08:\n\
    .4byte 0x00000000\n\
DAT_08046e0c:\n\
    .4byte 0x00000000\n\
DAT_08046e10:\n\
    .4byte 0x086CCDA0\n\
LAB_08046e14:\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    str         r4,[sp,#0x10]\n\
    mov         r3,#0x0\n\
    str         r3,[sp,#0x34]\n\
LAB_08046e1c:\n\
    ldr         r0,[sp,#0x24]\n\
    cmp         r0,#0x0\n\
    blt         LAB_08046e30\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x14]\n\
    str         r0,[sp,#0x38]\n\
    ldr         r2,[sp,#0x34]\n\
    add         r2,r2,r0\n\
    str         r2,[sp,#0x34]\n\
    b           LAB_08046e40\n\
LAB_08046e30:\n\
    ldr         r3,[sp,#0x10]\n\
    ldr         r0,[sp,#0x24]\n\
    sub         r3,r3,r0\n\
    str         r3,[sp,#0x10]\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
    str         r1,[sp,#0x14]\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x38]\n\
LAB_08046e40:\n\
    ldr         r3,[sp,#0xc]\n\
    cmp         r3,#0x9\n\
    bls         LAB_08046e4a\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0xc]\n\
LAB_08046e4a:\n\
    mov         r5,#0x1\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r1,#0x5\n\
    ble         LAB_08046e58\n\
    sub         r1,#0x4\n\
    str         r1,[sp,#0xc]\n\
    mov         r5,#0x0\n\
LAB_08046e58:\n\
    mov         r2,#0x1\n\
    str         r2,[sp,#0x30]\n\
    ldr         r3,[sp,#0xc]\n\
    cmp         r3,#0x5\n\
    bhi         switchD_08046e6a_caseD_6\n\
    lsl         r0,r3,#0x2\n\
    ldr         r1,DAT_08046e6c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_08046e6c:\n\
    .4byte 0x08046E70\n\
switchdataD_08046e70:\n\
    .4byte switchD_08046e6a_caseD_0\n\
    .4byte switchD_08046e6a_caseD_0\n\
    .4byte switchD_08046e6a_caseD_2\n\
    .4byte switchD_08046e6a_caseD_3\n\
    .4byte switchD_08046e6a_caseD_4\n\
    .4byte switchD_08046e6a_caseD_5\n\
switchD_08046e6a_caseD_0:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[sp,#0x18]\n\
    str         r0,[sp,#0x20]\n\
    mov         r1,#0x12\n\
    mov         r8,r1\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0xa4]\n\
    b           switchD_08046e6a_caseD_6\n\
switchD_08046e6a_caseD_2:\n\
    mov         r3,#0x0\n\
    str         r3,[sp,#0x30]\n\
switchD_08046e6a_caseD_4:\n\
    ldr         r0,[sp,#0xa4]\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08046ea8\n\
    mov         r1,#0x1\n\
    str         r1,[sp,#0xa4]\n\
LAB_08046ea8:\n\
    ldr         r2,[sp,#0xa4]\n\
    mov         r8,r2\n\
    mov         r3,r8\n\
    str         r3,[sp,#0x20]\n\
    mov         r0,r8\n\
    str         r0,[sp,#0x18]\n\
    b           switchD_08046e6a_caseD_6\n\
switchD_08046e6a_caseD_3:\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x30]\n\
switchD_08046e6a_caseD_5:\n\
    ldr         r2,[sp,#0xa4]\n\
    ldr         r3,[sp,#0x24]\n\
    add         r0,r2,r3\n\
    add         r1,r0,#0x1\n\
    mov         r8,r1\n\
    mov         r2,r8\n\
    str         r2,[sp,#0x18]\n\
    str         r0,[sp,#0x20]\n\
    cmp         r1,#0x0\n\
    bgt         switchD_08046e6a_caseD_6\n\
    mov         r3,#0x1\n\
    mov         r8,r3\n\
switchD_08046e6a_caseD_6:\n\
    mov         r4,#0x4\n\
    mov         r0,#0x0\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x44]\n\
    mov         r2,r8\n\
    cmp         r2,#0x17\n\
    bls         LAB_08046ef2\n\
    mov         r1,#0x0\n\
LAB_08046ee2:\n\
    add         r1,#0x1\n\
    lsl         r4,r4,#0x1\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x14\n\
    cmp         r0,r8\n\
    bls         LAB_08046ee2\n\
    mov         r3,r10\n\
    str         r1,[r3,#0x44]\n\
LAB_08046ef2:\n\
    mov         r0,r10\n\
    ldr         r1,[r0,#0x44]\n\
    bl          fun_0804870c\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x40]\n\
    str         r0,[sp,#0x74]\n\
    mov         r9,r0\n\
    ldr         r2,[sp,#0x18]\n\
    cmp         r2,#0xe\n\
    bls         LAB_08046f0a\n\
    b           LAB_0804727c\n\
LAB_08046f0a:\n\
    cmp         r5,#0x0\n\
    bne         LAB_08046f10\n\
    b           LAB_0804727c\n\
LAB_08046f10:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    str         r0,[sp,#0x78]\n\
    str         r1,[sp,#0x7c]\n\
    str         r0,[sp,#0x48]\n\
    str         r1,[sp,#0x4c]\n\
    ldr         r1,[sp,#0x24]\n\
    str         r1,[sp,#0x28]\n\
    str         r2,[sp,#0x1c]\n\
    mov         r7,#0x2\n\
    cmp         r1,#0x0\n\
    ble         LAB_08046fa0\n\
    ldr         r0,DAT_08046f98\n\
    mov         r2,#0xf\n\
    and         r1,r2\n\
    lsl         r1,r1,#0x3\n\
    add         r3,r1,r0\n\
    ldr         r0,[r3,#0x0]\n\
    ldr         r1,[r3,#0x4]\n\
    str         r0,[sp,#0x6c]\n\
    str         r1,[sp,#0x70]\n\
    ldr         r1,[sp,#0x24]\n\
    asr         r4,r1,#0x4\n\
    mov         r0,#0x10\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046f5c\n\
    and         r4,r2\n\
    ldr         r0,DAT_08046f9c\n\
    ldr         r2,[r0,#0x20]\n\
    ldr         r3,[r0,#0x24]\n\
    ldr         r0,[sp,#0x78]\n\
    ldr         r1,[sp,#0x7c]\n\
    bl          fun_08043f74\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    mov         r7,#0x3\n\
LAB_08046f5c:\n\
    cmp         r4,#0x0\n\
    beq         LAB_08046f84\n\
    ldr         r5,DAT_08046f9c\n\
LAB_08046f62:\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046f7c\n\
    add         r7,#0x1\n\
    ldr         r2,[r5,#0x0]\n\
    ldr         r3,[r5,#0x4]\n\
    ldr         r0,[sp,#0x6c]\n\
    ldr         r1,[sp,#0x70]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x6c]\n\
    str         r1,[sp,#0x70]\n\
LAB_08046f7c:\n\
    asr         r4,r4,#0x1\n\
    add         r5,#0x8\n\
    cmp         r4,#0x0\n\
    bne         LAB_08046f62\n\
LAB_08046f84:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    ldr         r2,[sp,#0x6c]\n\
    ldr         r3,[sp,#0x70]\n\
    bl          fun_08043f74\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    b           LAB_08046fec\n\
\n\
.space 2\n\
\n\
DAT_08046f98:\n\
    .4byte 0x086CCDA0\n\
DAT_08046f9c:\n\
    .4byte 0x086CCE68\n\
LAB_08046fa0:\n\
    ldr         r2,[sp,#0x24]\n\
.syntax unified\n\
    rsbs        r6,r2,#0\n\
.syntax divided\n\
    cmp         r6,#0x0\n\
    beq         LAB_08046fec\n\
    ldr         r1,DAT_08047094\n\
    mov         r0,#0xf\n\
    and         r0,r6\n\
    lsl         r0,r0,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x4]\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r2,[sp,#0x78]\n\
    ldr         r3,[sp,#0x7c]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    asr         r4,r6,#0x4\n\
    cmp         r4,#0x0\n\
    beq         LAB_08046fec\n\
    ldr         r5,DAT_08047098\n\
LAB_08046fca:\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08046fe4\n\
    add         r7,#0x1\n\
    ldr         r0,[r5,#0x0]\n\
    ldr         r1,[r5,#0x4]\n\
    ldr         r2,[sp,#0x40]\n\
    ldr         r3,[sp,#0x44]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
LAB_08046fe4:\n\
    asr         r4,r4,#0x1\n\
    add         r5,#0x8\n\
    cmp         r4,#0x0\n\
    bne         LAB_08046fca\n\
LAB_08046fec:\n\
    ldr         r3,[sp,#0x2c]\n\
    cmp         r3,#0x0\n\
    beq         LAB_0804702a\n\
    ldr         r2,DAT_0804709c\n\
    ldr         r3,DAT_080470a0\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804702a\n\
    ldr         r0,[sp,#0x18]\n\
    cmp         r0,#0x0\n\
    ble         LAB_0804702a\n\
    ldr         r1,[sp,#0x20]\n\
    cmp         r1,#0x0\n\
    bgt         LAB_08047010\n\
    b           LAB_08047268\n\
LAB_08047010:\n\
    str         r1,[sp,#0x18]\n\
    ldr         r2,[sp,#0x24]\n\
    sub         r2,#0x1\n\
    str         r2,[sp,#0x24]\n\
    ldr         r0,DAT_080470a4\n\
    ldr         r1,DAT_080470a8\n\
    ldr         r2,[sp,#0x40]\n\
    ldr         r3,[sp,#0x44]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    add         r7,#0x1\n\
LAB_0804702a:\n\
    add         r0,r7,#0x0\n\
    bl          fun_080443f0\n\
    ldr         r2,[sp,#0x40]\n\
    ldr         r3,[sp,#0x44]\n\
    bl          fun_08043ccc\n\
    ldr         r2,DAT_080470ac\n\
    ldr         r3,DAT_080470b0\n\
    bl          fun_08043c64\n\
    str         r0,[sp,#0x50]\n\
    str         r1,[sp,#0x54]\n\
    ldr         r0,DAT_080470b4\n\
    ldr         r3,[sp,#0x50]\n\
    add         r0,r3,r0\n\
    str         r0,[sp,#0x50]\n\
    ldr         r1,[sp,#0x18]\n\
    cmp         r1,#0x0\n\
    bne         LAB_080470c0\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x64]\n\
    mov         r3,#0x0\n\
    str         r3,[sp,#0x68]\n\
    ldr         r2,DAT_080470b8\n\
    ldr         r3,DAT_080470bc\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08043c94\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_080442c0\n\
    cmp         r0,#0x0\n\
    ble         LAB_08047078\n\
    b           LAB_080475f2\n\
LAB_08047078:\n\
    ldr         r0,[sp,#0x50]\n\
    ldr         r1,[sp,#0x54]\n\
    bl          fun_080444e0\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08047092\n\
    b           LAB_080475ea\n\
LAB_08047092:\n\
    b           LAB_08047268\n\
DAT_08047094:\n\
    .4byte 0x086CCDA0\n\
DAT_08047098:\n\
    .4byte 0x086CCE68\n\
DAT_0804709c:\n\
    .4byte 0x3FF00000\n\
DAT_080470a0:\n\
    .4byte 0x00000000\n\
DAT_080470a4:\n\
    .4byte 0x40240000\n\
DAT_080470a8:\n\
    .4byte 0x00000000\n\
DAT_080470ac:\n\
    .4byte 0x401C0000\n\
DAT_080470b0:\n\
    .4byte 0x00000000\n\
DAT_080470b4:\n\
    .4byte 0xFCC00000\n\
DAT_080470b8:\n\
    .4byte 0x40140000\n\
DAT_080470bc:\n\
    .4byte 0x00000000\n\
LAB_080470c0:\n\
    ldr         r0,[sp,#0x30]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047190\n\
    ldr         r1,DAT_080470f0\n\
    ldr         r0,[sp,#0x18]\n\
    sub         r0,#0x1\n\
    lsl         r0,r0,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r3,[r0,#0x4]\n\
    ldr         r0,DAT_080470f4\n\
    ldr         r1,DAT_080470f8\n\
    bl          fun_08043f74\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08043c94\n\
    str         r0,[sp,#0x50]\n\
    str         r1,[sp,#0x54]\n\
    mov         r1,#0x0\n\
    mov         r8,r1\n\
    b           LAB_0804711c\n\
\n\
.space 2\n\
\n\
DAT_080470f0:\n\
    .4byte 0x086CCDA0\n\
DAT_080470f4:\n\
    .4byte 0x3FE00000\n\
DAT_080470f8:\n\
    .4byte 0x00000000\n\
LAB_080470fc:\n\
    ldr         r1,DAT_08047184\n\
    ldr         r0,DAT_08047180\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x50]\n\
    str         r1,[sp,#0x54]\n\
    ldr         r1,DAT_08047184\n\
    ldr         r0,DAT_08047180\n\
    add         r3,r5,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
LAB_0804711c:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_0804446c\n\
    add         r6,r0,#0x0\n\
    bl          fun_080443f0\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08043c94\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    add         r0,r6,#0x0\n\
    add         r0,#0x30\n\
    mov         r2,r9\n\
    strb        r0,[r2,#0x0]\n\
    mov         r3,#0x1\n\
    add         r9,r3\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08047158\n\
    b           LAB_08047862\n\
LAB_08047158:\n\
    ldr         r0,DAT_08047188\n\
    ldr         r1,DAT_0804718c\n\
    add         r3,r5,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_08043c94\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08047172\n\
    b           LAB_0804737c\n\
LAB_08047172:\n\
    mov         r0,#0x1\n\
    add         r8,r0\n\
    ldr         r1,[sp,#0x18]\n\
    cmp         r8,r1\n\
    blt         LAB_080470fc\n\
    b           LAB_08047268\n\
\n\
.space 2\n\
\n\
DAT_08047180:\n\
    .4byte 0x40240000\n\
DAT_08047184:\n\
    .4byte 0x00000000\n\
DAT_08047188:\n\
    .4byte 0x3FF00000\n\
DAT_0804718c:\n\
    .4byte 0x00000000\n\
LAB_08047190:\n\
    ldr         r1,DAT_080471b0\n\
    ldr         r0,[sp,#0x18]\n\
    sub         r0,#0x1\n\
    lsl         r0,r0,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x4]\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x50]\n\
    str         r1,[sp,#0x54]\n\
    mov         r2,#0x1\n\
    mov         r8,r2\n\
    b           LAB_080471c8\n\
DAT_080471b0:\n\
    .4byte 0x086CCDA0\n\
LAB_080471b4:\n\
    mov         r3,#0x1\n\
    add         r8,r3\n\
    ldr         r1,DAT_0804725c\n\
    ldr         r0,DAT_08047258\n\
    add         r3,r5,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
LAB_080471c8:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_0804446c\n\
    add         r6,r0,#0x0\n\
    bl          fun_080443f0\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08043c94\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    add         r0,r6,#0x0\n\
    add         r0,#0x30\n\
    mov         r1,r9\n\
    strb        r0,[r1,#0x0]\n\
    mov         r2,#0x1\n\
    add         r9,r2\n\
    ldr         r3,[sp,#0x18]\n\
    cmp         r8,r3\n\
    bne         LAB_080471b4\n\
    ldr         r6,DAT_08047260\n\
    ldr         r7,DAT_08047264\n\
    add         r1,r7,#0x0\n\
    add         r0,r6,#0x0\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08043c64\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_080442c0\n\
    cmp         r0,#0x0\n\
    ble         LAB_0804721a\n\
    b           LAB_0804737c\n\
LAB_0804721a:\n\
    add         r1,r7,#0x0\n\
    add         r0,r6,#0x0\n\
    ldr         r2,[sp,#0x50]\n\
    ldr         r3,[sp,#0x54]\n\
    bl          fun_08043c94\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044358\n\
    cmp         r0,#0x0\n\
    bge         LAB_08047268\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r9,r0\n\
    mov         r1,r9\n\
    ldrb        r1,[r1,#0x0]\n\
    cmp         r1,#0x30\n\
    beq         LAB_08047246\n\
    b           LAB_080473a2\n\
LAB_08047246:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r9,r2\n\
    mov         r3,r9\n\
    ldrb        r3,[r3,#0x0]\n\
    cmp         r3,#0x30\n\
    beq         LAB_08047246\n\
    b           LAB_080473a2\n\
\n\
.space 2\n\
\n\
DAT_08047258:\n\
    .4byte 0x40240000\n\
DAT_0804725c:\n\
    .4byte 0x00000000\n\
DAT_08047260:\n\
    .4byte 0x3FE00000\n\
DAT_08047264:\n\
    .4byte 0x00000000\n\
LAB_08047268:\n\
    ldr         r1,[sp,#0x74]\n\
    mov         r9,r1\n\
    ldr         r2,[sp,#0x48]\n\
    ldr         r3,[sp,#0x4c]\n\
    str         r2,[sp,#0x40]\n\
    str         r3,[sp,#0x44]\n\
    ldr         r3,[sp,#0x28]\n\
    str         r3,[sp,#0x24]\n\
    ldr         r0,[sp,#0x1c]\n\
    str         r0,[sp,#0x18]\n\
LAB_0804727c:\n\
    ldr         r0,[sp,#0x4]\n\
    cmp         r0,#0x0\n\
    bge         LAB_08047284\n\
    b           LAB_080473b8\n\
LAB_08047284:\n\
    ldr         r1,[sp,#0x24]\n\
    cmp         r1,#0xe\n\
    ble         LAB_0804728c\n\
    b           LAB_080473b8\n\
LAB_0804728c:\n\
    ldr         r1,DAT_080472d8\n\
    ldr         r2,[sp,#0x24]\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,[r0,#0x4]\n\
    str         r1,[sp,#0x6c]\n\
    str         r2,[sp,#0x70]\n\
    ldr         r2,[sp,#0xa4]\n\
    cmp         r2,#0x0\n\
    bge         LAB_080472e4\n\
    ldr         r3,[sp,#0x18]\n\
    cmp         r3,#0x0\n\
    bgt         LAB_080472e4\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x64]\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x68]\n\
    cmp         r3,#0x0\n\
    bge         LAB_080472b6\n\
    b           LAB_080475ea\n\
LAB_080472b6:\n\
    ldr         r2,DAT_080472dc\n\
    ldr         r3,DAT_080472e0\n\
    ldr         r0,[sp,#0x6c]\n\
    ldr         r1,[sp,#0x70]\n\
    bl          fun_08043ccc\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_080443a4\n\
    cmp         r0,#0x0\n\
    bgt         LAB_080472d4\n\
    b           LAB_080475ea\n\
LAB_080472d4:\n\
    b           LAB_080475f2\n\
\n\
.space 2\n\
\n\
DAT_080472d8:\n\
    .4byte 0x086CCDA0\n\
DAT_080472dc:\n\
    .4byte 0x40140000\n\
DAT_080472e0:\n\
    .4byte 0x00000000\n\
LAB_080472e4:\n\
    mov         r2,#0x1\n\
    mov         r8,r2\n\
    b           LAB_08047308\n\
LAB_080472ea:\n\
    ldr         r1,DAT_080473ac\n\
    ldr         r0,DAT_080473a8\n\
    bl          fun_08043ccc\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    ldr         r2,DAT_080473b0\n\
    ldr         r3,DAT_080473b4\n\
    bl          fun_08044228\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047304\n\
    b           LAB_08047862\n\
LAB_08047304:\n\
    mov         r3,#0x1\n\
    add         r8,r3\n\
LAB_08047308:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    ldr         r2,[sp,#0x6c]\n\
    ldr         r3,[sp,#0x70]\n\
    bl          fun_08043f74\n\
    bl          fun_0804446c\n\
    add         r6,r0,#0x0\n\
    bl          fun_080443f0\n\
    ldr         r2,[sp,#0x6c]\n\
    ldr         r3,[sp,#0x70]\n\
    bl          fun_08043ccc\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    bl          fun_08043c94\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    add         r0,r6,#0x0\n\
    add         r0,#0x30\n\
    mov         r1,r9\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    add         r9,r0\n\
    ldr         r1,[sp,#0x18]\n\
    cmp         r8,r1\n\
    bne         LAB_080472ea\n\
    add         r1,r3,#0x0\n\
    add         r0,r2,#0x0\n\
    bl          fun_08043c64\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    ldr         r2,[sp,#0x6c]\n\
    ldr         r3,[sp,#0x70]\n\
    bl          fun_080442c0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_0804737c\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    ldr         r2,[sp,#0x6c]\n\
    ldr         r3,[sp,#0x70]\n\
    bl          fun_08044228\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047372\n\
    b           LAB_08047862\n\
LAB_08047372:\n\
    mov         r0,#0x1\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804737c\n\
    b           LAB_08047862\n\
LAB_0804737c:\n\
    mov         r0,#0x30\n\
LAB_0804737e:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r9,r2\n\
    mov         r3,r9\n\
    ldrb        r3,[r3,#0x0]\n\
    cmp         r3,#0x39\n\
    bne         LAB_0804739a\n\
    ldr         r1,[sp,#0x74]\n\
    cmp         r9,r1\n\
    bne         LAB_0804737e\n\
    ldr         r2,[sp,#0x24]\n\
    add         r2,#0x1\n\
    str         r2,[sp,#0x24]\n\
    strb        r0,[r1,#0x0]\n\
LAB_0804739a:\n\
    mov         r3,r9\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
LAB_080473a2:\n\
    mov         r0,#0x1\n\
    add         r9,r0\n\
    b           LAB_08047862\n\
DAT_080473a8:\n\
    .4byte 0x40240000\n\
DAT_080473ac:\n\
    .4byte 0x00000000\n\
DAT_080473b0:\n\
    .4byte 0x00000000\n\
DAT_080473b4:\n\
    .4byte 0x00000000\n\
LAB_080473b8:\n\
    ldr         r5,[sp,#0x10]\n\
    ldr         r6,[sp,#0x14]\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x60]\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x64]\n\
    ldr         r3,[sp,#0x30]\n\
    cmp         r3,#0x0\n\
    beq         LAB_0804742e\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r1,#0x1\n\
    bgt         LAB_080473ec\n\
    ldr         r2,[sp,#0x58]\n\
    cmp         r2,#0x0\n\
    beq         LAB_080473e4\n\
    ldr         r3,DAT_080473e0\n\
    add         r3,r3,r0\n\
    mov         r8,r3\n\
    b           LAB_08047418\n\
\n\
.space 2\n\
\n\
DAT_080473e0:\n\
    .4byte 0x00000433\n\
LAB_080473e4:\n\
    ldr         r1,[sp,#0x8]\n\
    mov         r0,#0x36\n\
    sub         r0,r0,r1\n\
    b           LAB_08047416\n\
LAB_080473ec:\n\
    ldr         r4,[sp,#0x18]\n\
    sub         r4,#0x1\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,r4\n\
    blt         LAB_080473fa\n\
    sub         r6,r0,r4\n\
    b           LAB_0804740a\n\
LAB_080473fa:\n\
    ldr         r1,[sp,#0x14]\n\
    sub         r4,r4,r1\n\
    ldr         r2,[sp,#0x38]\n\
    add         r2,r2,r4\n\
    str         r2,[sp,#0x38]\n\
    add         r1,r1,r4\n\
    str         r1,[sp,#0x14]\n\
    mov         r6,#0x0\n\
LAB_0804740a:\n\
    ldr         r3,[sp,#0x18]\n\
    mov         r8,r3\n\
    cmp         r3,#0x0\n\
    bge         LAB_08047418\n\
    sub         r5,r5,r3\n\
    mov         r0,#0x0\n\
LAB_08047416:\n\
    mov         r8,r0\n\
LAB_08047418:\n\
    ldr         r1,[sp,#0x10]\n\
    add         r1,r8\n\
    str         r1,[sp,#0x10]\n\
    ldr         r2,[sp,#0x34]\n\
    add         r2,r8\n\
    str         r2,[sp,#0x34]\n\
    mov         r0,r10\n\
    mov         r1,#0x1\n\
    bl          fun_08048974\n\
    str         r0,[sp,#0x64]\n\
LAB_0804742e:\n\
    cmp         r5,#0x0\n\
    ble         LAB_08047450\n\
    ldr         r3,[sp,#0x34]\n\
    cmp         r3,#0x0\n\
    ble         LAB_08047450\n\
    mov         r8,r3\n\
    cmp         r8,r5\n\
    ble         LAB_08047440\n\
    mov         r8,r5\n\
LAB_08047440:\n\
    ldr         r0,[sp,#0x10]\n\
    mov         r1,r8\n\
    sub         r0,r0,r1\n\
    str         r0,[sp,#0x10]\n\
    sub         r5,r5,r1\n\
    ldr         r2,[sp,#0x34]\n\
    sub         r2,r2,r1\n\
    str         r2,[sp,#0x34]\n\
LAB_08047450:\n\
    ldr         r3,[sp,#0x14]\n\
    cmp         r3,#0x0\n\
    ble         LAB_0804749e\n\
    ldr         r0,[sp,#0x30]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047492\n\
    cmp         r6,#0x0\n\
    ble         LAB_08047482\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    add         r2,r6,#0x0\n\
    bl          fun_08048af4\n\
    str         r0,[sp,#0x64]\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    ldr         r2,[sp,#0x5c]\n\
    bl          fun_08048988\n\
    add         r4,r0,#0x0\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    bl          fun_08048764\n\
    str         r4,[sp,#0x5c]\n\
LAB_08047482:\n\
    ldr         r1,[sp,#0x14]\n\
    sub         r4,r1,r6\n\
    cmp         r4,#0x0\n\
    beq         LAB_0804749e\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    add         r2,r4,#0x0\n\
    b           LAB_08047498\n\
LAB_08047492:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    ldr         r2,[sp,#0x14]\n\
LAB_08047498:\n\
    bl          fun_08048af4\n\
    str         r0,[sp,#0x5c]\n\
LAB_0804749e:\n\
    mov         r0,r10\n\
    mov         r1,#0x1\n\
    bl          fun_08048974\n\
    str         r0,[sp,#0x68]\n\
    ldr         r2,[sp,#0x38]\n\
    cmp         r2,#0x0\n\
    ble         LAB_080474b8\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048af4\n\
    str         r0,[sp,#0x68]\n\
LAB_080474b8:\n\
    ldr         r3,[sp,#0xc]\n\
    cmp         r3,#0x1\n\
    bgt         LAB_080474f4\n\
    ldr         r0,[sp,#0x44]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080474f0\n\
    ldr         r0,DAT_080474e8\n\
    ldr         r1,[sp,#0x40]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080474f0\n\
    ldr         r0,DAT_080474ec\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_080474f0\n\
    ldr         r1,[sp,#0x10]\n\
    add         r1,#0x1\n\
    str         r1,[sp,#0x10]\n\
    ldr         r2,[sp,#0x34]\n\
    add         r2,#0x1\n\
    str         r2,[sp,#0x34]\n\
    mov         r3,#0x1\n\
    str         r3,[sp,#0x3c]\n\
    b           LAB_080474f4\n\
DAT_080474e8:\n\
    .4byte 0x000FFFFF\n\
DAT_080474ec:\n\
    .4byte 0x7FF00000\n\
LAB_080474f0:\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x3c]\n\
LAB_080474f4:\n\
    ldr         r1,[sp,#0x38]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08047520\n\
    ldr         r2,[sp,#0x68]\n\
    ldr         r1,[r2,#0x10]\n\
    sub         r1,#0x1\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x14\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08048898\n\
    ldr         r1,[sp,#0x34]\n\
    add         r1,#0x20\n\
    sub         r1,r1,r0\n\
    mov         r8,r1\n\
    mov         r0,#0x1f\n\
    mov         r3,r8\n\
    and         r3,r0\n\
    mov         r8,r3\n\
    b           LAB_0804752e\n\
LAB_08047520:\n\
    ldr         r0,[sp,#0x34]\n\
    add         r0,#0x1\n\
    mov         r8,r0\n\
    mov         r0,#0x1f\n\
    mov         r1,r8\n\
    and         r1,r0\n\
    mov         r8,r1\n\
LAB_0804752e:\n\
    mov         r2,r8\n\
    cmp         r2,#0x0\n\
    beq         LAB_0804753a\n\
    mov         r0,#0x20\n\
    sub         r2,r0,r2\n\
    mov         r8,r2\n\
LAB_0804753a:\n\
    mov         r3,r8\n\
    cmp         r3,#0x4\n\
    ble         LAB_08047546\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_0804754e\n\
LAB_08047546:\n\
    mov         r3,r8\n\
    cmp         r3,#0x3\n\
    bgt         LAB_0804755e\n\
    mov         r0,#0x1c\n\
LAB_0804754e:\n\
    add         r8,r0\n\
    ldr         r1,[sp,#0x10]\n\
    add         r1,r8\n\
    str         r1,[sp,#0x10]\n\
    add         r5,r8\n\
    ldr         r2,[sp,#0x34]\n\
    add         r2,r8\n\
    str         r2,[sp,#0x34]\n\
LAB_0804755e:\n\
    ldr         r3,[sp,#0x10]\n\
    cmp         r3,#0x0\n\
    ble         LAB_08047570\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    add         r2,r3,#0x0\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x5c]\n\
LAB_08047570:\n\
    ldr         r0,[sp,#0x34]\n\
    cmp         r0,#0x0\n\
    ble         LAB_08047582\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x68]\n\
    ldr         r2,[sp,#0x34]\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x68]\n\
LAB_08047582:\n\
    ldr         r1,[sp,#0x2c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080475c0\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048c2c\n\
    cmp         r0,#0x0\n\
    bge         LAB_080475c0\n\
    ldr         r2,[sp,#0x24]\n\
    sub         r2,#0x1\n\
    str         r2,[sp,#0x24]\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x5c]\n\
    ldr         r3,[sp,#0x30]\n\
    cmp         r3,#0x0\n\
    beq         LAB_080475bc\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x64]\n\
LAB_080475bc:\n\
    ldr         r0,[sp,#0x20]\n\
    str         r0,[sp,#0x18]\n\
LAB_080475c0:\n\
    ldr         r1,[sp,#0x18]\n\
    cmp         r1,#0x0\n\
    bgt         LAB_08047604\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x2\n\
    ble         LAB_08047604\n\
    cmp         r1,#0x0\n\
    blt         LAB_080475ea\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x68]\n\
    mov         r2,#0x5\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x68]\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048c2c\n\
    cmp         r0,#0x0\n\
    bgt         LAB_080475f2\n\
LAB_080475ea:\n\
    ldr         r3,[sp,#0xa4]\n\
    mvn         r3,r3\n\
    str         r3,[sp,#0x24]\n\
    b           LAB_0804783a\n\
LAB_080475f2:\n\
    mov         r0,#0x31\n\
    mov         r1,r9\n\
    strb        r0,[r1,#0x0]\n\
    mov         r2,#0x1\n\
    add         r9,r2\n\
    ldr         r3,[sp,#0x24]\n\
    add         r3,#0x1\n\
    str         r3,[sp,#0x24]\n\
    b           LAB_0804783a\n\
LAB_08047604:\n\
    ldr         r0,[sp,#0x30]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804760c\n\
    b           LAB_08047782\n\
LAB_0804760c:\n\
    cmp         r5,#0x0\n\
    ble         LAB_0804761c\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    add         r2,r5,#0x0\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x64]\n\
LAB_0804761c:\n\
    ldr         r1,[sp,#0x64]\n\
    str         r1,[sp,#0x60]\n\
    ldr         r2,[sp,#0x3c]\n\
    cmp         r2,#0x0\n\
    beq         LAB_0804764e\n\
    ldr         r1,[r1,#0x4]\n\
    mov         r0,r10\n\
    bl          fun_0804870c\n\
    str         r0,[sp,#0x64]\n\
    add         r0,#0xc\n\
    ldr         r1,[sp,#0x60]\n\
    add         r1,#0xc\n\
    ldr         r3,[sp,#0x60]\n\
    ldr         r2,[r3,#0x10]\n\
    lsl         r2,r2,#0x2\n\
    add         r2,#0x8\n\
    bl          fun_08044f7c\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    mov         r2,#0x1\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x64]\n\
LAB_0804764e:\n\
    mov         r0,#0x1\n\
    mov         r8,r0\n\
    mov         r1,r8\n\
    ldr         r2,[sp,#0x44]\n\
    and         r2,r1\n\
    str         r2,[sp,#0x80]\n\
    b           LAB_080476a4\n\
LAB_0804765c:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x5c]\n\
    ldr         r3,[sp,#0x60]\n\
    ldr         r0,[sp,#0x64]\n\
    cmp         r3,r0\n\
    bne         LAB_08047684\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x64]\n\
    str         r0,[sp,#0x60]\n\
    b           LAB_080476a0\n\
LAB_08047684:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x60]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x60]\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x64]\n\
LAB_080476a0:\n\
    mov         r1,#0x1\n\
    add         r8,r1\n\
LAB_080476a4:\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08046a3c\n\
    add         r7,r0,#0x0\n\
    add         r7,#0x30\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x60]\n\
    bl          fun_08048c2c\n\
    add         r4,r0,#0x0\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x68]\n\
    ldr         r2,[sp,#0x64]\n\
    bl          fun_08048c6c\n\
    add         r5,r0,#0x0\n\
    ldr         r0,[r5,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080476d8\n\
    ldr         r0,[sp,#0x5c]\n\
    add         r1,r5,#0x0\n\
    bl          fun_08048c2c\n\
    add         r6,r0,#0x0\n\
    b           LAB_080476da\n\
LAB_080476d8:\n\
    mov         r6,#0x1\n\
LAB_080476da:\n\
    mov         r0,r10\n\
    add         r1,r5,#0x0\n\
    bl          fun_08048764\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047706\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x0\n\
    bne         LAB_08047706\n\
    ldr         r3,[sp,#0x80]\n\
    cmp         r3,#0x0\n\
    bne         LAB_08047706\n\
    cmp         r7,#0x39\n\
    beq         LAB_08047758\n\
    cmp         r4,#0x0\n\
    ble         LAB_080476fc\n\
    add         r7,#0x1\n\
LAB_080476fc:\n\
    mov         r0,r9\n\
    strb        r7,[r0,#0x0]\n\
    mov         r1,#0x1\n\
    add         r9,r1\n\
    b           LAB_0804783a\n\
LAB_08047706:\n\
    cmp         r4,#0x0\n\
    blt         LAB_0804771a\n\
    cmp         r4,#0x0\n\
    bne         LAB_08047750\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x0\n\
    bne         LAB_08047750\n\
    ldr         r3,[sp,#0x80]\n\
    cmp         r3,#0x0\n\
    bne         LAB_08047750\n\
LAB_0804771a:\n\
    cmp         r6,#0x0\n\
    ble         LAB_0804774a\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    mov         r2,#0x1\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048c2c\n\
    add         r6,r0,#0x0\n\
    cmp         r6,#0x0\n\
    bgt         LAB_08047744\n\
    cmp         r6,#0x0\n\
    bne         LAB_0804774a\n\
    add         r0,r7,#0x0\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804774a\n\
LAB_08047744:\n\
    add         r7,#0x1\n\
    cmp         r7,#0x3a\n\
    beq         LAB_08047758\n\
LAB_0804774a:\n\
    mov         r2,r9\n\
    strb        r7,[r2,#0x0]\n\
    b           LAB_08047802\n\
LAB_08047750:\n\
    cmp         r6,#0x0\n\
    ble         LAB_08047770\n\
    cmp         r7,#0x39\n\
    bne         LAB_08047764\n\
LAB_08047758:\n\
    mov         r0,#0x39\n\
    mov         r1,r9\n\
    strb        r0,[r1,#0x0]\n\
    mov         r2,#0x1\n\
    add         r9,r2\n\
    b           LAB_080477d8\n\
LAB_08047764:\n\
    add         r0,r7,#0x1\n\
    mov         r3,r9\n\
    strb        r0,[r3,#0x0]\n\
    mov         r0,#0x1\n\
    add         r9,r0\n\
    b           LAB_0804783a\n\
LAB_08047770:\n\
    mov         r1,r9\n\
    strb        r7,[r1,#0x0]\n\
    mov         r2,#0x1\n\
    add         r9,r2\n\
    ldr         r3,[sp,#0x18]\n\
    cmp         r8,r3\n\
    beq         LAB_08047780\n\
    b           LAB_0804765c\n\
LAB_08047780:\n\
    b           LAB_080477b4\n\
LAB_08047782:\n\
    mov         r0,#0x1\n\
    mov         r8,r0\n\
    b           LAB_0804779a\n\
LAB_08047788:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    mov         r2,#0xa\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    str         r0,[sp,#0x5c]\n\
    mov         r1,#0x1\n\
    add         r8,r1\n\
LAB_0804779a:\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08046a3c\n\
    add         r7,r0,#0x0\n\
    add         r7,#0x30\n\
    mov         r2,r9\n\
    strb        r7,[r2,#0x0]\n\
    mov         r3,#0x1\n\
    add         r9,r3\n\
    ldr         r0,[sp,#0x18]\n\
    cmp         r8,r0\n\
    blt         LAB_08047788\n\
LAB_080477b4:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    mov         r2,#0x1\n\
    bl          fun_08048b8c\n\
    str         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048c2c\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    bgt         LAB_080477d8\n\
    cmp         r4,#0x0\n\
    bne         LAB_0804781a\n\
    mov         r0,#0x1\n\
    and         r7,r0\n\
    cmp         r7,#0x0\n\
    beq         LAB_0804781a\n\
LAB_080477d8:\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    add         r9,r1\n\
    mov         r2,r9\n\
    ldrb        r2,[r2,#0x0]\n\
    cmp         r2,#0x39\n\
    bne         LAB_080477fa\n\
LAB_080477e6:\n\
    ldr         r3,[sp,#0x74]\n\
    cmp         r9,r3\n\
    beq         LAB_08047808\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r9,r0\n\
    mov         r1,r9\n\
    ldrb        r1,[r1,#0x0]\n\
    cmp         r1,#0x39\n\
    beq         LAB_080477e6\n\
LAB_080477fa:\n\
    mov         r2,r9\n\
    ldrb        r0,[r2,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r2,#0x0]\n\
LAB_08047802:\n\
    mov         r3,#0x1\n\
    add         r9,r3\n\
    b           LAB_0804783a\n\
LAB_08047808:\n\
    ldr         r0,[sp,#0x24]\n\
    add         r0,#0x1\n\
    str         r0,[sp,#0x24]\n\
    mov         r0,#0x31\n\
    ldr         r1,[sp,#0x74]\n\
    strb        r0,[r1,#0x0]\n\
    add         r1,#0x1\n\
    mov         r9,r1\n\
    b           LAB_0804783a\n\
LAB_0804781a:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r9,r2\n\
    mov         r3,r9\n\
    ldrb        r3,[r3,#0x0]\n\
    cmp         r3,#0x30\n\
    bne         LAB_08047836\n\
LAB_08047828:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r9,r0\n\
    mov         r1,r9\n\
    ldrb        r1,[r1,#0x0]\n\
    cmp         r1,#0x30\n\
    beq         LAB_08047828\n\
LAB_08047836:\n\
    mov         r2,#0x1\n\
    add         r9,r2\n\
LAB_0804783a:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x68]\n\
    bl          fun_08048764\n\
    ldr         r3,[sp,#0x64]\n\
    cmp         r3,#0x0\n\
    beq         LAB_08047862\n\
    ldr         r0,[sp,#0x60]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804785a\n\
    cmp         r0,r3\n\
    beq         LAB_0804785a\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x60]\n\
    bl          fun_08048764\n\
LAB_0804785a:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x64]\n\
    bl          fun_08048764\n\
LAB_08047862:\n\
    mov         r0,r10\n\
    ldr         r1,[sp,#0x5c]\n\
    bl          fun_08048764\n\
    mov         r0,#0x0\n\
    mov         r1,r9\n\
    strb        r0,[r1,#0x0]\n\
    ldr         r0,[sp,#0x24]\n\
    add         r0,#0x1\n\
    ldr         r2,[sp,#0xa8]\n\
    str         r0,[r2,#0x0]\n\
    ldr         r3,[sp,#0xb0]\n\
    cmp         r3,#0x0\n\
    beq         LAB_08047880\n\
    str         r1,[r3,#0x0]\n\
LAB_08047880:\n\
    ldr         r0,[sp,#0x74]\n\
    add         sp,#0x84\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08047890()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    bne         LAB_080478ac\n\
    ldr         r0,DAT_080478a4\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_080478a8\n\
    bl          fun_08047f2c\n\
    b           LAB_08047922\n\
DAT_080478a4:\n\
    .4byte 0x087D6554\n\
DAT_080478a8:\n\
    .4byte 0x08047891\n\
LAB_080478ac:\n\
    ldr         r0,[r4,#0x54]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080478b8\n\
    ldr         r0,DAT_080478ec\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r4,#0x54]\n\
LAB_080478b8:\n\
    ldr         r1,[r4,#0x54]\n\
    ldr         r0,[r1,#0x38]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080478c6\n\
    add         r0,r1,#0x0\n\
    bl          fun_08047a20\n\
LAB_080478c6:\n\
    mov         r0,#0xc\n\
    ldrsh       r1,[r4,r0]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047920\n\
    ldr         r6,[r4,#0x10]\n\
    cmp         r6,#0x0\n\
    beq         LAB_08047920\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r5,r0,r6\n\
    str         r6,[r4,#0x0]\n\
    mov         r0,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080478fe\n\
    ldr         r0,[r4,#0x14]\n\
    b           LAB_08047900\n\
\n\
.space 2\n\
\n\
DAT_080478ec:\n\
    .4byte 0x087D6554\n\
LAB_080478f0:\n\
    mov         r0,#0x40\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08047922\n\
LAB_080478fe:\n\
    mov         r0,#0x0\n\
LAB_08047900:\n\
    str         r0,[r4,#0x8]\n\
    cmp         r5,#0x0\n\
    ble         LAB_08047920\n\
LAB_08047906:\n\
    ldr         r0,[r4,#0x1c]\n\
    ldr         r3,[r4,#0x24]\n\
    add         r1,r6,#0x0\n\
    add         r2,r5,#0x0\n\
    bl          fun_080434d4\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    ble         LAB_080478f0\n\
    add         r6,r6,r1\n\
    sub         r5,r5,r1\n\
    cmp         r5,#0x0\n\
    bgt         LAB_08047906\n\
LAB_08047920:\n\
    mov         r0,#0x0\n\
LAB_08047922:\n\
    pop         {r4,r5,r6,pc}\n\
    ");
}
__attribute__((naked)) void fun_08047924()
{
    asm("\n\
    push        {r4,lr}\n\
    mov         r4,#0x0\n\
    str         r4,[r0,#0x0]\n\
    str         r4,[r0,#0x4]\n\
    str         r4,[r0,#0x8]\n\
    strh        r1,[r0,#0xc]\n\
    strh        r2,[r0,#0xe]\n\
    str         r4,[r0,#0x10]\n\
    str         r4,[r0,#0x18]\n\
    str         r0,[r0,#0x1c]\n\
    ldr         r1,DAT_0804794c\n\
    str         r1,[r0,#0x20]\n\
    ldr         r1,DAT_08047950\n\
    str         r1,[r0,#0x24]\n\
    ldr         r1,DAT_08047954\n\
    str         r1,[r0,#0x28]\n\
    ldr         r1,DAT_08047958\n\
    str         r1,[r0,#0x2c]\n\
    str         r3,[r0,#0x54]\n\
    pop         {r4,pc}\n\
DAT_0804794c:\n\
    .4byte 0x0804904D\n\
DAT_08047950:\n\
    .4byte 0x08049081\n\
DAT_08047954:\n\
    .4byte 0x080490C1\n\
DAT_08047958:\n\
    .4byte 0x08049101\n\
    ");
}
__attribute__((naked)) void fun_0804795c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r1,#0x0\n\
    mov         r1,#0x58\n\
    add         r6,r5,#0x0\n\
    mul         r6,r1\n\
    add         r1,r6,#0x0\n\
    add         r1,#0xc\n\
    bl          fun_08048210\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08047988\n\
    add         r0,#0xc\n\
    mov         r1,#0x0\n\
    str         r1,[r4,#0x0]\n\
    str         r5,[r4,#0x4]\n\
    str         r0,[r4,#0x8]\n\
    add         r2,r6,#0x0\n\
    bl          fun_08044fdc\n\
    add         r0,r4,#0x0\n\
    b           LAB_0804798a\n\
LAB_08047988:\n\
    mov         r0,#0x0\n\
LAB_0804798a:\n\
    pop         {r4,r5,r6,pc}\n\
    ");
}
__attribute__((naked)) void fun_0804798c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    ldr         r0,[r5,#0x38]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804799c\n\
    add         r0,r5,#0x0\n\
    bl          fun_08047a20\n\
LAB_0804799c:\n\
    mov         r0,#0xec\n\
    lsl         r0,r0,#0x1\n\
    add         r4,r5,r0\n\
    b           LAB_080479a6\n\
LAB_080479a4:\n\
    ldr         r4,[r4,#0x0]\n\
LAB_080479a6:\n\
    ldr         r2,[r4,#0x8]\n\
    ldr         r0,[r4,#0x4]\n\
    b           LAB_080479b6\n\
LAB_080479ac:\n\
    mov         r3,#0xc\n\
    ldrsh       r1,[r2,r3]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080479d8\n\
    add         r2,#0x58\n\
LAB_080479b6:\n\
    sub         r0,#0x1\n\
    cmp         r0,#0x0\n\
    bge         LAB_080479ac\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080479a4\n\
    add         r0,r5,#0x0\n\
    mov         r1,#0x4\n\
    bl          fun_0804795c\n\
    str         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080479a4\n\
    mov         r0,#0xc\n\
    str         r0,[r5,#0x0]\n\
    mov         r0,#0x0\n\
    b           LAB_080479f8\n\
LAB_080479d8:\n\
    mov         r0,#0x1\n\
    strh        r0,[r2,#0xc]\n\
    str         r1,[r2,#0x0]\n\
    str         r1,[r2,#0x8]\n\
    str         r1,[r2,#0x4]\n\
    str         r1,[r2,#0x10]\n\
    str         r1,[r2,#0x14]\n\
    str         r1,[r2,#0x18]\n\
    ldr         r0,DAT_080479fc\n\
    strh        r0,[r2,#0xe]\n\
    str         r1,[r2,#0x30]\n\
    str         r1,[r2,#0x34]\n\
    str         r1,[r2,#0x44]\n\
    str         r1,[r2,#0x48]\n\
    str         r5,[r2,#0x54]\n\
    add         r0,r2,#0x0\n\
LAB_080479f8:\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
DAT_080479fc:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08047a00()
{
    asm("\n\
    push        {lr}\n\
    ldr         r1,DAT_08047a0c\n\
    bl          fun_08047f2c\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
DAT_08047a0c:\n\
    .4byte 0x08047891\n\
    ");
}
__attribute__((naked)) void fun_08047a10()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08047a1c\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08047a00\n\
    pop         {pc}\n\
DAT_08047a1c:\n\
    .4byte 0x087D6554\n\
    ");
}
__attribute__((naked)) void fun_08047a20()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    ldr         r0,DAT_08047a7c\n\
    str         r0,[r5,#0x3c]\n\
    mov         r0,#0x1\n\
    str         r0,[r5,#0x38]\n\
    mov         r0,#0xf2\n\
    lsl         r0,r0,#0x1\n\
    add         r4,r5,r0\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x4\n\
    mov         r2,#0x0\n\
    add         r3,r5,#0x0\n\
    bl          fun_08047924\n\
    mov         r1,#0x8f\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r5,r1\n\
    mov         r1,#0x9\n\
    mov         r2,#0x1\n\
    add         r3,r5,#0x0\n\
    bl          fun_08047924\n\
    mov         r1,#0xa5\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r5,r1\n\
    mov         r1,#0xa\n\
    mov         r2,#0x2\n\
    add         r3,r5,#0x0\n\
    bl          fun_08047924\n\
    mov         r0,#0xec\n\
    lsl         r0,r0,#0x1\n\
    add         r1,r5,r0\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xee\n\
    lsl         r0,r0,#0x1\n\
    add         r1,r5,r0\n\
    mov         r0,#0x3\n\
    str         r0,[r1,#0x0]\n\
    mov         r1,#0xf0\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r5,r1\n\
    str         r4,[r0,#0x0]\n\
    pop         {r4,r5,pc}\n\
DAT_08047a7c:\n\
    .4byte 0x08047A01\n\
    ");
}
__attribute__((naked)) void fun_08047a80()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    mov         r9,r0\n\
    add         r4,r1,#0x0\n\
    cmp         r4,#0x0\n\
    bne         LAB_08047a92\n\
    b           LAB_08047c36\n\
LAB_08047a92:\n\
    bl          fun_08048704\n\
    add         r5,r4,#0x0\n\
    sub         r5,#0x8\n\
    ldr         r1,[r5,#0x4]\n\
    mov         r6,#0x2\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
    and         r6,r1\n\
    add         r7,r5,r6\n\
    ldr         r4,[r7,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r4,r0\n\
    ldr         r0,DAT_08047af4\n\
    mov         r12,r0\n\
    ldr         r0,[r0,#0x8]\n\
    cmp         r7,r0\n\
    bne         LAB_08047b00\n\
    add         r6,r6,r4\n\
    mov         r4,#0x1\n\
    and         r1,r4\n\
    cmp         r1,#0x0\n\
    bne         LAB_08047ace\n\
    ldr         r0,[r5,#0x0]\n\
    sub         r5,r5,r0\n\
    add         r6,r6,r0\n\
    ldr         r3,[r5,#0xc]\n\
    ldr         r2,[r5,#0x8]\n\
    str         r3,[r2,#0xc]\n\
    str         r2,[r3,#0x8]\n\
LAB_08047ace:\n\
    add         r0,r6,#0x0\n\
    orr         r0,r4\n\
    str         r0,[r5,#0x4]\n\
    mov         r2,r12\n\
    str         r5,[r2,#0x8]\n\
    ldr         r0,DAT_08047af8\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r6,r0\n\
    bcc         LAB_08047aea\n\
    ldr         r0,DAT_08047afc\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,r9\n\
    bl          fun_08047c40\n\
LAB_08047aea:\n\
    mov         r0,r9\n\
    bl          fun_08048708\n\
    b           LAB_08047c36\n\
\n\
.space 2\n\
\n\
DAT_08047af4:\n\
    .4byte 0x087D656C\n\
DAT_08047af8:\n\
    .4byte 0x087D6974\n\
DAT_08047afc:\n\
    .4byte 0x087D6978\n\
LAB_08047b00:\n\
    str         r4,[r7,#0x4]\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    mov         r0,#0x1\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    bne         LAB_08047b2c\n\
    ldr         r0,[r5,#0x0]\n\
    sub         r5,r5,r0\n\
    add         r6,r6,r0\n\
    ldr         r1,[r5,#0x8]\n\
    mov         r0,r12\n\
    add         r0,#0x8\n\
    cmp         r1,r0\n\
    bne         LAB_08047b24\n\
    mov         r2,#0x1\n\
    mov         r8,r2\n\
    b           LAB_08047b2c\n\
LAB_08047b24:\n\
    ldr         r3,[r5,#0xc]\n\
    add         r2,r1,#0x0\n\
    str         r3,[r2,#0xc]\n\
    str         r2,[r3,#0x8]\n\
LAB_08047b2c:\n\
    add         r0,r7,r4\n\
    ldr         r0,[r0,#0x4]\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047b64\n\
    add         r6,r6,r4\n\
    ldr         r1,[r7,#0x8]\n\
    mov         r0,r8\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047b5c\n\
    ldr         r0,DAT_08047b58\n\
    cmp         r1,r0\n\
    bne         LAB_08047b5c\n\
    mov         r2,#0x1\n\
    mov         r8,r2\n\
    str         r5,[r1,#0xc]\n\
    str         r5,[r1,#0x8]\n\
    str         r1,[r5,#0xc]\n\
    str         r1,[r5,#0x8]\n\
    b           LAB_08047b64\n\
\n\
.space 2\n\
\n\
DAT_08047b58:\n\
    .4byte 0x087D6574\n\
LAB_08047b5c:\n\
    ldr         r3,[r7,#0xc]\n\
    add         r2,r1,#0x0\n\
    str         r3,[r2,#0xc]\n\
    str         r2,[r3,#0x8]\n\
LAB_08047b64:\n\
    mov         r1,#0x1\n\
    add         r0,r6,#0x0\n\
    orr         r0,r1\n\
    str         r0,[r5,#0x4]\n\
    add         r0,r5,r6\n\
    str         r6,[r0,#0x0]\n\
    mov         r0,r8\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047c30\n\
    ldr         r0,DAT_08047b94\n\
    cmp         r6,r0\n\
    bhi         LAB_08047b9c\n\
    lsr         r4,r6,#0x3\n\
    ldr         r2,DAT_08047b98\n\
    add         r0,r4,#0x0\n\
    asr         r0,r0,#0x2\n\
    lsl         r1,r0\n\
    ldr         r0,[r2,#0x4]\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    lsl         r0,r4,#0x3\n\
    add         r3,r0,r2\n\
    ldr         r2,[r3,#0x8]\n\
    b           LAB_08047c28\n\
DAT_08047b94:\n\
    .4byte 0x000001FF\n\
DAT_08047b98:\n\
    .4byte 0x087D656C\n\
LAB_08047b9c:\n\
    lsr         r1,r6,#0x9\n\
    cmp         r1,#0x0\n\
    bne         LAB_08047ba6\n\
    lsr         r4,r6,#0x3\n\
    b           LAB_08047bee\n\
LAB_08047ba6:\n\
    cmp         r1,#0x4\n\
    bhi         LAB_08047bb2\n\
    lsr         r0,r6,#0x6\n\
    add         r4,r0,#0x0\n\
    add         r4,#0x38\n\
    b           LAB_08047bee\n\
LAB_08047bb2:\n\
    cmp         r1,#0x14\n\
    bhi         LAB_08047bbc\n\
    add         r4,r1,#0x0\n\
    add         r4,#0x5b\n\
    b           LAB_08047bee\n\
LAB_08047bbc:\n\
    cmp         r1,#0x54\n\
    bhi         LAB_08047bc8\n\
    lsr         r0,r6,#0xc\n\
    add         r4,r0,#0x0\n\
    add         r4,#0x6e\n\
    b           LAB_08047bee\n\
LAB_08047bc8:\n\
    mov         r0,#0xaa\n\
    lsl         r0,r0,#0x1\n\
    cmp         r1,r0\n\
    bhi         LAB_08047bd8\n\
    lsr         r0,r6,#0xf\n\
    add         r4,r0,#0x0\n\
    add         r4,#0x77\n\
    b           LAB_08047bee\n\
LAB_08047bd8:\n\
    ldr         r0,DAT_08047be8\n\
    cmp         r1,r0\n\
    bhi         LAB_08047bec\n\
    lsr         r0,r6,#0x12\n\
    add         r4,r0,#0x0\n\
    add         r4,#0x7c\n\
    b           LAB_08047bee\n\
\n\
.space 2\n\
\n\
DAT_08047be8:\n\
    .4byte 0x00000554\n\
LAB_08047bec:\n\
    mov         r4,#0x7e\n\
LAB_08047bee:\n\
    lsl         r0,r4,#0x3\n\
    ldr         r7,DAT_08047c0c\n\
    add         r3,r0,r7\n\
    ldr         r2,[r3,#0x8]\n\
    cmp         r2,r3\n\
    bne         LAB_08047c10\n\
    add         r0,r4,#0x0\n\
    asr         r0,r0,#0x2\n\
    mov         r1,#0x1\n\
    lsl         r1,r0\n\
    ldr         r0,[r7,#0x4]\n\
    orr         r0,r1\n\
    str         r0,[r7,#0x4]\n\
    b           LAB_08047c28\n\
\n\
.space 2\n\
\n\
DAT_08047c0c:\n\
    .4byte 0x087D656C\n\
LAB_08047c10:\n\
    ldr         r0,[r2,#0x4]\n\
    mov         r1,#0x4\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    b           LAB_08047c20\n\
LAB_08047c18:\n\
    ldr         r2,[r2,#0x8]\n\
    cmp         r2,r3\n\
    beq         LAB_08047c26\n\
    ldr         r0,[r2,#0x4]\n\
LAB_08047c20:\n\
    and         r0,r1\n\
    cmp         r6,r0\n\
    bcc         LAB_08047c18\n\
LAB_08047c26:\n\
    ldr         r3,[r2,#0xc]\n\
LAB_08047c28:\n\
    str         r3,[r5,#0xc]\n\
    str         r2,[r5,#0x8]\n\
    str         r5,[r3,#0x8]\n\
    str         r5,[r2,#0xc]\n\
LAB_08047c30:\n\
    mov         r0,r9\n\
    bl          fun_08048708\n\
LAB_08047c36:\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08047c40()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r7,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    bl          fun_08048704\n\
    ldr         r0,DAT_08047cc8\n\
    mov         r8,r0\n\
    ldr         r0,[r0,#0x8]\n\
    ldr         r6,[r0,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r6,r0\n\
    sub         r4,r6,r4\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x5\n\
    ldr         r1,DAT_08047ccc\n\
    add         r4,r4,r1\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_080436a0\n\
    sub         r0,#0x1\n\
    lsl         r4,r0,#0xc\n\
    cmp         r4,r5\n\
    blt         LAB_08047cbe\n\
    add         r0,r7,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_08049020\n\
    add         r2,r0,#0x0\n\
    mov         r1,r8\n\
    ldr         r0,[r1,#0x8]\n\
    add         r0,r0,r6\n\
    cmp         r2,r0\n\
    bne         LAB_08047cbe\n\
.syntax unified\n\
    rsbs        r1,r4,#0\n\
.syntax divided\n\
    add         r0,r7,#0x0\n\
    bl          fun_08049020\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,r1\n\
    bne         LAB_08047cd8\n\
    add         r0,r7,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_08049020\n\
    add         r2,r0,#0x0\n\
    mov         r0,r8\n\
    ldr         r3,[r0,#0x8]\n\
    sub         r6,r2,r3\n\
    cmp         r6,#0xf\n\
    ble         LAB_08047cbe\n\
    ldr         r1,DAT_08047cd0\n\
    ldr         r0,DAT_08047cd4\n\
    ldr         r0,[r0,#0x0]\n\
    sub         r0,r2,r0\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    orr         r6,r0\n\
    str         r6,[r3,#0x4]\n\
LAB_08047cbe:\n\
    add         r0,r7,#0x0\n\
    bl          fun_08048708\n\
    mov         r0,#0x0\n\
    b           LAB_08047cf4\n\
DAT_08047cc8:\n\
    .4byte 0x087D656C\n\
DAT_08047ccc:\n\
    .4byte 0x00000FEF\n\
DAT_08047cd0:\n\
    .4byte 0x087D6988\n\
DAT_08047cd4:\n\
    .4byte 0x087D697C\n\
LAB_08047cd8:\n\
    mov         r1,r8\n\
    ldr         r2,[r1,#0x8]\n\
    sub         r0,r6,r4\n\
    mov         r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    ldr         r1,DAT_08047cfc\n\
    ldr         r0,[r1,#0x0]\n\
    sub         r0,r0,r4\n\
    str         r0,[r1,#0x0]\n\
    add         r0,r7,#0x0\n\
    bl          fun_08048708\n\
    mov         r0,#0x1\n\
LAB_08047cf4:\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08047cfc:\n\
    .4byte 0x087D6988\n\
    ");
}
__attribute__((naked)) void fun_08047d00()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    add         r5,r0,#0x0\n\
    mov         r10,r1\n\
    ldr         r6,[r1,#0x8]\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047d18\n\
    b           LAB_08047f0e\n\
LAB_08047d18:\n\
    mov         r0,#0x8\n\
    ldrh        r1,[r5,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047d28\n\
    ldr         r0,[r5,#0x10]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047d34\n\
LAB_08047d28:\n\
    add         r0,r5,#0x0\n\
    bl          fun_08046990\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047d34\n\
    b           LAB_08047f1a\n\
LAB_08047d34:\n\
    mov         r2,r10\n\
    ldr         r2,[r2,#0x0]\n\
    mov         r8,r2\n\
    mov         r6,#0x0\n\
    ldrh        r1,[r5,#0xc]\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047d88\n\
LAB_08047d46:\n\
    ldr         r0,[r5,#0x1c]\n\
    ldr         r3,[r5,#0x24]\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047d5c\n\
LAB_08047d4e:\n\
    mov         r1,r8\n\
    ldr         r7,[r1,#0x0]\n\
    ldr         r6,[r1,#0x4]\n\
    mov         r2,#0x8\n\
    add         r8,r2\n\
    cmp         r6,#0x0\n\
    beq         LAB_08047d4e\n\
LAB_08047d5c:\n\
    add         r2,r6,#0x0\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x3\n\
    cmp         r6,r1\n\
    bls         LAB_08047d68\n\
    add         r2,r1,#0x0\n\
LAB_08047d68:\n\
    add         r1,r7,#0x0\n\
    bl          fun_080434d4\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    bgt         LAB_08047d76\n\
    b           LAB_08047f12\n\
LAB_08047d76:\n\
    add         r7,r7,r4\n\
    sub         r6,r6,r4\n\
    mov         r1,r10\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047d46\n\
    b           LAB_08047f0e\n\
LAB_08047d88:\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047e42\n\
LAB_08047d90:\n\
    ldrh        r1,[r5,#0xc]\n\
    ldr         r0,[r5,#0x8]\n\
    ldr         r3,[r5,#0x0]\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047da8\n\
LAB_08047d9a:\n\
    mov         r2,r8\n\
    ldr         r7,[r2,#0x0]\n\
    ldr         r6,[r2,#0x4]\n\
    mov         r2,#0x8\n\
    add         r8,r2\n\
    cmp         r6,#0x0\n\
    beq         LAB_08047d9a\n\
LAB_08047da8:\n\
    add         r4,r0,#0x0\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047dd6\n\
    cmp         r6,r4\n\
    bcs         LAB_08047dbc\n\
    add         r4,r6,#0x0\n\
LAB_08047dbc:\n\
    add         r0,r3,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0804867c\n\
    ldr         r0,[r5,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r5,#0x0]\n\
    add         r4,r6,#0x0\n\
    b           LAB_08047e30\n\
LAB_08047dd6:\n\
    ldr         r0,[r5,#0x10]\n\
    cmp         r3,r0\n\
    bls         LAB_08047dfe\n\
    cmp         r6,r4\n\
    bls         LAB_08047dfe\n\
    add         r0,r3,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0804867c\n\
    ldr         r0,[r5,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r5,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08047890\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047dfc\n\
    b           LAB_08047f12\n\
LAB_08047dfc:\n\
    b           LAB_08047e30\n\
LAB_08047dfe:\n\
    ldr         r4,[r5,#0x14]\n\
    cmp         r6,r4\n\
    bcc         LAB_08047e18\n\
    ldr         r0,[r5,#0x1c]\n\
    ldr         r3,[r5,#0x24]\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_080434d4\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    ble         LAB_08047f12\n\
    b           LAB_08047e30\n\
LAB_08047e18:\n\
    add         r4,r6,#0x0\n\
    add         r0,r3,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0804867c\n\
    ldr         r0,[r5,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r5,#0x0]\n\
LAB_08047e30:\n\
    add         r7,r7,r4\n\
    sub         r6,r6,r4\n\
    mov         r1,r10\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r1,#0x8]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047d90\n\
    b           LAB_08047f0e\n\
LAB_08047e42:\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x0]\n\
LAB_08047e46:\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047e5c\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x0]\n\
LAB_08047e4e:\n\
    mov         r1,r8\n\
    ldr         r7,[r1,#0x0]\n\
    ldr         r6,[r1,#0x4]\n\
    mov         r2,#0x8\n\
    add         r8,r2\n\
    cmp         r6,#0x0\n\
    beq         LAB_08047e4e\n\
LAB_08047e5c:\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047e80\n\
    add         r0,r7,#0x0\n\
    mov         r1,#0xa\n\
    add         r2,r6,#0x0\n\
    bl          fun_080485fc\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08047e78\n\
    sub         r0,r7,#0x1\n\
    sub         r1,r1,r0\n\
    b           LAB_08047e7a\n\
LAB_08047e78:\n\
    add         r1,r6,#0x1\n\
LAB_08047e7a:\n\
    mov         r9,r1\n\
    mov         r2,#0x1\n\
    str         r2,[sp,#0x0]\n\
LAB_08047e80:\n\
    mov         r2,r9\n\
    cmp         r9,r6\n\
    bls         LAB_08047e88\n\
    add         r2,r6,#0x0\n\
LAB_08047e88:\n\
    ldr         r0,[r5,#0x8]\n\
    ldr         r1,[r5,#0x14]\n\
    add         r4,r0,r1\n\
    ldr         r0,[r5,#0x10]\n\
    ldr         r3,[r5,#0x0]\n\
    cmp         r3,r0\n\
    bls         LAB_08047eb6\n\
    cmp         r2,r4\n\
    ble         LAB_08047eb6\n\
    add         r0,r3,#0x0\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0804867c\n\
    ldr         r0,[r5,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r5,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08047890\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047f12\n\
    b           LAB_08047ee6\n\
LAB_08047eb6:\n\
    add         r4,r1,#0x0\n\
    cmp         r2,r4\n\
    blt         LAB_08047ed0\n\
    ldr         r0,[r5,#0x1c]\n\
    ldr         r3,[r5,#0x24]\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_080434d4\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    ble         LAB_08047f12\n\
    b           LAB_08047ee6\n\
LAB_08047ed0:\n\
    add         r4,r2,#0x0\n\
    add         r0,r3,#0x0\n\
    add         r1,r7,#0x0\n\
    bl          fun_0804867c\n\
    ldr         r0,[r5,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r5,#0x8]\n\
    ldr         r0,[r5,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r5,#0x0]\n\
LAB_08047ee6:\n\
    mov         r0,r9\n\
    sub         r0,r0,r4\n\
    mov         r9,r0\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047efe\n\
    add         r0,r5,#0x0\n\
    bl          fun_08047890\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047f12\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x0]\n\
LAB_08047efe:\n\
    add         r7,r7,r4\n\
    sub         r6,r6,r4\n\
    mov         r2,r10\n\
    ldr         r0,[r2,#0x8]\n\
    sub         r0,r0,r4\n\
    str         r0,[r2,#0x8]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08047e46\n\
LAB_08047f0e:\n\
    mov         r0,#0x0\n\
    b           LAB_08047f1e\n\
LAB_08047f12:\n\
    mov         r0,#0x40\n\
    ldrh        r1,[r5,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r5,#0xc]\n\
LAB_08047f1a:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08047f1e:\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08047f2c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    mov         r8,r1\n\
    mov         r7,#0x0\n\
    mov         r1,#0xec\n\
    lsl         r1,r1,#0x1\n\
    add         r6,r0,r1\n\
    cmp         r6,#0x0\n\
    beq         LAB_08047f64\n\
LAB_08047f40:\n\
    ldr         r5,[r6,#0x8]\n\
    ldr         r4,[r6,#0x4]\n\
    b           LAB_08047f58\n\
LAB_08047f46:\n\
    mov         r1,#0xc\n\
    ldrsh       r0,[r5,r1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047f56\n\
    add         r0,r5,#0x0\n\
    bl          fun_080434e8\n\
    orr         r7,r0\n\
LAB_08047f56:\n\
    add         r5,#0x58\n\
LAB_08047f58:\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bge         LAB_08047f46\n\
    ldr         r6,[r6,#0x0]\n\
    cmp         r6,#0x0\n\
    bne         LAB_08047f40\n\
LAB_08047f64:\n\
    add         r0,r7,#0x0\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08047f6c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08047fa0\n\
    ldr         r1,DAT_08047f94\n\
    add         r0,r4,#0x0\n\
    bl          fun_080456c8\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047f9c\n\
    ldr         r1,DAT_08047f98\n\
    add         r0,r4,#0x0\n\
    bl          fun_080456c8\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047f9c\n\
    mov         r0,#0x0\n\
    b           LAB_08047fa2\n\
DAT_08047f94:\n\
    .4byte 0x086CCD90\n\
DAT_08047f98:\n\
    .4byte 0x086CCD88\n\
LAB_08047f9c:\n\
    str         r6,[r5,#0x30]\n\
    str         r4,[r5,#0x34]\n\
LAB_08047fa0:\n\
    ldr         r0,DAT_08047fa4\n\
LAB_08047fa2:\n\
    pop         {r4,r5,r6,pc}\n\
DAT_08047fa4:\n\
    .4byte 0x086CCD90\n\
    ");
}
__attribute__((naked)) void fun_08047fa8()
{
    asm("\n\
    ldr         r0,DAT_08047fac\n\
    bx          lr\n\
DAT_08047fac:\n\
    .4byte 0x086CCD58\n\
    ");
}
__attribute__((naked)) void fun_08047fb0()
{
    asm("\n\
    push        {lr}\n\
    add         r3,r0,#0x0\n\
    add         r2,r1,#0x0\n\
    ldr         r0,DAT_08047fc4\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r3,#0x0\n\
    bl          fun_08047f6c\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
DAT_08047fc4:\n\
    .4byte 0x087D6554\n\
    ");
}
__attribute__((naked)) void fun_08047fc8()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08047fd4\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08047fa8\n\
    pop         {pc}\n\
DAT_08047fd4:\n\
    .4byte 0x087D6554\n\
    ");
}
__attribute__((naked)) void fun_08047fd8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x3c\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x2\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804806e\n\
    mov         r2,#0xe\n\
    ldrsh       r0,[r4,r2]\n\
    cmp         r0,#0x0\n\
    blt         LAB_08048000\n\
    ldr         r0,[r4,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r4,r2]\n\
    mov         r2,sp\n\
    bl          fun_08049634\n\
    cmp         r0,#0x0\n\
    bge         LAB_08048012\n\
LAB_08048000:\n\
    mov         r7,#0x0\n\
    mov         r6,#0x80\n\
    lsl         r6,r6,#0x3\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r1,#0x0\n\
    ldrh        r2,[r4,#0xc]\n\
    orr         r0,r2\n\
    b           LAB_08048056\n\
LAB_08048012:\n\
    mov         r7,#0x0\n\
    ldr         r1,[sp,#0x4]\n\
    mov         r0,#0xf0\n\
    lsl         r0,r0,#0x8\n\
    and         r1,r0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x6\n\
    cmp         r1,r0\n\
    bne         LAB_08048026\n\
    mov         r7,#0x1\n\
LAB_08048026:\n\
    mov         r6,#0x80\n\
    lsl         r6,r6,#0x3\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x8\n\
    cmp         r1,r0\n\
    bne         LAB_0804804c\n\
    ldr         r1,[r4,#0x28]\n\
    ldr         r0,DAT_08048048\n\
    cmp         r1,r0\n\
    bne         LAB_0804804c\n\
    add         r0,r6,#0x0\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
    str         r6,[r4,#0x4c]\n\
    b           LAB_08048058\n\
\n\
.space 2\n\
\n\
DAT_08048048:\n\
    .4byte 0x080490C1\n\
LAB_0804804c:\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r2,#0x0\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
LAB_08048056:\n\
    strh        r0,[r4,#0xc]\n\
LAB_08048058:\n\
    ldr         r0,[r4,#0x54]\n\
    add         r1,r6,#0x0\n\
    bl          fun_08048210\n\
    add         r2,r0,#0x0\n\
    cmp         r2,#0x0\n\
    bne         LAB_0804807c\n\
    mov         r0,#0x2\n\
    ldrh        r2,[r4,#0xc]\n\
    orr         r0,r2\n\
    strh        r0,[r4,#0xc]\n\
LAB_0804806e:\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x43\n\
    str         r0,[r4,#0x0]\n\
    str         r0,[r4,#0x10]\n\
    mov         r0,#0x1\n\
    str         r0,[r4,#0x14]\n\
    b           LAB_080480aa\n\
LAB_0804807c:\n\
    ldr         r1,[r4,#0x54]\n\
    ldr         r0,DAT_080480b0\n\
    str         r0,[r1,#0x3c]\n\
    mov         r0,#0x80\n\
    mov         r5,#0x0\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
    str         r2,[r4,#0x0]\n\
    str         r2,[r4,#0x10]\n\
    str         r6,[r4,#0x14]\n\
    cmp         r7,#0x0\n\
    beq         LAB_080480aa\n\
    mov         r2,#0xe\n\
    ldrsh       r0,[r4,r2]\n\
    bl          fun_08049680\n\
    cmp         r0,#0x0\n\
    beq         LAB_080480aa\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r4,#0xc]\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
LAB_080480aa:\n\
    add         sp,#0x3c\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_080480b0:\n\
    .4byte 0x08047A01\n\
    ");
}
__attribute__((naked)) void fun_080480b4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    str         r0,[sp,#0x0]\n\
    ldr         r0,DAT_08048128\n\
    ldr         r0,[r0,#0x8]\n\
    mov         r8,r0\n\
    ldr         r7,[r0,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r7,r0\n\
    mov         r2,r8\n\
    add         r4,r2,r7\n\
    ldr         r0,DAT_0804812c\n\
    ldr         r0,[r0,#0x0]\n\
    add         r1,r1,r0\n\
    add         r6,r1,#0x0\n\
    add         r6,#0x10\n\
    ldr         r3,DAT_08048130\n\
    mov         r10,r3\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    mov         r9,r2\n\
    cmp         r0,r9\n\
    beq         LAB_080480f6\n\
    ldr         r3,DAT_08048134\n\
    add         r6,r1,r3\n\
    ldr         r0,DAT_08048138\n\
    and         r6,r0\n\
LAB_080480f6:\n\
    ldr         r0,[sp,#0x0]\n\
    add         r1,r6,#0x0\n\
    bl          fun_08049020\n\
    add         r5,r0,#0x0\n\
    cmp         r5,r9\n\
    beq         LAB_080481f8\n\
    cmp         r5,r4\n\
    bcs         LAB_0804810e\n\
    ldr         r0,DAT_08048128\n\
    cmp         r8,r0\n\
    bne         LAB_080481f8\n\
LAB_0804810e:\n\
    ldr         r1,DAT_0804813c\n\
    ldr         r0,[r1,#0x0]\n\
    add         r2,r0,r6\n\
    str         r2,[r1,#0x0]\n\
    cmp         r5,r4\n\
    bne         LAB_08048140\n\
    add         r2,r6,r7\n\
    ldr         r3,DAT_08048128\n\
    ldr         r1,[r3,#0x8]\n\
    mov         r0,#0x1\n\
    orr         r2,r0\n\
    str         r2,[r1,#0x4]\n\
    b           LAB_080481e0\n\
DAT_08048128:\n\
    .4byte 0x087D656C\n\
DAT_0804812c:\n\
    .4byte 0x087D6978\n\
DAT_08048130:\n\
    .4byte 0x087D697C\n\
DAT_08048134:\n\
    .4byte 0x0000100F\n\
DAT_08048138:\n\
    .4byte 0xFFFFF000\n\
DAT_0804813c:\n\
    .4byte 0x087D6988\n\
LAB_08048140:\n\
    mov         r3,r10\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r0,r9\n\
    bne         LAB_0804814c\n\
    str         r5,[r3,#0x0]\n\
    b           LAB_08048152\n\
LAB_0804814c:\n\
    sub         r0,r5,r4\n\
    add         r0,r2,r0\n\
    str         r0,[r1,#0x0]\n\
LAB_08048152:\n\
    add         r1,r5,#0x0\n\
    add         r1,#0x8\n\
    mov         r0,#0x7\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08048166\n\
    mov         r0,#0x8\n\
    sub         r4,r0,r1\n\
    add         r5,r5,r4\n\
    b           LAB_08048168\n\
LAB_08048166:\n\
    mov         r4,#0x0\n\
LAB_08048168:\n\
    add         r0,r5,r6\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x5\n\
    sub         r1,#0x1\n\
    and         r0,r1\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x5\n\
    sub         r0,r1,r0\n\
    add         r4,r4,r0\n\
    ldr         r0,[sp,#0x0]\n\
    add         r1,r4,#0x0\n\
    bl          fun_08049020\n\
    add         r2,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    beq         LAB_080481f8\n\
    ldr         r1,DAT_080481b0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,r0,r4\n\
    str         r0,[r1,#0x0]\n\
    ldr         r1,DAT_080481b4\n\
    str         r5,[r1,#0x8]\n\
    sub         r0,r2,r5\n\
    add         r2,r0,r4\n\
    mov         r3,#0x1\n\
    orr         r2,r3\n\
    str         r2,[r5,#0x4]\n\
    cmp         r8,r1\n\
    beq         LAB_080481e0\n\
    cmp         r7,#0xf\n\
    bhi         LAB_080481b8\n\
    str         r3,[r5,#0x4]\n\
    b           LAB_080481f8\n\
\n\
.space 2\n\
\n\
DAT_080481b0:\n\
    .4byte 0x087D6988\n\
DAT_080481b4:\n\
    .4byte 0x087D656C\n\
LAB_080481b8:\n\
    sub         r7,#0xc\n\
    mov         r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r7,r0\n\
    mov         r2,r8\n\
    ldr         r0,[r2,#0x4]\n\
    and         r0,r3\n\
    orr         r0,r7\n\
    str         r0,[r2,#0x4]\n\
    add         r1,r2,r7\n\
    mov         r0,#0x5\n\
    str         r0,[r1,#0x4]\n\
    str         r0,[r1,#0x8]\n\
    cmp         r7,#0xf\n\
    bls         LAB_080481e0\n\
    mov         r1,r8\n\
    add         r1,#0x8\n\
    ldr         r0,[sp,#0x0]\n\
    bl          fun_08047a80\n\
LAB_080481e0:\n\
    ldr         r0,DAT_08048204\n\
    ldr         r2,DAT_08048208\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r1,r0\n\
    bls         LAB_080481ee\n\
    str         r1,[r2,#0x0]\n\
LAB_080481ee:\n\
    ldr         r2,DAT_0804820c\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r1,r0\n\
    bls         LAB_080481f8\n\
    str         r1,[r2,#0x0]\n\
LAB_080481f8:\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08048204:\n\
    .4byte 0x087D6988\n\
DAT_08048208:\n\
    .4byte 0x087D6980\n\
DAT_0804820c:\n\
    .4byte 0x087D6984\n\
    ");
}
__attribute__((naked)) void fun_08048210()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    str         r0,[sp,#0x0]\n\
    add         r1,#0xb\n\
    cmp         r1,#0x16\n\
    ble         LAB_08048232\n\
    mov         r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    mov         r8,r0\n\
    mov         r2,r8\n\
    and         r2,r1\n\
    mov         r8,r2\n\
    b           LAB_08048236\n\
LAB_08048232:\n\
    mov         r3,#0x10\n\
    mov         r8,r3\n\
LAB_08048236:\n\
    ldr         r0,[sp,#0x0]\n\
    bl          fun_08048704\n\
    ldr         r0,DAT_0804827c\n\
    cmp         r8,r0\n\
    bhi         LAB_0804828a\n\
    mov         r4,r8\n\
    lsr         r4,r4,#0x3\n\
    mov         r12,r4\n\
    ldr         r0,DAT_08048280\n\
    mov         r7,r8\n\
    add         r2,r7,r0\n\
    ldr         r5,[r2,#0xc]\n\
    cmp         r5,r2\n\
    bne         LAB_0804825e\n\
    add         r2,r5,#0x0\n\
    add         r2,#0x8\n\
    ldr         r5,[r2,#0xc]\n\
    cmp         r5,r2\n\
    beq         LAB_08048284\n\
LAB_0804825e:\n\
    ldr         r2,[r5,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r2,r0\n\
    ldr         r6,[r5,#0xc]\n\
    ldr         r4,[r5,#0x8]\n\
    str         r6,[r4,#0xc]\n\
    str         r4,[r6,#0x8]\n\
    add         r2,r5,r2\n\
    ldr         r0,[r2,#0x4]\n\
    mov         r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    b           LAB_080485b6\n\
\n\
.space 2\n\
\n\
DAT_0804827c:\n\
    .4byte 0x000001F7\n\
DAT_08048280:\n\
    .4byte 0x087D656C\n\
LAB_08048284:\n\
    mov         r0,#0x2\n\
    add         r12,r0\n\
    b           LAB_08048336\n\
LAB_0804828a:\n\
    mov         r2,r8\n\
    lsr         r1,r2,#0x9\n\
    cmp         r1,#0x0\n\
    bne         LAB_08048296\n\
    lsr         r2,r2,#0x3\n\
    b           LAB_080482e6\n\
LAB_08048296:\n\
    cmp         r1,#0x4\n\
    bhi         LAB_080482a4\n\
    mov         r3,r8\n\
    lsr         r0,r3,#0x6\n\
    add         r0,#0x38\n\
    mov         r12,r0\n\
    b           LAB_080482e8\n\
LAB_080482a4:\n\
    cmp         r1,#0x14\n\
    bhi         LAB_080482ae\n\
    add         r1,#0x5b\n\
    mov         r12,r1\n\
    b           LAB_080482e8\n\
LAB_080482ae:\n\
    cmp         r1,#0x54\n\
    bhi         LAB_080482bc\n\
    mov         r4,r8\n\
    lsr         r0,r4,#0xc\n\
    add         r0,#0x6e\n\
    mov         r12,r0\n\
    b           LAB_080482e8\n\
LAB_080482bc:\n\
    mov         r0,#0xaa\n\
    lsl         r0,r0,#0x1\n\
    cmp         r1,r0\n\
    bhi         LAB_080482ce\n\
    mov         r7,r8\n\
    lsr         r0,r7,#0xf\n\
    add         r0,#0x77\n\
    mov         r12,r0\n\
    b           LAB_080482e8\n\
LAB_080482ce:\n\
    ldr         r0,DAT_080482e0\n\
    cmp         r1,r0\n\
    bhi         LAB_080482e4\n\
    mov         r1,r8\n\
    lsr         r0,r1,#0x12\n\
    add         r0,#0x7c\n\
    mov         r12,r0\n\
    b           LAB_080482e8\n\
\n\
.space 2\n\
\n\
DAT_080482e0:\n\
    .4byte 0x00000554\n\
LAB_080482e4:\n\
    mov         r2,#0x7e\n\
LAB_080482e6:\n\
    mov         r12,r2\n\
LAB_080482e8:\n\
    mov         r3,r12\n\
    lsl         r0,r3,#0x3\n\
    ldr         r1,DAT_0804830c\n\
    add         r4,r0,r1\n\
    ldr         r5,[r4,#0xc]\n\
    cmp         r5,r4\n\
    beq         LAB_08048332\n\
    ldr         r1,[r5,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r1,r0\n\
    mov         r7,r8\n\
    sub         r3,r1,r7\n\
    cmp         r3,#0xf\n\
    ble         LAB_08048310\n\
    add         r0,#0x3\n\
    add         r12,r0\n\
    b           LAB_08048332\n\
DAT_0804830c:\n\
    .4byte 0x087D656C\n\
LAB_08048310:\n\
    cmp         r3,#0x0\n\
    blt         LAB_08048316\n\
    b           LAB_08048550\n\
LAB_08048316:\n\
    ldr         r5,[r5,#0xc]\n\
    cmp         r5,r4\n\
    beq         LAB_08048332\n\
    ldr         r1,[r5,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r1,r0\n\
    mov         r2,r8\n\
    sub         r3,r1,r2\n\
    cmp         r3,#0xf\n\
    ble         LAB_08048310\n\
    mov         r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
    add         r12,r3\n\
LAB_08048332:\n\
    mov         r4,#0x1\n\
    add         r12,r4\n\
LAB_08048336:\n\
    ldr         r0,DAT_08048374\n\
    ldr         r5,[r0,#0x8]\n\
    mov         r10,r0\n\
    cmp         r5,r10\n\
    bne         LAB_08048342\n\
    b           LAB_08048444\n\
LAB_08048342:\n\
    ldr         r1,[r5,#0x4]\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r1,r0\n\
    mov         r7,r8\n\
    sub         r3,r1,r7\n\
    cmp         r3,#0xf\n\
    ble         LAB_08048378\n\
    add         r2,r5,r7\n\
    mov         r1,#0x1\n\
    add         r0,r7,#0x0\n\
    orr         r0,r1\n\
    str         r0,[r5,#0x4]\n\
    mov         r4,r10\n\
    str         r2,[r4,#0xc]\n\
    str         r2,[r4,#0x8]\n\
    str         r4,[r2,#0xc]\n\
    str         r4,[r2,#0x8]\n\
    add         r0,r3,#0x0\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    add         r0,r2,r3\n\
    str         r3,[r0,#0x0]\n\
    b           LAB_080485b6\n\
\n\
.space 2\n\
\n\
DAT_08048374:\n\
    .4byte 0x087D6574\n\
LAB_08048378:\n\
    mov         r7,r10\n\
    str         r7,[r7,#0xc]\n\
    str         r7,[r7,#0x8]\n\
    cmp         r3,#0x0\n\
    blt         LAB_0804838e\n\
    add         r2,r5,r1\n\
    ldr         r0,[r2,#0x4]\n\
    mov         r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    b           LAB_080485b6\n\
LAB_0804838e:\n\
    ldr         r0,DAT_080483b0\n\
    cmp         r1,r0\n\
    bhi         LAB_080483b4\n\
    lsr         r2,r1,#0x3\n\
    mov         r3,r10\n\
    sub         r3,#0x8\n\
    add         r0,r2,#0x0\n\
    asr         r0,r0,#0x2\n\
    mov         r1,#0x1\n\
    lsl         r1,r0\n\
    ldr         r0,[r3,#0x4]\n\
    orr         r0,r1\n\
    str         r0,[r3,#0x4]\n\
    lsl         r0,r2,#0x3\n\
    add         r6,r0,r3\n\
    ldr         r4,[r6,#0x8]\n\
    b           LAB_0804843c\n\
DAT_080483b0:\n\
    .4byte 0x000001FF\n\
LAB_080483b4:\n\
    lsr         r2,r1,#0x9\n\
    cmp         r2,#0x0\n\
    bne         LAB_080483be\n\
    lsr         r2,r1,#0x3\n\
    b           LAB_08048402\n\
LAB_080483be:\n\
    cmp         r2,#0x4\n\
    bhi         LAB_080483ca\n\
    lsr         r0,r1,#0x6\n\
    add         r2,r0,#0x0\n\
    add         r2,#0x38\n\
    b           LAB_08048402\n\
LAB_080483ca:\n\
    cmp         r2,#0x14\n\
    bhi         LAB_080483d2\n\
    add         r2,#0x5b\n\
    b           LAB_08048402\n\
LAB_080483d2:\n\
    cmp         r2,#0x54\n\
    bhi         LAB_080483de\n\
    lsr         r0,r1,#0xc\n\
    add         r2,r0,#0x0\n\
    add         r2,#0x6e\n\
    b           LAB_08048402\n\
LAB_080483de:\n\
    mov         r0,#0xaa\n\
    lsl         r0,r0,#0x1\n\
    cmp         r2,r0\n\
    bhi         LAB_080483ee\n\
    lsr         r0,r1,#0xf\n\
    add         r2,r0,#0x0\n\
    add         r2,#0x77\n\
    b           LAB_08048402\n\
LAB_080483ee:\n\
    ldr         r0,DAT_080483fc\n\
    cmp         r2,r0\n\
    bhi         LAB_08048400\n\
    lsr         r0,r1,#0x12\n\
    add         r2,r0,#0x0\n\
    add         r2,#0x7c\n\
    b           LAB_08048402\n\
DAT_080483fc:\n\
    .4byte 0x00000554\n\
LAB_08048400:\n\
    mov         r2,#0x7e\n\
LAB_08048402:\n\
    lsl         r0,r2,#0x3\n\
    ldr         r3,DAT_08048420\n\
    add         r6,r0,r3\n\
    ldr         r4,[r6,#0x8]\n\
    cmp         r4,r6\n\
    bne         LAB_08048424\n\
    add         r0,r2,#0x0\n\
    asr         r0,r0,#0x2\n\
    mov         r1,#0x1\n\
    lsl         r1,r0\n\
    ldr         r7,DAT_08048420\n\
    ldr         r0,[r7,#0x4]\n\
    orr         r0,r1\n\
    str         r0,[r7,#0x4]\n\
    b           LAB_0804843c\n\
DAT_08048420:\n\
    .4byte 0x087D656C\n\
LAB_08048424:\n\
    ldr         r0,[r4,#0x4]\n\
    mov         r2,#0x4\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    b           LAB_08048434\n\
LAB_0804842c:\n\
    ldr         r4,[r4,#0x8]\n\
    cmp         r4,r6\n\
    beq         LAB_0804843a\n\
    ldr         r0,[r4,#0x4]\n\
LAB_08048434:\n\
    and         r0,r2\n\
    cmp         r1,r0\n\
    bcc         LAB_0804842c\n\
LAB_0804843a:\n\
    ldr         r6,[r4,#0xc]\n\
LAB_0804843c:\n\
    str         r6,[r5,#0xc]\n\
    str         r4,[r5,#0x8]\n\
    str         r5,[r6,#0x8]\n\
    str         r5,[r4,#0xc]\n\
LAB_08048444:\n\
    mov         r0,r12\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804844c\n\
    add         r0,#0x3\n\
LAB_0804844c:\n\
    asr         r0,r0,#0x2\n\
    mov         r6,#0x1\n\
    lsl         r6,r0\n\
    ldr         r0,DAT_08048470\n\
    ldr         r1,[r0,#0x4]\n\
    cmp         r6,r1\n\
    bhi         LAB_0804850e\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048482\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    mov         r2,r12\n\
    and         r0,r2\n\
    add         r0,#0x4\n\
    mov         r12,r0\n\
    b           LAB_08048478\n\
DAT_08048470:\n\
    .4byte 0x087D656C\n\
LAB_08048474:\n\
    mov         r3,#0x4\n\
    add         r12,r3\n\
LAB_08048478:\n\
    lsl         r6,r6,#0x1\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048474\n\
LAB_08048482:\n\
    ldr         r4,DAT_08048500\n\
    mov         r9,r4\n\
LAB_08048486:\n\
    mov         r7,r12\n\
    str         r7,[sp,#0x4]\n\
    mov         r1,r12\n\
    lsl         r0,r1,#0x3\n\
    mov         r3,r9\n\
    add         r2,r0,r3\n\
    add         r4,r2,#0x0\n\
LAB_08048494:\n\
    ldr         r5,[r4,#0xc]\n\
    cmp         r5,r4\n\
    beq         LAB_080484b4\n\
    mov         r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0804849e:\n\
    ldr         r1,[r5,#0x4]\n\
    and         r1,r0\n\
    mov         r7,r8\n\
    sub         r3,r1,r7\n\
    cmp         r3,#0xf\n\
    bgt         LAB_08048564\n\
    cmp         r3,#0x0\n\
    bge         LAB_0804858c\n\
    ldr         r5,[r5,#0xc]\n\
    cmp         r5,r4\n\
    bne         LAB_0804849e\n\
LAB_080484b4:\n\
    add         r4,#0x8\n\
    mov         r0,#0x1\n\
    add         r12,r0\n\
    mov         r0,r12\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048494\n\
LAB_080484c4:\n\
    ldr         r0,[sp,#0x4]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048504\n\
    ldr         r3,[sp,#0x4]\n\
    sub         r3,#0x1\n\
    str         r3,[sp,#0x4]\n\
    sub         r2,#0x8\n\
    ldr         r0,[r2,#0x8]\n\
    cmp         r0,r2\n\
    beq         LAB_080484c4\n\
LAB_080484da:\n\
    lsl         r6,r6,#0x1\n\
    mov         r4,r9\n\
    ldr         r1,[r4,#0x4]\n\
    cmp         r6,r1\n\
    bhi         LAB_0804850e\n\
    cmp         r6,#0x0\n\
    beq         LAB_0804850e\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048486\n\
LAB_080484f0:\n\
    mov         r7,#0x4\n\
    add         r12,r7\n\
    lsl         r6,r6,#0x1\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080484f0\n\
    b           LAB_08048486\n\
DAT_08048500:\n\
    .4byte 0x087D656C\n\
LAB_08048504:\n\
    mov         r1,r9\n\
    ldr         r0,[r1,#0x4]\n\
    bic         r0,r6\n\
    str         r0,[r1,#0x4]\n\
    b           LAB_080484da\n\
LAB_0804850e:\n\
    ldr         r2,DAT_0804854c\n\
    ldr         r0,[r2,#0x8]\n\
    ldr         r0,[r0,#0x4]\n\
    mov         r4,#0x4\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    and         r0,r4\n\
    mov         r7,r8\n\
    sub         r3,r0,r7\n\
    cmp         r0,r8\n\
    bcc         LAB_08048526\n\
    cmp         r3,#0xf\n\
    bgt         LAB_080485a0\n\
LAB_08048526:\n\
    ldr         r0,[sp,#0x0]\n\
    mov         r1,r8\n\
    bl          fun_080480b4\n\
    ldr         r1,DAT_0804854c\n\
    ldr         r0,[r1,#0x8]\n\
    ldr         r0,[r0,#0x4]\n\
    and         r0,r4\n\
    mov         r2,r8\n\
    sub         r3,r0,r2\n\
    cmp         r0,r8\n\
    bcc         LAB_08048542\n\
    cmp         r3,#0xf\n\
    bgt         LAB_080485a0\n\
LAB_08048542:\n\
    ldr         r0,[sp,#0x0]\n\
    bl          fun_08048708\n\
    mov         r0,#0x0\n\
    b           LAB_080485c0\n\
DAT_0804854c:\n\
    .4byte 0x087D656C\n\
LAB_08048550:\n\
    ldr         r6,[r5,#0xc]\n\
    ldr         r4,[r5,#0x8]\n\
    str         r6,[r4,#0xc]\n\
    str         r4,[r6,#0x8]\n\
    add         r2,r5,r1\n\
    ldr         r0,[r2,#0x4]\n\
    mov         r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    b           LAB_080485b6\n\
LAB_08048564:\n\
    mov         r4,r8\n\
    add         r2,r5,r4\n\
    mov         r1,#0x1\n\
    orr         r4,r1\n\
    str         r4,[r5,#0x4]\n\
    ldr         r6,[r5,#0xc]\n\
    ldr         r4,[r5,#0x8]\n\
    str         r6,[r4,#0xc]\n\
    str         r4,[r6,#0x8]\n\
    mov         r7,r10\n\
    str         r2,[r7,#0xc]\n\
    str         r2,[r7,#0x8]\n\
    str         r7,[r2,#0xc]\n\
    str         r7,[r2,#0x8]\n\
    add         r0,r3,#0x0\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    add         r0,r2,r3\n\
    str         r3,[r0,#0x0]\n\
    b           LAB_080485b6\n\
LAB_0804858c:\n\
    add         r2,r5,r1\n\
    ldr         r0,[r2,#0x4]\n\
    mov         r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r2,#0x4]\n\
    ldr         r6,[r5,#0xc]\n\
    ldr         r4,[r5,#0x8]\n\
    str         r6,[r4,#0xc]\n\
    str         r4,[r6,#0x8]\n\
    b           LAB_080485b6\n\
LAB_080485a0:\n\
    ldr         r2,DAT_080485cc\n\
    ldr         r5,[r2,#0x8]\n\
    mov         r1,#0x1\n\
    mov         r0,r8\n\
    orr         r0,r1\n\
    str         r0,[r5,#0x4]\n\
    mov         r4,r8\n\
    add         r0,r5,r4\n\
    str         r0,[r2,#0x8]\n\
    orr         r3,r1\n\
    str         r3,[r0,#0x4]\n\
LAB_080485b6:\n\
    ldr         r0,[sp,#0x0]\n\
    bl          fun_08048708\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x8\n\
LAB_080485c0:\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_080485cc:\n\
    .4byte 0x087D656C\n\
    ");
}
__attribute__((naked)) void fun_080485d0()
{
    asm("\n\
    sub         sp,#0x4\n\
    cmp         r1,#0x0\n\
    bne         LAB_080485d8\n\
    mov         r1,sp\n\
LAB_080485d8:\n\
    cmp         r2,#0x0\n\
    beq         LAB_080485f4\n\
    cmp         r3,#0x0\n\
    bne         LAB_080485e6\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_080485f6\n\
LAB_080485e6:\n\
    ldrb        r0,[r2,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080485f4\n\
    mov         r0,#0x1\n\
    b           LAB_080485f6\n\
LAB_080485f4:\n\
    mov         r0,#0x0\n\
LAB_080485f6:\n\
    add         sp,#0x4\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080485fc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r5,r1,#0x0\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0xff\n\
    and         r5,r0\n\
    cmp         r2,#0x3\n\
    bls         LAB_08048670\n\
    mov         r0,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048670\n\
    add         r4,r1,#0x0\n\
    mov         r6,#0x0\n\
    mov         r1,#0x0\n\
LAB_08048618:\n\
    lsl         r0,r6,#0x8\n\
    add         r6,r0,r5\n\
    add         r1,#0x1\n\
    cmp         r1,#0x3\n\
    bls         LAB_08048618\n\
    cmp         r2,#0x3\n\
    bls         LAB_08048656\n\
    ldr         r0,DAT_0804865c\n\
    mov         r12,r0\n\
    ldr         r7,DAT_08048660\n\
LAB_0804862c:\n\
    ldr         r1,[r4,#0x0]\n\
    eor         r1,r6\n\
    mov         r3,r12\n\
    add         r0,r1,r3\n\
    bic         r0,r1\n\
    and         r0,r7\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804864e\n\
    add         r1,r4,#0x0\n\
    mov         r3,#0x0\n\
LAB_08048640:\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,r5\n\
    beq         LAB_0804866a\n\
    add         r1,#0x1\n\
    add         r3,#0x1\n\
    cmp         r3,#0x3\n\
    bls         LAB_08048640\n\
LAB_0804864e:\n\
    sub         r2,#0x4\n\
    add         r4,#0x4\n\
    cmp         r2,#0x3\n\
    bhi         LAB_0804862c\n\
LAB_08048656:\n\
    add         r1,r4,#0x0\n\
    b           LAB_08048670\n\
\n\
.space 2\n\
\n\
DAT_0804865c:\n\
    .4byte 0xFEFEFEFF\n\
DAT_08048660:\n\
    .4byte 0x80808080\n\
LAB_08048664:\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,r5\n\
    bne         LAB_0804866e\n\
LAB_0804866a:\n\
    add         r0,r1,#0x0\n\
    b           LAB_0804867a\n\
LAB_0804866e:\n\
    add         r1,#0x1\n\
LAB_08048670:\n\
    add         r0,r2,#0x0\n\
    sub         r2,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048664\n\
    mov         r0,#0x0\n\
LAB_0804867a:\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_0804867c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r5,#0x0\n\
    add         r3,r1,#0x0\n\
    cmp         r3,r5\n\
    bcs         LAB_080486ae\n\
    add         r0,r3,r2\n\
    cmp         r5,r0\n\
    bcs         LAB_080486ae\n\
    add         r3,r0,#0x0\n\
    add         r4,r5,r2\n\
    sub         r2,#0x1\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    beq         LAB_08048700\n\
    add         r1,r0,#0x0\n\
LAB_0804869e:\n\
    sub         r4,#0x1\n\
    sub         r3,#0x1\n\
    ldrb        r0,[r3,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    sub         r2,#0x1\n\
    cmp         r2,r1\n\
    bne         LAB_0804869e\n\
    b           LAB_08048700\n\
LAB_080486ae:\n\
    cmp         r2,#0xf\n\
    bls         LAB_080486e6\n\
    add         r0,r3,#0x0\n\
    orr         r0,r4\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080486e6\n\
    add         r1,r3,#0x0\n\
LAB_080486c0:\n\
    ldmia       r1!,{r0}\n\
    stmia       r4!,{r0}\n\
    ldmia       r1!,{r0}\n\
    stmia       r4!,{r0}\n\
    ldmia       r1!,{r0}\n\
    stmia       r4!,{r0}\n\
    ldmia       r1!,{r0}\n\
    stmia       r4!,{r0}\n\
    sub         r2,#0x10\n\
    cmp         r2,#0xf\n\
    bhi         LAB_080486c0\n\
    cmp         r2,#0x3\n\
    bls         LAB_080486e4\n\
LAB_080486da:\n\
    ldmia       r1!,{r0}\n\
    stmia       r4!,{r0}\n\
    sub         r2,#0x4\n\
    cmp         r2,#0x3\n\
    bhi         LAB_080486da\n\
LAB_080486e4:\n\
    add         r3,r1,#0x0\n\
LAB_080486e6:\n\
    sub         r2,#0x1\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    beq         LAB_08048700\n\
    add         r1,r0,#0x0\n\
LAB_080486f2:\n\
    ldrb        r0,[r3,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    add         r3,#0x1\n\
    add         r4,#0x1\n\
    sub         r2,#0x1\n\
    cmp         r2,r1\n\
    bne         LAB_080486f2\n\
LAB_08048700:\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,pc}\n\
    ");
}
__attribute__((naked)) void fun_08048704()
{
    asm("\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048708()
{
    asm("\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0804870c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r4,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    ldr         r0,[r4,#0x4c]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048728\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x4\n\
    mov         r2,#0x10\n\
    bl          fun_080495a4\n\
    str         r0,[r4,#0x4c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048750\n\
LAB_08048728:\n\
    ldr         r1,[r4,#0x4c]\n\
    lsl         r0,r6,#0x2\n\
    add         r2,r0,r1\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804873a\n\
    ldr         r0,[r1,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    b           LAB_08048758\n\
LAB_0804873a:\n\
    mov         r5,#0x1\n\
    lsl         r5,r6\n\
    lsl         r2,r5,#0x2\n\
    add         r2,#0x14\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x1\n\
    bl          fun_080495a4\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    bne         LAB_08048754\n\
LAB_08048750:\n\
    mov         r0,#0x0\n\
    b           LAB_08048760\n\
LAB_08048754:\n\
    str         r6,[r1,#0x4]\n\
    str         r5,[r1,#0x8]\n\
LAB_08048758:\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x10]\n\
    str         r0,[r1,#0xc]\n\
    add         r0,r1,#0x0\n\
LAB_08048760:\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048764()
{
    asm("\n\
    add         r3,r0,#0x0\n\
    add         r2,r1,#0x0\n\
    cmp         r2,#0x0\n\
    beq         LAB_0804877a\n\
    ldr         r0,[r2,#0x4]\n\
    ldr         r1,[r3,#0x4c]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    str         r1,[r2,#0x0]\n\
    str         r2,[r0,#0x0]\n\
LAB_0804877a:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_0804877c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    mov         r9,r0\n\
    add         r5,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    mov         r8,r3\n\
    ldr         r6,[r5,#0x10]\n\
    add         r3,r5,#0x0\n\
    add         r3,#0x14\n\
    mov         r7,#0x0\n\
    ldr         r0,DAT_08048810\n\
    mov         r12,r0\n\
LAB_08048798:\n\
    ldr         r1,[r3,#0x0]\n\
    add         r0,r1,#0x0\n\
    mov         r2,r12\n\
    and         r0,r2\n\
    add         r2,r0,#0x0\n\
    mul         r2,r4\n\
    add         r2,r8\n\
    lsr         r1,r1,#0x10\n\
    add         r0,r1,#0x0\n\
    mul         r0,r4\n\
    lsr         r1,r2,#0x10\n\
    add         r0,r0,r1\n\
    lsr         r1,r0,#0x10\n\
    mov         r8,r1\n\
    lsl         r0,r0,#0x10\n\
    mov         r1,r12\n\
    and         r2,r1\n\
    add         r0,r0,r2\n\
    stmia       r3!,{r0}\n\
    add         r7,#0x1\n\
    cmp         r7,r6\n\
    blt         LAB_08048798\n\
    mov         r2,r8\n\
    cmp         r2,#0x0\n\
    beq         LAB_08048806\n\
    ldr         r0,[r5,#0x8]\n\
    cmp         r6,r0\n\
    blt         LAB_080487f6\n\
    ldr         r1,[r5,#0x4]\n\
    add         r1,#0x1\n\
    mov         r0,r9\n\
    bl          fun_0804870c\n\
    add         r4,r0,#0x0\n\
    add         r0,#0xc\n\
    add         r1,r5,#0x0\n\
    add         r1,#0xc\n\
    ldr         r2,[r5,#0x10]\n\
    lsl         r2,r2,#0x2\n\
    add         r2,#0x8\n\
    bl          fun_08044f7c\n\
    mov         r0,r9\n\
    add         r1,r5,#0x0\n\
    bl          fun_08048764\n\
    add         r5,r4,#0x0\n\
LAB_080487f6:\n\
    lsl         r1,r6,#0x2\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x14\n\
    add         r0,r0,r1\n\
    mov         r1,r8\n\
    str         r1,[r0,#0x0]\n\
    add         r6,#0x1\n\
    str         r6,[r5,#0x10]\n\
LAB_08048806:\n\
    add         r0,r5,#0x0\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08048810:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08048814()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r7,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    mov         r8,r3\n\
    mov         r0,r8\n\
    add         r0,#0x8\n\
    mov         r1,#0x9\n\
    bl          fun_08043504\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    cmp         r0,#0x1\n\
    ble         LAB_0804883c\n\
LAB_08048834:\n\
    lsl         r2,r2,#0x1\n\
    add         r1,#0x1\n\
    cmp         r0,r2\n\
    bgt         LAB_08048834\n\
LAB_0804883c:\n\
    add         r0,r7,#0x0\n\
    bl          fun_0804870c\n\
    add         r1,r0,#0x0\n\
    ldr         r0,[sp,#0x18]\n\
    str         r0,[r1,#0x14]\n\
    mov         r0,#0x1\n\
    str         r0,[r1,#0x10]\n\
    mov         r5,#0x9\n\
    cmp         r6,#0x9\n\
    ble         LAB_0804886e\n\
    add         r4,#0x9\n\
LAB_08048854:\n\
    ldrb        r3,[r4,#0x0]\n\
    sub         r3,#0x30\n\
    add         r4,#0x1\n\
    add         r0,r7,#0x0\n\
    mov         r2,#0xa\n\
    bl          fun_0804877c\n\
    add         r1,r0,#0x0\n\
    add         r5,#0x1\n\
    cmp         r5,r6\n\
    blt         LAB_08048854\n\
    add         r4,#0x1\n\
    b           LAB_08048870\n\
LAB_0804886e:\n\
    add         r4,#0xa\n\
LAB_08048870:\n\
    cmp         r5,r8\n\
    bge         LAB_0804888e\n\
    mov         r0,r8\n\
    sub         r5,r0,r5\n\
LAB_08048878:\n\
    ldrb        r3,[r4,#0x0]\n\
    sub         r3,#0x30\n\
    add         r4,#0x1\n\
    add         r0,r7,#0x0\n\
    mov         r2,#0xa\n\
    bl          fun_0804877c\n\
    add         r1,r0,#0x0\n\
    sub         r5,#0x1\n\
    cmp         r5,#0x0\n\
    bne         LAB_08048878\n\
LAB_0804888e:\n\
    add         r0,r1,#0x0\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048898()
{
    asm("\n\
    add         r1,r0,#0x0\n\
    mov         r2,#0x0\n\
    ldr         r0,DAT_080488e8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080488a8\n\
    mov         r2,#0x10\n\
    lsl         r1,r1,#0x10\n\
LAB_080488a8:\n\
    mov         r0,#0xff\n\
    lsl         r0,r0,#0x18\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080488b6\n\
    add         r2,#0x8\n\
    lsl         r1,r1,#0x8\n\
LAB_080488b6:\n\
    mov         r0,#0xf0\n\
    lsl         r0,r0,#0x18\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080488c4\n\
    add         r2,#0x4\n\
    lsl         r1,r1,#0x4\n\
LAB_080488c4:\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x18\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080488d2\n\
    add         r2,#0x2\n\
    lsl         r1,r1,#0x2\n\
LAB_080488d2:\n\
    cmp         r1,#0x0\n\
    blt         LAB_080488ec\n\
    add         r2,#0x1\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x17\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080488ec\n\
    mov         r0,#0x20\n\
    b           LAB_080488ee\n\
\n\
.space 2\n\
\n\
DAT_080488e8:\n\
    .4byte 0xFFFF0000\n\
LAB_080488ec:\n\
    add         r0,r2,#0x0\n\
LAB_080488ee:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080488f0()
{
    asm("\n\
    add         r3,r0,#0x0\n\
    ldr         r1,[r3,#0x0]\n\
    mov         r0,#0x7\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048920\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048908\n\
    mov         r0,#0x0\n\
    b           LAB_08048970\n\
LAB_08048908:\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048918\n\
    lsr         r0,r1,#0x1\n\
    str         r0,[r3,#0x0]\n\
    mov         r0,#0x1\n\
    b           LAB_08048970\n\
LAB_08048918:\n\
    lsr         r0,r1,#0x2\n\
    str         r0,[r3,#0x0]\n\
    mov         r0,#0x2\n\
    b           LAB_08048970\n\
LAB_08048920:\n\
    mov         r2,#0x0\n\
    ldr         r0,DAT_08048968\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804892e\n\
    mov         r2,#0x10\n\
    lsr         r1,r1,#0x10\n\
LAB_0804892e:\n\
    mov         r0,#0xff\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804893a\n\
    add         r2,#0x8\n\
    lsr         r1,r1,#0x8\n\
LAB_0804893a:\n\
    mov         r0,#0xf\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048946\n\
    add         r2,#0x4\n\
    lsr         r1,r1,#0x4\n\
LAB_08048946:\n\
    mov         r0,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048952\n\
    add         r2,#0x2\n\
    lsr         r1,r1,#0x2\n\
LAB_08048952:\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804896c\n\
    add         r2,#0x1\n\
    lsr         r1,r1,#0x1\n\
    cmp         r1,#0x0\n\
    bne         LAB_0804896c\n\
    mov         r0,#0x20\n\
    b           LAB_08048970\n\
\n\
.space 2\n\
\n\
DAT_08048968:\n\
    .4byte 0x0000FFFF\n\
LAB_0804896c:\n\
    str         r1,[r3,#0x0]\n\
    add         r0,r2,#0x0\n\
LAB_08048970:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048974()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r1,#0x0\n\
    mov         r1,#0x1\n\
    bl          fun_0804870c\n\
    str         r4,[r0,#0x14]\n\
    mov         r1,#0x1\n\
    str         r1,[r0,#0x10]\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048988()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x24\n\
    add         r3,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    ldr         r1,[r4,#0x10]\n\
    ldr         r0,[r5,#0x10]\n\
    cmp         r1,r0\n\
    bge         LAB_080489a8\n\
    str         r4,[sp,#0x0]\n\
    add         r4,r5,#0x0\n\
    ldr         r5,[sp,#0x0]\n\
LAB_080489a8:\n\
    ldr         r1,[r4,#0x4]\n\
    ldr         r6,[r4,#0x10]\n\
    ldr         r0,[r5,#0x10]\n\
    mov         r8,r0\n\
    mov         r2,r8\n\
    add         r2,r6,r2\n\
    str         r2,[sp,#0x4]\n\
    ldr         r0,[r4,#0x8]\n\
    cmp         r2,r0\n\
    ble         LAB_080489be\n\
    add         r1,#0x1\n\
LAB_080489be:\n\
    add         r0,r3,#0x0\n\
    bl          fun_0804870c\n\
    str         r0,[sp,#0x0]\n\
    add         r7,r0,#0x0\n\
    add         r7,#0x14\n\
    ldr         r1,[sp,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r2,r7,r0\n\
    str         r2,[sp,#0x8]\n\
    str         r0,[sp,#0x18]\n\
    add         r1,r4,#0x0\n\
    add         r1,#0x14\n\
    lsl         r3,r6,#0x2\n\
    add         r2,r5,#0x0\n\
    add         r2,#0x14\n\
    mov         r5,r8\n\
    lsl         r4,r5,#0x2\n\
    ldr         r0,[sp,#0x8]\n\
    cmp         r7,r0\n\
    bcs         LAB_080489f2\n\
    mov         r0,#0x0\n\
LAB_080489ea:\n\
    stmia       r7!,{r0}\n\
    ldr         r5,[sp,#0x8]\n\
    cmp         r7,r5\n\
    bcc         LAB_080489ea\n\
LAB_080489f2:\n\
    str         r1,[sp,#0x8]\n\
    add         r3,r1,r3\n\
    str         r3,[sp,#0xc]\n\
    mov         r8,r2\n\
    add         r4,r8\n\
    str         r4,[sp,#0x10]\n\
    ldr         r0,[sp,#0x0]\n\
    add         r0,#0x14\n\
    mov         r9,r0\n\
    mov         r1,r9\n\
    str         r1,[sp,#0x20]\n\
    cmp         r8,r4\n\
    bcs         LAB_08048aba\n\
LAB_08048a0c:\n\
    mov         r2,r8\n\
    ldmia       r2!,{r6}\n\
    str         r2,[sp,#0x14]\n\
    ldr         r0,DAT_08048ac8\n\
    and         r6,r0\n\
    mov         r4,r9\n\
    add         r4,#0x4\n\
    str         r4,[sp,#0x1c]\n\
    cmp         r6,#0x0\n\
    beq         LAB_08048a64\n\
    ldr         r7,[sp,#0x8]\n\
    mov         r5,r9\n\
    mov         r1,#0x0\n\
    mov         r12,r1\n\
    mov         r10,r0\n\
LAB_08048a2a:\n\
    ldmia       r7!,{r3}\n\
    add         r0,r3,#0x0\n\
    mov         r2,r10\n\
    and         r0,r2\n\
    add         r1,r0,#0x0\n\
    mul         r1,r6\n\
    ldr         r2,[r5,#0x0]\n\
    add         r0,r2,#0x0\n\
    mov         r4,r10\n\
    and         r0,r4\n\
    add         r1,r1,r0\n\
    mov         r0,r12\n\
    add         r4,r1,r0\n\
    lsr         r1,r4,#0x10\n\
    lsr         r3,r3,#0x10\n\
    add         r0,r3,#0x0\n\
    mul         r0,r6\n\
    lsr         r2,r2,#0x10\n\
    add         r0,r0,r2\n\
    add         r2,r0,r1\n\
    lsr         r0,r2,#0x10\n\
    mov         r12,r0\n\
    strh        r2,[r5,#0x0]\n\
    strh        r4,[r5,#0x2]\n\
    add         r5,#0x4\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r7,r1\n\
    bcc         LAB_08048a2a\n\
    str         r0,[r5,#0x0]\n\
LAB_08048a64:\n\
    mov         r2,r8\n\
    ldrh        r6,[r2,#0x2]\n\
    cmp         r6,#0x0\n\
    beq         LAB_08048aac\n\
    ldr         r7,[sp,#0x8]\n\
    mov         r5,r9\n\
    mov         r4,#0x0\n\
    mov         r12,r4\n\
    ldr         r2,[r5,#0x0]\n\
    ldr         r3,DAT_08048ac8\n\
LAB_08048a78:\n\
    ldmia       r7!,{r1}\n\
    add         r0,r1,#0x0\n\
    and         r0,r3\n\
    mul         r0,r6\n\
    ldrh        r4,[r5,#0x2]\n\
    add         r4,r4,r0\n\
    mov         r8,r4\n\
    add         r4,r12\n\
    lsr         r0,r4,#0x10\n\
    mov         r12,r0\n\
    strh        r4,[r5,#0x0]\n\
    strh        r2,[r5,#0x2]\n\
    add         r5,#0x4\n\
    lsr         r1,r1,#0x10\n\
    mul         r1,r6\n\
    ldr         r0,[r5,#0x0]\n\
    and         r0,r3\n\
    add         r1,r1,r0\n\
    mov         r4,r12\n\
    add         r2,r1,r4\n\
    lsr         r0,r2,#0x10\n\
    mov         r12,r0\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r7,r1\n\
    bcc         LAB_08048a78\n\
    str         r2,[r5,#0x0]\n\
LAB_08048aac:\n\
    ldr         r2,[sp,#0x14]\n\
    mov         r8,r2\n\
    ldr         r4,[sp,#0x1c]\n\
    mov         r9,r4\n\
    ldr         r5,[sp,#0x10]\n\
    cmp         r8,r5\n\
    bcc         LAB_08048a0c\n\
LAB_08048aba:\n\
    ldr         r0,[sp,#0x20]\n\
    ldr         r1,[sp,#0x18]\n\
    add         r5,r0,r1\n\
    ldr         r2,[sp,#0x4]\n\
    cmp         r2,#0x0\n\
    ble         LAB_08048ade\n\
    b           LAB_08048ad6\n\
DAT_08048ac8:\n\
    .4byte 0x0000FFFF\n\
LAB_08048acc:\n\
    ldr         r4,[sp,#0x4]\n\
    sub         r4,#0x1\n\
    str         r4,[sp,#0x4]\n\
    cmp         r4,#0x0\n\
    ble         LAB_08048ade\n\
LAB_08048ad6:\n\
    sub         r5,#0x4\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048acc\n\
LAB_08048ade:\n\
    ldr         r5,[sp,#0x4]\n\
    ldr         r0,[sp,#0x0]\n\
    str         r5,[r0,#0x10]\n\
    ldr         r0,[sp,#0x0]\n\
    add         sp,#0x24\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048af4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    mov         r8,r0\n\
    add         r7,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    mov         r1,#0x3\n\
    and         r1,r6\n\
    cmp         r1,#0x0\n\
    beq         LAB_08048b1e\n\
    ldr         r0,DAT_08048b40\n\
    sub         r1,#0x1\n\
    lsl         r1,r1,#0x2\n\
    add         r1,r1,r0\n\
    ldr         r2,[r1,#0x0]\n\
    mov         r0,r8\n\
    add         r1,r7,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_0804877c\n\
    add         r7,r0,#0x0\n\
LAB_08048b1e:\n\
    asr         r6,r6,#0x2\n\
    cmp         r6,#0x0\n\
    beq         LAB_08048b84\n\
    mov         r0,r8\n\
    ldr         r5,[r0,#0x48]\n\
    add         r4,r5,#0x0\n\
    cmp         r5,#0x0\n\
    bne         LAB_08048b60\n\
    ldr         r1,DAT_08048b44\n\
    bl          fun_08048974\n\
    mov         r1,r8\n\
    str         r0,[r1,#0x48]\n\
    add         r5,r0,#0x0\n\
    str         r4,[r5,#0x0]\n\
    b           LAB_08048b60\n\
\n\
.space 2\n\
\n\
DAT_08048b40:\n\
    .4byte 0x086CCD94\n\
DAT_08048b44:\n\
    .4byte 0x00000271\n\
LAB_08048b48:\n\
    ldr         r0,[r5,#0x0]\n\
    add         r4,r0,#0x0\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048b5e\n\
    mov         r0,r8\n\
    add         r1,r5,#0x0\n\
    add         r2,r5,#0x0\n\
    bl          fun_08048988\n\
    str         r0,[r5,#0x0]\n\
    str         r4,[r0,#0x0]\n\
LAB_08048b5e:\n\
    add         r5,r0,#0x0\n\
LAB_08048b60:\n\
    mov         r0,#0x1\n\
    and         r0,r6\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048b7e\n\
    mov         r0,r8\n\
    add         r1,r7,#0x0\n\
    add         r2,r5,#0x0\n\
    bl          fun_08048988\n\
    add         r4,r0,#0x0\n\
    mov         r0,r8\n\
    add         r1,r7,#0x0\n\
    bl          fun_08048764\n\
    add         r7,r4,#0x0\n\
LAB_08048b7e:\n\
    asr         r6,r6,#0x1\n\
    cmp         r6,#0x0\n\
    bne         LAB_08048b48\n\
LAB_08048b84:\n\
    add         r0,r7,#0x0\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08048b8c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r10,r0\n\
    mov         r8,r1\n\
    add         r5,r2,#0x0\n\
    asr         r6,r5,#0x5\n\
    ldr         r1,[r1,#0x4]\n\
    mov         r2,r8\n\
    ldr         r0,[r2,#0x10]\n\
    add         r0,r6,r0\n\
    add         r7,r0,#0x1\n\
    ldr         r2,[r2,#0x8]\n\
    cmp         r7,r2\n\
    ble         LAB_08048bb6\n\
LAB_08048bae:\n\
    add         r1,#0x1\n\
    lsl         r2,r2,#0x1\n\
    cmp         r7,r2\n\
    bgt         LAB_08048bae\n\
LAB_08048bb6:\n\
    mov         r0,r10\n\
    bl          fun_0804870c\n\
    mov         r9,r0\n\
    mov         r4,r9\n\
    add         r4,#0x14\n\
    mov         r0,r8\n\
    add         r0,#0x14\n\
    cmp         r6,#0x0\n\
    ble         LAB_08048bd6\n\
    mov         r1,#0x0\n\
    add         r2,r6,#0x0\n\
LAB_08048bce:\n\
    stmia       r4!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bne         LAB_08048bce\n\
LAB_08048bd6:\n\
    add         r3,r0,#0x0\n\
    mov         r1,r8\n\
    ldr         r0,[r1,#0x10]\n\
    lsl         r0,r0,#0x2\n\
    add         r6,r3,r0\n\
    mov         r0,#0x1f\n\
    and         r5,r0\n\
    cmp         r5,#0x0\n\
    beq         LAB_08048c08\n\
    mov         r0,#0x20\n\
    sub         r1,r0,r5\n\
    mov         r2,#0x0\n\
LAB_08048bee:\n\
    ldr         r0,[r3,#0x0]\n\
    lsl         r0,r5\n\
    orr         r0,r2\n\
    stmia       r4!,{r0}\n\
    ldmia       r3!,{r2}\n\
    lsr         r2,r1\n\
    cmp         r3,r6\n\
    bcc         LAB_08048bee\n\
    str         r2,[r4,#0x0]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08048c10\n\
    add         r7,#0x1\n\
    b           LAB_08048c10\n\
LAB_08048c08:\n\
    ldmia       r3!,{r0}\n\
    stmia       r4!,{r0}\n\
    cmp         r3,r6\n\
    bcc         LAB_08048c08\n\
LAB_08048c10:\n\
    sub         r0,r7,#0x1\n\
    mov         r2,r9\n\
    str         r0,[r2,#0x10]\n\
    mov         r0,r10\n\
    mov         r1,r8\n\
    bl          fun_08048764\n\
    mov         r0,r9\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048c2c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r2,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    ldr         r0,[r2,#0x10]\n\
    ldr         r1,[r5,#0x10]\n\
    sub         r0,r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08048c68\n\
    add         r4,r2,#0x0\n\
    add         r4,#0x14\n\
    lsl         r1,r1,#0x2\n\
    add         r3,r4,r1\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x14\n\
    add         r1,r0,r1\n\
LAB_08048c4a:\n\
    sub         r3,#0x4\n\
    sub         r1,#0x4\n\
    ldr         r0,[r3,#0x0]\n\
    ldr         r2,[r1,#0x0]\n\
    cmp         r0,r2\n\
    beq         LAB_08048c62\n\
    mov         r1,#0x1\n\
    cmp         r0,r2\n\
    bcs         LAB_08048c5e\n\
    sub         r1,#0x2\n\
LAB_08048c5e:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08048c68\n\
LAB_08048c62:\n\
    cmp         r3,r4\n\
    bhi         LAB_08048c4a\n\
    mov         r0,#0x0\n\
LAB_08048c68:\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08048c6c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    add         r6,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    mov         r8,r2\n\
    add         r0,r5,#0x0\n\
    mov         r1,r8\n\
    bl          fun_08048c2c\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    bne         LAB_08048c9e\n\
    add         r0,r6,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_0804870c\n\
    add         r7,r0,#0x0\n\
    mov         r0,#0x1\n\
    str         r0,[r7,#0x10]\n\
    str         r4,[r7,#0x14]\n\
    b           LAB_08048d4e\n\
LAB_08048c9e:\n\
    cmp         r4,#0x0\n\
    bge         LAB_08048cac\n\
    add         r7,r5,#0x0\n\
    mov         r5,r8\n\
    mov         r8,r7\n\
    mov         r4,#0x1\n\
    b           LAB_08048cae\n\
LAB_08048cac:\n\
    mov         r4,#0x0\n\
LAB_08048cae:\n\
    ldr         r1,[r5,#0x4]\n\
    add         r0,r6,#0x0\n\
    bl          fun_0804870c\n\
    add         r7,r0,#0x0\n\
    str         r4,[r7,#0xc]\n\
    ldr         r0,[r5,#0x10]\n\
    mov         r9,r0\n\
    add         r6,r5,#0x0\n\
    add         r6,#0x14\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r6\n\
    mov         r10,r0\n\
    mov         r1,r8\n\
    ldr         r0,[r1,#0x10]\n\
    mov         r3,#0x14\n\
    add         r3,r8\n\
    mov         r12,r3\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r12\n\
    str         r0,[sp,#0x0]\n\
    add         r4,r7,#0x0\n\
    add         r4,#0x14\n\
    mov         r5,#0x0\n\
    ldr         r0,DAT_08048d38\n\
    mov         r8,r0\n\
LAB_08048ce2:\n\
    ldmia       r6!,{r1}\n\
    str         r1,[sp,#0x4]\n\
    mov         r3,r8\n\
    and         r1,r3\n\
    mov         r0,r12\n\
    add         r0,#0x4\n\
    mov         r12,r0\n\
    sub         r0,#0x4\n\
    ldmia       r0!,{r2}\n\
    add         r0,r2,#0x0\n\
    and         r0,r3\n\
    sub         r1,r1,r0\n\
    add         r0,r1,r5\n\
    asr         r5,r0,#0x10\n\
    ldr         r1,[sp,#0x4]\n\
    lsr         r3,r1,#0x10\n\
    lsr         r2,r2,#0x10\n\
    sub         r3,r3,r2\n\
    add         r1,r3,r5\n\
    asr         r5,r1,#0x10\n\
    strh        r1,[r4,#0x0]\n\
    strh        r0,[r4,#0x2]\n\
    add         r4,#0x4\n\
    ldr         r3,[sp,#0x0]\n\
    cmp         r12,r3\n\
    bcc         LAB_08048ce2\n\
    cmp         r6,r10\n\
    bcs         LAB_08048d42\n\
    ldr         r2,DAT_08048d38\n\
LAB_08048d1c:\n\
    ldmia       r6!,{r1}\n\
    add         r0,r1,#0x0\n\
    and         r0,r2\n\
    add         r0,r0,r5\n\
    asr         r5,r0,#0x10\n\
    lsr         r1,r1,#0x10\n\
    add         r1,r1,r5\n\
    asr         r5,r1,#0x10\n\
    strh        r1,[r4,#0x0]\n\
    strh        r0,[r4,#0x2]\n\
    add         r4,#0x4\n\
    cmp         r6,r10\n\
    bcc         LAB_08048d1c\n\
    b           LAB_08048d42\n\
DAT_08048d38:\n\
    .4byte 0x0000FFFF\n\
LAB_08048d3c:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r9,r0\n\
LAB_08048d42:\n\
    sub         r4,#0x4\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048d3c\n\
    mov         r1,r9\n\
    str         r1,[r7,#0x10]\n\
LAB_08048d4e:\n\
    add         r0,r7,#0x0\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08048d5c()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r2,DAT_08048d70\n\
    and         r2,r0\n\
    ldr         r0,DAT_08048d74\n\
    add         r2,r2,r0\n\
    cmp         r2,#0x0\n\
    ble         LAB_08048d78\n\
    add         r3,r2,#0x0\n\
    mov         r4,#0x0\n\
    b           LAB_08048da2\n\
DAT_08048d70:\n\
    .4byte 0x7FF00000\n\
DAT_08048d74:\n\
    .4byte 0xFCC00000\n\
LAB_08048d78:\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
    asr         r2,r0,#0x14\n\
    cmp         r2,#0x13\n\
    bgt         LAB_08048d8c\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0xc\n\
    add         r3,r0,#0x0\n\
    asr         r3,r2\n\
    mov         r4,#0x0\n\
    b           LAB_08048da2\n\
LAB_08048d8c:\n\
    mov         r3,#0x0\n\
    sub         r2,#0x14\n\
    cmp         r2,#0x1e\n\
    bgt         LAB_08048d9e\n\
    mov         r0,#0x1f\n\
    sub         r0,r0,r2\n\
    mov         r1,#0x1\n\
    lsl         r1,r0\n\
    b           LAB_08048da0\n\
LAB_08048d9e:\n\
    mov         r1,#0x1\n\
LAB_08048da0:\n\
    add         r4,r1,#0x0\n\
LAB_08048da2:\n\
    add         r1,r4,#0x0\n\
    add         r0,r3,#0x0\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08048da8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0x4\n\
    add         r4,r1,#0x0\n\
    mov         r1,#0x14\n\
    add         r1,r1,r0\n\
    mov         r8,r1\n\
    ldr         r0,[r0,#0x10]\n\
    lsl         r0,r0,#0x2\n\
    add         r5,r1,r0\n\
    sub         r5,#0x4\n\
    ldr         r2,[r5,#0x0]\n\
    add         r0,r2,#0x0\n\
    str         r2,[sp,#0x0]\n\
    bl          fun_08048898\n\
    add         r3,r0,#0x0\n\
    mov         r0,#0x20\n\
    sub         r0,r0,r3\n\
    str         r0,[r4,#0x0]\n\
    ldr         r2,[sp,#0x0]\n\
    cmp         r3,#0xa\n\
    bgt         LAB_08048e08\n\
    mov         r0,#0xb\n\
    sub         r0,r0,r3\n\
    add         r1,r2,#0x0\n\
    lsr         r1,r0\n\
    ldr         r0,DAT_08048df0\n\
    add         r6,r1,#0x0\n\
    orr         r6,r0\n\
    cmp         r5,r8\n\
    bls         LAB_08048df4\n\
    sub         r5,#0x4\n\
    ldr         r1,[r5,#0x0]\n\
    b           LAB_08048df6\n\
DAT_08048df0:\n\
    .4byte 0x3FF00000\n\
LAB_08048df4:\n\
    mov         r1,#0x0\n\
LAB_08048df6:\n\
    add         r0,r3,#0x0\n\
    add         r0,#0x15\n\
    lsl         r2,r0\n\
    mov         r0,#0xb\n\
    sub         r0,r0,r3\n\
    lsr         r1,r0\n\
    add         r7,r2,#0x0\n\
    orr         r7,r1\n\
    b           LAB_08048e54\n\
LAB_08048e08:\n\
    cmp         r5,r8\n\
    bls         LAB_08048e12\n\
    sub         r5,#0x4\n\
    ldr         r4,[r5,#0x0]\n\
    b           LAB_08048e14\n\
LAB_08048e12:\n\
    mov         r4,#0x0\n\
LAB_08048e14:\n\
    sub         r3,#0xb\n\
    cmp         r3,#0x0\n\
    beq         LAB_08048e4c\n\
    lsl         r2,r3\n\
    mov         r0,#0x20\n\
    sub         r0,r0,r3\n\
    add         r1,r4,#0x0\n\
    lsr         r1,r0\n\
    ldr         r0,DAT_08048e38\n\
    orr         r1,r0\n\
    add         r6,r2,#0x0\n\
    orr         r6,r1\n\
    cmp         r5,r8\n\
    bls         LAB_08048e3c\n\
    sub         r5,#0x4\n\
    ldr         r2,[r5,#0x0]\n\
    b           LAB_08048e3e\n\
\n\
.space 2\n\
\n\
DAT_08048e38:\n\
    .4byte 0x3FF00000\n\
LAB_08048e3c:\n\
    mov         r2,#0x0\n\
LAB_08048e3e:\n\
    lsl         r4,r3\n\
    mov         r0,#0x20\n\
    sub         r0,r0,r3\n\
    lsr         r2,r0\n\
    add         r7,r4,#0x0\n\
    orr         r7,r2\n\
    b           LAB_08048e54\n\
LAB_08048e4c:\n\
    ldr         r0,DAT_08048e60\n\
    add         r6,r2,#0x0\n\
    orr         r6,r0\n\
    add         r7,r4,#0x0\n\
LAB_08048e54:\n\
    add         r1,r7,#0x0\n\
    add         r0,r6,#0x0\n\
    add         sp,#0x4\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08048e60:\n\
    .4byte 0x3FF00000\n\
    ");
}
__attribute__((naked)) void fun_08048e64()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    mov         r9,r3\n\
    ldr         r3,[sp,#0x28]\n\
    mov         r10,r3\n\
    add         r5,r2,#0x0\n\
    add         r4,r1,#0x0\n\
    mov         r1,#0x1\n\
    bl          fun_0804870c\n\
    add         r6,r0,#0x0\n\
    mov         r0,#0x14\n\
    add         r0,r0,r6\n\
    mov         r8,r0\n\
    ldr         r2,DAT_08048ecc\n\
    add         r1,r4,#0x0\n\
    and         r2,r1\n\
    str         r2,[sp,#0x4]\n\
    ldr         r0,DAT_08048ed0\n\
    and         r4,r0\n\
    lsr         r7,r4,#0x14\n\
    cmp         r7,#0x0\n\
    beq         LAB_08048ea2\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0xd\n\
    orr         r0,r2\n\
    str         r0,[sp,#0x4]\n\
LAB_08048ea2:\n\
    str         r5,[sp,#0x0]\n\
    cmp         r5,#0x0\n\
    beq         LAB_08048eec\n\
    mov         r0,sp\n\
    bl          fun_080488f0\n\
    add         r2,r0,#0x0\n\
    cmp         r2,#0x0\n\
    beq         LAB_08048ed4\n\
    mov         r0,#0x20\n\
    sub         r0,r0,r2\n\
    ldr         r1,[sp,#0x4]\n\
    lsl         r1,r0\n\
    ldr         r0,[sp,#0x0]\n\
    orr         r0,r1\n\
    str         r0,[r6,#0x14]\n\
    ldr         r0,[sp,#0x4]\n\
    lsr         r0,r2\n\
    str         r0,[sp,#0x4]\n\
    b           LAB_08048ed8\n\
\n\
.space 2\n\
\n\
DAT_08048ecc:\n\
    .4byte 0x000FFFFF\n\
DAT_08048ed0:\n\
    .4byte 0x7FFFFFFF\n\
LAB_08048ed4:\n\
    ldr         r0,[sp,#0x0]\n\
    str         r0,[r6,#0x14]\n\
LAB_08048ed8:\n\
    ldr         r0,[sp,#0x4]\n\
    mov         r1,r8\n\
    str         r0,[r1,#0x4]\n\
    mov         r1,#0x1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08048ee6\n\
    mov         r1,#0x2\n\
LAB_08048ee6:\n\
    str         r1,[r6,#0x10]\n\
    add         r4,r1,#0x0\n\
    b           LAB_08048f00\n\
LAB_08048eec:\n\
    add         r0,sp,#0x4\n\
    bl          fun_080488f0\n\
    add         r2,r0,#0x0\n\
    ldr         r0,[sp,#0x4]\n\
    str         r0,[r6,#0x14]\n\
    mov         r0,#0x1\n\
    str         r0,[r6,#0x10]\n\
    mov         r4,#0x1\n\
    add         r2,#0x20\n\
LAB_08048f00:\n\
    cmp         r7,#0x0\n\
    beq         LAB_08048f1c\n\
    ldr         r3,DAT_08048f18\n\
    add         r0,r2,r3\n\
    add         r0,r7,r0\n\
    mov         r1,r9\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x35\n\
    sub         r0,r0,r2\n\
    mov         r3,r10\n\
    str         r0,[r3,#0x0]\n\
    b           LAB_08048f38\n\
DAT_08048f18:\n\
    .4byte 0xFFFFFBCD\n\
LAB_08048f1c:\n\
    ldr         r1,DAT_08048f48\n\
    add         r0,r2,r1\n\
    mov         r3,r9\n\
    str         r0,[r3,#0x0]\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r8\n\
    sub         r0,#0x4\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08048898\n\
    lsl         r1,r4,#0x5\n\
    sub         r1,r1,r0\n\
    mov         r0,r10\n\
    str         r1,[r0,#0x0]\n\
LAB_08048f38:\n\
    add         r0,r6,#0x0\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08048f48:\n\
    .4byte 0xFFFFFBCE\n\
    ");
}
__attribute__((naked)) void fun_08048f4c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x10\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    mov         r1,sp\n\
    bl          fun_08048da8\n\
    str         r0,[sp,#0x8]\n\
    str         r1,[sp,#0xc]\n\
    add         r1,sp,#0x4\n\
    add         r0,r5,#0x0\n\
    bl          fun_08048da8\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
    ldr         r2,[sp,#0x0]\n\
    ldr         r0,[sp,#0x4]\n\
    sub         r2,r2,r0\n\
    ldr         r0,[r4,#0x10]\n\
    ldr         r1,[r5,#0x10]\n\
    sub         r0,r0,r1\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r2,r0\n\
    cmp         r0,#0x0\n\
    ble         LAB_08048f88\n\
    lsl         r0,r0,#0x14\n\
    ldr         r1,[sp,#0x8]\n\
    add         r0,r1,r0\n\
    str         r0,[sp,#0x8]\n\
    b           LAB_08048f8c\n\
LAB_08048f88:\n\
    lsl         r0,r0,#0x14\n\
    sub         r6,r6,r0\n\
LAB_08048f8c:\n\
    ldr         r0,[sp,#0x8]\n\
    ldr         r1,[sp,#0xc]\n\
    add         r3,r7,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_08043f74\n\
    add         sp,#0x10\n\
    pop         {r4,r5,r6,r7,pc}\n\
    ");
}
__attribute__((naked)) void fun_08048f9c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r1,DAT_08048fb8\n\
    ldr         r0,DAT_08048fb4\n\
    cmp         r4,#0x17\n\
    bgt         LAB_08048fc0\n\
    ldr         r0,DAT_08048fbc\n\
    lsl         r1,r4,#0x3\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    ldr         r1,[r1,#0x4]\n\
    b           LAB_08048fd2\n\
DAT_08048fb4:\n\
    .4byte 0x3FF00000\n\
DAT_08048fb8:\n\
    .4byte 0x00000000\n\
DAT_08048fbc:\n\
    .4byte 0x086CCDA0\n\
LAB_08048fc0:\n\
    cmp         r4,#0x0\n\
    ble         LAB_08048fd2\n\
LAB_08048fc4:\n\
    ldr         r3,DAT_08048fd8\n\
    ldr         r2,DAT_08048fd4\n\
    bl          fun_08043ccc\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_08048fc4\n\
LAB_08048fd2:\n\
    pop         {r4,pc}\n\
DAT_08048fd4:\n\
    .4byte 0x40240000\n\
DAT_08048fd8:\n\
    .4byte 0x00000000\n\
    ");
}
__attribute__((naked)) void fun_08048fdc()
{
    asm("\n\
    ldr         r3,DAT_08048ff8\n\
    and         r3,r0\n\
.syntax unified\n\
    rsbs        r2,r1,#0\n\
.syntax divided\n\
    orr         r2,r1\n\
    lsr         r2,r2,#0x1f\n\
    orr         r3,r2\n\
    ldr         r0,DAT_08048ffc\n\
    sub         r3,r0,r3\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
    orr         r3,r0\n\
    lsr         r3,r3,#0x1f\n\
    mov         r0,#0x1\n\
    sub         r0,r0,r3\n\
    bx          lr\n\
DAT_08048ff8:\n\
    .4byte 0x7FFFFFFF\n\
DAT_08048ffc:\n\
    .4byte 0x7FF00000\n\
    ");
}
__attribute__((naked)) void fun_08049000()
{
    asm("\n\
    ldr         r3,DAT_08049018\n\
    and         r3,r0\n\
.syntax unified\n\
    rsbs        r2,r1,#0\n\
.syntax divided\n\
    orr         r2,r1\n\
    lsr         r2,r2,#0x1f\n\
    orr         r3,r2\n\
    ldr         r0,DAT_0804901c\n\
    sub         r3,r0,r3\n\
    lsr         r3,r3,#0x1f\n\
    add         r0,r3,#0x0\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08049018:\n\
    .4byte 0x7FFFFFFF\n\
DAT_0804901c:\n\
    .4byte 0x7FF00000\n\
    ");
}
__attribute__((naked)) void fun_08049020()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r0,r1,#0x0\n\
    ldr         r4,DAT_08049048\n\
    mov         r1,#0x0\n\
    str         r1,[r4,#0x0]\n\
    bl          fun_080494d0\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bne         LAB_08049042\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08049042\n\
    str         r0,[r5,#0x0]\n\
LAB_08049042:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
DAT_08049048:\n\
    .4byte 0x0202704C\n\
    ");
}
__attribute__((naked)) void fun_0804904c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r3,r2,#0x0\n\
    ldr         r0,[r5,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r5,r2]\n\
    add         r2,r4,#0x0\n\
    bl          fun_080496b8\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    blt         LAB_0804906e\n\
    ldr         r0,[r5,#0x50]\n\
    add         r0,r0,r1\n\
    str         r0,[r5,#0x50]\n\
    b           LAB_08049076\n\
LAB_0804906e:\n\
    ldr         r0,DAT_0804907c\n\
    ldrh        r2,[r5,#0xc]\n\
    and         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
LAB_08049076:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
DAT_0804907c:\n\
    .4byte 0xFFFFEFFF\n\
    ");
}
__attribute__((naked)) void fun_08049080()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080490a2\n\
    ldr         r0,[r4,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r4,r2]\n\
    mov         r2,#0x0\n\
    mov         r3,#0x2\n\
    bl          fun_08049688\n\
LAB_080490a2:\n\
    ldr         r0,DAT_080490bc\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
    ldr         r0,[r4,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r4,r2]\n\
    add         r2,r5,#0x0\n\
    add         r3,r6,#0x0\n\
    bl          fun_08049574\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
DAT_080490bc:\n\
    .4byte 0xFFFFEFFF\n\
    ");
}
__attribute__((naked)) void fun_080490c0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r3,r2,#0x0\n\
    ldr         r0,[r5,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r5,r2]\n\
    add         r2,r4,#0x0\n\
    bl          fun_08049688\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bne         LAB_080490ec\n\
    ldr         r0,DAT_080490e8\n\
    ldrh        r2,[r5,#0xc]\n\
    and         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
    b           LAB_080490fa\n\
DAT_080490e8:\n\
    .4byte 0xFFFFEFFF\n\
LAB_080490ec:\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x5\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r5,#0xc]\n\
    orr         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
    str         r1,[r5,#0x50]\n\
LAB_080490fa:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    push        {lr}\n\
    ldr         r2,[r0,#0x54]\n\
    mov         r3,#0xe\n\
    ldrsh       r1,[r0,r3]\n\
    add         r0,r2,#0x0\n\
    bl          fun_080495fc\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08049110()
{
    asm("\n\
    add         r3,r0,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r2,DAT_08049118\n\
    b           LAB_08049124\n\
DAT_08049118:\n\
    .4byte 0x020005F0\n\
LAB_0804911c:\n\
    add         r2,#0x8\n\
    add         r1,#0x1\n\
    cmp         r1,#0x13\n\
    bgt         LAB_0804912a\n\
LAB_08049124:\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r0,r3\n\
    bne         LAB_0804911c\n\
LAB_0804912a:\n\
    add         r0,r1,#0x0\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049130()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    ldr         r0,DAT_08049144\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,[r1,#0x4]\n\
    mov         r3,#0xe\n\
    ldrsh       r0,[r0,r3]\n\
    cmp         r2,r0\n\
    bne         LAB_0804914c\n\
    ldr         r0,DAT_08049148\n\
    b           LAB_08049172\n\
DAT_08049144:\n\
    .4byte 0x087D6554\n\
DAT_08049148:\n\
    .4byte 0x020005E4\n\
LAB_0804914c:\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r3,#0xe\n\
    ldrsh       r0,[r0,r3]\n\
    cmp         r2,r0\n\
    bne         LAB_08049160\n\
    ldr         r0,DAT_0804915c\n\
    b           LAB_08049172\n\
\n\
.space 2\n\
\n\
DAT_0804915c:\n\
    .4byte 0x020005E8\n\
LAB_08049160:\n\
    ldr         r0,[r1,#0xc]\n\
    mov         r1,#0xe\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r2,r0\n\
    beq         LAB_08049170\n\
    add         r0,r2,#0x0\n\
    sub         r0,#0x20\n\
    b           LAB_08049174\n\
LAB_08049170:\n\
    ldr         r0,DAT_08049178\n\
LAB_08049172:\n\
    ldr         r0,[r0,#0x0]\n\
LAB_08049174:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08049178:\n\
    .4byte 0x020005EC\n\
    ");
}
__attribute__((naked)) void fun_0804917c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    ldr         r4,DAT_080491d8\n\
    str         r4,[sp,#0x0]\n\
    mov         r3,#0x3\n\
    str         r3,[sp,#0x8]\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x4]\n\
    mov         r5,#0x1\n\
    add         r0,r5,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    ldr         r5,DAT_080491dc\n\
    str         r2,[r5,#0x0]\n\
    str         r4,[sp,#0x0]\n\
    str         r3,[sp,#0x8]\n\
    mov         r0,#0x4\n\
    str         r0,[sp,#0x4]\n\
    ldr         r3,DAT_080491e0\n\
    mov         r4,#0x1\n\
    add         r0,r4,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    ldr         r0,DAT_080491e4\n\
    str         r2,[r0,#0x0]\n\
    str         r2,[r3,#0x0]\n\
    ldr         r2,DAT_080491e8\n\
    add         r1,r2,#0x0\n\
    sub         r4,#0x2\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x98\n\
LAB_080491be:\n\
    str         r4,[r0,#0x0]\n\
    sub         r0,#0x8\n\
    cmp         r0,r1\n\
    bge         LAB_080491be\n\
    mov         r0,#0x0\n\
    ldr         r1,[r5,#0x0]\n\
    str         r1,[r2,#0x0]\n\
    str         r0,[r2,#0x4]\n\
    ldr         r1,[r3,#0x0]\n\
    str         r1,[r2,#0x8]\n\
    str         r0,[r2,#0xc]\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
DAT_080491d8:\n\
    .4byte 0x086CCEB8\n\
DAT_080491dc:\n\
    .4byte 0x020005E4\n\
DAT_080491e0:\n\
    .4byte 0x020005E8\n\
DAT_080491e4:\n\
    .4byte 0x020005EC\n\
DAT_080491e8:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_080491ec()
{
    asm("\n\
    push        {r4,lr}\n\
    mov         r3,#0x13\n\
    mov         r4,#0x0\n\
    add         r0,r3,#0x0\n\
    add         r1,r4,#0x0\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049200()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    bl          fun_08049628\n\
    add         r4,r0,#0x0\n\
    bl          fun_080491ec\n\
    str         r0,[r4,#0x0]\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,pc}\n\
    ");
}
__attribute__((naked)) void fun_08049214()
{
    asm("\n\
    push        {lr}\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    beq         LAB_08049224\n\
    add         r0,r1,#0x0\n\
    b           LAB_0804922a\n\
LAB_08049224:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08049200\n\
LAB_0804922a:\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_0804922c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r4,[sp,#0x4]\n\
    str         r5,[sp,#0x8]\n\
    mov         r3,#0x6\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049250()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r7,r2,#0x0\n\
    bl          fun_08049130\n\
    bl          fun_08049110\n\
    add         r6,r0,#0x0\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r2,r7,#0x0\n\
    bl          fun_0804922c\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804927a\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    bl          fun_08049200\n\
    b           LAB_08049290\n\
LAB_0804927a:\n\
    sub         r2,r7,r0\n\
    cmp         r6,#0x14\n\
    beq         LAB_0804928e\n\
    ldr         r0,DAT_08049294\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
LAB_0804928e:\n\
    add         r0,r2,#0x0\n\
LAB_08049290:\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08049294:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_08049298()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0x8\n\
    mov         r8,r0\n\
    add         r5,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    bl          fun_08049130\n\
    add         r7,r0,#0x0\n\
    bl          fun_08049110\n\
    add         r6,r0,#0x0\n\
    cmp         r4,#0x1\n\
    bne         LAB_080492ce\n\
    cmp         r6,#0x14\n\
    bne         LAB_080492c0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08049310\n\
LAB_080492c0:\n\
    ldr         r0,DAT_08049318\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r5,r5,r0\n\
    mov         r4,#0x0\n\
LAB_080492ce:\n\
    cmp         r4,#0x2\n\
    bne         LAB_080492e0\n\
    str         r7,[sp,#0x0]\n\
    mov         r3,#0xc\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r5,r5,r2\n\
LAB_080492e0:\n\
    mov         r0,r8\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r5,[sp,#0x4]\n\
    mov         r3,#0xa\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    cmp         r6,#0x14\n\
    beq         LAB_08049306\n\
    cmp         r2,#0x0\n\
    bne         LAB_08049306\n\
    ldr         r0,DAT_08049318\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    str         r5,[r1,#0x0]\n\
LAB_08049306:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,#0x0\n\
    bne         LAB_08049310\n\
    add         r0,r5,#0x0\n\
LAB_08049310:\n\
    add         sp,#0x8\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08049318:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_0804931c()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_08049298\n\
    bl          fun_08049214\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08049328()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r4,[sp,#0x4]\n\
    str         r5,[sp,#0x8]\n\
    mov         r3,#0x5\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0804934c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    bl          fun_08049130\n\
    bl          fun_08049110\n\
    add         r7,r0,#0x0\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_08049328\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,r1\n\
    beq         LAB_08049374\n\
    cmp         r0,r6\n\
    bne         LAB_0804937c\n\
LAB_08049374:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08049200\n\
    b           LAB_08049392\n\
LAB_0804937c:\n\
    sub         r2,r6,r0\n\
    cmp         r7,#0x14\n\
    beq         LAB_08049390\n\
    ldr         r0,DAT_08049394\n\
    lsl         r1,r7,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
LAB_08049390:\n\
    add         r0,r2,#0x0\n\
LAB_08049392:\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08049394:\n\
    .4byte 0x020005F0\n\
    ");
}
