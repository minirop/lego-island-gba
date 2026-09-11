__attribute__((naked)) void fun_0800cfcc()
{
    asm("\n\
    push        {lr}\n\
    ldr         r1,DAT_0800cffc\n\
    ldr         r2,DAT_0800d000\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r2,DAT_0800d004\n\
    ldr         r0,DAT_0800d008\n\
    add         r1,r2,r0\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    strb        r0,[r2,#0x18]\n\
    ldr         r0,DAT_0800d00c\n\
    ldr         r1,DAT_0800d010\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800cffc:\n\
    .4byte 0x0200DC90\n\
DAT_0800d000:\n\
    .4byte 0x00000333\n\
DAT_0800d004:\n\
    .4byte 0x020006A0\n\
DAT_0800d008:\n\
    .4byte 0x00000C78\n\
DAT_0800d00c:\n\
    .4byte 0x000003E7\n\
DAT_0800d010:\n\
    .4byte 0x00000DF5\n\
    ");
}
__attribute__((naked)) void fun_0800d014()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r5,r2,#0x0\n\
    add         r6,r3,#0x0\n\
    ldr         r4,DAT_0800d080\n\
    ldr         r7,DAT_0800d084\n\
    add         r0,r5,#0x0\n\
    add         r1,r6,#0x0\n\
    add         r2,r4,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800eaa4\n\
    ldrh        r5,[r5,#0x0]\n\
    cmp         r5,r4\n\
    bne         LAB_0800d078\n\
    ldrh        r6,[r6,#0x0]\n\
    cmp         r6,r7\n\
    bne         LAB_0800d078\n\
    ldr         r4,DAT_0800d088\n\
    mov         r0,#0x0\n\
    strh        r0,[r4,#0x10]\n\
    mov         r0,#0x3\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d078\n\
    mov         r0,#0x67\n\
    mov         r1,#0x1\n\
    bl          fun_0800cab4\n\
    mov         r0,#0x3\n\
    bl          fun_080018e4\n\
    mov         r0,#0x4\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    mov         r0,#0x5\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    ldr         r0,DAT_0800d08c\n\
    add         r1,r4,r0\n\
    mov         r0,#0x2\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xce\n\
    lsl         r0,r0,#0x2\n\
    add         r1,r4,r0\n\
    mov         r0,#0x4\n\
    strb        r0,[r1,#0x0]\n\
LAB_0800d078:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d080:\n\
    .4byte 0x000009F8\n\
DAT_0800d084:\n\
    .4byte 0x00000837\n\
DAT_0800d088:\n\
    .4byte 0x020006A0\n\
DAT_0800d08c:\n\
    .4byte 0x000008E8\n\
    ");
}
__attribute__((naked)) void fun_0800d090()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3b\n\
    beq         LAB_0800d0ba\n\
    mov         r0,#0xfe\n\
    bl          fun_080034c0\n\
    add         r1,r0,#0x0\n\
    ldrh        r0,[r1,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d0ba\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_080034d4\n\
LAB_0800d0ba:\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    beq         LAB_0800d0ec\n\
    mov         r0,#0x10\n\
    bl          fun_080034c0\n\
    add         r1,r0,#0x0\n\
    ldrh        r0,[r1,#0x6]\n\
    cmp         r0,#0x7\n\
    bne         LAB_0800d0ec\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r1,#0x4]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d0ec\n\
    mov         r0,#0x10\n\
    mov         r1,#0x6\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
LAB_0800d0ec:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d11c\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x64\n\
    beq         LAB_0800d118\n\
    mov         r0,#0x64\n\
    bl          fun_080034c0\n\
    add         r1,r0,#0x0\n\
    ldrh        r0,[r1,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d118\n\
    ldrh        r1,[r1,#0x6]\n\
    cmp         r1,#0x1\n\
    bne         LAB_0800d118\n\
    mov         r0,#0x64\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
LAB_0800d118:\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800d11c:\n\
    .4byte 0x00000DE2\n\
    ");
}
__attribute__((naked)) void fun_0800d120()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0x20\n\
    ldr         r1,DAT_0800d194\n\
    mov         r0,sp\n\
    mov         r2,#0xe\n\
    bl          fun_08044f7c\n\
    add         r4,sp,#0x10\n\
    ldr         r1,DAT_0800d198\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0xe\n\
    bl          fun_08044f7c\n\
    mov         r7,#0x0\n\
    mov         r8,r4\n\
LAB_0800d142:\n\
    lsl         r4,r7,#0x1\n\
    mov         r0,sp\n\
    add         r6,r0,r4\n\
    ldrh        r0,[r6,#0x0]\n\
    bl          fun_080034c0\n\
    add         r5,r0,#0x0\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    add         r4,r8\n\
    ldrh        r4,[r4,#0x0]\n\
    cmp         r0,r4\n\
    beq         LAB_0800d17c\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d17c\n\
    ldrh        r5,[r5,#0x6]\n\
    cmp         r5,#0x1\n\
    bne         LAB_0800d17c\n\
    ldrh        r0,[r6,#0x0]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
LAB_0800d17c:\n\
    add         r0,r7,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r7,r0,#0x18\n\
    cmp         r7,#0x6\n\
    bls         LAB_0800d142\n\
    add         sp,#0x20\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d194:\n\
    .4byte 0x084498EA\n\
DAT_0800d198:\n\
    .4byte 0x084498F8\n\
    ");
}
__attribute__((naked)) void fun_0800d19c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6}\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800d25c\n\
    add         r0,r0,r5\n\
    mov         r1,#0x0\n\
    mov         r9,r1\n\
    mov         r1,r9\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d260\n\
    mov         r8,r1\n\
    ldr         r6,DAT_0800d264\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r8\n\
    ldrb        r0,[r0,#0x18]\n\
    ldr         r1,DAT_0800d268\n\
    add         r4,r4,r1\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r4,r5\n\
    ldrh        r4,[r4,#0x0]\n\
    lsl         r1,r4,#0x1\n\
    add         r1,r1,r6\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r8\n\
    ldr         r2,DAT_0800d26c\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d270\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    ldr         r1,DAT_0800d274\n\
    add         r4,r4,r1\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r0,DAT_0800d278\n\
    mov         r1,r9\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r6,DAT_0800d27c\n\
    ldr         r4,DAT_0800d280\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r6,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d284\n\
    add         r0,r0,r1\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800d288\n\
    mov         r1,r9\n\
    str         r1,[r0,#0x0]\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d25c:\n\
    .4byte 0x00000DD2\n\
DAT_0800d260:\n\
    .4byte 0x020006A0\n\
DAT_0800d264:\n\
    .4byte 0x0877CB78\n\
DAT_0800d268:\n\
    .4byte 0x00000DCC\n\
DAT_0800d26c:\n\
    .4byte 0x0877CB80\n\
DAT_0800d270:\n\
    .4byte 0x0877CB90\n\
DAT_0800d274:\n\
    .4byte 0x00000DD4\n\
DAT_0800d278:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d27c:\n\
    .4byte 0x0200DC90\n\
DAT_0800d280:\n\
    .4byte 0x0877CB88\n\
DAT_0800d284:\n\
    .4byte 0x00000DD6\n\
DAT_0800d288:\n\
    .4byte 0x0200D40C\n\
    ");
}
__attribute__((naked)) void fun_0800d28c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r0,DAT_0800d2e8\n\
    mov         r4,#0x0\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_0800d2ec\n\
    ldr         r2,DAT_0800d2f0\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r5,DAT_0800d2f4\n\
    ldr         r0,DAT_0800d2f8\n\
    strh        r0,[r5,#0x4]\n\
    ldr         r0,DAT_0800d2fc\n\
    strh        r0,[r5,#0x6]\n\
    bl          fun_0800d4d0\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800d300\n\
    ldr         r1,DAT_0800d304\n\
    add         r4,r4,r1\n\
    ldrh        r4,[r4,#0x0]\n\
    lsl         r1,r4,#0x1\n\
    add         r1,r1,r2\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r1,r5\n\
    ldr         r2,DAT_0800d308\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x18]\n\
    ldrh        r0,[r5,#0x4]\n\
    ldrh        r1,[r5,#0x6]\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d2e8:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d2ec:\n\
    .4byte 0x0200DC90\n\
DAT_0800d2f0:\n\
    .4byte 0x00000216\n\
DAT_0800d2f4:\n\
    .4byte 0x020006A0\n\
DAT_0800d2f8:\n\
    .4byte 0x00000555\n\
DAT_0800d2fc:\n\
    .4byte 0x00000E3D\n\
DAT_0800d300:\n\
    .4byte 0x0877CB78\n\
DAT_0800d304:\n\
    .4byte 0x00000DD2\n\
DAT_0800d308:\n\
    .4byte 0x00000DCC\n\
    ");
}
__attribute__((naked)) void fun_0800d30c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0xc\n\
    ldr         r4,DAT_0800d3c4\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d3c8\n\
    mov         r8,r1\n\
    add         r0,r8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsr         r2,r0,#0x6\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080455fc\n\
    ldr         r3,DAT_0800d3cc\n\
    mov         r0,sp\n\
    mov         r1,#0x5\n\
    mov         r2,#0xf\n\
    bl          fun_0803c138\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800d3d0\n\
    ldr         r6,DAT_0800d3d4\n\
    ldr         r5,DAT_0800d3d8\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r4\n\
    ldrh        r1,[r4,#0x4]\n\
    ldrh        r0,[r0,#0x4]\n\
    sub         r0,r1,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r7,r0,#0x10\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r4\n\
    ldrh        r4,[r4,#0x6]\n\
    ldrh        r0,[r0,#0x6]\n\
    sub         r0,r4,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldr         r4,DAT_0800d3dc\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800d38e\n\
    ldr         r0,DAT_0800d3e0\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,#0x6c\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,DAT_0800d3e4\n\
    strh        r1,[r0,#0x4]\n\
LAB_0800d38e:\n\
    ldr         r4,[r4,#0x0]\n\
    lsl         r0,r7,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsl         r1,r5,#0x10\n\
    asr         r1,r1,#0x10\n\
    bl          fun_0803d064\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x18\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800476c\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d3e8\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_0800d3ec\n\
\n\
.space 2\n\
\n\
DAT_0800d3c4:\n\
    .4byte 0x08449908\n\
DAT_0800d3c8:\n\
    .4byte 0x00000DD4\n\
DAT_0800d3cc:\n\
    .4byte 0x0865FB7C\n\
DAT_0800d3d0:\n\
    .4byte 0x020006A0\n\
DAT_0800d3d4:\n\
    .4byte 0x0877CB78\n\
DAT_0800d3d8:\n\
    .4byte 0x00000DD2\n\
DAT_0800d3dc:\n\
    .4byte 0x0200D40C\n\
DAT_0800d3e0:\n\
    .4byte 0x084495A8\n\
DAT_0800d3e4:\n\
    .4byte 0x0000FFF8\n\
LAB_0800d3e8:\n\
    bl          fun_0800d28c\n\
LAB_0800d3ec:\n\
    add         sp,#0xc\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_0800d3f8()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6}\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800d4a8\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    mov         r2,#0x0\n\
    mov         r9,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d4ac\n\
    mov         r8,r1\n\
    ldr         r6,DAT_0800d4b0\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r8\n\
    ldrb        r0,[r0,#0x18]\n\
    ldr         r2,DAT_0800d4b4\n\
    add         r4,r4,r2\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    add         r4,r4,r5\n\
    ldrh        r4,[r4,#0x0]\n\
    lsl         r1,r4,#0x1\n\
    add         r1,r1,r6\n\
    ldrh        r1,[r1,#0x0]\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r8\n\
    ldr         r2,DAT_0800d4b8\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d4bc\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    ldr         r1,DAT_0800d4c0\n\
    add         r4,r4,r1\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r0,DAT_0800d4c4\n\
    mov         r2,r9\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r6,DAT_0800d4c8\n\
    ldr         r4,DAT_0800d4cc\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r6,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d4a8:\n\
    .4byte 0x00000DD2\n\
DAT_0800d4ac:\n\
    .4byte 0x020006A0\n\
DAT_0800d4b0:\n\
    .4byte 0x0877CB78\n\
DAT_0800d4b4:\n\
    .4byte 0x00000DCC\n\
DAT_0800d4b8:\n\
    .4byte 0x0877CB80\n\
DAT_0800d4bc:\n\
    .4byte 0x0877CB90\n\
DAT_0800d4c0:\n\
    .4byte 0x00000DD4\n\
DAT_0800d4c4:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d4c8:\n\
    .4byte 0x0200DC90\n\
DAT_0800d4cc:\n\
    .4byte 0x0877CB88\n\
    ");
}
__attribute__((naked)) void fun_0800d4d0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d4f0\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,DAT_0800d4f4\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08003b00\n\
    str         r5,[r4,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d4f0:\n\
    .4byte 0x00000DD6\n\
DAT_0800d4f4:\n\
    .4byte 0x0200D40C\n\
    ");
}
__attribute__((naked)) void fun_0800d4f8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d610\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r4,#0x0\n\
    mov         r1,#0xc8\n\
    lsl         r1,r1,#0x5\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800d614\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_0800d618\n\
    ldr         r2,DAT_0800d61c\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_0800d620\n\
    add         r0,r0,r3\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800d624\n\
    str         r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d628\n\
    add         r0,r0,r1\n\
    strb        r5,[r0,#0x0]\n\
    ldr         r4,DAT_0800d62c\n\
    ldr         r2,DAT_0800d630\n\
    add         r1,r4,r2\n\
    mov         r0,#0x98\n\
    lsl         r0,r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r3,DAT_0800d634\n\
    add         r1,r4,r3\n\
    ldr         r0,DAT_0800d638\n\
    strh        r0,[r1,#0x0]\n\
    mov         r1,#0x92\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r4,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r1,[r0,#0x26]\n\
    add         r2,#0xc\n\
    add         r0,r4,r2\n\
    strh        r1,[r0,#0x0]\n\
    add         r3,#0x12\n\
    add         r1,r4,r3\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x0]\n\
    ldr         r0,DAT_0800d63c\n\
    add         r1,r4,r0\n\
    mov         r0,#0x2\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0x22\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r5,r0,#0x18\n\
    mov         r6,#0x0\n\
    add         r7,r4,#0x0\n\
    ldr         r4,DAT_0800d640\n\
    ldr         r1,DAT_0800d644\n\
    mov         r8,r1\n\
    mov         r2,#0x2\n\
    add         r2,r8\n\
    mov         r9,r2\n\
LAB_0800d58c:\n\
    ldrh        r1,[r4,#0x0]\n\
    add         r1,#0x35\n\
    add         r1,r6,r1\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r1,r7\n\
    lsl         r2,r5,#0x1\n\
    add         r2,r2,r5\n\
    lsl         r2,r2,#0x2\n\
    mov         r3,r8\n\
    add         r0,r2,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x4]\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r0,#0x35\n\
    add         r0,r6,r0\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r7\n\
    add         r2,r9\n\
    ldrh        r1,[r2,#0x0]\n\
    strh        r1,[r0,#0x6]\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r0,#0x35\n\
    add         r0,r6,r0\n\
    lsl         r0,r0,#0x5\n\
    add         r1,r7,#0x0\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    mov         r1,#0x2\n\
    str         r1,[r0,#0x0]\n\
    mov         r0,#0xa\n\
    bl          fun_08002c04\n\
    ldrh        r1,[r4,#0x0]\n\
    add         r1,#0x35\n\
    add         r1,r6,r1\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r1,r7\n\
    strh        r0,[r1,#0x10]\n\
    mov         r0,#0x3\n\
    bl          fun_08002c04\n\
    add         r0,#0x1\n\
    add         r0,r5,r0\n\
    mov         r1,#0x22\n\
    bl          fun_08043718\n\
    lsl         r0,r0,#0x18\n\
    lsr         r5,r0,#0x18\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r6,r0,#0x18\n\
    cmp         r6,#0x9\n\
    bls         LAB_0800d58c\n\
    bl          fun_080020a4\n\
    mov         r1,#0xdd\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_0800d648\n\
    strh        r1,[r0,#0x0]\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800d610:\n\
    .4byte 0x00000DC8\n\
DAT_0800d614:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d618:\n\
    .4byte 0x0200DC90\n\
DAT_0800d61c:\n\
    .4byte 0x00000222\n\
DAT_0800d620:\n\
    .4byte 0x00000DCA\n\
DAT_0800d624:\n\
    .4byte 0x0200D414\n\
DAT_0800d628:\n\
    .4byte 0x00000DCE\n\
DAT_0800d62c:\n\
    .4byte 0x020006A0\n\
DAT_0800d630:\n\
    .4byte 0x00000924\n\
DAT_0800d634:\n\
    .4byte 0x00000926\n\
DAT_0800d638:\n\
    .4byte 0x00001030\n\
DAT_0800d63c:\n\
    .4byte 0x00000928\n\
DAT_0800d640:\n\
    .4byte 0x02000690\n\
DAT_0800d644:\n\
    .4byte 0x0877CC10\n\
DAT_0800d648:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_0800d64c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800d6dc\n\
    add         r0,r0,r5\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r6,DAT_0800d6e0\n\
    ldr         r0,DAT_0800d6e4\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0x35\n\
    add         r4,r4,r0\n\
    lsl         r4,r4,#0x5\n\
    add         r0,r6,#0x0\n\
    add         r0,#0x8\n\
    add         r4,r4,r0\n\
    mov         r7,#0x1\n\
    str         r7,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d6e8\n\
    add         r0,r0,r1\n\
    ldrh        r2,[r0,#0x0]\n\
    mov         r3,#0xc8\n\
    lsl         r3,r3,#0x3\n\
    add         r1,r2,r3\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    mov         r1,#0xdd\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_0800d6ec\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0xa\n\
    bne         LAB_0800d6d4\n\
    bl          fun_0800d92c\n\
    mov         r0,#0xba\n\
    lsl         r0,r0,#0x1\n\
    strh        r0,[r6,#0x4]\n\
    ldr         r0,DAT_0800d6f0\n\
    strh        r0,[r6,#0x6]\n\
    ldr         r0,DAT_0800d6f4\n\
    strh        r7,[r0,#0x0]\n\
    ldr         r1,DAT_0800d6f8\n\
    ldr         r2,DAT_0800d6fc\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    mov         r0,#0x1\n\
    bl          fun_080017b8\n\
    mov         r3,#0x87\n\
    lsl         r3,r3,#0x3\n\
    add         r1,r6,r3\n\
    mov         r0,#0x2\n\
    strb        r0,[r1,#0x0]\n\
LAB_0800d6d4:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d6dc:\n\
    .4byte 0x00000DCE\n\
DAT_0800d6e0:\n\
    .4byte 0x020006A0\n\
DAT_0800d6e4:\n\
    .4byte 0x02000690\n\
DAT_0800d6e8:\n\
    .4byte 0x00000DC8\n\
DAT_0800d6ec:\n\
    .4byte 0x0000FFFF\n\
DAT_0800d6f0:\n\
    .4byte 0x0000105F\n\
DAT_0800d6f4:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d6f8:\n\
    .4byte 0x0200DC90\n\
DAT_0800d6fc:\n\
    .4byte 0x0000022F\n\
    ");
}
__attribute__((naked)) void fun_0800d700()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x18\n\
    bl          fun_080020a4\n\
    mov         r1,#0xdd\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r7,[r0,#0x0]\n\
    ldr         r6,DAT_0800d760\n\
    ldrh        r2,[r6,#0x4]\n\
    str         r2,[sp,#0x10]\n\
    ldrh        r5,[r6,#0x6]\n\
    str         r5,[sp,#0x14]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d764\n\
    mov         r8,r1\n\
    add         r0,r8\n\
    ldrh        r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800d778\n\
    bl          fun_0800d92c\n\
    mov         r0,#0xba\n\
    lsl         r0,r0,#0x1\n\
    strh        r0,[r6,#0x4]\n\
    ldr         r1,DAT_0800d768\n\
    strh        r1,[r6,#0x6]\n\
    ldrh        r1,[r6,#0x6]\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    ldr         r0,DAT_0800d76c\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_0800d770\n\
    ldr         r2,DAT_0800d774\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    b           LAB_0800d8f0\n\
\n\
.space 2\n\
\n\
DAT_0800d760:\n\
    .4byte 0x020006A0\n\
DAT_0800d764:\n\
    .4byte 0x00000DC8\n\
DAT_0800d768:\n\
    .4byte 0x0000105F\n\
DAT_0800d76c:\n\
    .4byte 0x0200DCA0\n\
DAT_0800d770:\n\
    .4byte 0x0200DC90\n\
DAT_0800d774:\n\
    .4byte 0x00000227\n\
LAB_0800d778:\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800d900\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800d904\n\
    mov         r10,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d796\n\
    sub         r0,#0x1\n\
    mov         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800d796:\n\
    ldr         r5,DAT_0800d908\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsr         r4,r0,#0x6\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800d90c\n\
    add         r0,r0,r2\n\
    ldrb        r3,[r0,#0x0]\n\
    mov         r0,sp\n\
    add         r1,r5,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_080455fc\n\
    ldr         r3,DAT_0800d910\n\
    mov         r0,sp\n\
    mov         r1,#0x5\n\
    mov         r2,#0xf\n\
    bl          fun_0803c138\n\
    mov         r5,#0x0\n\
    str         r5,[sp,#0xc]\n\
    ldr         r1,DAT_0800d914\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x35\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x3f\n\
    cmp         r4,r0\n\
    bge         LAB_0800d880\n\
    mov         r9,r6\n\
    mov         r8,r9\n\
LAB_0800d7dc:\n\
    lsl         r0,r4,#0x5\n\
    mov         r1,r8\n\
    add         r1,#0x8\n\
    add         r1,r0,r1\n\
    ldr         r1,[r1,#0x0]\n\
    add         r3,r0,#0x0\n\
    cmp         r1,#0x2\n\
    bne         LAB_0800d870\n\
    mov         r0,r8\n\
    add         r1,r3,r0\n\
    ldr         r2,[sp,#0x10]\n\
    ldrh        r5,[r1,#0x4]\n\
    sub         r0,r2,r5\n\
    lsl         r0,r0,#0x10\n\
    ldr         r2,[sp,#0x14]\n\
    ldrh        r1,[r1,#0x6]\n\
    sub         r1,r2,r1\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    mul         r2,r0\n\
    lsr         r6,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r1,#0x0\n\
    mul         r0,r1\n\
    add         r2,r2,r0\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d81c\n\
    cmp         r0,r2\n\
    bls         LAB_0800d82e\n\
LAB_0800d81c:\n\
    str         r2,[sp,#0xc]\n\
    cmp         r7,r4\n\
    beq         LAB_0800d82c\n\
    mov         r1,#0xfa\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r1,#0x0\n\
    mov         r2,r10\n\
    strh        r0,[r2,#0x0]\n\
LAB_0800d82c:\n\
    add         r7,r4,#0x0\n\
LAB_0800d82e:\n\
    mov         r0,r9\n\
    add         r0,#0xc\n\
    add         r0,r3,r0\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800d870\n\
    lsl         r0,r5,#0x10\n\
    mov         r5,#0x98\n\
    lsl         r5,r5,#0xd\n\
    add         r0,r0,r5\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x26\n\
    bhi         LAB_0800d870\n\
    lsl         r0,r6,#0x10\n\
    asr         r0,r0,#0x10\n\
    mov         r1,#0x14\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,r1\n\
    ble         LAB_0800d870\n\
    cmp         r0,#0x13\n\
    bgt         LAB_0800d870\n\
    ldr         r0,DAT_0800d914\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r4,r0\n\
    sub         r0,#0x35\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_0800d64c\n\
    ldr         r7,DAT_0800d918\n\
    mov         r0,#0x0\n\
    mov         r2,r10\n\
    strh        r0,[r2,#0x0]\n\
LAB_0800d870:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r0,DAT_0800d914\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0x3f\n\
    cmp         r4,r0\n\
    blt         LAB_0800d7dc\n\
LAB_0800d880:\n\
    bl          fun_080020a4\n\
    mov         r4,#0xdd\n\
    lsl         r4,r4,#0x4\n\
    add         r0,r0,r4\n\
    strh        r7,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800d91c\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r5\n\
    ldr         r2,[sp,#0x10]\n\
    ldrh        r0,[r0,#0x4]\n\
    sub         r0,r2,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r5\n\
    ldr         r2,[sp,#0x14]\n\
    ldrh        r0,[r0,#0x6]\n\
    sub         r0,r2,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldr         r4,DAT_0800d920\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800d8d6\n\
    ldr         r0,DAT_0800d924\n\
    bl          fun_08003998\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,#0x6c\n\
    strh        r1,[r0,#0x2]\n\
    ldr         r1,DAT_0800d928\n\
    strh        r1,[r0,#0x4]\n\
LAB_0800d8d6:\n\
    ldr         r4,[r4,#0x0]\n\
    lsl         r0,r6,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsl         r1,r5,#0x10\n\
    asr         r1,r1,#0x10\n\
    bl          fun_0803d064\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x18\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800476c\n\
LAB_0800d8f0:\n\
    add         sp,#0x18\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800d900:\n\
    .4byte 0x00000DC8\n\
DAT_0800d904:\n\
    .4byte 0x0200D410\n\
DAT_0800d908:\n\
    .4byte 0x0844990C\n\
DAT_0800d90c:\n\
    .4byte 0x00000DCE\n\
DAT_0800d910:\n\
    .4byte 0x0865FB7C\n\
DAT_0800d914:\n\
    .4byte 0x02000690\n\
DAT_0800d918:\n\
    .4byte 0x0000FFFF\n\
DAT_0800d91c:\n\
    .4byte 0x020006A0\n\
DAT_0800d920:\n\
    .4byte 0x0200D414\n\
DAT_0800d924:\n\
    .4byte 0x084495A8\n\
DAT_0800d928:\n\
    .4byte 0x0000FFF8\n\
    ");
}
__attribute__((naked)) void fun_0800d92c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800d96c\n\
    add         r0,r0,r1\n\
    mov         r6,#0x0\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,DAT_0800d970\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08003b00\n\
    str         r5,[r4,#0x0]\n\
    ldr         r4,DAT_0800d974\n\
    ldr         r1,[r4,#0x0]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_0800f9b8\n\
    strb        r6,[r4,#0x18]\n\
    mov         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    ldr         r1,[r4,#0x0]\n\
    ldrh        r0,[r1,#0x0]\n\
    strh        r0,[r4,#0x4]\n\
    ldrh        r0,[r1,#0x2]\n\
    strh        r0,[r4,#0x6]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800d96c:\n\
    .4byte 0x00000DCA\n\
DAT_0800d970:\n\
    .4byte 0x0200D414\n\
DAT_0800d974:\n\
    .4byte 0x02000FC0\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800d97c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    ldr         r7,DAT_0800d988\n\
    ldr         r5,DAT_0800d98c\n\
    b           LAB_0800d9a0\n\
DAT_0800d988:\n\
    .4byte 0x020006A0\n\
DAT_0800d98c:\n\
    .4byte 0x0877CB98\n\
LAB_0800d990:\n\
    mov         r1,#0x6\n\
    ldrsh       r0,[r2,r1]\n\
    add         r1,r5,#0x2\n\
    add         r1,r4,r1\n\
    ldrh        r1,[r1,#0x0]\n\
    sub         r1,#0x8\n\
    cmp         r0,r1\n\
    bne         LAB_0800d9c2\n\
LAB_0800d9a0:\n\
    mov         r0,#0x1e\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r3,r0,#0x18\n\
    ldr         r0,DAT_0800d9f0\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,r0,r6\n\
    lsl         r0,r0,#0x5\n\
    add         r2,r0,r7\n\
    mov         r0,#0x4\n\
    ldrsh       r1,[r2,r0]\n\
    lsl         r4,r3,#0x2\n\
    add         r0,r4,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r1,r0\n\
    beq         LAB_0800d990\n\
LAB_0800d9c2:\n\
    ldr         r5,DAT_0800d9f4\n\
    ldr         r4,DAT_0800d9f0\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r1,r0,r6\n\
    lsl         r1,r1,#0x5\n\
    add         r1,r1,r5\n\
    ldr         r2,DAT_0800d9f8\n\
    lsl         r3,r3,#0x2\n\
    add         r0,r3,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x4]\n\
    ldrh        r4,[r4,#0x0]\n\
    add         r0,r4,r6\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r5\n\
    add         r2,#0x2\n\
    add         r3,r3,r2\n\
    ldrh        r1,[r3,#0x0]\n\
    sub         r1,#0x8\n\
    strh        r1,[r0,#0x6]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800d9f0:\n\
    .4byte 0x02000690\n\
DAT_0800d9f4:\n\
    .4byte 0x020006A0\n\
DAT_0800d9f8:\n\
    .4byte 0x0877CB98\n\
    ");
}
__attribute__((naked)) void fun_0800d9fc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x18\n\
    mov         r10,r0\n\
    mov         r1,#0x4\n\
    ldrsh       r0,[r0,r1]\n\
    lsl         r0,r0,#0x1\n\
    ldr         r1,DAT_0800da4c\n\
    add         r2,r0,r1\n\
    mov         r3,r10\n\
    ldrh        r3,[r3,#0x2]\n\
    ldrh        r4,[r2,#0x2]\n\
    add         r0,r3,r4\n\
    mov         r3,#0x0\n\
    mov         r6,r10\n\
    strh        r0,[r6,#0x2]\n\
    mov         r1,#0x2\n\
    ldrsh       r0,[r2,r1]\n\
    cmp         r0,#0x0\n\
    ble         LAB_0800da50\n\
    mov         r4,#0x2\n\
    ldrsh       r1,[r6,r4]\n\
    mov         r6,#0x0\n\
    ldrsh       r0,[r2,r6]\n\
    lsl         r0,r0,#0x8\n\
    cmp         r1,r0\n\
    ble         LAB_0800da7e\n\
    mov         r1,r10\n\
    ldrh        r0,[r1,#0x4]\n\
    add         r0,#0x2\n\
    strh        r0,[r1,#0x4]\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,#0x14\n\
    bne         LAB_0800da7e\n\
    strh        r3,[r1,#0x4]\n\
    b           LAB_0800da7e\n\
DAT_0800da4c:\n\
    .4byte 0x08449914\n\
LAB_0800da50:\n\
    mov         r4,r10\n\
    mov         r6,#0x2\n\
    ldrsh       r1,[r4,r6]\n\
    mov         r4,#0x0\n\
    ldrsh       r0,[r2,r4]\n\
    lsl         r0,r0,#0x8\n\
    cmp         r1,r0\n\
    bge         LAB_0800da7e\n\
    mov         r6,r10\n\
    ldrh        r0,[r6,#0x4]\n\
    add         r0,#0x2\n\
    strh        r0,[r6,#0x4]\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,#0x12\n\
    bne         LAB_0800da72\n\
    strh        r3,[r6,#0x4]\n\
LAB_0800da72:\n\
    mov         r1,r10\n\
    mov         r2,#0x2\n\
    ldrsh       r0,[r1,r2]\n\
    cmp         r0,#0x0\n\
    bge         LAB_0800da7e\n\
    strh        r3,[r1,#0x2]\n\
LAB_0800da7e:\n\
    ldr         r1,DAT_0800dbe8\n\
    ldr         r0,DAT_0800dbec\n\
    add         r4,r0,#0x0\n\
    mov         r3,r10\n\
    add         r3,#0x16\n\
    str         r3,[sp,#0xc]\n\
    mov         r6,r10\n\
    add         r6,#0x2a\n\
    str         r6,[sp,#0x10]\n\
    mov         r0,r10\n\
    add         r0,#0x6\n\
    str         r0,[sp,#0x14]\n\
    ldrh        r2,[r1,#0x0]\n\
    ldrh        r3,[r4,#0x0]\n\
    cmp         r2,r3\n\
    bne         LAB_0800dadc\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r7,#0x0\n\
    ldr         r3,[sp,#0xc]\n\
    ldr         r2,[sp,#0x10]\n\
LAB_0800daa8:\n\
    lsl         r0,r7,#0x1\n\
    add         r1,r3,r0\n\
    add         r0,r2,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r7,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r7,r0,#0x10\n\
    cmp         r7,#0x7\n\
    bls         LAB_0800daa8\n\
    mov         r6,r10\n\
    ldrh        r0,[r6,#0x2a]\n\
    strh        r0,[r6,#0x3a]\n\
    mov         r7,#0x0\n\
    ldr         r3,[sp,#0x10]\n\
LAB_0800dac6:\n\
    lsl         r2,r7,#0x1\n\
    add         r2,r3,r2\n\
    add         r1,r7,#0x1\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r3,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    lsl         r1,r1,#0x10\n\
    lsr         r7,r1,#0x10\n\
    cmp         r7,#0x7\n\
    bls         LAB_0800dac6\n\
LAB_0800dadc:\n\
    ldr         r0,DAT_0800dbe8\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x10\n\
    ldrh        r4,[r4,#0x0]\n\
    lsl         r1,r4,#0x18\n\
    asr         r1,r1,#0x10\n\
    bl          fun_08002c9c\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r12,r0\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r1,#0x0\n\
    mov         r2,r12\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x8]\n\
    mov         r7,#0x0\n\
LAB_0800db06:\n\
    lsl         r3,r7,#0x1\n\
    mov         r9,r3\n\
    ldr         r0,[sp,#0x10]\n\
    add         r0,r9\n\
    ldrh        r3,[r0,#0x0]\n\
    add         r6,r3,#0x0\n\
    mov         r4,#0xf8\n\
    lsl         r4,r4,#0x2\n\
    and         r6,r4\n\
    lsr         r6,r6,#0x5\n\
    mov         r8,r3\n\
    mov         r0,r8\n\
    mov         r1,#0xf8\n\
    lsl         r1,r1,#0x7\n\
    and         r0,r1\n\
    lsr         r0,r0,#0xa\n\
    mov         r8,r0\n\
    mov         r2,#0x1f\n\
    and         r3,r2\n\
    ldr         r0,[sp,#0xc]\n\
    add         r0,r9\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r1,r0,#0x0\n\
    and         r1,r4\n\
    lsr         r1,r1,#0x5\n\
    add         r2,r0,#0x0\n\
    mov         r4,#0xf8\n\
    lsl         r4,r4,#0x7\n\
    and         r2,r4\n\
    lsr         r2,r2,#0xa\n\
    mov         r4,#0x1f\n\
    and         r0,r4\n\
    ldr         r4,[sp,#0x8]\n\
    add         r5,r0,#0x0\n\
    mul         r5,r4\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    add         r0,r4,#0x0\n\
    add         r4,r1,#0x0\n\
    mul         r4,r0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    add         r1,r2,#0x0\n\
    mul         r1,r0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r2,r12\n\
    mul         r2,r3\n\
    add         r3,r2,#0x0\n\
    lsl         r3,r3,#0x10\n\
    lsr         r3,r3,#0x10\n\
    mov         r2,r12\n\
    mul         r2,r6\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r6,r12\n\
    mov         r0,r8\n\
    mul         r0,r6\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    add         r3,r3,r5\n\
    lsl         r3,r3,#0x10\n\
    add         r2,r2,r4\n\
    lsl         r2,r2,#0x10\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,[sp,#0x14]\n\
    add         r9,r1\n\
    lsr         r0,r0,#0xe\n\
    ldr         r4,DAT_0800dbf0\n\
    add         r1,r4,#0x0\n\
    and         r0,r1\n\
    lsr         r2,r2,#0x13\n\
    mov         r6,#0xf8\n\
    lsl         r6,r6,#0x2\n\
    and         r2,r6\n\
    orr         r0,r2\n\
    lsr         r3,r3,#0x18\n\
    mov         r1,#0x1f\n\
    and         r3,r1\n\
    orr         r0,r3\n\
    mov         r2,r9\n\
    strh        r0,[r2,#0x0]\n\
    add         r0,r7,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r7,r0,#0x10\n\
    cmp         r7,#0x7\n\
    bls         LAB_0800db06\n\
    ldr         r1,DAT_0800dbe8\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    mov         r3,r10\n\
    ldrh        r3,[r3,#0x2]\n\
    lsr         r0,r3,#0x8\n\
    mov         r1,#0xf\n\
    str         r1,[sp,#0x0]\n\
    mov         r1,#0x2\n\
    str         r1,[sp,#0x4]\n\
    ldr         r1,[sp,#0x14]\n\
    add         r2,r1,#0x0\n\
    mov         r3,#0x2\n\
    bl          fun_0800dbf4\n\
    add         sp,#0x18\n\
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
DAT_0800dbe8:\n\
    .4byte 0x0200D418\n\
DAT_0800dbec:\n\
    .4byte 0x0200D41C\n\
DAT_0800dbf0:\n\
    .4byte 0xFFFFFC00\n\
    ");
}
__attribute__((naked)) void fun_0800dbf4()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_0800dcc8()
{
    asm("\n\
    mov         r2,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    mov         r1,#0xc8\n\
    lsl         r1,r1,#0x6\n\
    strh        r1,[r0,#0x2]\n\
    strh        r2,[r0,#0x4]\n\
    ldr         r2,DAT_0800dcf0\n\
    ldr         r1,DAT_0800dcf4\n\
    str         r1,[r2,#0x0]\n\
    add         r0,#0x2a\n\
    str         r0,[r2,#0x4]\n\
    ldr         r0,DAT_0800dcf8\n\
    str         r0,[r2,#0x8]\n\
    ldr         r0,[r2,#0x8]\n\
    ldr         r0,DAT_0800dcfc\n\
    mov         r1,#0x3c\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800dd00\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
DAT_0800dcf0:\n\
    .4byte 0x040000D4\n\
DAT_0800dcf4:\n\
    .4byte 0x05000170\n\
DAT_0800dcf8:\n\
    .4byte 0x80000008\n\
DAT_0800dcfc:\n\
    .4byte 0x0200D418\n\
DAT_0800dd00:\n\
    .4byte 0x0200D41C\n\
    ");
}
__attribute__((naked)) void fun_0800dd04()
{
    asm("\n\
    ldr         r1,DAT_0800dd18\n\
    add         r0,#0x6\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_0800dd1c\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_0800dd20\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_0800dd18:\n\
    .4byte 0x040000D4\n\
DAT_0800dd1c:\n\
    .4byte 0x05000170\n\
DAT_0800dd20:\n\
    .4byte 0x80000008\n\
    ");
}
__attribute__((naked)) void fun_0800dd24()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,#0x1f\n\
    mov         r4,#0x0\n\
    ldr         r5,DAT_0800dd4c\n\
LAB_0800dd2c:\n\
    lsl         r1,r4,#0x2\n\
    add         r1,r1,r5\n\
    ldrh        r0,[r1,#0x0]\n\
    ldrh        r1,[r1,#0x2]\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,r6\n\
    bcc         LAB_0800dd2c\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800dd4c:\n\
    .4byte 0x0877CDA8\n\
    ");
}
__attribute__((naked)) void fun_0800dd50()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800ddac\n\
    add         r0,r0,r4\n\
    ldrh        r6,[r0,#0x0]\n\
    cmp         r6,#0x0\n\
    bne         LAB_0800dda4\n\
    ldr         r0,DAT_0800ddb0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800dd6c\n\
    bl          fun_0803c6fc\n\
LAB_0800dd6c:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_0800ddb4\n\
    ldr         r0,DAT_0800ddb8\n\
    str         r0,[r1,#0xc]\n\
    mov         r5,#0xb\n\
    strh        r5,[r1,#0x26]\n\
    mov         r0,#0xc\n\
    strh        r0,[r1,#0x22]\n\
    mov         r0,#0x6\n\
    strh        r0,[r1,#0x28]\n\
    mov         r0,#0x3\n\
    strh        r0,[r1,#0x24]\n\
    ldr         r4,DAT_0800ddbc\n\
    ldr         r0,[r4,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800dd98\n\
    bl          fun_08003b00\n\
LAB_0800dd98:\n\
    str         r6,[r4,#0xc]\n\
    ldr         r0,DAT_0800ddc0\n\
    strh        r5,[r4,#0x10]\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800ddc4\n\
    str         r6,[r0,#0x0]\n\
LAB_0800dda4:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800ddac:\n\
    .4byte 0x00000DDA\n\
DAT_0800ddb0:\n\
    .4byte 0x020117D8\n\
DAT_0800ddb4:\n\
    .4byte 0x02011810\n\
DAT_0800ddb8:\n\
    .4byte 0x084493E8\n\
DAT_0800ddbc:\n\
    .4byte 0x020006A0\n\
DAT_0800ddc0:\n\
    .4byte 0x020117C8\n\
DAT_0800ddc4:\n\
    .4byte 0x0200D428\n\
    ");
}
__attribute__((naked)) void fun_0800ddc8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800de2c\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800de24\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800de2c\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r1,DAT_0800de30\n\
    ldr         r0,DAT_0800de34\n\
    str         r0,[r1,#0xc]\n\
    mov         r0,#0x1c\n\
    strh        r0,[r1,#0x26]\n\
    strh        r5,[r1,#0x22]\n\
    mov         r0,#0x2a\n\
    strh        r0,[r1,#0x28]\n\
    mov         r0,#0xe\n\
    strh        r0,[r1,#0x24]\n\
    ldr         r4,DAT_0800de38\n\
    ldr         r0,[r4,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800de04\n\
    bl          fun_08003b00\n\
LAB_0800de04:\n\
    str         r5,[r4,#0xc]\n\
    ldr         r0,DAT_0800de3c\n\
    strh        r5,[r4,#0x10]\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800de40\n\
    str         r5,[r0,#0x0]\n\
    ldr         r4,DAT_0800de44\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800de24\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001704\n\
LAB_0800de24:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800de2c:\n\
    .4byte 0x00000DDA\n\
DAT_0800de30:\n\
    .4byte 0x02011810\n\
DAT_0800de34:\n\
    .4byte 0x084492B8\n\
DAT_0800de38:\n\
    .4byte 0x020006A0\n\
DAT_0800de3c:\n\
    .4byte 0x020117C8\n\
DAT_0800de40:\n\
    .4byte 0x0200D428\n\
DAT_0800de44:\n\
    .4byte 0x0200D424\n\
    ");
}
__attribute__((naked)) void fun_0800de48()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r7,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r4,r1,#0x10\n\
    ldr         r1,DAT_0800de8c\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r6,DAT_0800de90\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800df06\n\
    ldr         r5,DAT_0800de94\n\
    ldr         r0,[r5,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800de6c\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800de6c:\n\
    bl          fun_080397a0\n\
    ldr         r0,[r5,#0xc]\n\
    bl          fun_08039584\n\
    str         r0,[r6,#0x0]\n\
    ldr         r0,DAT_0800de98\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bhi         LAB_0800df06\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800de9c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800de8c:\n\
    .4byte 0x0200D420\n\
DAT_0800de90:\n\
    .4byte 0x0200D428\n\
DAT_0800de94:\n\
    .4byte 0x020006A0\n\
DAT_0800de98:\n\
    .4byte 0x020117E0\n\
DAT_0800de9c:\n\
    .4byte 0x0800DEA0\n\
PTR_DAT_0800dea0:\n\
    .4byte DAT_0800ded4\n\
    .4byte DAT_0800ded4\n\
    .4byte DAT_0800defc\n\
    .4byte DAT_0800dec0\n\
    .4byte DAT_0800dec0\n\
    .4byte DAT_0800dec0\n\
    .4byte DAT_0800dee8\n\
    .4byte DAT_0800ded4\n\
\n\
DAT_0800dec0:\n\
.byte 0x02\n\
.byte 0x48\n\
.byte 0xC0\n\
.byte 0x68\n\
.byte 0x02\n\
.byte 0x49\n\
.byte 0x2B\n\
.byte 0xF0\n\
.byte 0x8B\n\
.byte 0xFC\n\
.byte 0x1C\n\
.byte 0xE0\n\
.byte 0xA0\n\
.byte 0x06\n\
.byte 0x00\n\
.byte 0x02\n\
.byte 0x30\n\
.byte 0xCE\n\
.byte 0x77\n\
.byte 0x08\n\
\n\
DAT_0800ded4:\n\
.byte 0x02\n\
.byte 0x48\n\
.byte 0xC0\n\
.byte 0x68\n\
.byte 0x02\n\
.byte 0x49\n\
.byte 0x2B\n\
.byte 0xF0\n\
.byte 0x81\n\
.byte 0xFC\n\
.byte 0x12\n\
.byte 0xE0\n\
.byte 0xA0\n\
.byte 0x06\n\
.byte 0x00\n\
.byte 0x02\n\
.byte 0x36\n\
.byte 0xCE\n\
.byte 0x77\n\
.byte 0x08\n\
\n\
DAT_0800dee8:\n\
.byte 0x02\n\
.byte 0x48\n\
.byte 0xC0\n\
.byte 0x68\n\
.byte 0x02\n\
.byte 0x49\n\
.byte 0x2B\n\
.byte 0xF0\n\
.byte 0x77\n\
.byte 0xFC\n\
.byte 0x08\n\
.byte 0xE0\n\
.byte 0xA0\n\
.byte 0x06\n\
.byte 0x00\n\
.byte 0x02\n\
.byte 0x2A\n\
.byte 0xCE\n\
.byte 0x77\n\
.byte 0x08\n\
\n\
DAT_0800defc:\n\
.byte 0x12\n\
.byte 0x48\n\
.byte 0xC0\n\
.byte 0x68\n\
.byte 0x12\n\
.byte 0x49\n\
.byte 0x2B\n\
.byte 0xF0\n\
.byte 0x6D\n\
.byte 0xFC\n\
LAB_0800df06:\n\
    ldr         r5,DAT_0800df48\n\
    ldr         r1,[r5,#0xc]\n\
    cmp         r1,#0x0\n\
    bne         LAB_0800df10\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800df10:\n\
    ldr         r6,DAT_0800df50\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800df1a\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800df1a:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08039650\n\
    bl          fun_080395dc\n\
    ldr         r0,[r5,#0xc]\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r5,#0x10]\n\
    cmp         r7,r4\n\
    beq         LAB_0800df30\n\
    b           LAB_0800e030\n\
LAB_0800df30:\n\
    ldr         r0,DAT_0800df54\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x2d\n\
    bne         LAB_0800dfd8\n\
    cmp         r4,#0x7\n\
    bhi         switchD_0800df44_caseD_8\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800df58\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800df48:\n\
    .4byte 0x020006A0\n\
DAT_0800df4c:\n\
    .4byte 0x0877ce24\n\
DAT_0800df50:\n\
    .4byte 0x0200D428\n\
DAT_0800df54:\n\
    .4byte 0x0200D420\n\
DAT_0800df58:\n\
    .4byte 0x0800DF5C\n\
switchD_0800e246_switchdataD_0800df5c:\n\
    .4byte switchD_0800df44_caseD_0\n\
    .4byte switchD_0800df44_caseD_0\n\
    .4byte switchD_0800df44_caseD_2\n\
    .4byte switchD_0800df44_caseD_3\n\
    .4byte switchD_0800df44_caseD_3\n\
    .4byte switchD_0800df44_caseD_3\n\
    .4byte switchD_0800df44_caseD_6\n\
    .4byte switchD_0800df44_caseD_0\n\
switchD_0800df44_caseD_3:\n\
    ldr         r0,DAT_0800df88\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800df8c\n\
    bl          fun_080397e0\n\
    b           switchD_0800df44_caseD_8\n\
DAT_0800df88:\n\
    .4byte 0x020006A0\n\
DAT_0800df8c:\n\
    .4byte 0x0877CE50\n\
switchD_0800df44_caseD_0:\n\
    ldr         r0,DAT_0800df9c\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800dfa0\n\
    bl          fun_080397e0\n\
    b           switchD_0800df44_caseD_8\n\
DAT_0800df9c:\n\
    .4byte 0x020006A0\n\
DAT_0800dfa0:\n\
    .4byte 0x0877CE5A\n\
switchD_0800df44_caseD_6:\n\
    ldr         r0,DAT_0800dfb0\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800dfb4\n\
    bl          fun_080397e0\n\
    b           switchD_0800df44_caseD_8\n\
DAT_0800dfb0:\n\
    .4byte 0x020006A0\n\
DAT_0800dfb4:\n\
    .4byte 0x0877CE46\n\
switchD_0800df44_caseD_2:\n\
    ldr         r0,DAT_0800dfcc\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800dfd0\n\
    bl          fun_080397e0\n\
switchD_0800df44_caseD_8:\n\
    ldr         r1,DAT_0800dfd4\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    b           switchD_0800e246_caseD_8\n\
\n\
.space 2\n\
\n\
DAT_0800dfcc:\n\
    .4byte 0x020006A0\n\
DAT_0800dfd0:\n\
    .4byte 0x0877CE3C\n\
DAT_0800dfd4:\n\
    .4byte 0x0200D420\n\
LAB_0800dfd8:\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,DAT_0800dff4\n\
    ldrh        r1,[r1,#0x1e]\n\
    cmp         r1,r0\n\
    beq         LAB_0800dfe4\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800dfe4:\n\
    cmp         r4,#0x7\n\
    bls         LAB_0800dfea\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800dfea:\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800dff8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800dff4:\n\
    .4byte 0x0000FFFF\n\
DAT_0800dff8:\n\
    .4byte 0x0800DFFC\n\
switchD_0800dff2_switchdataD_0800dffc:\n\
    .4byte switchD_0800e246_caseD_0\n\
    .4byte switchD_0800e246_caseD_0\n\
    .4byte switchD_0800dff2_caseD_2\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_6\n\
    .4byte switchD_0800e246_caseD_0\n\
switchD_0800dff2_caseD_2:\n\
    ldr         r0,DAT_0800e028\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e02c\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e028:\n\
    .4byte 0x020006A0\n\
DAT_0800e02c:\n\
    .4byte 0x0877CE24\n\
LAB_0800e030:\n\
    ldr         r1,DAT_0800e048\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    cmp         r7,#0x7\n\
    bls         LAB_0800e03c\n\
switchD_0800e044_caseD_8:\n\
    b           LAB_0800e230\n\
LAB_0800e03c:\n\
    lsl         r0,r7,#0x2\n\
    ldr         r1,DAT_0800e04c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800e048:\n\
    .4byte 0x0200D420\n\
DAT_0800e04c:\n\
    .4byte 0x0800E050\n\
switchD_0800e044_switchdataD_0800e050:\n\
    .4byte switchD_0800e044_caseD_0\n\
    .4byte switchD_0800e044_caseD_0\n\
    .4byte switchD_0800e044_caseD_2\n\
    .4byte switchD_0800e044_caseD_3\n\
    .4byte switchD_0800e044_caseD_3\n\
    .4byte switchD_0800e044_caseD_3\n\
    .4byte switchD_0800e044_caseD_6\n\
    .4byte switchD_0800e044_caseD_0\n\
switchD_0800e044_caseD_3:\n\
    cmp         r4,#0x7\n\
    bls         LAB_0800e076\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800e076:\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800e080\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800e080:\n\
    .4byte 0x0800E084\n\
switchD_0800e246_switchdataD_0800e084:\n\
    .4byte switchD_0800e07e_caseD_0\n\
    .4byte switchD_0800e07e_caseD_0\n\
    .4byte switchD_0800e07e_caseD_2\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e07e_caseD_6\n\
    .4byte switchD_0800e07e_caseD_0\n\
switchD_0800e07e_caseD_0:\n\
    ldr         r0,DAT_0800e0b0\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e0b4\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e0b0:\n\
    .4byte 0x020006A0\n\
DAT_0800e0b4:\n\
    .4byte 0x0877CE7E\n\
switchD_0800e07e_caseD_6:\n\
    ldr         r0,DAT_0800e0c4\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e0c8\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e0c4:\n\
    .4byte 0x020006A0\n\
DAT_0800e0c8:\n\
    .4byte 0x0877CEA2\n\
switchD_0800e07e_caseD_2:\n\
    ldr         r0,DAT_0800e0d8\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e0dc\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e0d8:\n\
    .4byte 0x020006A0\n\
DAT_0800e0dc:\n\
    .4byte 0x0877CE88\n\
switchD_0800e044_caseD_0:\n\
    cmp         r4,#0x7\n\
    bls         LAB_0800e0e6\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800e0e6:\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800e0f0\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800e0f0:\n\
    .4byte 0x0800E0F4\n\
switchD_0800e0ee_switchdataD_0800e0f4:\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e0ee_caseD_2\n\
    .4byte switchD_0800e0ee_caseD_3\n\
    .4byte switchD_0800e0ee_caseD_3\n\
    .4byte switchD_0800e0ee_caseD_3\n\
    .4byte switchD_0800e0ee_caseD_6\n\
    .4byte switchD_0800e246_caseD_8\n\
switchD_0800e0ee_caseD_3:\n\
    ldr         r0,DAT_0800e120\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e124\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e120:\n\
    .4byte 0x020006A0\n\
DAT_0800e124:\n\
    .4byte 0x0877CE76\n\
switchD_0800e0ee_caseD_6:\n\
    ldr         r0,DAT_0800e134\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e138\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e134:\n\
    .4byte 0x020006A0\n\
DAT_0800e138:\n\
    .4byte 0x0877CEB2\n\
switchD_0800e0ee_caseD_2:\n\
    ldr         r0,DAT_0800e148\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e14c\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e148:\n\
    .4byte 0x020006A0\n\
DAT_0800e14c:\n\
    .4byte 0x0877CE94\n\
switchD_0800e044_caseD_6:\n\
    cmp         r4,#0x7\n\
    bls         LAB_0800e156\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800e156:\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800e160\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800e160:\n\
    .4byte 0x0800E164\n\
switchD_0800e15e_switchdataD_0800e164:\n\
    .4byte switchD_0800e15e_caseD_0\n\
    .4byte switchD_0800e15e_caseD_0\n\
    .4byte switchD_0800e15e_caseD_2\n\
    .4byte switchD_0800e15e_caseD_3\n\
    .4byte switchD_0800e15e_caseD_3\n\
    .4byte switchD_0800e15e_caseD_3\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e15e_caseD_0\n\
switchD_0800e15e_caseD_3:\n\
    ldr         r0,DAT_0800e190\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e194\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e190:\n\
    .4byte 0x020006A0\n\
DAT_0800e194:\n\
    .4byte 0x0877CECE\n\
switchD_0800e15e_caseD_0:\n\
    ldr         r0,DAT_0800e1a4\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e1a8\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e1a4:\n\
    .4byte 0x020006A0\n\
DAT_0800e1a8:\n\
    .4byte 0x0877CEEE\n\
switchD_0800e15e_caseD_2:\n\
    ldr         r0,DAT_0800e1b8\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e1bc\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e1b8:\n\
    .4byte 0x020006A0\n\
DAT_0800e1bc:\n\
    .4byte 0x0877CE64\n\
switchD_0800e044_caseD_2:\n\
    cmp         r4,#0x7\n\
    bls         LAB_0800e1c6\n\
    b           switchD_0800e246_caseD_8\n\
LAB_0800e1c6:\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800e1d0\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800e1d0:\n\
    .4byte 0x0800E1D4\n\
switchD_0800e246_switchdataD_0800e1d4:\n\
    .4byte switchD_0800e1ce_caseD_0\n\
    .4byte switchD_0800e1ce_caseD_0\n\
    .4byte switchD_0800e246_caseD_8\n\
    .4byte switchD_0800e1ce_caseD_3\n\
    .4byte switchD_0800e1ce_caseD_3\n\
    .4byte switchD_0800e1ce_caseD_3\n\
    .4byte switchD_0800e1ce_caseD_6\n\
    .4byte switchD_0800e1ce_caseD_0\n\
switchD_0800e1ce_caseD_3:\n\
    ldr         r0,DAT_0800e200\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e204\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e200:\n\
    .4byte 0x020006A0\n\
DAT_0800e204:\n\
    .4byte 0x0877CEC2\n\
switchD_0800e1ce_caseD_0:\n\
    ldr         r0,DAT_0800e214\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e218\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e214:\n\
    .4byte 0x020006A0\n\
DAT_0800e218:\n\
    .4byte 0x0877CEDE\n\
switchD_0800e1ce_caseD_6:\n\
    ldr         r0,DAT_0800e228\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e22c\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e228:\n\
    .4byte 0x020006A0\n\
DAT_0800e22c:\n\
    .4byte 0x0877CE6C\n\
LAB_0800e230:\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,DAT_0800e248\n\
    ldrh        r1,[r1,#0x1e]\n\
    cmp         r1,r0\n\
    bne         switchD_0800e246_caseD_8\n\
    cmp         r4,#0x7\n\
    bhi         switchD_0800e246_caseD_8\n\
    lsl         r0,r4,#0x2\n\
    ldr         r1,DAT_0800e24c\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800e248:\n\
    .4byte 0x0000FFFF\n\
DAT_0800e24c:\n\
    .4byte 0x0800E250\n\
switchD_0800e246_switchdataD_0800e250:\n\
    .4byte switchD_0800e246_caseD_0\n\
    .4byte switchD_0800e246_caseD_0\n\
    .4byte switchD_0800e246_caseD_2\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_3\n\
    .4byte switchD_0800e246_caseD_6\n\
    .4byte switchD_0800e246_caseD_0\n\
switchD_0800e246_caseD_3:\n\
    ldr         r0,DAT_0800e27c\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e280\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e27c:\n\
    .4byte 0x020006A0\n\
DAT_0800e280:\n\
    .4byte 0x0877CE30\n\
switchD_0800e246_caseD_0:\n\
    ldr         r0,DAT_0800e290\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e294\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e290:\n\
    .4byte 0x020006A0\n\
DAT_0800e294:\n\
    .4byte 0x0877CE36\n\
switchD_0800e246_caseD_6:\n\
    ldr         r0,DAT_0800e2a4\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e2a8\n\
    bl          fun_080397e0\n\
    b           switchD_0800e246_caseD_8\n\
DAT_0800e2a4:\n\
    .4byte 0x020006A0\n\
DAT_0800e2a8:\n\
    .4byte 0x0877CE2A\n\
switchD_0800e246_caseD_2:\n\
    ldr         r0,DAT_0800e2bc\n\
    ldr         r0,[r0,#0xc]\n\
    ldr         r1,DAT_0800e2c0\n\
    bl          fun_080397e0\n\
switchD_0800e246_caseD_8:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e2bc:\n\
    .4byte 0x020006A0\n\
DAT_0800e2c0:\n\
    .4byte 0x0877CE24\n\
    ");
}
__attribute__((naked)) void fun_0800e2c4()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r4,DAT_0800e2e4\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e2dc\n\
    mov         r0,#0x27\n\
    bl          fun_080016f0\n\
    str         r0,[r4,#0x0]\n\
LAB_0800e2dc:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800e2e4:\n\
    .4byte 0x0200D424\n\
    ");
}
__attribute__((naked)) void fun_0800e2e8()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r4,DAT_0800e304\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800e2fe\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001704\n\
LAB_0800e2fe:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e304:\n\
    .4byte 0x0200D424\n\
    ");
}
__attribute__((naked)) void fun_0800e308()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800e338\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800e330\n\
    ldr         r0,DAT_0800e33c\n\
    ldr         r1,[r0,#0xc]\n\
    ldr         r0,DAT_0800e340\n\
    cmp         r1,r0\n\
    beq         LAB_0800e330\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_0800dd50\n\
LAB_0800e330:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800e338:\n\
    .4byte 0x00000DDA\n\
DAT_0800e33c:\n\
    .4byte 0x02011810\n\
DAT_0800e340:\n\
    .4byte 0x084493E8\n\
\n\
    ");
}
