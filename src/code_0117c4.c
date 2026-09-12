__attribute__((naked)) void fun_080117c4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x2\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    beq         LAB_080117dc\n\
    cmp         r0,#0x1\n\
    beq         LAB_080117e8\n\
    b           LAB_080117ee\n\
LAB_080117dc:\n\
    mov         r1,#0xef\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_080117ee\n\
LAB_080117e8:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800eb28\n\
LAB_080117ee:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
__attribute__((naked)) void fun_080117f4()
{
    asm("\n\
    mov        r1,#0x2\n\
    strb       r1,[r0,#0x18]\n\
    bx         lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080117fc()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x3\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    add         r1,r0,#0x0\n\
    cmp         r0,#0x1\n\
    beq         LAB_08011828\n\
    cmp         r0,#0x1\n\
    bgt         LAB_0801181a\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011820\n\
    b           LAB_0801183a\n\
LAB_0801181a:\n\
    cmp         r1,#0x2\n\
    beq         LAB_08011834\n\
    b           LAB_0801183a\n\
LAB_08011820:\n\
    ldr         r1,DAT_08011824\n\
    b           LAB_0801182c\n\
DAT_08011824:\n\
    .4byte 0x00000507\n\
LAB_08011828:\n\
    mov         r1,#0xef\n\
    lsl         r1,r1,#0x2\n\
LAB_0801182c:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_0801183a\n\
LAB_08011834:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800eb28\n\
LAB_0801183a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
__attribute__((naked)) void fun_08011840()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011848()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011854()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2e\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011882\n\
     ldr        r1,DAT_08011888\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011882\n\
     mov        r0,#0x2e\n\
     bl         fun_080017b8\n\
     ldr        r0,DAT_0801188c\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
LAB_08011882:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
DAT_08011888:\n\
    .4byte 0x00000219\n\
DAT_0801188c:\n\
    .4byte 0x0200DCA0\n\
    ");
}
__attribute__((naked)) void fun_08011890()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011898()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_080118a4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x71\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080118b8\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
LAB_080118b8:\n\
     ldr        r1,DAT_080118d4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080118ce\n\
     mov        r0,#0x42\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_080118ce:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
DAT_080118d4:\n\
    .4byte 0x00000229\n\
    ");
}
__attribute__((naked)) void fun_080118d8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011950\n\
     mov        r0,#0x10\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     bne        LAB_0801190c\n\
     ldr        r0,DAT_08011900\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08011904\n\
     ldr        r2,DAT_08011908\n\
     b          LAB_08011924\n\
.space 2\n\
DAT_08011900:\n\
    .4byte 0x0200DCA0\n\
DAT_08011904:\n\
    .4byte 0x0200DC90\n\
DAT_08011908:\n\
    .4byte 0x0000022D\n\
LAB_0801190c:\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08011930\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011940\n\
     ldr        r1,DAT_08011934\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08011938\n\
     ldr        r2,DAT_0801193c\n\
LAB_08011924:\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     b          LAB_08011948\n\
DAT_08011930:\n\
    .4byte 0x00000DCA\n\
DAT_08011934:\n\
    .4byte 0x0200DCA0\n\
DAT_08011938:\n\
    .4byte 0x0200DC90\n\
DAT_0801193c:\n\
    .4byte 0x00000227\n\
LAB_08011940:\n\
     bl         fun_0800d4f8\n\
     bl         fun_0800ddc8\n\
LAB_08011948:\n\
     ldr        r0,DAT_08011958\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
LAB_08011950:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011958:\n\
    .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_0801195c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011964()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_0801197c\n\
     cmp        r4,#0x1\n\
     beq        LAB_08011990\n\
     b          LAB_08011998\n\
LAB_0801197c:\n\
     ldr        r1,DAT_0801198c\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08011998\n\
.space 2\n\
DAT_0801198c:\n\
    .4byte 0x000003B7\n\
LAB_08011990:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08011998:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_080119a0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_080119a8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080119c0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080119d0\n\
     b          LAB_080119d6\n\
LAB_080119c0:\n\
     ldr        r1,DAT_080119cc\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080119d6\n\
.space 2\n\
DAT_080119cc:\n\
    .4byte 0x000003B9\n\
LAB_080119d0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080119d6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080119dc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_080119e4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011a0e\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08011a02\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011a08\n\
     b          LAB_08011a22\n\
LAB_08011a02:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08011a1c\n\
     b          LAB_08011a22\n\
LAB_08011a08:\n\
     mov        r1,#0xe2\n\
     lsl        r1,r1,#0x2\n\
     b          LAB_08011a10\n\
LAB_08011a0e:\n\
     ldr        r1,DAT_08011a18\n\
LAB_08011a10:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011a22\n\
DAT_08011a18:\n\
    .4byte 0x0000038A\n\
LAB_08011a1c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011a22:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011a28()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011a30()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011a3c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_08011a64\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011a5c\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x2d\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_08011a68\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08011a5c:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011a64:\n\
    .4byte 0x00000169\n\
DAT_08011a68:\n\
    .4byte 0x0200DCA0\n\
    ");
}
__attribute__((naked)) void fun_08011a6c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r6,DAT_08011b14\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08011b18\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011ac4\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x7\n\
     and        r0,r1\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08011ac4:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011b08\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x7\n\
     and        r0,r1\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08011b08:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
DAT_08011b14:\n\
    .4byte 0x0877FCEC\n\
DAT_08011b18:\n\
    .4byte 0x00000E9A\n\
    ");
}
__attribute__((naked)) void fun_08011b1c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011b24()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011b2c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x65\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011b44\n\
     ldr        r1,DAT_08011b40\n\
     b          LAB_08011b6e\n\
DAT_08011b40:\n\
    .4byte 0x0000032F\n\
LAB_08011b44:\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011b6c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08011b5c\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011b62\n\
     b          LAB_08011b82\n\
LAB_08011b5c:\n\
     cmp        r0,#0x2\n\
     beq        LAB_08011b7c\n\
     b          LAB_08011b82\n\
LAB_08011b62:\n\
     ldr        r1,DAT_08011b68\n\
     b          LAB_08011b6e\n\
.space 2\n\
DAT_08011b68:\n\
    .4byte 0x00000331\n\
LAB_08011b6c:\n\
     ldr        r1,DAT_08011b78\n\
LAB_08011b6e:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011b82\n\
.space 2\n\
DAT_08011b78:\n\
    .4byte 0x00000511\n\
LAB_08011b7c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011b82:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011b88()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011b90()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x6b\n\
     bl         fun_080034c0\n\
     add        r5,r0,#0x0\n\
     ldrh       r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011be0\n\
     mov        r0,#0x10\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011be0\n\
     mov        r1,#0xda\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011bfa\n\
     bl         fun_0800fb60\n\
     bl         fun_0800ddc8\n\
     ldr        r2,DAT_08011bd8\n\
     ldr        r0,DAT_08011bdc\n\
     add        r1,r2,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     strb       r0,[r2,#0x18]\n\
     b          LAB_08011bfa\n\
.space 2\n\
DAT_08011bd8:\n\
    .4byte 0x020006A0\n\
DAT_08011bdc:\n\
    .4byte 0x00000B48\n\
LAB_08011be0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011bfa\n\
     ldrh       r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011bfa\n\
     mov        r0,#0x21\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08011bfa:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011c00()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011c1e\n\
     bl         fun_0800d3f8\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     ldr        r0,DAT_08011c24\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
LAB_08011c1e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
DAT_08011c24:\n\
    .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08011c28()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x6e\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011c4e\n\
     mov        r1,#0xd7\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011c4a\n\
     b          LAB_08011d48\n\
LAB_08011c4a:\n\
     mov        r0,#0x16\n\
     b          LAB_08011d12\n\
LAB_08011c4e:\n\
     mov        r0,#0x2b\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011cd0\n\
     mov        r0,#0x2c\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011cd0\n\
     mov        r0,#0x2d\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011cd0\n\
     mov        r0,#0x2e\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011cd0\n\
     mov        r1,#0xe9\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d1a\n\
     mov        r0,#0x2b\n\
     bl         fun_080018e4\n\
     mov        r0,#0x2c\n\
     bl         fun_080018e4\n\
     mov        r0,#0x2d\n\
     bl         fun_080018e4\n\
     mov        r0,#0x2e\n\
     bl         fun_080018e4\n\
     mov        r0,#0x18\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_08011ccc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x23\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1a\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     mov        r0,#0x19\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     b          LAB_08011d1a\n\
DAT_08011ccc:\n\
    .4byte 0x0200DCA0\n\
LAB_08011cd0:\n\
     mov        r0,#0x2b\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d00\n\
     mov        r0,#0x2c\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d00\n\
     mov        r0,#0x2d\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d00\n\
     mov        r0,#0x2e\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08011d1a\n\
LAB_08011d00:\n\
     mov        r1,#0xd5\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d1a\n\
     mov        r0,#0x23\n\
LAB_08011d12:\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08011d48\n\
LAB_08011d1a:\n\
     mov        r0,#0x10\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d32\n\
     mov        r1,#0xd6\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011d48\n\
LAB_08011d32:\n\
     ldr        r1,DAT_08011d50\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d48\n\
     mov        r0,#0x17\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08011d48:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011d50:\n\
    .4byte 0x000001A7\n\
    ");
}
__attribute__((naked)) void fun_08011d54()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011d5c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011d68()
{
    asm("\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011d70()
{
    asm("\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011d74()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x10]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011d80()
{
    asm("\n\
     push       {lr}\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x10]\n\
     bl         fun_0800eb28\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011d96\n\
     ldr        r1,DAT_08011d9c\n\
     mov        r0,#0x9c\n\
     strh       r0,[r1,#0x0]\n\
LAB_08011d96:\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011d9c:\n\
    .4byte 0x020025BC\n\
    ");
}
__attribute__((naked)) void fun_08011da0()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x10\n\
     add        r1,r0,#0x0\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x16]\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011db8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x10]\n\
     b          LAB_08011dba\n\
LAB_08011db8:\n\
     strh       r2,[r1,#0x10]\n\
LAB_08011dba:\n\
     mov        r2,#0xbc\n\
     lsl        r2,r2,#0x1\n\
     mov        r3,#0xbb\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x5\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r1,#0x0\n\
     mov        r1,#0x1c\n\
     bl         fun_0800ebec\n\
     add        sp,#0x10\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011de0()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x10\n\
     add        r1,r0,#0x0\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x16]\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011df8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x10]\n\
     b          LAB_08011dfa\n\
LAB_08011df8:\n\
     strh       r2,[r1,#0x10]\n\
LAB_08011dfa:\n\
     mov        r2,#0xbc\n\
     lsl        r2,r2,#0x1\n\
     mov        r3,#0xbf\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x5\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r1,#0x0\n\
     mov        r1,#0x1c\n\
     bl         fun_0800ebec\n\
     add        sp,#0x10\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011e20()
{
    asm("\n\
     mov        r1,#0x4\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011e28()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011e34()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     ldr        r1,DAT_08011e60\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011e58\n\
     mov        r4,#0x0\n\
     mov        r0,#0x2\n\
     strb       r0,[r5,#0x18]\n\
     mov        r0,#0xf\n\
     bl         fun_080017b8\n\
     ldr        r0,DAT_08011e64\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_0800d4d0\n\
LAB_08011e58:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011e60:\n\
    .4byte 0x00000212\n\
DAT_08011e64:\n\
    .4byte 0x0200DCA0\n\
    ");
}
__attribute__((naked)) void fun_08011e68()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x6f\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011e7c\n\
     mov        r0,#0x5\n\
     strb       r0,[r4,#0x18]\n\
LAB_08011e7c:\n\
     ldr        r1,DAT_08011e98\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011e92\n\
     mov        r0,#0x1c\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08011e92:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
DAT_08011e98:\n\
    .4byte 0x0000020A\n\
    ");
}
__attribute__((naked)) void fun_08011e9c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011ee8\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08011ed0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011edc\n\
     ldr        r1,DAT_08011ed4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08011ed8\n\
     mov        r2,#0x84\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     b          LAB_08011ee0\n\
DAT_08011ed0:\n\
    .4byte 0x00000DD6\n\
DAT_08011ed4:\n\
    .4byte 0x0200DCA0\n\
DAT_08011ed8:\n\
    .4byte 0x0200DC90\n\
LAB_08011edc:\n\
     bl         fun_0800d19c\n\
LAB_08011ee0:\n\
     ldr        r0,DAT_08011ef0\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
LAB_08011ee8:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
DAT_08011ef0:\n\
    .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08011ef4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011efc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011f14\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011f20\n\
     b          LAB_08011f26\n\
LAB_08011f14:\n\
     mov        r1,#0xe4\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011f26\n\
LAB_08011f20:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011f26:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011f2c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011f34()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011f4c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011f5c\n\
     b          LAB_08011f62\n\
LAB_08011f4c:\n\
     ldr        r1,DAT_08011f58\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011f62\n\
.space 2\n\
DAT_08011f58:\n\
    .4byte 0x00000391\n\
LAB_08011f5c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011f62:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011f68()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011f70()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011f7c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011f84()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011f9c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011fac\n\
     b          LAB_08011fb2\n\
LAB_08011f9c:\n\
     ldr        r1,DAT_08011fa8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011fb2\n\
.space 2\n\
DAT_08011fa8:\n\
    .4byte 0x00000392\n\
LAB_08011fac:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011fb2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011fb8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011fc0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011fd8\n\
     cmp        r0,#0x1\n\
     beq        LAB_08011fe8\n\
     b          LAB_08011fee\n\
LAB_08011fd8:\n\
     ldr        r1,DAT_08011fe4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011fee\n\
.space 2\n\
DAT_08011fe4:\n\
    .4byte 0x00000393\n\
LAB_08011fe8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08011fee:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08011ff4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08011ffc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012014\n\
     cmp        r0,#0x1\n\
     beq        LAB_08012020\n\
     b          LAB_08012026\n\
LAB_08012014:\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012026\n\
LAB_08012020:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012026:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801202c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_08012034()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801204c\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801205c\n\
     b          LAB_08012062\n\
LAB_0801204c:\n\
     ldr        r1,DAT_08012058\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012062\n\
.space 2\n\
DAT_08012058:\n\
    .4byte 0x000003BB\n\
LAB_0801205c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012062:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
     ");
}
