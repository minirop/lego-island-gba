__attribute__((naked)) void fun_08019b38()
{
    asm("\n\
     ldr        r2,DAT_08019b50\n\
     ldr        r0,DAT_08019b54\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08019b58\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08019b5c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08019b50:\n\
     .word 0x0200E5C0\n\
DAT_08019b54:\n\
     .word 0x08494D60\n\
DAT_08019b58:\n\
     .word 0x0200E5D0\n\
DAT_08019b5c:\n\
     .word 0x08494CFC\n\
    ");
}
__attribute__((naked)) void fun_08019b60()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_08019bfc\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08019c00\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r4,#0x4]\n\
     ldr        r0,DAT_08019c04\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x13\n\
     ldr        r2,DAT_08019c08\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_08019c0c\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_08019c10\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08019c14\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,DAT_08019c18\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08019c1c\n\
     bl         fun_080045f0\n\
     ldr        r0,PTR_DAT_08019c20\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08019c24\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08019c28\n\
     ldrh       r1,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08019c2c\n\
     strh       r4,[r1,#0x0]\n\
     mov        r1,#0x78\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x50\n\
     strh       r1,[r0,#0x4]\n\
     mov        r0,#0x7\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08019c30\n\
     ldr        r2,DAT_08019c34\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r0,DAT_08019c38\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08019bfc:\n\
     .word 0x040000D4\n\
DAT_08019c00:\n\
     .word 0x81000200\n\
DAT_08019c04:\n\
     .word 0x8100C000\n\
DAT_08019c08:\n\
     .word 0x00001F54\n\
DAT_08019c0c:\n\
     .word 0x08495030\n\
DAT_08019c10:\n\
     .word 0x08494E30\n\
DAT_08019c14:\n\
     .word 0x80000100\n\
DAT_08019c18:\n\
     .word 0x00001F44\n\
DAT_08019c1c:\n\
     .word 0x08063D90\n\
PTR_DAT_08019c20:\n\
     .word       DAT_0200260c\n\
PTR_DAT_08019c24:\n\
     .word       DAT_0200e5dc\n\
PTR_DAT_08019c28:\n\
     .word       DAT_02002604\n\
PTR_DAT_08019c2c:\n\
     .word       DAT_0200e5e0\n\
DAT_08019c30:\n\
     .word 0x00007CC2\n\
DAT_08019c34:\n\
     .word 0x00007FFF\n\
DAT_08019c38:\n\
     .word 0x0200E5E4\n\
    ");
}
__attribute__((naked)) void fun_08019c3c()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,DAT_08019ce4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x77\n\
     bhi        LAB_08019c4a\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08019c4a:\n\
     ldr        r3,DAT_08019ce8\n\
     ldrh       r1,[r3,#0x0]\n\
     add        r2,r1,#0x2\n\
     add        r0,r2,#0x0\n\
     asr        r0,r0,#0x8\n\
     lsl        r0,r0,#0x8\n\
     sub        r0,r2,r0\n\
     strh       r0,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     ldr        r2,DAT_08019cec\n\
     mov        r1,#0x7f\n\
     ldrh       r3,[r3,#0x0]\n\
     and        r1,r3\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     bl         fun_08002c84\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_08019cf0\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_080047d0\n\
     bl         fun_0803c1a4\n\
     ldr        r3,DAT_08019cf4\n\
     ldr        r0,DAT_08019cf8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_08019cfc\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r4,[r2,#0x22]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r3,#0x4\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08019d00\n\
     mov        r1,#0x85\n\
     bl         fun_0803c010\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019cd0\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019cd0\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019cd0\n\
     bl         fun_08001344\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019cdc\n\
LAB_08019cd0:\n\
     ldr        r0,DAT_08019ce4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x77\n\
     bls        LAB_08019cdc\n\
     bl         fun_080010d8\n\
LAB_08019cdc:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08019ce4:\n\
     .word 0x0200E5E4\n\
DAT_08019ce8:\n\
     .word 0x0200E5E0\n\
DAT_08019cec:\n\
     .word 0x08049824\n\
DAT_08019cf0:\n\
     .word 0x0200E5DC\n\
DAT_08019cf4:\n\
     .word 0x08669620\n\
DAT_08019cf8:\n\
     .word 0x020025B4\n\
DAT_08019cfc:\n\
     .word 0x02002600\n\
DAT_08019d00:\n\
     .word 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08019d04()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08019d18\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08019d18:\n\
     .word 0x0200E5DC\n\
    ");
}
__attribute__((naked)) void fun_08019d1c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08019d20()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08019d24()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x10\n\
     ldr        r0,DAT_08019d6c\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08019d70\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r5,r0,#0x0\n\
     ldr        r7,DAT_08019d74\n\
     ldr        r6,DAT_08019d78\n\
     cmp        r1,#0x0\n\
     ble        LAB_08019dae\n\
     cmp        r1,#0x8\n\
     bne        LAB_08019d96\n\
     ldr        r4,DAT_08019d7c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x1\n\
     mov        r1,#0x25\n\
     bl         __modsi3\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     mov        r4,#0x0\n\
LAB_08019d5a:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r7\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     cmp        r4,#0x8\n\
     bne        LAB_08019d80\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x16\n\
     b          LAB_08019d82\n\
DAT_08019d6c:\n\
     .word 0x0200E5E8\n\
DAT_08019d70:\n\
     .word 0x0200E5B0\n\
DAT_08019d74:\n\
     .word 0x0200E570\n\
DAT_08019d78:\n\
     .word 0x0200E4D0\n\
DAT_08019d7c:\n\
     .word 0x0200E5B4\n\
LAB_08019d80:\n\
     add        r0,r1,#0x1\n\
LAB_08019d82:\n\
     mov        r1,#0x25\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0xf\n\
     bls        LAB_08019d5a\n\
LAB_08019d96:\n\
     ldrh       r1,[r6,#0x0]\n\
     sub        r0,r1,#0x4\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08019da8\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x1c\n\
     strh       r0,[r6,#0x0]\n\
LAB_08019da8:\n\
     ldrh       r0,[r5,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_08019dae:\n\
     ldrh       r3,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08019e1e\n\
     mov        r0,#0x0\n\
     ldrsh      r2,[r6,r0]\n\
     add        r1,r2,#0x4\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_08019dc8\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x23\n\
LAB_08019dc8:\n\
     asr        r0,r0,#0x5\n\
     lsl        r0,r0,#0x5\n\
     sub        r0,r1,r0\n\
     strh       r0,[r6,#0x0]\n\
     add        r0,r3,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019e1e\n\
     ldr        r1,DAT_08019e04\n\
     ldrh       r2,[r1,#0x0]\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08019dee\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x24\n\
     strh       r0,[r1,#0x0]\n\
LAB_08019dee:\n\
     ldrb       r1,[r1,#0x0]\n\
     mov        r4,#0x0\n\
LAB_08019df2:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r7\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     cmp        r4,#0x8\n\
     bne        LAB_08019e08\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x16\n\
     b          LAB_08019e0a\n\
DAT_08019e04:\n\
     .word 0x0200E5B4\n\
LAB_08019e08:\n\
     add        r0,r1,#0x1\n\
LAB_08019e0a:\n\
     mov        r1,#0x25\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0xf\n\
     bls        LAB_08019df2\n\
LAB_08019e1e:\n\
     mov        r0,#0xb4\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x23\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0xb0\n\
     str        r0,[sp,#0x8]\n\
     ldrh       r6,[r6,#0x0]\n\
     lsl        r0,r6,#0x10\n\
     asr        r0,r0,#0x11\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r7,#0x0\n\
     mov        r1,#0x10\n\
     mov        r2,#0x68\n\
     mov        r3,#0x2b\n\
     bl         fun_08019ee4\n\
     bl         fun_0801a1cc\n\
     bl         fun_0801a014\n\
     mov        r0,#0x0\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08019e54()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x10\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_08019e78\n\
     ldr        r5,DAT_08019e7c\n\
LAB_08019e5e:\n\
     ldr        r0,DAT_08019e80\n\
     bl         fun_08003998\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x2]\n\
     cmp        r4,#0x7\n\
     bhi        LAB_08019e84\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x0]\n\
     b          LAB_08019e8c\n\
.space 1\n\
.space 1\n\
DAT_08019e78:\n\
     .word 0x0200E570\n\
DAT_08019e7c:\n\
     .word 0x0000FFEF\n\
DAT_08019e80:\n\
     .word 0x08668DB4\n\
LAB_08019e84:\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x15\n\
     strh       r0,[r1,#0x0]\n\
LAB_08019e8c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0xf\n\
     bls        LAB_08019e5e\n\
     ldr        r0,DAT_08019ed8\n\
     mov        r1,#0xb4\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x23\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0xb0\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0xc]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x68\n\
     mov        r3,#0x2b\n\
     bl         fun_08019ee4\n\
     ldr        r0,DAT_08019edc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08019ee0\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x58\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_08004670\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08019ed8:\n\
     .word 0x0200E570\n\
DAT_08019edc:\n\
     .word 0x0849BFE8\n\
DAT_08019ee0:\n\
     .word 0x0200E5E8\n\
    ");
}
__attribute__((naked)) void fun_08019ee4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x20\n\
     str        r0,[sp,#0x0]\n\
     ldr        r5,[sp,#0x40]\n\
     ldr        r6,[sp,#0x44]\n\
     ldr        r0,[sp,#0x48]\n\
     ldr        r4,[sp,#0x4c]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r9,r1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x4]\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     str        r3,[sp,#0x8]\n\
     lsl        r5,r5,#0x10\n\
     lsl        r6,r6,#0x10\n\
     lsr        r1,r6,#0x10\n\
     str        r1,[sp,#0xc]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     str        r4,[sp,#0x10]\n\
     mov        r7,#0x0\n\
     cmp        r7,r9\n\
     bcs        LAB_08019ffa\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r4,#0x0\n\
     mov        r1,r9\n\
     bl         __divsi3\n\
     str        r0,[sp,#0x14]\n\
     mov        r2,r10\n\
     sub        r4,r4,r2\n\
     lsl        r4,r4,#0x10\n\
     str        r4,[sp,#0x1c]\n\
     lsr        r0,r5,#0x11\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[sp,#0x18]\n\
     lsr        r6,r6,#0x11\n\
     mov        r8,r6\n\
LAB_08019f46:\n\
     ldr        r3,[sp,#0x14]\n\
     add        r4,r7,#0x0\n\
     mul        r4,r3\n\
     ldr        r0,[sp,#0x10]\n\
     add        r4,r4,r0\n\
     lsl        r0,r4,#0x1\n\
     ldr        r1,DAT_0801a00c\n\
     add        r0,r0,r1\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     ldr        r3,[sp,#0x18]\n\
     asr        r1,r3,#0x10\n\
     bl         fun_08002c84\n\
     add        r5,r0,#0x0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     add        r4,#0x40\n\
     lsl        r4,r4,#0x1\n\
     ldr        r0,DAT_0801a00c\n\
     add        r4,r4,r0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r2,r8\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r6,r7,#0x2\n\
     ldr        r3,[sp,#0x0]\n\
     add        r6,r6,r3\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r2,[sp,#0x4]\n\
     add        r5,r2,r5\n\
     strh       r5,[r1,#0x2]\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r3,[sp,#0x8]\n\
     add        r1,r3,r0\n\
     strh       r1,[r2,#0x4]\n\
     add        r0,r8\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0xc]\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c9c\n\
     add        r4,r0,#0x0\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     ldr        r3,[sp,#0x1c]\n\
     asr        r0,r3,#0x10\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     add        r2,r0,#0x0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r2,r10\n\
     ldr        r0,[r6,#0x0]\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r1,r2,#0x0\n\
     bl         fun_0800482c\n\
     mov        r0,#0x7\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r3,DAT_0801a010\n\
     add        r1,r3,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r1,r3\n\
     strh       r1,[r2,#0x12]\n\
     ldr        r2,[r6,#0x0]\n\
     mov        r1,#0x7\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     sub        r1,r1,r0\n\
     ldrh       r0,[r2,#0x12]\n\
     orr        r1,r0\n\
     strh       r1,[r2,#0x12]\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,r9\n\
     bcc        LAB_08019f46\n\
LAB_08019ffa:\n\
     add        sp,#0x20\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801a00c:\n\
     .word 0x08049824\n\
DAT_0801a010:\n\
     .word 0x0000FFF0\n\
    ");
}
__attribute__((naked)) void fun_0801a014()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a038\n\
     ldr        r4,DAT_0801a08c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a038\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     mov        r1,#0x8\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801a038:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a056\n\
     ldr        r4,DAT_0801a08c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a056\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     mov        r0,#0x8\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801a056:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a0bc\n\
     ldr        r0,DAT_0801a08c\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a0bc\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r3,DAT_0801a090\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0801a0a0\n\
     ldr        r0,DAT_0801a094\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801a098\n\
     ldr        r1,[r1,#0x0]\n\
     ldr        r2,DAT_0801a09c\n\
     bl         fun_080004dc\n\
     bl         fun_080010d8\n\
     b          LAB_0801a0e4\n\
DAT_0801a08c:\n\
     .word 0x0200E5B0\n\
DAT_0801a090:\n\
     .word 0x02002528\n\
DAT_0801a094:\n\
     .word 0x0200DCA8\n\
DAT_0801a098:\n\
     .word 0x020025FC\n\
DAT_0801a09c:\n\
     .word 0x020025C0\n\
LAB_0801a0a0:\n\
     ldr        r1,DAT_0801a0ec\n\
     ldrb       r4,[r3,#0x0]\n\
     add        r1,r4,r1\n\
     ldr        r2,DAT_0801a0f0\n\
     ldr        r0,DAT_0801a0f4\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     strb       r0,[r1,#0x0]\n\
     ldrb       r0,[r3,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r3,#0x0]\n\
LAB_0801a0bc:\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a0e4\n\
     ldr        r4,DAT_0801a0f8\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a0e4\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
     ldrb       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r0,DAT_0801a0ec\n\
     ldrb       r4,[r4,#0x0]\n\
     add        r0,r4,r0\n\
     mov        r1,#0x20\n\
     strb       r1,[r0,#0x0]\n\
LAB_0801a0e4:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801a0ec:\n\
     .word 0x020025C0\n\
DAT_0801a0f0:\n\
     .word 0x08498F98\n\
DAT_0801a0f4:\n\
     .word 0x0200E5B4\n\
DAT_0801a0f8:\n\
     .word 0x02002528\n\
    ");
}
__attribute__((naked)) void fun_0801a0fc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r4,DAT_0801a188\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801a18c\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_0801a190\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x13\n\
     mov        r8,r0\n\
     ldr        r1,DAT_0801a194\n\
     add        r0,r1,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0801a198\n\
     bl         fun_080045f0\n\
     bl         fun_08019e54\n\
     ldr        r0,DAT_0801a19c\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_0801a1a0\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0801a1a4\n\
     ldr        r1,DAT_0801a1a8\n\
     bl         fun_0803d070\n\
     ldr        r1,DAT_0801a1ac\n\
     add        r0,r1,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801a1b0\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801a1b4\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_0801a1b8\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_0801a1bc\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801a188:\n\
     .word 0x040000D4\n\
DAT_0801a18c:\n\
     .word 0x8100C000\n\
DAT_0801a190:\n\
     .word 0x81000200\n\
DAT_0801a194:\n\
     .word 0x00001F44\n\
DAT_0801a198:\n\
     .word 0x0849BFF8\n\
DAT_0801a19c:\n\
     .word 0x0849C1F8\n\
DAT_0801a1a0:\n\
     .word 0x84000080\n\
DAT_0801a1a4:\n\
     .word 0x0849C3F8\n\
DAT_0801a1a8:\n\
     .word 0x0600A000\n\
DAT_0801a1ac:\n\
     .word 0x00001F54\n\
DAT_0801a1b0:\n\
     .word 0x0400000C\n\
DAT_0801a1b4:\n\
     .word 0x0200E4D0\n\
DAT_0801a1b8:\n\
     .word 0x0200E5B0\n\
DAT_0801a1bc:\n\
     .word 0x0200E5B4\n\
    ");
}
__attribute__((naked)) void fun_0801a1c0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801a1cc()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x4\n\
     ldr        r1,DAT_0801a214\n\
     mov        r0,sp\n\
     mov        r2,#0x2\n\
     bl         memcpy\n\
     bl         fun_0803c1a4\n\
     mov        r4,#0x0\n\
     mov        r5,sp\n\
LAB_0801a1e2:\n\
     ldr        r0,DAT_0801a218\n\
     add        r0,r4,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strb       r0,[r5,#0x0]\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r4\n\
     lsl        r1,r1,#0x13\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xf\n\
     add        r1,r1,r0\n\
     asr        r1,r1,#0x10\n\
     mov        r0,sp\n\
     mov        r2,#0x70\n\
     ldr        r3,DAT_0801a21c\n\
     bl         fun_0803c138\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0801a1e2\n\
     add        sp,#0x4\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801a214:\n\
     .word 0x08498FE4\n\
DAT_0801a218:\n\
     .word 0x020025C0\n\
DAT_0801a21c:\n\
     .word 0x0865FD84\n\
    ");
}
__attribute__((naked)) void fun_0801a220()
{
    asm("\n\
     ldr        r2,DAT_0801a238\n\
     ldr        r0,DAT_0801a23c\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801a240\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0801a244\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0801a238:\n\
     .word 0x0200E5F0\n\
DAT_0801a23c:\n\
     .word 0x0849FFD0\n\
DAT_0801a240:\n\
     .word 0x0200E600\n\
DAT_0801a244:\n\
     .word 0x0849FF6C\n\
    ");
}
__attribute__((naked)) void fun_0801a248()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_0801a328\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0801a32c\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801a330\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     mov        r1,#0xff\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_0801a334\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801a338\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801a33c\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     ldr        r1,DAT_0801a340\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_0801a344\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801a348\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0801a34c\n\
     ldr        r1,DAT_0801a350\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_0801a354\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801a358\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r2,DAT_0801a35c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0801a360\n\
     bl         fun_080045f0\n\
     bl         fun_0803c1a4\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0801a364\n\
LAB_0801a2d4:\n\
     ldr        r0,DAT_0801a368\n\
     bl         fun_08003998\n\
     lsl        r2,r4,#0x2\n\
     add        r2,r2,r5\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x28\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0801a2d4\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,DAT_0801a36c\n\
     cmp        r0,r1\n\
     bne        LAB_0801a30e\n\
     ldr        r1,DAT_0801a330\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801a30e:\n\
     ldr        r0,DAT_0801a330\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a37c\n\
     ldr        r1,DAT_0801a370\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801a374\n\
     ldr        r0,DAT_0801a328\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801a378\n\
     b          LAB_0801a38c\n\
DAT_0801a328:\n\
     .word 0x0200E638\n\
DAT_0801a32c:\n\
     .word 0x0200E634\n\
DAT_0801a330:\n\
     .word 0x0200E610\n\
DAT_0801a334:\n\
     .word 0x040000D4\n\
DAT_0801a338:\n\
     .word 0x8100C000\n\
DAT_0801a33c:\n\
     .word 0x81000200\n\
DAT_0801a340:\n\
     .word 0x00001F44\n\
DAT_0801a344:\n\
     .word 0x0400000C\n\
DAT_0801a348:\n\
     .word 0x81000100\n\
DAT_0801a34c:\n\
     .word 0x084A0574\n\
DAT_0801a350:\n\
     .word 0x0600A000\n\
DAT_0801a354:\n\
     .word 0x084A0374\n\
DAT_0801a358:\n\
     .word 0x80000100\n\
DAT_0801a35c:\n\
     .word 0x00001F54\n\
DAT_0801a360:\n\
     .word 0x084A0174\n\
DAT_0801a364:\n\
     .word 0x0200E620\n\
DAT_0801a368:\n\
     .word 0x084A0164\n\
DAT_0801a36c:\n\
     .word 0x03E90000\n\
DAT_0801a370:\n\
     .word 0x0200E630\n\
DAT_0801a374:\n\
     .word 0x0200E62C\n\
DAT_0801a378:\n\
     .word 0x0878057C\n\
LAB_0801a37c:\n\
     ldr        r1,DAT_0801a3a0\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801a3a4\n\
     ldr        r0,DAT_0801a3a8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801a3ac\n\
LAB_0801a38c:\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     bl         fun_0801a490\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801a3a0:\n\
     .word 0x0200E630\n\
DAT_0801a3a4:\n\
     .word 0x0200E62C\n\
DAT_0801a3a8:\n\
     .word 0x0200E638\n\
DAT_0801a3ac:\n\
     .word 0x0878053C\n\
    ");
}
__attribute__((naked)) void fun_0801a3b0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a40e\n\
     ldr        r0,DAT_0801a3cc\n\
     ldr        r2,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0801a3d0\n\
     sub        r0,r2,#0x1\n\
     b          LAB_0801a3d6\n\
.space 1\n\
.space 1\n\
DAT_0801a3cc:\n\
     .word 0x0200E638\n\
LAB_0801a3d0:\n\
     ldr        r0,DAT_0801a3ec\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x1\n\
LAB_0801a3d6:\n\
     str        r0,[r3,#0x0]\n\
     ldr        r0,DAT_0801a3f0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a3fc\n\
     ldr        r0,DAT_0801a3f4\n\
     ldr        r1,[r3,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r2,DAT_0801a3f8\n\
     b          LAB_0801a404\n\
.space 1\n\
.space 1\n\
DAT_0801a3ec:\n\
     .word 0x0200E630\n\
DAT_0801a3f0:\n\
     .word 0x0200E610\n\
DAT_0801a3f4:\n\
     .word 0x0200E62C\n\
DAT_0801a3f8:\n\
     .word 0x0878057C\n\
LAB_0801a3fc:\n\
     ldr        r0,DAT_0801a42c\n\
     ldr        r1,[r3,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r2,DAT_0801a430\n\
LAB_0801a404:\n\
     add        r1,r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_0801a490\n\
LAB_0801a40e:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a472\n\
     ldr        r0,DAT_0801a434\n\
     ldr        r1,DAT_0801a438\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r1,#0x1\n\
     ldr        r2,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r2,r1\n\
     bcs        LAB_0801a43c\n\
     add        r0,r2,#0x1\n\
     b          LAB_0801a43e\n\
DAT_0801a42c:\n\
     .word 0x0200E62C\n\
DAT_0801a430:\n\
     .word 0x0878053C\n\
DAT_0801a434:\n\
     .word 0x0200E638\n\
DAT_0801a438:\n\
     .word 0x0200E630\n\
LAB_0801a43c:\n\
     mov        r0,#0x0\n\
LAB_0801a43e:\n\
     str        r0,[r3,#0x0]\n\
     ldr        r0,DAT_0801a454\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a460\n\
     ldr        r0,DAT_0801a458\n\
     ldr        r1,[r3,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r2,DAT_0801a45c\n\
     b          LAB_0801a468\n\
.space 1\n\
.space 1\n\
DAT_0801a454:\n\
     .word 0x0200E610\n\
DAT_0801a458:\n\
     .word 0x0200E62C\n\
DAT_0801a45c:\n\
     .word 0x0878057C\n\
LAB_0801a460:\n\
     ldr        r0,DAT_0801a488\n\
     ldr        r1,[r3,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r2,DAT_0801a48c\n\
LAB_0801a468:\n\
     add        r1,r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_0801a490\n\
LAB_0801a472:\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a480\n\
     bl         fun_080010d8\n\
LAB_0801a480:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801a488:\n\
     .word 0x0200E62C\n\
DAT_0801a48c:\n\
     .word 0x0878053C\n\
    ");
}
__attribute__((naked)) void fun_0801a490()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     add        r6,r0,#0x0\n\
     ldr        r4,DAT_0801a4b4\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801a4bc\n\
     ldr        r2,DAT_0801a4b8\n\
     add        r0,r2,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x2\n\
     b          LAB_0801a4e0\n\
DAT_0801a4b4:\n\
     .word 0x0200E634\n\
DAT_0801a4b8:\n\
     .word 0x00007FE0\n\
LAB_0801a4bc:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801a4d4\n\
     ldr        r2,DAT_0801a4d0\n\
     add        r0,r2,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x3\n\
     b          LAB_0801a4e0\n\
.space 1\n\
.space 1\n\
DAT_0801a4d0:\n\
     .word 0x00007FFF\n\
LAB_0801a4d4:\n\
     ldr        r2,DAT_0801a59c\n\
     add        r0,r2,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x1\n\
LAB_0801a4e0:\n\
     strb       r0,[r4,#0x0]\n\
     bl         fun_0803c1a4\n\
     ldr        r2,DAT_0801a5a0\n\
     ldr        r0,DAT_0801a5a4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldrh       r3,[r6,#0x2]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801a5a8\n\
     mov        r1,#0x14\n\
     bl         fun_0803c010\n\
     mov        r7,#0x32\n\
     mov        r5,#0x0\n\
     ldr        r3,DAT_0801a5ac\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
LAB_0801a512:\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x2\n\
     bls        LAB_0801a512\n\
     mov        r5,#0x0\n\
     ldr        r1,DAT_0801a5b0\n\
     add        r1,#0x4\n\
     mov        r10,r1\n\
     ldr        r2,DAT_0801a5ac\n\
     mov        r9,r2\n\
     ldr        r3,DAT_0801a5b4\n\
     mov        r8,r3\n\
LAB_0801a538:\n\
     ldrh       r0,[r6,#0x0]\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x3\n\
     lsl        r4,r5,#0x3\n\
     ldr        r2,DAT_0801a5b0\n\
     add        r0,r4,r2\n\
     add        r1,r1,r0\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     mov        r0,sp\n\
     mov        r1,#0x3c\n\
     add        r2,r7,#0x0\n\
     ldr        r3,DAT_0801a5a8\n\
     bl         fun_0803c138\n\
     ldrh       r3,[r6,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r4,r0\n\
     add        r0,r10\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     ldr        r1,DAT_0801a5b8\n\
     bl         sprintf\n\
     mov        r0,sp\n\
     mov        r1,#0x64\n\
     add        r2,r7,#0x0\n\
     ldr        r3,DAT_0801a5a8\n\
     bl         fun_0803c138\n\
     ldrh       r1,[r6,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r4,r4,r0\n\
     add        r4,r10\n\
     ldr        r4,[r4,#0x0]\n\
     ldr        r0,DAT_0801a5bc\n\
     cmp        r4,r0\n\
     bls        LAB_0801a5c0\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r9\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     b          LAB_0801a5e8\n\
.space 1\n\
.space 1\n\
DAT_0801a59c:\n\
     .word 0x0000211F\n\
DAT_0801a5a0:\n\
     .word 0x08669620\n\
DAT_0801a5a4:\n\
     .word 0x020025B4\n\
DAT_0801a5a8:\n\
     .word 0x0865FD94\n\
DAT_0801a5ac:\n\
     .word 0x0200E620\n\
DAT_0801a5b0:\n\
     .word 0x02005210\n\
DAT_0801a5b4:\n\
     .word 0x0000FDFF\n\
DAT_0801a5b8:\n\
     .word 0x084A00A0\n\
DAT_0801a5bc:\n\
     .word 0x000001F3\n\
LAB_0801a5c0:\n\
     cmp        r4,#0xf9\n\
     bls        LAB_0801a5dc\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r9\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     b          LAB_0801a5f6\n\
LAB_0801a5dc:\n\
     cmp        r4,#0x63\n\
     bls        LAB_0801a5f8\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r9\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x2\n\
LAB_0801a5e8:\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
LAB_0801a5f6:\n\
     strh       r0,[r1,#0x12]\n\
LAB_0801a5f8:\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x14\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x2\n\
     bls        LAB_0801a538\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801a61c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801a628()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801a62c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801a630()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_0801a780\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     mov        r10,r0\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801a784\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r7,#0xa0\n\
     lsl        r7,r7,#0x13\n\
     str        r7,[r4,#0x4]\n\
     ldr        r0,DAT_0801a788\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,DAT_0801a78c\n\
     mov        r8,r1\n\
     ldr        r2,DAT_0801a790\n\
     mov        r3,#0x6\n\
     ldrsh      r0,[r2,r3]\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0x3\n\
     bl         __divsi3\n\
     mov        r1,r8\n\
     strb       r0,[r1,#0x0]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x13\n\
     ldr        r2,DAT_0801a794\n\
     mov        r9,r2\n\
     strh       r2,[r5,#0x0]\n\
     ldr        r6,DAT_0801a798\n\
     ldrb       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801a79c\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0801a7a0\n\
     mov        r2,r8\n\
     ldrb       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     str        r7,[r4,#0x4]\n\
     ldr        r0,DAT_0801a7a4\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r3,DAT_0801a7a8\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r1,r8\n\
     ldrb       r1,[r1,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r10\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     mov        r2,r9\n\
     strh       r2,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r4,DAT_0801a7ac\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801a7b0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801a7b4\n\
     bl         fun_080045f0\n\
     add        r4,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r6,r0,#0x0\n\
     ldr        r0,DAT_0801a7b8\n\
     str        r6,[r0,#0x0]\n\
     mov        r7,#0x0\n\
     mov        r3,#0x12\n\
     mov        r9,r3\n\
     mov        r0,r9\n\
     strh       r0,[r6,#0x2]\n\
     mov        r0,#0x12\n\
     bl         __floatsidf\n\
     add        r5,r1,#0x0\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_0801a790\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     bl         __floatsidf\n\
     ldr        r2,DAT_0801a7bc\n\
     ldr        r3,DAT_0801a7c0\n\
     bl         __divdf3\n\
     add        r3,r1,#0x0\n\
     add        r2,r0,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r0,r4,#0x0\n\
     bl         __adddf3\n\
     bl         __fixdfsi\n\
     strh       r0,[r6,#0x2]\n\
     mov        r3,r9\n\
     strh       r3,[r6,#0x4]\n\
     ldr        r1,DAT_0801a790\n\
     mov        r2,#0x6\n\
     ldrsh      r0,[r1,r2]\n\
     mov        r1,#0x11\n\
     bl         __divsi3\n\
     mov        r1,#0x5e\n\
     mov        r3,r8\n\
     ldrb       r3,[r3,#0x0]\n\
     mul        r1,r3\n\
     sub        r0,r0,r1\n\
     add        r0,#0x12\n\
     strh       r0,[r6,#0x4]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r0,DAT_0801a7c4\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801a7c8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0801a7cc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801a7d0\n\
     strh       r7,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801a780:\n\
     .word 0x040000D4\n\
DAT_0801a784:\n\
     .word 0x8100C000\n\
DAT_0801a788:\n\
     .word 0x81000200\n\
DAT_0801a78c:\n\
     .word 0x0200E654\n\
DAT_0801a790:\n\
     .word 0x020006A0\n\
DAT_0801a794:\n\
     .word 0x00001F44\n\
DAT_0801a798:\n\
     .word 0x087806C8\n\
DAT_0801a79c:\n\
     .word 0x0600A000\n\
DAT_0801a7a0:\n\
     .word 0x087806D4\n\
DAT_0801a7a4:\n\
     .word 0x80000100\n\
DAT_0801a7a8:\n\
     .word 0x00001F54\n\
DAT_0801a7ac:\n\
     .word 0x084A3FF8\n\
DAT_0801a7b0:\n\
     .word 0x0200E64C\n\
DAT_0801a7b4:\n\
     .word 0x084A4018\n\
DAT_0801a7b8:\n\
     .word 0x0200E644\n\
DAT_0801a7bc:\n\
     .word 0x4031CCCC\n\
DAT_0801a7c0:\n\
     .word 0xCCCCCCCD\n\
DAT_0801a7c4:\n\
     .word 0x0200E648\n\
DAT_0801a7c8:\n\
     .word 0x0200E640\n\
DAT_0801a7cc:\n\
     .word 0x0200E650\n\
DAT_0801a7d0:\n\
     .word 0x0200E63C\n\
    ");
}
__attribute__((naked)) void fun_0801a7d4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a7f8\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a7f4\n\
     bl         fun_0800138c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a7f8\n\
LAB_0801a7f4:\n\
     bl         fun_080010d8\n\
LAB_0801a7f8:\n\
     ldr        r0,PTR_DAT_0801a844\n\
     ldrb       r4,[r0,#0x0]\n\
     ldr        r0,PTR_USHORT_ARRAY_0801a848\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0x3\n\
     bl         __divsi3\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r4,r0\n\
     bne        LAB_0801a896\n\
     ldr        r1,PTR_DAT_0801a84c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801a88c\n\
     mov        r1,#0xa\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801a870\n\
     ldr        r3,PTR_DAT_0801a850\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a85c\n\
     ldr        r0,PTR_DAT_0801a854\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801a858\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_0801a870\n\
PTR_DAT_0801a844:\n\
     .4byte       DAT_0200e654\n\
PTR_USHORT_ARRAY_0801a848:\n\
     .4byte       0x020006a0\n\
PTR_DAT_0801a84c:\n\
     .4byte       DAT_0200e648\n\
PTR_DAT_0801a850:\n\
     .4byte       DAT_0200e650\n\
PTR_DAT_0801a854:\n\
     .4byte       DAT_0200e644\n\
DAT_0801a858:\n\
     .4byte 0x0000FDFF\n\
LAB_0801a85c:\n\
     ldr        r0,DAT_0801a888\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_0801a870:\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a8ac\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0801a8ac\n\
.space 1\n\
.space 1\n\
DAT_0801a888:\n\
     .4byte 0x0200E644\n\
LAB_0801a88c:\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801a8ac\n\
LAB_0801a896:\n\
     ldr        r0,PTR_DAT_0801a8e0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     mov        r2,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0801a8e4\n\
     strh       r2,[r0,#0x0]\n\
LAB_0801a8ac:\n\
     ldr        r1,PTR_DAT_0801a8e8\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801a928\n\
     mov        r1,#0x14\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801a90c\n\
     ldr        r3,PTR_DAT_0801a8ec\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a8f8\n\
     ldr        r0,PTR_DAT_0801a8f0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801a8f4\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_0801a90c\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801a8e0:\n\
     .4byte       DAT_0200e644\n\
PTR_DAT_0801a8e4:\n\
     .4byte       DAT_0200e650\n\
PTR_DAT_0801a8e8:\n\
     .4byte       DAT_0200e640\n\
PTR_DAT_0801a8ec:\n\
     .4byte       DAT_0200e63c\n\
PTR_DAT_0801a8f0:\n\
     .4byte       DAT_0200e64c\n\
DAT_0801a8f4:\n\
     .4byte 0x0000FDFF\n\
LAB_0801a8f8:\n\
     ldr        r0,DAT_0801a924\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_0801a90c:\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801a930\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0801a930\n\
.space 1\n\
.space 1\n\
DAT_0801a924:\n\
     .4byte 0x0200E64C\n\
LAB_0801a928:\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801a930:\n\
     bl         fun_080013c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a9a6\n\
     ldr        r7,DAT_0801aa48\n\
     ldrb       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801a9a6\n\
     sub        r0,#0x1\n\
     strb       r0,[r7,#0x0]\n\
     ldr        r1,DAT_0801aa4c\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x13\n\
     ldr        r3,DAT_0801aa50\n\
     add        r6,r3,#0x0\n\
     strh       r6,[r4,#0x0]\n\
     ldr        r5,DAT_0801aa54\n\
     ldrb       r1,[r7,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801aa58\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0801aa5c\n\
     ldr        r2,DAT_0801aa60\n\
     ldrb       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801aa64\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r1,DAT_0801aa68\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldrb       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     strh       r6,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
LAB_0801a9a6:\n\
     bl         fun_080013dc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aa1c\n\
     ldr        r7,DAT_0801aa48\n\
     ldrb       r0,[r7,#0x0]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_0801aa1c\n\
     add        r0,#0x1\n\
     strb       r0,[r7,#0x0]\n\
     ldr        r1,DAT_0801aa4c\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x13\n\
     ldr        r2,DAT_0801aa50\n\
     add        r6,r2,#0x0\n\
     strh       r6,[r4,#0x0]\n\
     ldr        r5,DAT_0801aa54\n\
     ldrb       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801aa58\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0801aa5c\n\
     ldr        r2,DAT_0801aa60\n\
     ldrb       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801aa64\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r1,DAT_0801aa68\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldrb       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     strh       r6,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
LAB_0801aa1c:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801aa30\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aa36\n\
LAB_0801aa30:\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801aa36:\n\
     ldr        r0,DAT_0801aa48\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801aabc\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801aa6c\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aa72\n\
     b          LAB_0801ab62\n\
DAT_0801aa48:\n\
     .4byte 0x0200E654\n\
DAT_0801aa4c:\n\
     .4byte 0x0200E658\n\
DAT_0801aa50:\n\
     .4byte 0x00001F44\n\
DAT_0801aa54:\n\
     .4byte 0x087806C8\n\
DAT_0801aa58:\n\
     .4byte 0x0600A000\n\
DAT_0801aa5c:\n\
     .4byte 0x040000D4\n\
DAT_0801aa60:\n\
     .4byte 0x087806D4\n\
DAT_0801aa64:\n\
     .4byte 0x80000100\n\
DAT_0801aa68:\n\
     .4byte 0x00001F54\n\
LAB_0801aa6c:\n\
     cmp        r0,#0x2\n\
     beq        LAB_0801ab08\n\
     b          LAB_0801ab62\n\
LAB_0801aa72:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aa8c\n\
     ldr        r4,DAT_0801aab0\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r4,r0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xe\n\
     bl         __modsi3\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801aa8c:\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aaa8\n\
     ldr        r1,DAT_0801aab0\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801aaa8\n\
     mov        r0,#0xd\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801aaa8:\n\
     ldr        r0,DAT_0801aab4\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_0801aab8\n\
     b          LAB_0801ab44\n\
DAT_0801aab0:\n\
     .4byte 0x0200E658\n\
DAT_0801aab4:\n\
     .4byte 0x0200E64C\n\
DAT_0801aab8:\n\
     .4byte 0x08780658\n\
LAB_0801aabc:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aad6\n\
     ldr        r4,DAT_0801aafc\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r4,r0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xf\n\
     bl         __modsi3\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801aad6:\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aaf2\n\
     ldr        r1,DAT_0801aafc\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801aaf2\n\
     mov        r0,#0xe\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801aaf2:\n\
     ldr        r0,DAT_0801ab00\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_0801ab04\n\
     b          LAB_0801ab44\n\
.space 1\n\
.space 1\n\
DAT_0801aafc:\n\
     .4byte 0x0200E658\n\
DAT_0801ab00:\n\
     .4byte 0x0200E64C\n\
DAT_0801ab04:\n\
     .4byte 0x087805E0\n\
LAB_0801ab08:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ab22\n\
     ldr        r4,DAT_0801ab70\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r4,r0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xb\n\
     bl         __modsi3\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801ab22:\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ab3e\n\
     ldr        r1,DAT_0801ab70\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801ab3e\n\
     mov        r0,#0xa\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801ab3e:\n\
     ldr        r0,DAT_0801ab74\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_0801ab78\n\
LAB_0801ab44:\n\
     ldr        r3,DAT_0801ab70\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r3,r0]\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r3,r0]\n\
     lsl        r0,r0,#0x3\n\
     add        r2,#0x4\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
LAB_0801ab62:\n\
     bl         fun_0801ab7c\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801ab70:\n\
     .4byte 0x0200E658\n\
DAT_0801ab74:\n\
     .4byte 0x0200E64C\n\
DAT_0801ab78:\n\
     .4byte 0x08780588\n\
    ");
}
__attribute__((naked)) void fun_0801ab7c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x34\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0801ad34\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801abaa\n\
     ldr        r1,DAT_0801ad38\n\
     ldr        r0,DAT_0801ad3c\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     lsl        r0,r0,#0x3\n\
     add        r1,#0x6\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_080034c0\n\
     add        r6,r0,#0x0\n\
LAB_0801abaa:\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801abc8\n\
     ldr        r1,PTR_DAT_0801ad40\n\
     ldr        r0,DAT_0801ad3c\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     lsl        r0,r0,#0x3\n\
     add        r1,#0x6\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_080034c0\n\
     add        r6,r0,#0x0\n\
LAB_0801abc8:\n\
     ldrb       r1,[r4,#0x0]\n\
     cmp        r1,#0x2\n\
     bne        LAB_0801abe6\n\
     ldr        r1,PTR_DAT_0801ad44\n\
     ldr        r0,DAT_0801ad3c\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     lsl        r0,r0,#0x3\n\
     add        r1,#0x6\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_080034c0\n\
     add        r6,r0,#0x0\n\
LAB_0801abe6:\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ac4c\n\
     ldr        r1,PTR_DAT_0801ad48\n\
     ldr        r7,PTR_DAT_0801ad4c\n\
     mov        r8,r7\n\
     ldr        r0,DAT_0801ad50\n\
     mov        r9,r0\n\
     ldr        r3,[r0,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     ldr        r4,DAT_0801ad38\n\
     ldr        r5,DAT_0801ad3c\n\
     mov        r2,#0x0\n\
     ldrsb      r2,[r5,r2]\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r4\n\
     ldrh       r7,[r2,#0x0]\n\
     lsl        r0,r7,#0x1\n\
     add        r2,r7,#0x0\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r3,r3,r0\n\
     mov        r0,r8\n\
     add        r0,#0x4\n\
     add        r3,r3,r0\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r5,r0]\n\
     lsl        r0,r0,#0x3\n\
     add        r4,#0x6\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ac4c\n\
     ldrh       r0,[r6,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ac4c\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801ad54\n\
     add        r1,r8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801ad58\n\
     mov        r1,#0x91\n\
     bl         fun_0803c010\n\
LAB_0801ac4c:\n\
     ldr        r0,DAT_0801ad34\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801acb4\n\
     ldr        r1,PTR_DAT_0801ad48\n\
     ldr        r7,PTR_DAT_0801ad4c\n\
     mov        r8,r7\n\
     ldr        r0,DAT_0801ad50\n\
     mov        r9,r0\n\
     ldr        r3,[r0,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     ldr        r4,PTR_DAT_0801ad40\n\
     ldr        r5,DAT_0801ad3c\n\
     mov        r2,#0x0\n\
     ldrsb      r2,[r5,r2]\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r4\n\
     ldrh       r7,[r2,#0x0]\n\
     lsl        r0,r7,#0x1\n\
     add        r2,r7,#0x0\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r3,r3,r0\n\
     mov        r0,r8\n\
     add        r0,#0x4\n\
     add        r3,r3,r0\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r5,r0]\n\
     lsl        r0,r0,#0x3\n\
     add        r4,#0x6\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801acb4\n\
     ldrh       r0,[r6,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801acb4\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801ad54\n\
     add        r1,r8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801ad58\n\
     mov        r1,#0x91\n\
     bl         fun_0803c010\n\
LAB_0801acb4:\n\
     ldr        r0,DAT_0801ad34\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801ad1c\n\
     ldr        r1,PTR_DAT_0801ad48\n\
     ldr        r7,PTR_DAT_0801ad4c\n\
     mov        r8,r7\n\
     ldr        r0,DAT_0801ad50\n\
     mov        r9,r0\n\
     ldr        r3,[r0,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     ldr        r4,PTR_DAT_0801ad44\n\
     ldr        r5,DAT_0801ad3c\n\
     mov        r2,#0x0\n\
     ldrsb      r2,[r5,r2]\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r4\n\
     ldrh       r7,[r2,#0x0]\n\
     lsl        r0,r7,#0x1\n\
     add        r2,r7,#0x0\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r3,r3,r0\n\
     mov        r0,r8\n\
     add        r0,#0x4\n\
     add        r3,r3,r0\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r5,r0]\n\
     lsl        r0,r0,#0x3\n\
     add        r4,#0x6\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ad1c\n\
     ldrh       r0,[r6,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ad1c\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801ad54\n\
     add        r1,r8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801ad58\n\
     mov        r1,#0x91\n\
     bl         fun_0803c010\n\
LAB_0801ad1c:\n\
     ldr        r2,DAT_0801ad58\n\
     mov        r0,sp\n\
     mov        r1,#0x85\n\
     bl         fun_0803c010\n\
     add        sp,#0x34\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801ad34:\n\
     .4byte 0x0200E654\n\
DAT_0801ad38:\n\
     .4byte 0x08780658\n\
DAT_0801ad3c:\n\
     .4byte 0x0200E658\n\
PTR_DAT_0801ad40:\n\
     .4byte       DAT_087805e0\n\
PTR_DAT_0801ad44:\n\
     .4byte       DAT_08780588\n\
PTR_DAT_0801ad48:\n\
     .4byte       DAT_084a3eb4\n\
PTR_DAT_0801ad4c:\n\
     .4byte       DAT_08669620\n\
DAT_0801ad50:\n\
     .4byte 0x020025B4\n\
DAT_0801ad54:\n\
     .4byte 0x00006C04\n\
DAT_0801ad58:\n\
     .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_0801ad5c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0801ad78\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_0801ad7c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801ad78:\n\
     .4byte 0x0200E64C\n\
DAT_0801ad7c:\n\
     .4byte 0x0200E644\n\
    ");
}
__attribute__((naked)) void fun_0801ad80()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x13\n\
     ldr        r0,DAT_0801ade8\n\
     mov        r8,r0\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r6,DAT_0801adec\n\
     ldr        r4,DAT_0801adf0\n\
     ldrb       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801adf4\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0801adf8\n\
     ldr        r2,DAT_0801adfc\n\
     ldrb       r3,[r4,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801ae00\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r1,DAT_0801ae04\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     ldrb       r4,[r4,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     mov        r3,r8\n\
     strh       r3,[r5,#0x0]\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801ade8:\n\
     .4byte 0x00001F44\n\
DAT_0801adec:\n\
     .4byte 0x087806C8\n\
DAT_0801adf0:\n\
     .4byte 0x0200E654\n\
DAT_0801adf4:\n\
     .4byte 0x0600A000\n\
DAT_0801adf8:\n\
     .4byte 0x040000D4\n\
DAT_0801adfc:\n\
     .4byte 0x087806D4\n\
DAT_0801ae00:\n\
     .4byte 0x80000100\n\
DAT_0801ae04:\n\
     .4byte 0x00001F54\n\
    ");
}
__attribute__((naked)) void fun_0801ae08()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     bl         fun_08001710\n\
     ldr        r0,DAT_0801aeac\n\
     ldr        r1,DAT_0801aeb0\n\
     str        r1,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x4]\n\
     strh       r2,[r1,#0x0]\n\
     strh       r2,[r1,#0x2]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r3,DAT_0801aeb4\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ae32\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r3,r4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ae32\n\
     strh       r2,[r1,#0x10]\n\
LAB_0801ae32:\n\
     ldr        r0,DAT_0801aeac\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r3,DAT_0801aeb8\n\
     ldrh       r0,[r3,#0x0]\n\
     mov        r4,#0x0\n\
     strh       r0,[r1,#0x1a]\n\
     ldr        r2,DAT_0801aebc\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x1c]\n\
     mov        r0,#0xff\n\
     strh       r0,[r3,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     strh       r4,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r0,DAT_0801aec0\n\
     ldrh       r1,[r0,#0x0]\n\
     ldr        r6,DAT_0801aec4\n\
     cmp        r1,#0x14\n\
     beq        LAB_0801ae66\n\
     mov        r0,#0x16\n\
     eor        r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     lsr        r2,r0,#0x1f\n\
LAB_0801ae66:\n\
     strh       r2,[r6,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_0801aec8\n\
     ldr        r3,DAT_0801aecc\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r5,DAT_0801aed0\n\
     add        r1,r2,r5\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r5,r2,#0x0\n\
     ldr        r2,DAT_0801aed4\n\
     ldr        r7,DAT_0801aed8\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ae94\n\
LAB_0801ae86:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ae86\n\
LAB_0801ae94:\n\
     strh       r4,[r2,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aef0\n\
     mov        r4,#0x0\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r6,DAT_0801aedc\n\
     add        r1,r5,r6\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801aee8\n\
DAT_0801aeac:\n\
     .4byte 0x02000448\n\
DAT_0801aeb0:\n\
     .4byte 0x0200E670\n\
DAT_0801aeb4:\n\
     .4byte 0x02005750\n\
DAT_0801aeb8:\n\
     .4byte 0x04000050\n\
DAT_0801aebc:\n\
     .4byte 0x04000054\n\
DAT_0801aec0:\n\
     .4byte 0x020025E0\n\
DAT_0801aec4:\n\
     .4byte 0x0200E66C\n\
DAT_0801aec8:\n\
     .4byte 0x08669620\n\
DAT_0801aecc:\n\
     .4byte 0x020025B4\n\
DAT_0801aed0:\n\
     .4byte 0x0000C1E4\n\
DAT_0801aed4:\n\
     .4byte 0x0200E660\n\
DAT_0801aed8:\n\
     .4byte 0x0200E668\n\
DAT_0801aedc:\n\
     .4byte 0x0000C214\n\
LAB_0801aee0:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
LAB_0801aee8:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801aee0\n\
     b          LAB_0801af12\n\
LAB_0801aef0:\n\
     mov        r4,#0x0\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r6,DAT_0801af00\n\
     add        r1,r5,r6\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801af0c\n\
DAT_0801af00:\n\
     .4byte 0x0000C274\n\
LAB_0801af04:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
LAB_0801af0c:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801af04\n\
LAB_0801af12:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r4,r0\n\
     ble        LAB_0801af1c\n\
     strh       r4,[r2,#0x0]\n\
LAB_0801af1c:\n\
     mov        r4,#0x0\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r6,DAT_0801af2c\n\
     add        r1,r5,r6\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801af38\n\
DAT_0801af2c:\n\
     .4byte 0x0000C244\n\
LAB_0801af30:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
LAB_0801af38:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801af30\n\
     add        r1,r2,#0x0\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r1,r6]\n\
     cmp        r4,r0\n\
     ble        LAB_0801af4a\n\
     strh       r4,[r1,#0x0]\n\
LAB_0801af4a:\n\
     ldrh       r1,[r2,#0x0]\n\
     lsl        r0,r1,#0x3\n\
     strh       r0,[r2,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801af60\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801af6c\n\
DAT_0801af60:\n\
     .4byte 0x0000C2D4\n\
LAB_0801af64:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
LAB_0801af6c:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801af64\n\
     strh       r4,[r7,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r6,DAT_0801af84\n\
     add        r1,r5,r6\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801af90\n\
DAT_0801af84:\n\
     .4byte 0x0000C304\n\
LAB_0801af88:\n\
     add        r1,#0x1\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
LAB_0801af90:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801af88\n\
     add        r1,r7,#0x0\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r4,r0\n\
     ble        LAB_0801afa2\n\
     strh       r4,[r1,#0x0]\n\
LAB_0801afa2:\n\
     ldrh       r4,[r7,#0x0]\n\
     lsl        r0,r4,#0x3\n\
     strh       r0,[r7,#0x0]\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801afb0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r1,DAT_0801b010\n\
     ldrh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801b014\n\
     mov        r8,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aff8\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801aff8\n\
     mov        r0,r8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x0]\n\
     cmp        r2,#0x3\n\
     bhi        LAB_0801aff8\n\
     ldr        r2,DAT_0801b018\n\
     ldrb       r0,[r2,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0801afe0\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801afe0:\n\
     ldrb       r2,[r2,#0x0]\n\
     cmp        r2,#0x5\n\
     bne        LAB_0801aff2\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080010d8\n\
LAB_0801aff2:\n\
     ldr        r1,DAT_0801b01c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801aff8:\n\
     mov        r7,#0x0\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bls        LAB_0801b006\n\
     b          switchD_0801b00e_default\n\
LAB_0801b006:\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801b024_0801b020\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_0801b010:\n\
     .4byte 0x02005750\n\
DAT_0801b014:\n\
     .4byte 0x02000448\n\
DAT_0801b018:\n\
     .4byte 0x02005710\n\
DAT_0801b01c:\n\
     .4byte 0x04000050\n\
PTR_switchdataD_0801b024_0801b020:\n\
     .4byte       switchD_0801b00e_switchdataD_0801b024\n\
switchD_0801b00e_switchdataD_0801b024:\n\
     .4byte       switchD_0801b00e_caseD_0\n\
     .4byte       switchD_0801b00e_caseD_1\n\
     .4byte       switchD_0801b00e_caseD_2\n\
     .4byte       switchD_0801b00e_caseD_3\n\
     .4byte       switchD_0801b00e_caseD_4\n\
     .4byte       switchD_0801b00e_caseD_5\n\
switchD_0801b00e_caseD_0:\n\
     ldr        r1,DAT_0801b060\n\
     mov        r0,r8\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x10\n\
     bhi        LAB_0801b056\n\
     b          switchD_0801b00e_default\n\
LAB_0801b056:\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     b          switchD_0801b00e_default\n\
.space 1\n\
.space 1\n\
DAT_0801b060:\n\
     .4byte 0x04000054\n\
switchD_0801b00e_caseD_1:\n\
     mov        r1,r8\n\
     ldr        r2,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x12\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x14\n\
     add        r2,#0x16\n\
     bl         fun_0803c204\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x13\n\
     ldrh       r1,[r4,#0x0]\n\
     strh       r1,[r0,#0x18]\n\
     add        r0,#0x1e\n\
     bl         fun_08004630\n\
     bl         fun_080045e4\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r2,DAT_0801b13c\n\
     add        r1,r1,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801b140\n\
     ldr        r0,DAT_0801b144\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r0,r2\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801b148\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bl         fun_080045d8\n\
     bl         fun_08004598\n\
     mov        r1,#0x82\n\
     lsl        r1,r1,#0x5\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r1,#0x8b\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,DAT_0801b14c\n\
     mov        r0,#0x46\n\
     bl         fun_0803c1ec\n\
     ldr        r5,DAT_0801b150\n\
     ldr        r4,DAT_0801b154\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b158\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_0801b15c\n\
     mov        r1,#0x48\n\
     mov        r2,#0x19\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     add        r7,#0x1\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b1aa\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b160\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r7,#0x4\n\
     sub        r2,r2,r7\n\
     add        r2,#0x28\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     mov        r1,#0x48\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     add        r7,#0x1\n\
     ldr        r0,DAT_0801b164\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b16c\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b168\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r7,#0x4\n\
     sub        r2,r2,r7\n\
     add        r2,#0x28\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     mov        r1,#0x48\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     b          LAB_0801b1aa\n\
DAT_0801b13c:\n\
     .4byte 0x0000021E\n\
DAT_0801b140:\n\
     .4byte 0x040000C8\n\
DAT_0801b144:\n\
     .4byte 0x03002000\n\
DAT_0801b148:\n\
     .4byte 0x80000200\n\
DAT_0801b14c:\n\
     .4byte 0x00006B7A\n\
DAT_0801b150:\n\
     .4byte 0x08669620\n\
DAT_0801b154:\n\
     .4byte 0x020025B4\n\
DAT_0801b158:\n\
     .4byte 0x0000C1B4\n\
DAT_0801b15c:\n\
     .4byte 0x0865FD94\n\
DAT_0801b160:\n\
     .4byte 0x0000C1E4\n\
DAT_0801b164:\n\
     .4byte 0x0200E66C\n\
DAT_0801b168:\n\
     .4byte 0x0000C214\n\
LAB_0801b16c:\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b20c\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r7,#0x4\n\
     sub        r2,r2,r7\n\
     add        r2,#0x28\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     mov        r1,#0x48\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     add        r7,#0x1\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b210\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r7,#0x4\n\
     sub        r2,r2,r7\n\
     add        r2,#0x28\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     mov        r1,#0x48\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
LAB_0801b1aa:\n\
     ldr        r0,DAT_0801b214\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_0801b218\n\
     bl         fun_08003998\n\
     mov        r1,#0x7\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x30\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r4,DAT_0801b21c\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b202\n\
     ldr        r0,DAT_0801b220\n\
     bl         fun_08003998\n\
     ldr        r1,[r4,#0x0]\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,DAT_0801b224\n\
     bl         fun_08003998\n\
     ldr        r1,[r4,#0x0]\n\
     str        r0,[r1,#0xc]\n\
     ldr        r2,[r1,#0x8]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r1,#0xc]\n\
     ldr        r0,DAT_0801b228\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x4c\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r3,[r1,#0x8]\n\
     ldrh       r2,[r1,#0x4]\n\
     add        r2,#0x1\n\
     lsl        r0,r2,#0x4\n\
     sub        r0,r0,r2\n\
     add        r0,#0x28\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r2,[r1,#0xc]\n\
     ldr        r0,[r1,#0x8]\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r2,#0x4]\n\
LAB_0801b202:\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          switchD_0801b00e_default\n\
DAT_0801b20c:\n\
     .4byte 0x0000C274\n\
DAT_0801b210:\n\
     .4byte 0x0000C244\n\
DAT_0801b214:\n\
     .4byte 0x08786760\n\
DAT_0801b218:\n\
     .4byte 0x084B429C\n\
DAT_0801b21c:\n\
     .4byte 0x02000448\n\
DAT_0801b220:\n\
     .4byte 0x084B42AC\n\
DAT_0801b224:\n\
     .4byte 0x084B42BC\n\
DAT_0801b228:\n\
     .4byte 0x0200E660\n\
switchD_0801b00e_caseD_2:\n\
     ldr        r1,DAT_0801b300\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x10]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b23e\n\
     b          switchD_0801b00e_default\n\
LAB_0801b23e:\n\
     ldr        r0,PTR_DAT_0801b304\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b2c0\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b274\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801b308\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b274\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b274\n\
     ldr        r1,PTR_DAT_0801b30c\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801b274:\n\
     ldr        r4,PTR_DAT_0801b310\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801b28e\n\
     ldr        r1,PTR_DAT_0801b314\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x4]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0801b28e:\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r1,[r2,#0x4]\n\
     cmp        r1,#0x1\n\
     bne        LAB_0801b2a6\n\
     ldr        r1,PTR_DAT_0801b314\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x4]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0801b2a6:\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0801b2c0\n\
     ldr        r1,PTR_DAT_0801b318\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801b2c0:\n\
     ldr        r0,PTR_DAT_0801b304\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b2e0\n\
     ldr        r0,PTR_DAT_0801b310\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b2e0\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801b2e0:\n\
     ldr        r0,PTR_DAT_0801b304\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b33a\n\
     ldr        r0,PTR_DAT_0801b31c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b320\n\
     ldr        r0,PTR_DAT_0801b310\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b32a\n\
     b          LAB_0801b33a\n\
DAT_0801b300:\n\
     .4byte 0x04000050\n\
PTR_DAT_0801b304:\n\
     .4byte       DAT_02005ce0\n\
PTR_DAT_0801b308:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_0801b30c:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_0801b310:\n\
     .4byte       DAT_02000448\n\
PTR_DAT_0801b314:\n\
     .4byte       DAT_0200e664\n\
PTR_DAT_0801b318:\n\
     .4byte       DAT_0200252c\n\
PTR_DAT_0801b31c:\n\
     .4byte       DAT_0200e66c\n\
LAB_0801b320:\n\
     ldr        r0,DAT_0801b34c\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_0801b33a\n\
LAB_0801b32a:\n\
     ldr        r0,DAT_0801b34c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801b33a:\n\
     ldr        r0,DAT_0801b34c\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r3,[r2,#0x8]\n\
     ldrh       r1,[r2,#0x4]\n\
     add        r1,#0x1\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     add        r0,#0x28\n\
     b          LAB_0801b4a4\n\
DAT_0801b34c:\n\
     .4byte 0x02000448\n\
switchD_0801b00e_caseD_3:\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0801b3e4\n\
     ldr        r5,DAT_0801b3e8\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b3ec\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_0801b3f0\n\
     mov        r1,#0x50\n\
     mov        r2,#0x19\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801b3f4\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x50\n\
     mov        r2,#0x55\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     mov        r7,#0x4\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801b3f8\n\
     add        r4,r4,r1\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x50\n\
     mov        r2,#0x64\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b448\n\
     ldr        r0,PTR_DAT_0801b3fc\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b3ca\n\
     strh       r7,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801b400\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b3ca\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b3ca\n\
     ldr        r1,PTR_DAT_0801b404\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801b3ca:\n\
     ldr        r0,PTR_DAT_0801b3fc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801b448\n\
     ldr        r0,PTR_DAT_0801b408\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801b40c\n\
     bl         fun_08001188\n\
     b          LAB_0801b440\n\
.space 1\n\
.space 1\n\
DAT_0801b3e4:\n\
     .4byte 0x08669620\n\
DAT_0801b3e8:\n\
     .4byte 0x020025B4\n\
DAT_0801b3ec:\n\
     .4byte 0x0000C814\n\
DAT_0801b3f0:\n\
     .4byte 0x0865FD94\n\
DAT_0801b3f4:\n\
     .4byte 0x0000C304\n\
DAT_0801b3f8:\n\
     .4byte 0x0000C2D4\n\
PTR_DAT_0801b3fc:\n\
     .4byte       DAT_02000448\n\
PTR_DAT_0801b400:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_0801b404:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_0801b408:\n\
     .4byte       DAT_0200e664\n\
LAB_0801b40c:\n\
     ldr        r0,DAT_0801b430\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b43c\n\
     bl         fun_080010d8\n\
     ldr        r1,DAT_0801b434\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b440\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b440\n\
     ldr        r1,DAT_0801b438\n\
     mov        r0,#0x5\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_0801b440\n\
DAT_0801b430:\n\
     .4byte 0x0200E66C\n\
DAT_0801b434:\n\
     .4byte 0x02005750\n\
DAT_0801b438:\n\
     .4byte 0x02005760\n\
LAB_0801b43c:\n\
     bl         fun_08001e30\n\
LAB_0801b440:\n\
     ldr        r0,DAT_0801b4b0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801b448:\n\
     bl         fun_080013c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b466\n\
     ldr        r0,DAT_0801b4b0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b466\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801b466:\n\
     bl         fun_080013dc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b484\n\
     ldr        r0,DAT_0801b4b0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b484\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801b484:\n\
     ldr        r0,DAT_0801b4b0\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,[r2,#0x8]\n\
     mov        r0,#0x44\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0xc]\n\
     ldr        r0,DAT_0801b4b4\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x54\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r3,[r2,#0x8]\n\
     ldrh       r1,[r2,#0x4]\n\
     add        r1,#0x2\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     add        r0,#0x37\n\
LAB_0801b4a4:\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r1,[r2,#0xc]\n\
     ldr        r0,[r2,#0x8]\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     b          switchD_0801b00e_default\n\
DAT_0801b4b0:\n\
     .4byte 0x02000448\n\
DAT_0801b4b4:\n\
     .4byte 0x0200E668\n\
switchD_0801b00e_caseD_4:\n\
     bl         fun_08003818\n\
     ldr        r0,DAT_0801b4d0\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801b4d4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b518\n\
     mov        r4,#0x0\n\
     b          LAB_0801b4e6\n\
.space 1\n\
.space 1\n\
DAT_0801b4d0:\n\
     .4byte 0x02000448\n\
DAT_0801b4d4:\n\
     .4byte 0x0000021E\n\
LAB_0801b4d8:\n\
     lsl        r0,r4,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_08004694\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     add        r4,#0x1\n\
LAB_0801b4e6:\n\
     bl         fun_0800467c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r4,r0\n\
     blt        LAB_0801b4d8\n\
     bl         fun_08003cfc\n\
     ldr        r1,DAT_0801b54c\n\
     ldr        r0,DAT_0801b550\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801b554\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801b558\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     bl         fun_080046a4\n\
     mov        r0,#0x0\n\
     bl         fun_080045d8\n\
LAB_0801b518:\n\
     ldr        r4,DAT_0801b550\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x12]\n\
     ldrh       r1,[r2,#0x14]\n\
     ldrh       r2,[r2,#0x16]\n\
     bl         fun_0803c1ec\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x13\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r1,[r0,#0x18]\n\
     strh       r1,[r2,#0x0]\n\
     add        r0,#0x1e\n\
     bl         fun_080045f0\n\
     ldr        r1,DAT_0801b55c\n\
     mov        r0,#0xff\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x10\n\
     strh       r1,[r0,#0x2]\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     b          switchD_0801b00e_default\n\
.space 1\n\
.space 1\n\
DAT_0801b54c:\n\
     .4byte 0x040000C8\n\
DAT_0801b550:\n\
     .4byte 0x02000448\n\
DAT_0801b554:\n\
     .4byte 0x03002000\n\
DAT_0801b558:\n\
     .4byte 0x80000200\n\
DAT_0801b55c:\n\
     .4byte 0x04000050\n\
switchD_0801b00e_caseD_5:\n\
     ldr        r1,DAT_0801b584\n\
     mov        r0,r8\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,DAT_0801b588\n\
     cmp        r0,r1\n\
     bne        switchD_0801b00e_default\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     b          LAB_0801b58e\n\
.space 1\n\
.space 1\n\
DAT_0801b584:\n\
     .4byte 0x04000054\n\
DAT_0801b588:\n\
     .4byte 0xFFFF0000\n\
switchD_0801b00e_default:\n\
     mov        r0,#0x0\n\
LAB_0801b58e:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801b598()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_0801b5c8\n\
     ldr        r0,DAT_0801b5cc\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x1a]\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x4\n\
     ldrh       r0,[r2,#0x1c]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801b5d0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b5be\n\
     ldr        r0,DAT_0801b5d4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bne        LAB_0801b5be\n\
     bl         fun_08002844\n\
LAB_0801b5be:\n\
     bl         fun_08001720\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801b5c8:\n\
     .4byte 0x04000050\n\
DAT_0801b5cc:\n\
     .4byte 0x02000448\n\
DAT_0801b5d0:\n\
     .4byte 0x02005750\n\
DAT_0801b5d4:\n\
     .4byte 0x02005710\n\
    ");
}
