__attribute__((naked)) void fun_080021c0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0x4\n\
    ldr         r5,DAT_08002240\n\
    mov         r2,#0x0\n\
    strh        r2,[r5,#0x0]\n\
    ldr         r4,DAT_08002244\n\
    ldrh        r1,[r4,#0x0]\n\
    ldr         r0,DAT_08002248\n\
    and         r0,r1\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x1\n\
    mov         r8,r0\n\
    strh        r0,[r5,#0x0]\n\
    ldr         r0,DAT_0800224c\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r2,DAT_08002250\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x6\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldrh        r0,[r2,#0x0]\n\
    ldr         r3,DAT_08002254\n\
    add         r1,r3,#0x0\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    mov         r6,#0x0\n\
    str         r6,[sp,#0x0]\n\
    ldr         r7,DAT_08002258\n\
    ldr         r2,DAT_0800225c\n\
    mov         r0,sp\n\
    add         r1,r7,#0x0\n\
    bl          fun_0803d068\n\
    mov         r0,#0xc\n\
    str         r0,[r7,#0x14]\n\
    str         r0,[r7,#0x18]\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x30\n\
    str         r0,[r7,#0x1c]\n\
    add         r0,#0x18\n\
    str         r0,[r7,#0x20]\n\
    add         r0,#0x18\n\
    str         r0,[r7,#0x24]\n\
    add         r0,#0x60\n\
    str         r0,[r7,#0x28]\n\
    mov         r1,#0x90\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r7,r1\n\
    str         r0,[r7,#0x2c]\n\
    strh        r6,[r5,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    mov         r1,#0x80\n\
    orr         r0,r1\n\
    strh        r0,[r4,#0x0]\n\
    mov         r3,r8\n\
    strh        r3,[r5,#0x0]\n\
    add         sp,#0x4\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002240:\n\
    .4byte 0x04000208\n\
DAT_08002244:\n\
    .4byte 0x04000200\n\
DAT_08002248:\n\
    .4byte 0x0000FF3F\n\
DAT_0800224c:\n\
    .4byte 0x04000134\n\
DAT_08002250:\n\
    .4byte 0x04000128\n\
DAT_08002254:\n\
    .4byte 0x00004003\n\
DAT_08002258:\n\
    .4byte 0x02005580\n\
DAT_0800225c:\n\
    .4byte 0x05000060\n\
    ");
}
__attribute__((naked)) void fun_08002260()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r12,r0\n\
    ldr         r6,DAT_08002278\n\
    ldr         r5,[r6,#0x0]\n\
    ldr         r7,DAT_0800227c\n\
    ldrb        r0,[r7,#0x1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002280\n\
    cmp         r0,#0x1\n\
    beq         LAB_080022e0\n\
    b           LAB_080022e6\n\
\n\
.space 2\n\
\n\
DAT_08002278:\n\
    .4byte 0x04000128\n\
DAT_0800227c:\n\
    .4byte 0x02005580\n\
LAB_08002280:\n\
    mov         r1,#0x30\n\
    add         r0,r5,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080022da\n\
    mov         r0,#0x88\n\
    add         r4,r5,#0x0\n\
    and         r4,r0\n\
    cmp         r4,#0x8\n\
    bne         LAB_080022e6\n\
    mov         r1,#0x4\n\
    add         r0,r5,#0x0\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r1,r0,#0x18\n\
    cmp         r1,#0x0\n\
    bne         LAB_080022da\n\
    ldr         r0,[r7,#0x14]\n\
    cmp         r0,#0xc\n\
    bne         LAB_080022da\n\
    ldr         r3,DAT_08002304\n\
    strh        r1,[r3,#0x0]\n\
    ldr         r2,DAT_08002308\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_0800230c\n\
    and         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,#0x40\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
    ldrb        r1,[r6,#0x1]\n\
    mov         r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    and         r0,r1\n\
    strb        r0,[r6,#0x1]\n\
    ldr         r1,DAT_08002310\n\
    ldr         r0,DAT_08002314\n\
    str         r0,[r1,#0x0]\n\
    add         r1,#0xf6\n\
    mov         r0,#0xc0\n\
    strh        r0,[r1,#0x0]\n\
    strb        r4,[r7,#0x0]\n\
LAB_080022da:\n\
    ldr         r1,DAT_08002318\n\
    mov         r0,#0x1\n\
    strb        r0,[r1,#0x1]\n\
LAB_080022e0:\n\
    mov         r0,r12\n\
    bl          fun_08002390\n\
LAB_080022e6:\n\
    ldr         r0,DAT_08002318\n\
    ldrb        r1,[r0,#0xb]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0xb]\n\
    ldrb        r3,[r0,#0x3]\n\
    ldrb        r1,[r0,#0x2]\n\
    lsl         r2,r1,#0x8\n\
    ldrb        r1,[r0,#0x0]\n\
    cmp         r1,#0x8\n\
    bne         LAB_0800231c\n\
    mov         r1,#0x80\n\
    orr         r1,r2\n\
    orr         r1,r3\n\
    b           LAB_08002320\n\
\n\
.space 2\n\
\n\
DAT_08002304:\n\
    .4byte 0x04000208\n\
DAT_08002308:\n\
    .4byte 0x04000200\n\
DAT_0800230c:\n\
    .4byte 0x0000FF7F\n\
DAT_08002310:\n\
    .4byte 0x0400010C\n\
DAT_08002314:\n\
    .4byte 0x0000ABFB\n\
DAT_08002318:\n\
    .4byte 0x02005580\n\
LAB_0800231c:\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
LAB_08002320:\n\
    ldrb        r0,[r0,#0x7]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800232c\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x5\n\
    orr         r1,r0\n\
LAB_0800232c:\n\
    lsl         r0,r5,#0x1a\n\
    lsr         r0,r0,#0x1e\n\
    cmp         r0,#0x3\n\
    bls         LAB_0800233a\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x6\n\
    orr         r1,r0\n\
LAB_0800233a:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08002344()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    mov         r5,#0x0\n\
    ldr         r4,DAT_08002388\n\
    ldr         r2,[r4,#0x1c]\n\
    ldrb        r1,[r4,#0xb]\n\
    strb        r1,[r2,#0x0]\n\
    ldr         r2,[r4,#0x1c]\n\
    ldrb        r1,[r4,#0x2]\n\
    ldrb        r3,[r4,#0x3]\n\
    eor         r1,r3\n\
    strb        r1,[r2,#0x1]\n\
    ldr         r1,[r4,#0x1c]\n\
    strh        r5,[r1,#0x2]\n\
    ldr         r1,[r4,#0x1c]\n\
    add         r1,#0x4\n\
    ldr         r2,DAT_0800238c\n\
    bl          fun_0803d068\n\
    mov         r1,#0x0\n\
    ldr         r0,[r4,#0x1c]\n\
LAB_0800236c:\n\
    ldrh        r2,[r0,#0x0]\n\
    add         r5,r2,r5\n\
    add         r0,#0x2\n\
    add         r1,#0x1\n\
    cmp         r1,#0x9\n\
    bls         LAB_0800236c\n\
    ldr         r0,[r4,#0x1c]\n\
    mvn         r1,r5\n\
    strh        r1,[r0,#0x2]\n\
    mov         r0,#0x1\n\
    strb        r0,[r4,#0x4]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002388:\n\
    .4byte 0x02005580\n\
DAT_0800238c:\n\
    .4byte 0x04000004\n\
    ");
}
__attribute__((naked)) void fun_08002390()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    mov         r9,r0\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x0]\n\
    ldr         r2,DAT_0800243c\n\
    mov         r3,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r4,DAT_08002440\n\
    ldr         r1,[r4,#0x2c]\n\
    ldr         r0,[r4,#0x28]\n\
    str         r0,[r4,#0x2c]\n\
    str         r1,[r4,#0x28]\n\
    ldrb        r1,[r4,#0x5]\n\
    strb        r3,[r4,#0x5]\n\
    mov         r0,#0x1\n\
    strh        r0,[r2,#0x0]\n\
    strb        r3,[r4,#0x3]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08002420\n\
    mov         r5,#0x0\n\
    add         r0,sp,#0x4\n\
    mov         r8,r0\n\
    add         r7,r4,#0x0\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    mov         r10,r1\n\
LAB_080023ce:\n\
    lsl         r0,r5,#0x1\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x3\n\
    ldr         r1,[r7,#0x2c]\n\
    add         r1,r1,r0\n\
    mov         r0,#0x0\n\
    mov         r3,#0x0\n\
    add         r6,r5,#0x1\n\
    add         r2,r1,#0x0\n\
LAB_080023e0:\n\
    ldrh        r4,[r2,#0x0]\n\
    add         r0,r4,r0\n\
    add         r2,#0x2\n\
    add         r3,#0x1\n\
    cmp         r3,#0x9\n\
    bls         LAB_080023e0\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r4,r1,#0x4\n\
    cmp         r0,r10\n\
    bne         LAB_0800240c\n\
    lsl         r1,r5,#0x4\n\
    add         r1,r9\n\
    add         r0,r4,#0x0\n\
    ldr         r2,DAT_08002444\n\
    bl          fun_0803d068\n\
    mov         r0,#0x1\n\
    lsl         r0,r5\n\
    ldrb        r1,[r7,#0x3]\n\
    orr         r0,r1\n\
    strb        r0,[r7,#0x3]\n\
LAB_0800240c:\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#4]\n\
    mov         r0,r8\n\
    add         r1,r4,#0x0\n\
    ldr         r2,DAT_08002448\n\
    bl          fun_0803d068\n\
    add         r5,r6,#0x0\n\
    cmp         r5,#0x3\n\
    ble         LAB_080023ce\n\
LAB_08002420:\n\
    ldr         r0,DAT_08002440\n\
    ldrb        r1,[r0,#0x2]\n\
    ldrb        r2,[r0,#0x3]\n\
    orr         r1,r2\n\
    strb        r1,[r0,#0x2]\n\
    ldrb        r0,[r0,#0x3]\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_0800243c:\n\
    .4byte 0x04000208\n\
DAT_08002440:\n\
    .4byte 0x02005580\n\
DAT_08002444:\n\
    .4byte 0x04000004\n\
DAT_08002448:\n\
    .4byte 0x05000004\n\
    ");
}
__attribute__((naked)) void fun_0800244c()
{
    asm("\n\
    ldr         r3,DAT_0800249c\n\
    ldrb        r0,[r3,#0x1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002498\n\
    ldrb        r0,[r3,#0x6]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002498\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[r3,#0x18]\n\
    ldr         r1,[r3,#0x28]\n\
    ldr         r0,[r3,#0x24]\n\
    str         r0,[r3,#0x28]\n\
    str         r1,[r3,#0x24]\n\
    ldrb        r0,[r3,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800247c\n\
    ldr         r1,[r3,#0x20]\n\
    ldr         r0,[r3,#0x1c]\n\
    str         r0,[r3,#0x20]\n\
    str         r1,[r3,#0x1c]\n\
    mov         r0,#0x0\n\
    strb        r0,[r3,#0x4]\n\
    str         r0,[r3,#0x14]\n\
LAB_0800247c:\n\
    ldr         r2,DAT_080024a0\n\
    ldr         r0,[r2,#0x0]\n\
    lsl         r0,r0,#0x19\n\
    lsr         r0,r0,#0x1f\n\
    strb        r0,[r3,#0x7]\n\
    ldr         r0,DAT_080024a4\n\
    strh        r0,[r2,#0x2]\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,#0x80\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r1,DAT_080024a8\n\
    mov         r0,#0xc0\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002498:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_0800249c:\n\
    .4byte 0x02005580\n\
DAT_080024a0:\n\
    .4byte 0x04000128\n\
DAT_080024a4:\n\
    .4byte 0x0000FEFE\n\
DAT_080024a8:\n\
    .4byte 0x0400010E\n\
    ");
}
__attribute__((naked)) void fun_080024ac()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x8\n\
    ldr         r0,DAT_0800258c\n\
    ldr         r1,[r0,#0x4]\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#4]\n\
    ldr         r2,DAT_08002590\n\
    ldr         r0,DAT_08002594\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x19\n\
    lsr         r0,r0,#0x1f\n\
    mov         r5,#0x0\n\
    strb        r0,[r2,#0x7]\n\
    mov         r1,sp\n\
    ldr         r0,DAT_08002598\n\
    add         r4,r2,#0x0\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r1,r0\n\
    bne         LAB_0800250c\n\
    ldr         r0,[r4,#0x18]\n\
    cmp         r0,#0x9\n\
    ble         LAB_0800250c\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    str         r0,[r4,#0x18]\n\
    ldr         r1,[r4,#0x28]\n\
    ldr         r0,[r4,#0x24]\n\
    str         r0,[r4,#0x28]\n\
    str         r1,[r4,#0x24]\n\
    ldrb        r0,[r4,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080024fa\n\
    ldr         r1,[r4,#0x20]\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r4,#0x20]\n\
    str         r1,[r4,#0x1c]\n\
    strb        r5,[r4,#0x4]\n\
    str         r5,[r4,#0x14]\n\
LAB_080024fa:\n\
    ldr         r3,DAT_0800259c\n\
    strh        r5,[r3,#0x0]\n\
    ldr         r2,DAT_080025a0\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,#0x80\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
LAB_0800250c:\n\
    ldr         r0,[r4,#0x14]\n\
    cmp         r0,#0x9\n\
    bgt         LAB_0800251e\n\
    ldr         r2,DAT_08002594\n\
    ldr         r1,[r4,#0x20]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x2]\n\
LAB_0800251e:\n\
    ldr         r0,[r4,#0x14]\n\
    cmp         r0,#0xa\n\
    bgt         LAB_08002528\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x14]\n\
LAB_08002528:\n\
    ldr         r0,[r4,#0x18]\n\
    cmp         r0,#0x0\n\
    blt         LAB_08002550\n\
    ldr         r1,[r4,#0x24]\n\
    mov         r2,sp\n\
    lsl         r0,r0,#0x1\n\
    add         r1,r1,r0\n\
    mov         r3,#0x3\n\
LAB_08002538:\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r2,#0x2\n\
    add         r1,#0x18\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bge         LAB_08002538\n\
    ldr         r0,[r4,#0x18]\n\
    cmp         r0,#0x9\n\
    bne         LAB_08002550\n\
    mov         r0,#0x1\n\
    strb        r0,[r4,#0x5]\n\
LAB_08002550:\n\
    add         r1,r4,#0x0\n\
    ldr         r0,[r1,#0x18]\n\
    cmp         r0,#0xa\n\
    bgt         LAB_0800255c\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x18]\n\
LAB_0800255c:\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08002568\n\
    ldr         r1,DAT_080025a4\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002568:\n\
    ldr         r0,[r4,#0x14]\n\
    cmp         r0,#0xa\n\
    bgt         LAB_08002582\n\
    cmp         r2,#0x0\n\
    beq         LAB_08002582\n\
    ldr         r2,DAT_08002594\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,#0x80\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r1,DAT_080025a4\n\
    mov         r0,#0xc0\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002582:\n\
    add         sp,#0x8\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800258c:\n\
    .4byte 0x04000120\n\
DAT_08002590:\n\
    .4byte 0x02005580\n\
DAT_08002594:\n\
    .4byte 0x04000128\n\
DAT_08002598:\n\
    .4byte 0x0000FEFE\n\
DAT_0800259c:\n\
    .4byte 0x04000208\n\
DAT_080025a0:\n\
    .4byte 0x03007FF8\n\
DAT_080025a4:\n\
    .4byte 0x0400010E\n\
    ");
}
__attribute__((naked)) void fun_080025a8()
{
    asm("\n\
    ldr         r1,DAT_080025b8\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080025b4\n\
    mov         r0,#0x1\n\
    strb        r0,[r1,#0x6]\n\
LAB_080025b4:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080025b8:\n\
    .4byte 0x02005580\n\
    ");
}
__attribute__((naked)) void fun_080025bc()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r3,DAT_080025f0\n\
    mov         r4,#0x0\n\
    strh        r4,[r3,#0x0]\n\
    ldr         r2,DAT_080025f4\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_080025f8\n\
    and         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r1,DAT_080025fc\n\
    ldr         r2,DAT_08002600\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    sub         r1,#0x1c\n\
    ldr         r0,DAT_08002604\n\
    str         r0,[r1,#0x0]\n\
    add         r1,#0xf6\n\
    mov         r0,#0xc0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08002608\n\
    strb        r4,[r0,#0x6]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080025f0:\n\
    .4byte 0x04000208\n\
DAT_080025f4:\n\
    .4byte 0x04000200\n\
DAT_080025f8:\n\
    .4byte 0x0000FF3F\n\
DAT_080025fc:\n\
    .4byte 0x04000128\n\
DAT_08002600:\n\
    .4byte 0x00002003\n\
DAT_08002604:\n\
    .4byte 0x0000ABFB\n\
DAT_08002608:\n\
    .4byte 0x02005580\n\
    ");
}
__attribute__((naked)) void fun_0800260c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    ldr         r0,DAT_080026b8\n\
    mov         r2,#0x0\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    strh        r2,[r0,#0xe]\n\
    ldr         r3,DAT_080026bc\n\
    ldr         r4,DAT_080026c0\n\
    ldr         r5,DAT_080026c4\n\
    ldr         r6,DAT_080026c8\n\
    ldr         r7,DAT_080026cc\n\
    ldr         r0,DAT_080026d0\n\
    mov         r12,r0\n\
    ldr         r1,DAT_080026d4\n\
    mov         r8,r1\n\
    ldr         r2,DAT_080026d8\n\
    mov         r9,r2\n\
    ldr         r0,DAT_080026dc\n\
    mov         r10,r0\n\
    ldr         r1,DAT_080026e0\n\
    mov         r2,#0x0\n\
    add         r0,r1,#0x6\n\
LAB_08002640:\n\
    strh        r2,[r0,#0x0]\n\
    sub         r0,#0x2\n\
    cmp         r0,r1\n\
    bge         LAB_08002640\n\
    mov         r0,#0x0\n\
    strh        r0,[r3,#0x0]\n\
    mov         r1,#0x0\n\
    str         r1,[r4,#0x0]\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    strh        r1,[r6,#0x0]\n\
    strh        r1,[r7,#0x0]\n\
    mov         r0,r12\n\
    strh        r1,[r0,#0x0]\n\
    mov         r2,r8\n\
    strh        r1,[r2,#0x0]\n\
    mov         r0,r9\n\
    strh        r1,[r0,#0x0]\n\
    mov         r2,r10\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08002672\n\
    mov         r1,#0x1\n\
LAB_08002672:\n\
    add         r0,r1,#0x0\n\
    ldr         r1,DAT_080026e4\n\
    bl          fun_080032b4\n\
    mov         r0,#0x1\n\
    mov         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_080026e8\n\
    mov         r1,#0x0\n\
    mov         r2,#0x10\n\
    bl          fun_08044fdc\n\
    ldr         r5,DAT_080026ec\n\
    mov         r4,#0x3\n\
LAB_0800268e:\n\
    add         r0,r5,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x10\n\
    bl          fun_08044fdc\n\
    add         r5,#0x10\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bge         LAB_0800268e\n\
    bl          fun_080021c0\n\
    bl          fun_080025a8\n\
    mov         r0,#0x1\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080026b8:\n\
    .4byte 0x02005750\n\
DAT_080026bc:\n\
    .4byte 0x02000008\n\
DAT_080026c0:\n\
    .4byte 0x0200000C\n\
DAT_080026c4:\n\
    .4byte 0x0200001A\n\
DAT_080026c8:\n\
    .4byte 0x02000010\n\
DAT_080026cc:\n\
    .4byte 0x02000012\n\
DAT_080026d0:\n\
    .4byte 0x02000014\n\
DAT_080026d4:\n\
    .4byte 0x02000016\n\
DAT_080026d8:\n\
    .4byte 0x02000018\n\
DAT_080026dc:\n\
    .4byte 0x0200001C\n\
DAT_080026e0:\n\
    .4byte 0x02000020\n\
DAT_080026e4:\n\
    .4byte 0x080497B0\n\
DAT_080026e8:\n\
    .4byte 0x02005760\n\
DAT_080026ec:\n\
    .4byte 0x02005710\n\
    ");
}
__attribute__((naked)) void fun_080026f0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r0,DAT_08002758\n\
    bl          fun_08002260\n\
    ldr         r4,DAT_0800275c\n\
    str         r0,[r4,#0x0]\n\
    ldr         r0,DAT_08002760\n\
    bl          fun_08002344\n\
    mov         r2,#0x0\n\
    mov         r1,#0x0\n\
    mov         r5,#0x1\n\
    ldr         r3,[r4,#0x0]\n\
LAB_0800270a:\n\
    add         r0,r5,#0x0\n\
    lsl         r0,r1\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800271a\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
LAB_0800271a:\n\
    add         r1,#0x1\n\
    cmp         r1,#0x3\n\
    ble         LAB_0800270a\n\
    ldr         r3,DAT_08002764\n\
    ldrh        r0,[r3,#0x0]\n\
    cmp         r2,r0\n\
    bls         LAB_0800272a\n\
    strh        r2,[r3,#0x0]\n\
LAB_0800272a:\n\
    ldr         r2,DAT_08002768\n\
    ldrh        r0,[r2,#0x0]\n\
    add         r1,r0,#0x1\n\
    strh        r1,[r2,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x6\n\
    bls         LAB_08002746\n\
    ldr         r0,DAT_0800276c\n\
    ldrh        r1,[r3,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    strh        r0,[r3,#0x0]\n\
LAB_08002746:\n\
    ldr         r2,[r4,#0x0]\n\
    mov         r0,#0x80\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002774\n\
    ldr         r1,DAT_08002770\n\
    mov         r0,#0x0\n\
    b           LAB_08002788\n\
\n\
.space 2\n\
\n\
DAT_08002758:\n\
    .4byte 0x02005710\n\
DAT_0800275c:\n\
    .4byte 0x0200000C\n\
DAT_08002760:\n\
    .4byte 0x02005760\n\
DAT_08002764:\n\
    .4byte 0x02000010\n\
DAT_08002768:\n\
    .4byte 0x02000012\n\
DAT_0800276c:\n\
    .4byte 0x02000008\n\
DAT_08002770:\n\
    .4byte 0x0200001A\n\
LAB_08002774:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    and         r2,r0\n\
    ldr         r1,DAT_080027b0\n\
    cmp         r2,#0x0\n\
    beq         LAB_0800278a\n\
    ldr         r0,DAT_080027b4\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1a\n\
    lsr         r0,r0,#0x1e\n\
LAB_08002788:\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800278a:\n\
    mov         r0,#0x0\n\
    ldrsh       r1,[r1,r0]\n\
    mvn         r1,r1\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    bge         LAB_080027aa\n\
    ldr         r0,[r4,#0x0]\n\
    mov         r1,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080027bc\n\
    ldr         r0,DAT_080027b8\n\
    ldrb        r0,[r0,#0x6]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080027bc\n\
LAB_080027aa:\n\
    mov         r4,#0x0\n\
    b           LAB_080027da\n\
\n\
.space 2\n\
\n\
DAT_080027b0:\n\
    .4byte 0x0200001A\n\
DAT_080027b4:\n\
    .4byte 0x04000128\n\
DAT_080027b8:\n\
    .4byte 0x02005580\n\
LAB_080027bc:\n\
    ldr         r4,[r4,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x5\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_080027cc\n\
    mov         r4,#0x1\n\
    b           LAB_080027da\n\
LAB_080027cc:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x6\n\
    and         r4,r0\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
    asr         r4,r0,#0x1f\n\
    mov         r0,#0x2\n\
    and         r4,r0\n\
LAB_080027da:\n\
    ldr         r5,DAT_080027f0\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,r4\n\
    bne         LAB_080027fc\n\
    ldr         r0,DAT_080027f4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_080027f8\n\
    strh        r4,[r0,#0x0]\n\
    b           LAB_0800281e\n\
\n\
.space 2\n\
\n\
DAT_080027f0:\n\
    .4byte 0x02000014\n\
DAT_080027f4:\n\
    .4byte 0x02000018\n\
DAT_080027f8:\n\
    .4byte 0x02000016\n\
LAB_080027fc:\n\
    ldr         r3,DAT_08002838\n\
    ldr         r2,DAT_0800283c\n\
    ldrh        r0,[r3,#0x0]\n\
    cmp         r0,r4\n\
    beq         LAB_0800280c\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    strh        r4,[r3,#0x0]\n\
LAB_0800280c:\n\
    ldrh        r0,[r2,#0x0]\n\
    add         r1,r0,#0x1\n\
    strh        r1,[r2,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x3c\n\
    bls         LAB_0800281e\n\
    strh        r4,[r3,#0x0]\n\
    strh        r4,[r5,#0x0]\n\
LAB_0800281e:\n\
    bl          fun_080025a8\n\
    mov         r1,#0x0\n\
    ldr         r0,DAT_08002840\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800282e\n\
    mov         r1,#0x1\n\
LAB_0800282e:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08002838:\n\
    .4byte 0x02000016\n\
DAT_0800283c:\n\
    .4byte 0x02000018\n\
DAT_08002840:\n\
    .4byte 0x02000014\n\
    ");
}
__attribute__((naked)) void fun_08002844()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r0,DAT_0800286c\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,DAT_08002870\n\
    ldrh        r0,[r4,#0x0]\n\
    ldr         r1,DAT_08002874\n\
    bl          fun_080032b4\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002862\n\
    bl          fun_080025bc\n\
    strh        r5,[r4,#0x0]\n\
LAB_08002862:\n\
    mov         r0,#0x1\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_0800286c:\n\
    .4byte 0x02005750\n\
DAT_08002870:\n\
    .4byte 0x0200001C\n\
DAT_08002874:\n\
    .4byte 0x080497D0\n\
    ");
}
__attribute__((naked)) void fun_08002878()
{
    asm("\n\
    ldr         r0,DAT_0800288c\n\
    ldr         r2,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002894\n\
    ldr         r1,DAT_08002890\n\
    mov         r0,#0x0\n\
    b           LAB_080028a8\n\
\n\
.space 2\n\
\n\
DAT_0800288c:\n\
    .4byte 0x0200000C\n\
DAT_08002890:\n\
    .4byte 0x0200001A\n\
LAB_08002894:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    and         r2,r0\n\
    ldr         r1,DAT_080028b0\n\
    cmp         r2,#0x0\n\
    beq         LAB_080028aa\n\
    ldr         r0,DAT_080028b4\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x1a\n\
    lsr         r0,r0,#0x1e\n\
LAB_080028a8:\n\
    strh        r0,[r1,#0x0]\n\
LAB_080028aa:\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r1,r2]\n\
    bx          lr\n\
DAT_080028b0:\n\
    .4byte 0x0200001A\n\
DAT_080028b4:\n\
    .4byte 0x04000128\n\
    ");
}
__attribute__((naked)) void fun_080028b8()
{
    asm("\n\
    ldr         r0,DAT_080028c0\n\
    ldr         r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080028c0:\n\
    .4byte 0x0200000C\n\
    ");
}
__attribute__((naked)) void fun_080028c4()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    ldr         r0,DAT_080028e0\n\
    mov         r1,#0x1\n\
    lsl         r1,r3\n\
    ldr         r0,[r0,#0x0]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080028e8\n\
    ldr         r2,DAT_080028e4\n\
    lsl         r3,r3,#0x1\n\
    add         r1,r3,r2\n\
    mov         r0,#0x0\n\
    b           LAB_080028f2\n\
DAT_080028e0:\n\
    .4byte 0x0200000C\n\
DAT_080028e4:\n\
    .4byte 0x02000020\n\
LAB_080028e8:\n\
    ldr         r2,DAT_08002900\n\
    lsl         r3,r3,#0x1\n\
    add         r1,r3,r2\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
LAB_080028f2:\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r3,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3b\n\
    bls         LAB_08002904\n\
    mov         r0,#0x0\n\
    b           LAB_08002906\n\
DAT_08002900:\n\
    .4byte 0x02000020\n\
LAB_08002904:\n\
    mov         r0,#0x1\n\
LAB_08002906:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08002908()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r1,#0x1\n\
    ldr         r7,DAT_08002944\n\
    mov         r2,#0x0\n\
    ldr         r3,DAT_08002948\n\
    add         r6,r3,#0x0\n\
    add         r6,#0x30\n\
    add         r5,r3,#0x0\n\
    add         r5,#0x10\n\
    add         r4,r3,#0x0\n\
    add         r4,#0x20\n\
LAB_0800291e:\n\
    add         r0,r1,r7\n\
    strb        r2,[r0,#0x0]\n\
    add         r0,r1,r3\n\
    strb        r2,[r0,#0x0]\n\
    add         r0,r1,r5\n\
    strb        r2,[r0,#0x0]\n\
    add         r0,r1,r4\n\
    strb        r2,[r0,#0x0]\n\
    add         r0,r1,r6\n\
    strb        r2,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,#0xf\n\
    bls         LAB_0800291e\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002944:\n\
    .4byte 0x02005760\n\
DAT_08002948:\n\
    .4byte 0x02005710\n\
    ");
}
__attribute__((naked)) void fun_0800294c()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08002964\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800295e\n\
    bl          fun_0800244c\n\
LAB_0800295e:\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08002964:\n\
    .4byte 0x0200000C\n\
    ");
}
__attribute__((naked)) void fun_08002968()
{
    asm("\n\
    ldr         r0,DAT_08002970\n\
    ldrh        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08002970:\n\
    .4byte 0x02000008\n\
\n\
    ");
}
