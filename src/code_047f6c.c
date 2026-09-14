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
    bl          strcmp\n\
    cmp         r0,#0x0\n\
    beq         LAB_08047f9c\n\
    ldr         r1,DAT_08047f98\n\
    add         r0,r4,#0x0\n\
    bl          strcmp\n\
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
    bl          _sbrk_r\n\
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
    bl          _sbrk_r\n\
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
    bl          _free_r\n\
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
    bl          __divsi3\n\
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
    bl          __divdf3\n\
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
    bl          __muldf3\n\
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
