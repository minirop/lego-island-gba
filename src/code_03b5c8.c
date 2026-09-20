__attribute__((naked)) void fun_0803b5c8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0xc\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     add        r6,r2,#0x0\n\
     add        r7,r3,#0x0\n\
     mov        r0,sp\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803bd38\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x78\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,#0x50\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,[sp,#0x8]\n\
     cmp        r1,#0x0\n\
     bgt        LAB_0803b5fa\n\
     mov        r2,#0x46\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803b60e\n\
LAB_0803b5fa:\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x7\n\
     ldr        r1,[sp,#0x8]\n\
     lsl        r1,r1,#0x8\n\
     bl         fun_0800354c\n\
     mov        r1,#0x80\n\
     bl         fun_0800353c\n\
     b          LAB_0803b614\n\
LAB_0803b60e:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
LAB_0803b614:\n\
     strh       r0,[r7,#0x0]\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803b620()
{
    asm("\n\
     ldr        r2,DAT_0803b62c\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0803b630\n\
     strh       r1,[r0,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803b62c:\n\
     .word 0x02000590\n\
DAT_0803b630:\n\
     .word 0x02000594\n\
    ");
}
__attribute__((naked)) void fun_0803b634()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r1,PTR_DAT_0803b6ac\n\
     ldr        r2,PTR_DAT_0803b6b0\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldr        r6,PTR_DAT_0803b6b4\n\
     ldr        r0,PTR_DAT_0803b6b8\n\
     mov        r8,r0\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r3,r1\n\
     bcs        LAB_0803b688\n\
     ldr        r5,DAT_0803b6bc\n\
     add        r4,r2,#0x0\n\
     ldr        r2,DAT_0803b6c0\n\
     mov        r12,r2\n\
LAB_0803b65c:\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r1,r0,r3\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,r12\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r2,r0,r3\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r5\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0xa0\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r3,r1\n\
     bcc        LAB_0803b65c\n\
LAB_0803b688:\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r0,[r0,#0xc]\n\
     add        r1,r7,#0x0\n\
     bl         fun_0803b1fc\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r0,[r0,#0x10]\n\
     add        r1,r7,#0x0\n\
     bl         fun_0803b1fc\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_0803b6ac:\n\
     .word       DAT_02000592\n\
PTR_DAT_0803b6b0:\n\
     .word       DAT_02000590\n\
PTR_DAT_0803b6b4:\n\
     .word       DAT_02000594\n\
PTR_DAT_0803b6b8:\n\
     .word       DAT_02000578\n\
DAT_0803b6bc:\n\
     .word 0x03002000\n\
DAT_0803b6c0:\n\
     .word 0xFE00FF00\n\
    ");
}
__attribute__((naked)) void fun_0803b6c4()
{
    asm("\n\
     ldr        r0,DAT_0803b6cc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x14]\n\
     bx         lr\n\
DAT_0803b6cc:\n\
     .word 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b6d0()
{
    asm("\n\
     ldr        r1,DAT_0803b6e0\n\
     ldr        r1,[r1,#0x0]\n\
     ldr        r1,[r1,#0x18]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803b6e0:\n\
     .word 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b6e4()
{
    asm("\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0803b6f4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r1,#0x1\n\
     ldr        r0,[r0,#0x18]\n\
     add        r0,r0,r1\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803b6f4:\n\
     .word 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b6f8()
{
    asm("\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0803b708\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,[r0,#0x4]\n\
     add        r0,r0,r1\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803b708:\n\
     .word 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b70c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_0803b720\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0xa]\n\
     ldr        r1,DAT_0803b724\n\
     bl         fun_0803b7d0\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803b720:\n\
     .word 0x02000598\n\
DAT_0803b724:\n\
     .word 0x020005A0\n\
    ");
}
__attribute__((naked)) void fun_0803b728()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x8\n\
     add        r7,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r5,DAT_0803b784\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r4,DAT_0803b788\n\
     ldr        r2,DAT_0803b78c\n\
     add        r1,r4,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803b75a\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r0,DAT_0803b790\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r1,#0xa]\n\
     lsl        r1,r1,#0x5\n\
     ldr        r0,[r0,#0x8]\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x8]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803b7d0\n\
LAB_0803b75a:\n\
     ldr        r2,[r5,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,[r2,#0x4]\n\
     ldr        r1,[r4,#0x4]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,sp\n\
     bl         fun_080035b4\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     str        r0,[r7,#0x0]\n\
     str        r1,[r7,#0x4]\n\
     add        sp,#0x8\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803b784:\n\
     .word 0x02000598\n\
DAT_0803b788:\n\
     .word 0x020005A0\n\
DAT_0803b78c:\n\
     .word 0x02710000\n\
DAT_0803b790:\n\
     .word 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b794()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x4\n\
     ldr        r4,[sp,#0xc]\n\
     add        r0,#0x78\n\
     add        r1,#0x50\n\
     add        r2,#0x78\n\
     add        r3,#0x50\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_080032c4\n\
     add        sp,#0x4\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803b7b0()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r2,sp\n\
     bl         fun_0803abc8\n\
     mov        r1,#0x0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803b7c8\n\
     mov        r1,#0x1\n\
LAB_0803b7c8:\n\
     add        r0,r1,#0x0\n\
     add        sp,#0x8\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803b7d0()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x30\n\
     add        r4,r1,#0x0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r2,sp,#0x20\n\
     mov        r1,sp\n\
     bl         fun_0803acf0\n\
     ldr        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     ldr        r2,[sp,#0x1c]\n\
     ldr        r0,[sp,#0xc]\n\
     sub        r2,r2,r0\n\
     str        r2,[sp,#0x2c]\n\
     ldr        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x28]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,[sp,#0x1c]\n\
     add        r0,r0,r2\n\
     str        r0,[r4,#0x4]\n\
     add        sp,#0x30\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803b808()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_0803b880\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     str        r1,[r0,#0x4]\n\
     str        r1,[r0,#0x8]\n\
     ldr        r0,DAT_0803b884\n\
     str        r1,[r0,#0x0]\n\
     str        r1,[r0,#0x4]\n\
     str        r1,[r0,#0x8]\n\
     ldr        r6,DAT_0803b888\n\
     ldr        r2,DAT_0803b88c\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x3\n\
     ldr        r0,DAT_0803b890\n\
     ldr        r3,DAT_0803b894\n\
     sub        r0,r0,r3\n\
     add        r7,r0,r5\n\
     ldr        r0,DAT_0803b898\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803b89c\n\
     str        r3,[r1,#0x0]\n\
     str        r2,[r1,#0x4]\n\
     lsr        r0,r7,#0x1\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x18\n\
     orr        r0,r4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r2,r7,r2\n\
     ldr        r0,DAT_0803b8a0\n\
     ldr        r3,DAT_0803b8a4\n\
     sub        r7,r0,r3\n\
     ldr        r0,DAT_0803b8a8\n\
     str        r2,[r0,#0x0]\n\
     str        r3,[r1,#0x0]\n\
     str        r2,[r1,#0x4]\n\
     lsr        r0,r7,#0x1\n\
     orr        r0,r4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r2,r2,r7\n\
     ldr        r0,DAT_0803b8ac\n\
     ldr        r3,DAT_0803b8b0\n\
     sub        r0,r0,r3\n\
     add        r7,r0,r5\n\
     ldr        r0,DAT_0803b8b4\n\
     str        r2,[r0,#0x0]\n\
     str        r3,[r1,#0x0]\n\
     str        r2,[r1,#0x4]\n\
     lsr        r0,r7,#0x1\n\
     orr        r0,r4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r2,r2,r7\n\
     str        r2,[r6,#0x0]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803b880:\n\
     .word 0x030040EC\n\
DAT_0803b884:\n\
     .word 0x030040F8\n\
DAT_0803b888:\n\
     .word 0x030040E8\n\
DAT_0803b88c:\n\
     .word 0x03003450\n\
DAT_0803b890:\n\
     .word 0x0803BEDC\n\
DAT_0803b894:\n\
     .word 0x0803BE4C\n\
DAT_0803b898:\n\
     .word 0x03004114\n\
DAT_0803b89c:\n\
     .word 0x040000D4\n\
DAT_0803b8a0:\n\
     .word 0x0803BFF0\n\
DAT_0803b8a4:\n\
     .word 0x0803BEDC\n\
DAT_0803b8a8:\n\
     .word 0x03004110\n\
DAT_0803b8ac:\n\
     .word 0x0803BE4C\n\
DAT_0803b8b0:\n\
     .word 0x0803BDFC\n\
DAT_0803b8b4:\n\
     .word 0x03004118\n\
    ");
}
__attribute__((naked)) void fun_0803b8b8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6}\n\
     ldr        r5,DAT_0803b948\n\
     add        r2,r5,#0x0\n\
     ldmia      r0!,{r3,r4,r6}\n\
     stmia      r2!,{r3,r4,r6}\n\
     ldr        r2,DAT_0803b94c\n\
     add        r0,r2,#0x0\n\
     ldmia      r1!,{r3,r4,r6}\n\
     stmia      r0!,{r3,r4,r6}\n\
     ldr        r1,[r2,#0x4]\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     mov        r0,#0xff\n\
     and        r1,r0\n\
     ldr        r3,DAT_0803b950\n\
     ldr        r2,DAT_0803b954\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r6,#0x0\n\
     ldrsh      r4,[r0,r6]\n\
     mov        r9,r4\n\
     str        r4,[r3,#0x0]\n\
     ldr        r0,DAT_0803b958\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     mov        r4,#0x0\n\
     ldrsh      r3,[r1,r4]\n\
     mov        r8,r3\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,DAT_0803b95c\n\
     mov        r6,#0x34\n\
     ldrsh      r3,[r2,r6]\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,DAT_0803b960\n\
     add        r2,#0xb4\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r2,r1]\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,DAT_0803b964\n\
     ldr        r1,[r5,#0x4]\n\
     add        r6,r1,#0x0\n\
     mul        r6,r2\n\
     str        r6,[r0,#0x0]\n\
     ldr        r0,DAT_0803b968\n\
     add        r4,r1,#0x0\n\
     mul        r4,r3\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0803b96c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,[r5,#0x8]\n\
     str        r1,[r0,#0x4]\n\
     mov        r1,r9\n\
     str        r1,[r0,#0x8]\n\
     mov        r1,r8\n\
     str        r1,[r0,#0xc]\n\
     str        r4,[r0,#0x10]\n\
     str        r2,[r0,#0x14]\n\
     str        r3,[r0,#0x18]\n\
     str        r6,[r0,#0x1c]\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803b948:\n\
     .word 0x030040EC\n\
DAT_0803b94c:\n\
     .word 0x030040F8\n\
DAT_0803b950:\n\
     .word 0x03004104\n\
DAT_0803b954:\n\
     .word 0x08049824\n\
DAT_0803b958:\n\
     .word 0x020005A8\n\
DAT_0803b95c:\n\
     .word 0x03004108\n\
DAT_0803b960:\n\
     .word 0x020005AC\n\
DAT_0803b964:\n\
     .word 0x020005B0\n\
DAT_0803b968:\n\
     .word 0x0300410C\n\
DAT_0803b96c:\n\
     .word 0x087D5EAC\n\
    ");
}
__attribute__((naked)) void fun_0803b970()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x114\n\
     add        r5,r0,#0x0\n\
     str        r1,[sp,#0xc0]\n\
     str        r2,[sp,#0xc4]\n\
     mov        r3,#0x0\n\
     ldr        r0,DAT_0803bca8\n\
     mov        r12,r0\n\
     add        r7,sp,#0xc\n\
     add        r1,sp,#0x18\n\
     mov        r10,r1\n\
     mov        r2,sp\n\
     add        r2,#0x24\n\
     str        r2,[sp,#0xd8]\n\
     mov        r4,sp\n\
     add        r4,#0x60\n\
     str        r4,[sp,#0xec]\n\
     mov        r6,sp\n\
     add        r6,#0x6c\n\
     str        r6,[sp,#0xf0]\n\
     mov        r0,sp\n\
     add        r0,#0x78\n\
     str        r0,[sp,#0xf4]\n\
     mov        r1,sp\n\
     add        r1,#0x9c\n\
     str        r1,[sp,#0x100]\n\
     add        r2,#0xc\n\
     str        r2,[sp,#0xdc]\n\
     sub        r4,#0x24\n\
     str        r4,[sp,#0xe0]\n\
     sub        r6,#0x24\n\
     str        r6,[sp,#0xe4]\n\
     sub        r0,#0x24\n\
     str        r0,[sp,#0xe8]\n\
     sub        r1,#0x18\n\
     str        r1,[sp,#0xf8]\n\
     add        r2,#0x78\n\
     str        r2,[sp,#0x104]\n\
     add        r4,#0x54\n\
     str        r4,[sp,#0xfc]\n\
     add        r6,#0x6c\n\
     str        r6,[sp,#0x108]\n\
     ldr        r4,DAT_0803bcac\n\
     mov        r2,#0x0\n\
     add        r0,r4,#0x4\n\
     mov        r9,r0\n\
     mov        r1,#0xc\n\
     add        r1,r1,r4\n\
     mov        r8,r1\n\
LAB_0803b9da:\n\
     lsl        r1,r3,#0x4\n\
     add        r0,r1,r4\n\
     str        r2,[r0,#0x0]\n\
     mov        r6,r9\n\
     add        r0,r1,r6\n\
     str        r2,[r0,#0x0]\n\
     ldr        r6,DAT_0803bcb0\n\
     add        r0,r1,r6\n\
     str        r2,[r0,#0x0]\n\
     add        r1,r8\n\
     str        r2,[r1,#0x0]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0xff\n\
     bls        LAB_0803b9da\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     bl         __floatsisf\n\
     ldr        r1,DAT_0803bcb4\n\
     bl         __mulsf3\n\
     str        r0,[sp,#0xc8]\n\
     mov        r1,sp\n\
     add        r0,r5,#0x0\n\
     ldmia      r0!,{r2,r3,r4}\n\
     stmia      r1!,{r2,r3,r4}\n\
     add        r1,r7,#0x0\n\
     ldmia      r0!,{r2,r3,r6}\n\
     stmia      r1!,{r2,r3,r6}\n\
     mov        r1,r10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x18\n\
     ldmia      r0!,{r2,r4,r6}\n\
     stmia      r1!,{r2,r4,r6}\n\
     ldr        r1,[sp,#0xd8]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x24\n\
     ldmia      r0!,{r3,r4,r5}\n\
     stmia      r1!,{r3,r4,r5}\n\
     ldr        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x0]\n\
     bl         __subsf3\n\
     ldr        r4,DAT_0803bcb8\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     str        r0,[sp,#0x60]\n\
     mov        r6,r10\n\
     ldr        r0,[r6,#0x4]\n\
     ldr        r1,[sp,#0x4]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     ldr        r1,[sp,#0xec]\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,[r6,#0x8]\n\
     ldr        r1,[sp,#0x8]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     ldr        r2,[sp,#0xec]\n\
     str        r0,[r2,#0x8]\n\
     ldr        r0,[sp,#0x24]\n\
     ldr        r1,[sp,#0xc]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     str        r0,[sp,#0x6c]\n\
     ldr        r3,[sp,#0xd8]\n\
     ldr        r0,[r3,#0x4]\n\
     ldr        r1,[r7,#0x4]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     ldr        r5,[sp,#0xf0]\n\
     str        r0,[r5,#0x4]\n\
     ldr        r6,[sp,#0xd8]\n\
     ldr        r0,[r6,#0x8]\n\
     ldr        r1,[r7,#0x8]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[sp,#0x0]\n\
     str        r0,[sp,#0x78]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0xf4]\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,[sp,#0x8]\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[sp,#0xc]\n\
     ldr        r2,[sp,#0x100]\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,[r7,#0x4]\n\
     str        r0,[r2,#0x4]\n\
     ldr        r0,[r7,#0x8]\n\
     str        r0,[r2,#0x8]\n\
     ldr        r1,[sp,#0xdc]\n\
     mov        r0,sp\n\
     ldmia      r0!,{r3,r4,r5}\n\
     stmia      r1!,{r3,r4,r5}\n\
     ldr        r1,[sp,#0xe0]\n\
     add        r0,r7,#0x0\n\
     ldmia      r0!,{r2,r3,r6}\n\
     stmia      r1!,{r2,r3,r6}\n\
     ldr        r1,[sp,#0xe4]\n\
     mov        r0,r10\n\
     ldmia      r0!,{r4,r5,r6}\n\
     stmia      r1!,{r4,r5,r6}\n\
     ldr        r1,[sp,#0xe8]\n\
     ldr        r0,[sp,#0xd8]\n\
     ldmia      r0!,{r2,r3,r4}\n\
     stmia      r1!,{r2,r3,r4}\n\
     ldr        r5,[sp,#0xdc]\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xdc]\n\
     bl         fun_08003660\n\
     ldr        r6,[sp,#0xe0]\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xe0]\n\
     bl         fun_08003660\n\
     ldr        r0,[sp,#0xe4]\n\
     ldr        r1,[r0,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xe4]\n\
     bl         fun_08003660\n\
     ldr        r2,[sp,#0xe8]\n\
     ldr        r1,[r2,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xe8]\n\
     bl         fun_08003660\n\
     ldr        r0,[sp,#0x3c]\n\
     ldr        r1,[sp,#0x30]\n\
     bl         __subsf3\n\
     ldr        r1,DAT_0803bcbc\n\
     bl         __mulsf3\n\
     bl         __fixsfsi\n\
     ldr        r3,[sp,#0xc0]\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r0,[r5,#0x8]\n\
     bl         __fixsfsi\n\
     ldr        r4,[sp,#0xc4]\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r4,DAT_0803bcc0\n\
     ldr        r5,[sp,#0xf8]\n\
     str        r5,[sp,#0xcc]\n\
     ldr        r6,[sp,#0xf4]\n\
     mov        r10,r6\n\
     ldr        r0,[sp,#0x104]\n\
     str        r0,[sp,#0xd0]\n\
     ldr        r7,[sp,#0x100]\n\
LAB_0803bb50:\n\
     ldr        r1,[sp,#0xcc]\n\
     mov        r0,r10\n\
     ldmia      r0!,{r2,r3,r5}\n\
     stmia      r1!,{r2,r3,r5}\n\
     ldr        r6,[sp,#0xcc]\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xcc]\n\
     bl         fun_08003660\n\
     ldr        r1,[sp,#0xd0]\n\
     add        r0,r7,#0x0\n\
     ldmia      r0!,{r2,r3,r5}\n\
     stmia      r1!,{r2,r3,r5}\n\
     ldr        r6,[sp,#0xd0]\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r0,[sp,#0xc8]\n\
     bl         __divsf3\n\
     add        r1,r0,#0x0\n\
     ldr        r0,[sp,#0xd0]\n\
     bl         fun_08003660\n\
     lsl        r0,r4,#0x10\n\
     asr        r0,r0,#0x10\n\
     str        r0,[sp,#0xd4]\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803bc30\n\
     ldr        r0,[sp,#0xf8]\n\
     ldr        r0,[r0,#0x8]\n\
     str        r0,[sp,#0x10c]\n\
     ldr        r2,[sp,#0xfc]\n\
     ldr        r1,[r2,#0x8]\n\
     bl         __subsf3\n\
     add        r5,r0,#0x0\n\
     ldr        r3,[sp,#0xf8]\n\
     ldr        r6,[r3,#0x0]\n\
     ldr        r4,[sp,#0xfc]\n\
     ldr        r1,[r4,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         __subsf3\n\
     ldr        r1,[sp,#0x104]\n\
     ldr        r1,[r1,#0x8]\n\
     str        r1,[sp,#0x110]\n\
     ldr        r2,[sp,#0x104]\n\
     ldr        r2,[r2,#0x0]\n\
     mov        r9,r2\n\
     ldr        r3,[sp,#0xd4]\n\
     lsl        r3,r3,#0x4\n\
     mov        r8,r3\n\
     ldr        r4,DAT_0803bcac\n\
     add        r4,#0x4\n\
     add        r4,r8\n\
     ldr        r1,DAT_0803bcc4\n\
     bl         __mulsf3\n\
     bl         __fixsfsi\n\
     str        r0,[r4,#0x0]\n\
     ldr        r4,DAT_0803bcac\n\
     add        r4,#0xc\n\
     add        r4,r8\n\
     add        r0,r5,#0x0\n\
     bl         __negsf2\n\
     ldr        r1,DAT_0803bcc4\n\
     bl         __mulsf3\n\
     bl         __fixsfsi\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,r9\n\
     add        r1,r6,#0x0\n\
     bl         __subsf3\n\
     ldr        r4,DAT_0803bcc8\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     add        r5,r0,#0x0\n\
     ldr        r0,[sp,#0x110]\n\
     ldr        r1,[sp,#0x10c]\n\
     bl         __subsf3\n\
     add        r1,r4,#0x0\n\
     bl         __divsf3\n\
     add        r6,r0,#0x0\n\
     ldr        r4,DAT_0803bcac\n\
     add        r4,r8\n\
     add        r0,r5,#0x0\n\
     ldr        r1,DAT_0803bcc4\n\
     bl         __mulsf3\n\
     bl         __fixsfsi\n\
     str        r0,[r4,#0x0]\n\
     ldr        r4,DAT_0803bcb0\n\
     add        r8,r4\n\
     add        r0,r6,#0x0\n\
     ldr        r1,DAT_0803bcc4\n\
     bl         __mulsf3\n\
     bl         __fixsfsi\n\
     mov        r5,r8\n\
     str        r0,[r5,#0x0]\n\
LAB_0803bc30:\n\
     ldr        r1,[sp,#0xfc]\n\
     ldr        r0,[sp,#0xcc]\n\
     ldmia      r0!,{r2,r3,r6}\n\
     stmia      r1!,{r2,r3,r6}\n\
     ldr        r1,[sp,#0x108]\n\
     ldr        r0,[sp,#0xd0]\n\
     ldmia      r0!,{r4,r5,r6}\n\
     stmia      r1!,{r4,r5,r6}\n\
     ldr        r0,[sp,#0x78]\n\
     ldr        r1,[sp,#0x60]\n\
     bl         __addsf3\n\
     str        r0,[sp,#0x78]\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x4]\n\
     ldr        r2,[sp,#0xec]\n\
     ldr        r1,[r2,#0x4]\n\
     bl         __addsf3\n\
     mov        r3,r10\n\
     str        r0,[r3,#0x4]\n\
     ldr        r0,[r3,#0x8]\n\
     ldr        r4,[sp,#0xec]\n\
     ldr        r1,[r4,#0x8]\n\
     bl         __addsf3\n\
     mov        r5,r10\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[sp,#0x6c]\n\
     bl         __addsf3\n\
     str        r0,[r7,#0x0]\n\
     ldr        r0,[r7,#0x4]\n\
     ldr        r6,[sp,#0xf0]\n\
     ldr        r1,[r6,#0x4]\n\
     bl         __addsf3\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r7,#0x8]\n\
     ldr        r1,[r6,#0x8]\n\
     bl         __addsf3\n\
     str        r0,[r7,#0x8]\n\
     ldr        r0,[sp,#0xd4]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x9f\n\
     bgt        LAB_0803bc98\n\
     b          LAB_0803bb50\n\
LAB_0803bc98:\n\
     add        sp,#0x114\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803bca8:\n\
     .word 0x030040EC\n\
DAT_0803bcac:\n\
     .word 0x03002440\n\
DAT_0803bcb0:\n\
     .word 0x03002448\n\
DAT_0803bcb4:\n\
     .word 0x3B800000\n\
DAT_0803bcb8:\n\
     .word 0x43200000\n\
DAT_0803bcbc:\n\
     .word 0x3F000000\n\
DAT_0803bcc0:\n\
     .word 0x0000FFFF\n\
DAT_0803bcc4:\n\
     .word 0x43800000\n\
DAT_0803bcc8:\n\
     .word 0x43700000\n\
    ");
}
__attribute__((naked)) void fun_0803bccc()
{
    asm("\n\
     ldr        r2,PTR_DAT_0803bcf4\n\
     ldr        r0,PTR_VCOUNT_0803bcf8\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0803bcfc\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0803bd00\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,PTR_BG1HOFS_0803bd04\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
PTR_DAT_0803bcf4:\n\
     .word       DAT_03002440\n\
PTR_VCOUNT_0803bcf8:\n\
     .word       VCOUNT\n\
PTR_DAT_0803bcfc:\n\
     .word       DAT_03003448\n\
PTR_DAT_0803bd00:\n\
     .word       DAT_0300344c\n\
PTR_BG1HOFS_0803bd04:\n\
     .word       BG1HOFS\n\
    ");
}
__attribute__((naked)) void fun_0803bd08()
{
    asm("\n\
     ldr        r0,DAT_0803bd0c\n\
     bx         lr\n\
DAT_0803bd0c:\n\
     .word 0x030040EC\n\
    ");
}
__attribute__((naked)) void fun_0803bd10()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0803bd34\n\
     ldr        r2,[r1,#0x0]\n\
     ldr        r3,[r4,#0x0]\n\
     sub        r2,r2,r3\n\
     asr        r2,r2,#0x8\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,[r1,#0x4]\n\
     ldr        r2,[r4,#0x8]\n\
     sub        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r0,#0x4]\n\
     mov        r1,#0x2\n\
     str        r1,[r0,#0x8]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803bd34:\n\
     .word 0x030040EC\n\
    ");
}
__attribute__((naked)) void fun_0803bd38()
{
    asm("\n\
     push       {lr}\n\
     ldr        r3,DAT_0803bd48\n\
     ldr        r2,DAT_0803bd4c\n\
     ldr        r3,[r3,#0x0]\n\
     bl         _call_via_r3\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803bd48:\n\
     .word 0x03004110\n\
DAT_0803bd4c:\n\
     .word 0x03004068\n\
    ");
}
__attribute__((naked)) void fun_0803bd50()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r6,[r0,#0x0]\n\
     ldr        r5,[r0,#0x4]\n\
     ldr        r1,DAT_0803bd80\n\
     ldr        r4,[r1,#0x0]\n\
     add        r1,r6,#0x0\n\
     mul        r1,r4\n\
     ldr        r2,DAT_0803bd84\n\
     ldr        r3,[r2,#0x0]\n\
     add        r2,r5,#0x0\n\
     mul        r2,r3\n\
     add        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r0,#0x0]\n\
     add        r1,r5,#0x0\n\
     mul        r1,r4\n\
     add        r2,r6,#0x0\n\
     mul        r2,r3\n\
     sub        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r0,#0x4]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803bd80:\n\
     .word 0x03004104\n\
DAT_0803bd84:\n\
     .word 0x020005A8\n\
    ");
}
__attribute__((naked)) void fun_0803bd88()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r6,r0,#0x0\n\
     ldr        r5,[r1,#0x8]\n\
     ldr        r4,[r1,#0x4]\n\
     ldr        r0,DAT_0803bdf4\n\
     ldr        r3,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     mul        r1,r3\n\
     ldr        r0,DAT_0803bdf8\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     mul        r0,r2\n\
     add        r1,r1,r0\n\
     asr        r7,r1,#0x8\n\
     str        r7,[r6,#0x8]\n\
     add        r0,r4,#0x0\n\
     mul        r0,r2\n\
     add        r1,r5,#0x0\n\
     mul        r1,r3\n\
     sub        r0,r0,r1\n\
     asr        r0,r0,#0x8\n\
     str        r0,[r6,#0x4]\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803bdc8\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x7\n\
     add        r1,r7,#0x0\n\
     bl         fun_0800354c\n\
     mov        r8,r0\n\
LAB_0803bdc8:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,r8\n\
     bl         fun_0800353c\n\
     str        r0,[r6,#0x0]\n\
     ldr        r0,[r6,#0x4]\n\
     mov        r1,r8\n\
     bl         fun_0800353c\n\
     ldr        r1,[r6,#0x0]\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r6,#0x0]\n\
     asr        r0,r0,#0x8\n\
     str        r0,[r6,#0x4]\n\
     ldr        r0,[r6,#0x8]\n\
     asr        r0,r0,#0x8\n\
     str        r0,[r6,#0x8]\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803bdf4:\n\
     .word 0x03004108\n\
DAT_0803bdf8:\n\
     .word 0x020005AC\n\
    ");
}
