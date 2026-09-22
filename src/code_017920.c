__attribute__((naked)) void fun_08017920()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x18\n\
     add        r1,sp,#0x14\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r4,DAT_08017a00\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08017a04\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r2,[r1,#0x0]\n\
     str        r1,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08017a08\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xca\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r5,DAT_08017a0c\n\
     add        r0,r5,#0x0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     add        r1,sp,#0x4\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r5,#0x0\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x6]\n\
     add        r0,r1,#0x0\n\
     strh       r5,[r0,#0x8]\n\
     strh       r5,[r0,#0xc]\n\
     str        r5,[sp,#0x4]\n\
     strh       r5,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_08017a10\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_08017a14\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08017a18\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_08017a1c\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     mov        r0,#0x3\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_08005aa4\n\
     ldr        r4,DAT_08017a20\n\
     ldr        r0,DAT_08017a24\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_08017b5c\n\
     ldr        r2,DAT_08017a28\n\
     ldr        r0,DAT_08017a2c\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldrh       r3,[r4,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x1d\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x8\n\
     mov        r2,#0x13\n\
     mov        r3,#0x1\n\
     bl         fun_08017078\n\
     ldr        r1,DAT_08017a30\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08017a34\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r5,[r6,#0x0]\n\
     bl         fun_0803dd5c\n\
     mov        r0,#0x0\n\
     add        sp,#0x18\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08017a00:\n\
     .word 0x040000D4\n\
DAT_08017a04:\n\
     .word 0x8100C000\n\
DAT_08017a08:\n\
     .word 0x81000200\n\
DAT_08017a0c:\n\
     .word 0x0200DCF0\n\
DAT_08017a10:\n\
     .word 0x0844993C\n\
DAT_08017a14:\n\
     .word 0x0600C000\n\
DAT_08017a18:\n\
     .word 0x80002000\n\
DAT_08017a1c:\n\
     .word 0x0000FEFF\n\
DAT_08017a20:\n\
     .word 0x0200DCE0\n\
DAT_08017a24:\n\
     .word 0x020025E8\n\
DAT_08017a28:\n\
     .word 0x08669620\n\
DAT_08017a2c:\n\
     .word 0x020025B4\n\
DAT_08017a30:\n\
     .word 0x0200DC94\n\
DAT_08017a34:\n\
     .word 0x0200DCE8\n\
    ");
}
__attribute__((naked)) void fun_08017a38()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x4\n\
     bl         fun_080013f4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017b40\n\
     ldr        r0,DAT_08017ab8\n\
     ldrh       r4,[r0,#0x0]\n\
     ldr        r6,DAT_08017abc\n\
     ldr        r7,DAT_08017ac0\n\
     ldr        r1,[r7,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r5,DAT_08017ac4\n\
     ldrh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r0,r6,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     bl         strlen\n\
     cmp        r4,r0\n\
     bne        LAB_08017b06\n\
     ldrh       r1,[r5,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r0,r6\n\
     ldrb       r0,[r0,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017af4\n\
     ldr        r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017aa2\n\
     ldr        r0,DAT_08017ac8\n\
     cmp        r1,r0\n\
     beq        LAB_08017aa2\n\
     ldr        r4,DAT_08017acc\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017aa2\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x29\n\
     bne        LAB_08017aee\n\
LAB_08017aa2:\n\
     ldr        r4,DAT_08017acc\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017ad0\n\
     bl         fun_080010d8\n\
     b          LAB_08017b40\n\
.space 1\n\
.space 1\n\
DAT_08017ab8:\n\
     .word 0x0200DC94\n\
DAT_08017abc:\n\
     .word 0x08669620\n\
DAT_08017ac0:\n\
     .word 0x020025B4\n\
DAT_08017ac4:\n\
     .word 0x0200DCE0\n\
DAT_08017ac8:\n\
     .word 0x000006BD\n\
DAT_08017acc:\n\
     .word 0x020025E8\n\
LAB_08017ad0:\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x29\n\
     bne        LAB_08017ae4\n\
     bl         fun_08017d50\n\
     b          LAB_08017b40\n\
LAB_08017ae4:\n\
     bl         fun_08017df0\n\
     bl         fun_08017d74\n\
     b          LAB_08017b40\n\
LAB_08017aee:\n\
     ldr        r1,DAT_08017b48\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r5,#0x0]\n\
LAB_08017af4:\n\
     ldr        r1,DAT_08017b4c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08017b50\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_08017d74\n\
LAB_08017b06:\n\
     mov        r0,#0x1\n\
     bl         fun_08017b5c\n\
     ldr        r4,DAT_08017b50\n\
     ldr        r3,DAT_08017b54\n\
     ldr        r0,DAT_08017b58\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r2,DAT_08017b4c\n\
     ldrh       r5,[r2,#0x0]\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r3,#0x4\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r1,[r4,#0x0]\n\
     add        r0,r1,r0\n\
     mov        r1,#0x1d\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x8\n\
     mov        r2,#0x13\n\
     mov        r3,#0x1\n\
     bl         fun_08017078\n\
     ldrh       r2,[r4,#0x0]\n\
     add        r0,r0,r2\n\
     strh       r0,[r4,#0x0]\n\
LAB_08017b40:\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08017b48:\n\
     .word 0x000006BC\n\
DAT_08017b4c:\n\
     .word 0x0200DCE0\n\
DAT_08017b50:\n\
     .word 0x0200DC94\n\
DAT_08017b54:\n\
     .word 0x08669620\n\
DAT_08017b58:\n\
     .word 0x020025B4\n\
    ");
}
__attribute__((naked)) void fun_08017b5c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r7,#0x0\n\
LAB_08017b6e:\n\
     mov        r6,#0x0\n\
     add        r0,r7,#0x7\n\
     sub        r1,r7,#0x1\n\
     mov        r8,r1\n\
     add        r1,r7,#0x1\n\
     mov        r9,r1\n\
     mov        r1,#0x1f\n\
     and        r0,r1\n\
     lsl        r5,r0,#0x10\n\
LAB_08017b80:\n\
     mov        r4,#0x3f\n\
     and        r4,r6\n\
     cmp        r7,#0x0\n\
     bne        LAB_08017bb2\n\
     cmp        r6,#0x0\n\
     bne        LAB_08017b98\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x1\n\
     bl         fun_08017250\n\
     b          LAB_08017bb2\n\
LAB_08017b98:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_08017ba8\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x2\n\
     bl         fun_08017250\n\
     b          LAB_08017bb2\n\
LAB_08017ba8:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x8\n\
     bl         fun_08017250\n\
LAB_08017bb2:\n\
     mov        r0,r8\n\
     cmp        r0,#0xa\n\
     bhi        LAB_08017bf4\n\
     cmp        r6,#0x0\n\
     bne        LAB_08017bc8\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x5\n\
     bl         fun_08017250\n\
     b          LAB_08017bf4\n\
LAB_08017bc8:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_08017bd8\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x6\n\
     bl         fun_08017250\n\
     b          LAB_08017bf4\n\
LAB_08017bd8:\n\
     mov        r1,r10\n\
     cmp        r1,#0x0\n\
     beq        LAB_08017bea\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x9\n\
     bl         fun_08017250\n\
     b          LAB_08017bf4\n\
LAB_08017bea:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x0\n\
     bl         fun_08017250\n\
LAB_08017bf4:\n\
     cmp        r7,#0xb\n\
     bls        LAB_08017c22\n\
     cmp        r6,#0x0\n\
     bne        LAB_08017c08\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x3\n\
     bl         fun_08017250\n\
     b          LAB_08017c22\n\
LAB_08017c08:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_08017c18\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x4\n\
     bl         fun_08017250\n\
     b          LAB_08017c22\n\
LAB_08017c18:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x7\n\
     bl         fun_08017250\n\
LAB_08017c22:\n\
     add        r6,#0x1\n\
     cmp        r6,#0x1d\n\
     bls        LAB_08017b80\n\
     mov        r7,r9\n\
     cmp        r7,#0xc\n\
     bls        LAB_08017b6e\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08017c3c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r2,DAT_08017c98\n\
     ldr        r1,DAT_08017c9c\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     mov        r5,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017c5e\n\
     ldr        r0,DAT_08017ca0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017c5e\n\
     mov        r5,#0x0\n\
LAB_08017c5e:\n\
     ldr        r0,DAT_08017ca4\n\
     ldrb       r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     bl         __umodsi3\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017cc8\n\
     add        r0,r5,#0x0\n\
     bl         fun_080034c0\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r4,#0x6]\n\
     cmp        r0,#0x1\n\
     beq        LAB_08017c86\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x4f\n\
     bhi        LAB_08017cc8\n\
LAB_08017c86:\n\
     ldrh       r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017ca8\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     b          LAB_08017cc8\n\
DAT_08017c98:\n\
     .word 0x08669620\n\
DAT_08017c9c:\n\
     .word 0x0200DCE0\n\
DAT_08017ca0:\n\
     .word 0x0200DCE8\n\
DAT_08017ca4:\n\
     .word 0x0200DCE4\n\
LAB_08017ca8:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x13\n\
     bhi        LAB_08017cbe\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_08017cc8\n\
LAB_08017cbe:\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08017cc8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08017cd0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08017cdc()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_08017cf8\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_08017c3c\n\
     ldr        r0,DAT_08017cfc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017d00\n\
     bl         fun_08017a38\n\
     b          LAB_08017d30\n\
DAT_08017cf8:\n\
     .word 0x0200DCE4\n\
DAT_08017cfc:\n\
     .word 0x0200DCE8\n\
LAB_08017d00:\n\
     bl         fun_0801812c\n\
     bl         fun_080013f4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017d30\n\
     ldr        r0,DAT_08017d24\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017d2c\n\
     ldr        r1,DAT_08017d28\n\
     mov        r0,#0xc\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x29\n\
     bl         fun_08001070\n\
     b          LAB_08017d30\n\
.space 1\n\
.space 1\n\
DAT_08017d24:\n\
     .word 0x020025B4\n\
DAT_08017d28:\n\
     .word 0x0200254C\n\
LAB_08017d2c:\n\
     bl         fun_08017d50\n\
LAB_08017d30:\n\
     bl         fun_0803a9dc\n\
     bl         fun_0800140c\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017d40\n\
     bl         fun_080010d8\n\
LAB_08017d40:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08017d48()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08017d4c()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08017d50()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08017d68\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017d6c\n\
     bl         fun_080010d8\n\
     b          LAB_08017d70\n\
DAT_08017d68:\n\
     .word 0x020025E8\n\
LAB_08017d6c:\n\
     bl         fun_08001070\n\
LAB_08017d70:\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08017d74()
{
    asm("\n\
     push       {lr}\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x1\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08017d90()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_08017dd8\n\
     ldr        r0,DAT_08017ddc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08017de0\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_08017de4\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08017de8\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_08017dd0\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_08017dec\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_08017db8:\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r6\n\
     lsl        r1,r2,#0x5\n\
     add        r1,r1,r5\n\
     str        r1,[r0,#0x0]\n\
     strh       r3,[r0,#0x4]\n\
     strh       r3,[r0,#0x6]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,r4\n\
     bcc        LAB_08017db8\n\
LAB_08017dd0:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08017dd8:\n\
     .word 0x0200DD00\n\
DAT_08017ddc:\n\
     .word 0x08473624\n\
DAT_08017de0:\n\
     .word 0x0200DCF0\n\
DAT_08017de4:\n\
     .word 0x084735C0\n\
DAT_08017de8:\n\
     .word 0x0200DD10\n\
DAT_08017dec:\n\
     .word 0x08473194\n\
    ");
}
__attribute__((naked)) void fun_08017df0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_08017f20\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_08000ee8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     mov        r1,#0x0\n\
     ldr        r3,DAT_08017f24\n\
LAB_08017e02:\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08017e12\n\
     b          LAB_08017f3c\n\
LAB_08017e12:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     cmp        r1,#0x14\n\
     bls        LAB_08017e02\n\
     ldr        r2,DAT_08017f28\n\
LAB_08017e1e:\n\
     ldr        r4,DAT_08017f2c\n\
     strh       r2,[r4,#0x0]\n\
     ldr        r1,DAT_08017f30\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r1,r2,#0x10\n\
     ldr        r0,DAT_08017f34\n\
     cmp        r1,r0\n\
     bne        LAB_08017e32\n\
     b          LAB_08017fe4\n\
LAB_08017e32:\n\
     mov        r0,#0x3\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x2\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x4\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x5\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x6\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x8\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x7\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x5\n\
     bl         fun_080034c0\n\
     mov        r0,#0x6\n\
     bl         fun_080034c0\n\
     mov        r0,#0x8\n\
     bl         fun_080034c0\n\
     mov        r0,#0x7\n\
     bl         fun_080034c0\n\
     ldr        r5,DAT_08017f24\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     mov        r1,#0x1\n\
     ldrh       r0,[r0,#0x2]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08017eb0\n\
     mov        r0,#0x3\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08017eb0:\n\
     ldrh       r3,[r4,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldrh       r1,[r0,#0x2]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017ed6\n\
     mov        r0,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017ef4\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08017ed6:\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     mov        r1,#0x4\n\
     ldrh       r0,[r0,#0x2]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08017ef4\n\
     mov        r0,#0x4\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08017ef4:\n\
     ldr        r3,DAT_08017f38\n\
     mov        r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     add        r0,r4,#0x0\n\
     strb       r0,[r3,#0x0]\n\
     ldr        r2,DAT_08017f24\n\
     ldr        r1,DAT_08017f2c\n\
     ldrh       r4,[r1,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0xa]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017f40\n\
     mov        r0,#0x5\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_08017f44\n\
.space 1\n\
.space 1\n\
DAT_08017f20:\n\
     .word 0x020025E8\n\
DAT_08017f24:\n\
     .word 0x0878022C\n\
DAT_08017f28:\n\
     .word 0x0000FFFF\n\
DAT_08017f2c:\n\
     .word 0x0200DD64\n\
DAT_08017f30:\n\
     .word 0x0200DCE8\n\
DAT_08017f34:\n\
     .word 0xFFFF0000\n\
DAT_08017f38:\n\
     .word 0x0200DD58\n\
LAB_08017f3c:\n\
     add        r2,r1,#0x0\n\
     b          LAB_08017e1e\n\
LAB_08017f40:\n\
     mov        r0,#0x0\n\
     strb       r0,[r3,#0x0]\n\
LAB_08017f44:\n\
     ldr        r2,DAT_08017f64\n\
     ldr        r1,DAT_08017f68\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017f6c\n\
     mov        r0,#0x6\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_08017f72\n\
DAT_08017f64:\n\
     .word 0x0878022C\n\
DAT_08017f68:\n\
     .word 0x0200DD64\n\
LAB_08017f6c:\n\
     ldr        r1,DAT_08017f94\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08017f72:\n\
     ldr        r2,DAT_08017f98\n\
     ldr        r1,DAT_08017f9c\n\
     ldrh       r4,[r1,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0xe]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017fa0\n\
     mov        r0,#0x7\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_08017fa6\n\
.space 1\n\
.space 1\n\
DAT_08017f94:\n\
     .word 0x0200DD58\n\
DAT_08017f98:\n\
     .word 0x0878022C\n\
DAT_08017f9c:\n\
     .word 0x0200DD64\n\
LAB_08017fa0:\n\
     ldr        r1,DAT_08017fc8\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
LAB_08017fa6:\n\
     ldr        r2,DAT_08017fcc\n\
     ldr        r1,DAT_08017fd0\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x10]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017fd4\n\
     mov        r0,#0x8\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_08017fda\n\
.space 1\n\
.space 1\n\
DAT_08017fc8:\n\
     .word 0x0200DD58\n\
DAT_08017fcc:\n\
     .word 0x0878022C\n\
DAT_08017fd0:\n\
     .word 0x0200DD64\n\
LAB_08017fd4:\n\
     ldr        r1,DAT_08017fec\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
LAB_08017fda:\n\
     bl         fun_08017ff4\n\
     ldr        r1,DAT_08017ff0\n\
     mov        r0,#0xc8\n\
     strb       r0,[r1,#0x0]\n\
LAB_08017fe4:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08017fec:\n\
     .word 0x0200DD58\n\
DAT_08017ff0:\n\
     .word 0x0200DD5C\n\
    ");
}
__attribute__((naked)) void fun_08017ff4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,#0x1\n\
     bl         fun_08018254\n\
     ldr        r5,DAT_08018118\n\
     ldr        r4,DAT_0801811c\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r3,r0,r5\n\
     mov        r0,#0x1\n\
     ldrh       r2,[r3,#0x2]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801803c\n\
     ldr        r2,DAT_08018120\n\
     ldr        r0,DAT_08018124\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldrh       r6,[r3,#0x4]\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x1c\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0xc\n\
     mov        r2,#0xd\n\
     mov        r3,#0x7\n\
     bl         fun_08017078\n\
LAB_0801803c:\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r3,r0,r5\n\
     ldrh       r1,[r3,#0x2]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801807e\n\
     mov        r0,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08018092\n\
     ldr        r2,DAT_08018120\n\
     ldr        r0,DAT_08018124\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldrh       r6,[r3,#0x6]\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x1c\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x9\n\
     mov        r2,#0xa\n\
     mov        r3,#0x7\n\
     bl         fun_08017078\n\
LAB_0801807e:\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     mov        r1,#0x4\n\
     ldrh       r0,[r0,#0x2]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_080180c6\n\
LAB_08018092:\n\
     ldr        r3,DAT_08018120\n\
     ldr        r0,DAT_08018124\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r2,r2,#0x2\n\
     ldr        r4,DAT_08018118\n\
     ldr        r1,DAT_0801811c\n\
     ldrh       r5,[r1,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r6,[r0,#0x8]\n\
     lsl        r1,r6,#0x1\n\
     add        r1,r1,r6\n\
     lsl        r1,r1,#0x4\n\
     add        r2,r2,r1\n\
     add        r3,#0x4\n\
     add        r2,r2,r3\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x1c\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x9\n\
     mov        r2,#0xb\n\
     mov        r3,#0xa\n\
     bl         fun_08017078\n\
LAB_080180c6:\n\
     ldr        r2,DAT_08018128\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r2,r1]\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_0801810e\n\
     ldr        r5,DAT_08018120\n\
     ldr        r0,DAT_08018124\n\
     ldr        r3,[r0,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     ldr        r4,DAT_08018118\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,DAT_0801811c\n\
     ldrh       r6,[r2,#0x0]\n\
     lsl        r0,r6,#0x2\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r4,#0xa\n\
     add        r1,r1,r4\n\
     ldrh       r2,[r1,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r3,r3,r0\n\
     add        r5,#0x4\n\
     add        r3,r3,r5\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x1c\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x13\n\
     mov        r3,#0x7\n\
     bl         fun_08017078\n\
LAB_0801810e:\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018118:\n\
     .word 0x0878022C\n\
DAT_0801811c:\n\
     .word 0x0200DD64\n\
DAT_08018120:\n\
     .word 0x08669620\n\
DAT_08018124:\n\
     .word 0x020025B4\n\
DAT_08018128:\n\
     .word 0x0200DD58\n\
    ");
}
__attribute__((naked)) void fun_0801812c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x10\n\
     mov        r0,#0x5\n\
     bl         fun_080034c0\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_080034c0\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x8\n\
     bl         fun_080034c0\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x7\n\
     bl         fun_080034c0\n\
     str        r0,[sp,#0xc]\n\
     ldr        r3,DAT_080181a8\n\
     ldrb       r1,[r3,#0x0]\n\
     add        r1,#0x1\n\
     strb       r1,[r3,#0x0]\n\
     ldr        r2,DAT_080181ac\n\
     ldr        r0,DAT_080181b0\n\
     ldrh       r4,[r2,#0x0]\n\
     cmp        r4,r0\n\
     beq        LAB_0801823e\n\
     lsl        r0,r1,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x77\n\
     bls        LAB_0801823e\n\
     mov        r0,#0x0\n\
     strb       r0,[r3,#0x0]\n\
     ldr        r1,DAT_080181b4\n\
     ldrh       r3,[r2,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     mov        r1,#0x4\n\
     ldrh       r0,[r0,#0x2]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_080181d4\n\
     ldr        r1,DAT_080181b8\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080181bc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x4\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     mov        r0,#0x2\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_080181d4\n\
.space 1\n\
.space 1\n\
DAT_080181a8:\n\
     .word 0x0200DD5C\n\
DAT_080181ac:\n\
     .word 0x0200DD64\n\
DAT_080181b0:\n\
     .word 0x0000FFFF\n\
DAT_080181b4:\n\
     .word 0x0878022C\n\
DAT_080181b8:\n\
     .word 0x0200DD60\n\
LAB_080181bc:\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x4\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     mov        r0,#0x2\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
LAB_080181d4:\n\
     ldr        r4,DAT_08018248\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r4,r1]\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_0801823e\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     add        r6,r4,#0x0\n\
     add        r3,r6,#0x0\n\
     ldr        r5,DAT_0801824c\n\
     ldr        r4,DAT_08018250\n\
LAB_080181fa:\n\
     mov        r2,#0x0\n\
     ldrsb      r2,[r3,r2]\n\
     add        r1,r2,#0x1\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_08018208\n\
     add        r0,r2,#0x4\n\
LAB_08018208:\n\
     asr        r0,r0,#0x2\n\
     lsl        r0,r0,#0x2\n\
     sub        r0,r1,r0\n\
     strb       r0,[r3,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r3,r1]\n\
     lsl        r1,r1,#0x1\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r1,r1,r5\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080181fa\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r6,r0]\n\
     add        r0,#0x5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     bl         fun_08017ff4\n\
LAB_0801823e:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018248:\n\
     .word 0x0200DD58\n\
DAT_0801824c:\n\
     .word 0x08780236\n\
DAT_08018250:\n\
     .word 0x0200DD64\n\
    ");
}
__attribute__((naked)) void fun_08018254()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r7,#0x0\n\
LAB_08018266:\n\
     mov        r6,#0x0\n\
     add        r0,r7,#0x7\n\
     sub        r1,r7,#0x1\n\
     mov        r8,r1\n\
     add        r1,r7,#0x1\n\
     mov        r9,r1\n\
     mov        r1,#0x1f\n\
     and        r0,r1\n\
     lsl        r5,r0,#0x10\n\
LAB_08018278:\n\
     mov        r4,#0x3f\n\
     and        r4,r6\n\
     cmp        r7,#0x0\n\
     bne        LAB_080182aa\n\
     cmp        r6,#0x0\n\
     bne        LAB_08018290\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x1\n\
     bl         fun_08017250\n\
     b          LAB_080182aa\n\
LAB_08018290:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_080182a0\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x2\n\
     bl         fun_08017250\n\
     b          LAB_080182aa\n\
LAB_080182a0:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x8\n\
     bl         fun_08017250\n\
LAB_080182aa:\n\
     mov        r0,r8\n\
     cmp        r0,#0xa\n\
     bhi        LAB_080182f0\n\
     cmp        r6,#0x0\n\
     bne        LAB_080182c0\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x5\n\
     bl         fun_08017250\n\
     b          LAB_080182f0\n\
LAB_080182c0:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_080182d0\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x6\n\
     bl         fun_08017250\n\
     b          LAB_080182f0\n\
LAB_080182d0:\n\
     mov        r1,r10\n\
     cmp        r1,#0x0\n\
     beq        LAB_080182e6\n\
     cmp        r6,#0x9\n\
     bls        LAB_080182e6\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x9\n\
     bl         fun_08017250\n\
     b          LAB_080182f0\n\
LAB_080182e6:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     ldr        r2,DAT_08018304\n\
     bl         fun_08017250\n\
LAB_080182f0:\n\
     cmp        r7,#0xb\n\
     bls        LAB_08018322\n\
     cmp        r6,#0x0\n\
     bne        LAB_08018308\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x3\n\
     bl         fun_08017250\n\
     b          LAB_08018322\n\
DAT_08018304:\n\
     .word 0x0000EA60\n\
LAB_08018308:\n\
     cmp        r6,#0x1d\n\
     bne        LAB_08018318\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x4\n\
     bl         fun_08017250\n\
     b          LAB_08018322\n\
LAB_08018318:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x7\n\
     bl         fun_08017250\n\
LAB_08018322:\n\
     add        r6,#0x1\n\
     cmp        r6,#0x1d\n\
     bls        LAB_08018278\n\
     mov        r7,r9\n\
     cmp        r7,#0xc\n\
     bls        LAB_08018266\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801833c()
{
    asm("\n\
    lsl        r0,r0,#0x10\n\
    lsr        r2,r0,#0x10\n\
    mov        r1,#0x0\n\
    ldr        r3,DAT_08018358\n\
LAB_08018344:\n\
    lsl        r0,r1,#0x2\n\
    add        r0,r0,r1\n\
    lsl        r0,r0,#0x2\n\
    add        r0,r0,r3\n\
    ldrh       r0,[r0,#0x0]\n\
    cmp        r2,r0\n\
    bne        LAB_0801835c\n\
    add        r0,r1,#0x0\n\
    b          LAB_08018368\n\
.space 2\n\
DAT_08018358:\n\
    .word 0x0878022C\n\
LAB_0801835c:\n\
    add        r0,r1,#0x1\n\
    lsl        r0,r0,#0x18\n\
    lsr        r1,r0,#0x18\n\
    cmp        r1,#0x14\n\
    bls        LAB_08018344\n\
    ldr        r0,DAT_0801836c\n\
LAB_08018368:\n\
    bx         lr\n\
.space 2\n\
DAT_0801836c:\n\
    .word 0x0000FFFF\n\
    ");
}
