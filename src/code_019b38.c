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
     .4byte 0x0200E5C0\n\
DAT_08019b54:\n\
     .4byte 0x08494D60\n\
DAT_08019b58:\n\
     .4byte 0x0200E5D0\n\
DAT_08019b5c:\n\
     .4byte 0x08494CFC\n\
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
     .4byte 0x040000D4\n\
DAT_08019c00:\n\
     .4byte 0x81000200\n\
DAT_08019c04:\n\
     .4byte 0x8100C000\n\
DAT_08019c08:\n\
     .4byte 0x00001F54\n\
DAT_08019c0c:\n\
     .4byte 0x08495030\n\
DAT_08019c10:\n\
     .4byte 0x08494E30\n\
DAT_08019c14:\n\
     .4byte 0x80000100\n\
DAT_08019c18:\n\
     .4byte 0x00001F44\n\
DAT_08019c1c:\n\
     .4byte 0x08063D90\n\
PTR_DAT_08019c20:\n\
     .4byte       DAT_0200260c\n\
PTR_DAT_08019c24:\n\
     .4byte       DAT_0200e5dc\n\
PTR_DAT_08019c28:\n\
     .4byte       DAT_02002604\n\
PTR_DAT_08019c2c:\n\
     .4byte       DAT_0200e5e0\n\
DAT_08019c30:\n\
     .4byte 0x00007CC2\n\
DAT_08019c34:\n\
     .4byte 0x00007FFF\n\
DAT_08019c38:\n\
     .4byte 0x0200E5E4\n\
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
     .4byte 0x0200E5E4\n\
DAT_08019ce8:\n\
     .4byte 0x0200E5E0\n\
DAT_08019cec:\n\
     .4byte 0x08049824\n\
DAT_08019cf0:\n\
     .4byte 0x0200E5DC\n\
DAT_08019cf4:\n\
     .4byte 0x08669620\n\
DAT_08019cf8:\n\
     .4byte 0x020025B4\n\
DAT_08019cfc:\n\
     .4byte 0x02002600\n\
DAT_08019d00:\n\
     .4byte 0x0865FD94\n\
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
     .4byte 0x0200E5DC\n\
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
     .4byte 0x0200E5E8\n\
DAT_08019d70:\n\
     .4byte 0x0200E5B0\n\
DAT_08019d74:\n\
     .4byte 0x0200E570\n\
DAT_08019d78:\n\
     .4byte 0x0200E4D0\n\
DAT_08019d7c:\n\
     .4byte 0x0200E5B4\n\
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
     .4byte 0x0200E5B4\n\
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
     .4byte 0x0200E570\n\
DAT_08019e7c:\n\
     .4byte 0x0000FFEF\n\
DAT_08019e80:\n\
     .4byte 0x08668DB4\n\
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
     .4byte 0x0200E570\n\
DAT_08019edc:\n\
     .4byte 0x0849BFE8\n\
DAT_08019ee0:\n\
     .4byte 0x0200E5E8\n\
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
     .4byte 0x08049824\n\
DAT_0801a010:\n\
     .4byte 0x0000FFF0\n\
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
     .4byte 0x0200E5B0\n\
DAT_0801a090:\n\
     .4byte 0x02002528\n\
DAT_0801a094:\n\
     .4byte 0x0200DCA8\n\
DAT_0801a098:\n\
     .4byte 0x020025FC\n\
DAT_0801a09c:\n\
     .4byte 0x020025C0\n\
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
     .4byte 0x020025C0\n\
DAT_0801a0f0:\n\
     .4byte 0x08498F98\n\
DAT_0801a0f4:\n\
     .4byte 0x0200E5B4\n\
DAT_0801a0f8:\n\
     .4byte 0x02002528\n\
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
     .4byte 0x040000D4\n\
DAT_0801a18c:\n\
     .4byte 0x8100C000\n\
DAT_0801a190:\n\
     .4byte 0x81000200\n\
DAT_0801a194:\n\
     .4byte 0x00001F44\n\
DAT_0801a198:\n\
     .4byte 0x0849BFF8\n\
DAT_0801a19c:\n\
     .4byte 0x0849C1F8\n\
DAT_0801a1a0:\n\
     .4byte 0x84000080\n\
DAT_0801a1a4:\n\
     .4byte 0x0849C3F8\n\
DAT_0801a1a8:\n\
     .4byte 0x0600A000\n\
DAT_0801a1ac:\n\
     .4byte 0x00001F54\n\
DAT_0801a1b0:\n\
     .4byte 0x0400000C\n\
DAT_0801a1b4:\n\
     .4byte 0x0200E4D0\n\
DAT_0801a1b8:\n\
     .4byte 0x0200E5B0\n\
DAT_0801a1bc:\n\
     .4byte 0x0200E5B4\n\
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
     .4byte 0x08498FE4\n\
DAT_0801a218:\n\
     .4byte 0x020025C0\n\
DAT_0801a21c:\n\
     .4byte 0x0865FD84\n\
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
     .4byte 0x0200E5F0\n\
DAT_0801a23c:\n\
     .4byte 0x0849FFD0\n\
DAT_0801a240:\n\
     .4byte 0x0200E600\n\
DAT_0801a244:\n\
     .4byte 0x0849FF6C\n\
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
     .4byte 0x0200E638\n\
DAT_0801a32c:\n\
     .4byte 0x0200E634\n\
DAT_0801a330:\n\
     .4byte 0x0200E610\n\
DAT_0801a334:\n\
     .4byte 0x040000D4\n\
DAT_0801a338:\n\
     .4byte 0x8100C000\n\
DAT_0801a33c:\n\
     .4byte 0x81000200\n\
DAT_0801a340:\n\
     .4byte 0x00001F44\n\
DAT_0801a344:\n\
     .4byte 0x0400000C\n\
DAT_0801a348:\n\
     .4byte 0x81000100\n\
DAT_0801a34c:\n\
     .4byte 0x084A0574\n\
DAT_0801a350:\n\
     .4byte 0x0600A000\n\
DAT_0801a354:\n\
     .4byte 0x084A0374\n\
DAT_0801a358:\n\
     .4byte 0x80000100\n\
DAT_0801a35c:\n\
     .4byte 0x00001F54\n\
DAT_0801a360:\n\
     .4byte 0x084A0174\n\
DAT_0801a364:\n\
     .4byte 0x0200E620\n\
DAT_0801a368:\n\
     .4byte 0x084A0164\n\
DAT_0801a36c:\n\
     .4byte 0x03E90000\n\
DAT_0801a370:\n\
     .4byte 0x0200E630\n\
DAT_0801a374:\n\
     .4byte 0x0200E62C\n\
DAT_0801a378:\n\
     .4byte 0x0878057C\n\
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
     .4byte 0x0200E630\n\
DAT_0801a3a4:\n\
     .4byte 0x0200E62C\n\
DAT_0801a3a8:\n\
     .4byte 0x0200E638\n\
DAT_0801a3ac:\n\
     .4byte 0x0878053C\n\
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
     .4byte 0x0200E638\n\
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
     .4byte 0x0200E630\n\
DAT_0801a3f0:\n\
     .4byte 0x0200E610\n\
DAT_0801a3f4:\n\
     .4byte 0x0200E62C\n\
DAT_0801a3f8:\n\
     .4byte 0x0878057C\n\
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
     .4byte 0x0200E62C\n\
DAT_0801a430:\n\
     .4byte 0x0878053C\n\
DAT_0801a434:\n\
     .4byte 0x0200E638\n\
DAT_0801a438:\n\
     .4byte 0x0200E630\n\
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
     .4byte 0x0200E610\n\
DAT_0801a458:\n\
     .4byte 0x0200E62C\n\
DAT_0801a45c:\n\
     .4byte 0x0878057C\n\
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
     .4byte 0x0200E62C\n\
DAT_0801a48c:\n\
     .4byte 0x0878053C\n\
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
     .4byte 0x0200E634\n\
DAT_0801a4b8:\n\
     .4byte 0x00007FE0\n\
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
     .4byte 0x00007FFF\n\
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
     .4byte 0x0000211F\n\
DAT_0801a5a0:\n\
     .4byte 0x08669620\n\
DAT_0801a5a4:\n\
     .4byte 0x020025B4\n\
DAT_0801a5a8:\n\
     .4byte 0x0865FD94\n\
DAT_0801a5ac:\n\
     .4byte 0x0200E620\n\
DAT_0801a5b0:\n\
     .4byte 0x02005210\n\
DAT_0801a5b4:\n\
     .4byte 0x0000FDFF\n\
DAT_0801a5b8:\n\
     .4byte 0x084A00A0\n\
DAT_0801a5bc:\n\
     .4byte 0x000001F3\n\
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
.space 1\n\
.space 1\n\
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
     .4byte 0x040000D4\n\
DAT_0801a784:\n\
     .4byte 0x8100C000\n\
DAT_0801a788:\n\
     .4byte 0x81000200\n\
DAT_0801a78c:\n\
     .4byte 0x0200E654\n\
DAT_0801a790:\n\
     .4byte 0x020006A0\n\
DAT_0801a794:\n\
     .4byte 0x00001F44\n\
DAT_0801a798:\n\
     .4byte 0x087806C8\n\
DAT_0801a79c:\n\
     .4byte 0x0600A000\n\
DAT_0801a7a0:\n\
     .4byte 0x087806D4\n\
DAT_0801a7a4:\n\
     .4byte 0x80000100\n\
DAT_0801a7a8:\n\
     .4byte 0x00001F54\n\
DAT_0801a7ac:\n\
     .4byte 0x084A3FF8\n\
DAT_0801a7b0:\n\
     .4byte 0x0200E64C\n\
DAT_0801a7b4:\n\
     .4byte 0x084A4018\n\
DAT_0801a7b8:\n\
     .4byte 0x0200E644\n\
DAT_0801a7bc:\n\
     .4byte 0x4031CCCC\n\
DAT_0801a7c0:\n\
     .4byte 0xCCCCCCCD\n\
DAT_0801a7c4:\n\
     .4byte 0x0200E648\n\
DAT_0801a7c8:\n\
     .4byte 0x0200E640\n\
DAT_0801a7cc:\n\
     .4byte 0x0200E650\n\
DAT_0801a7d0:\n\
     .4byte 0x0200E63C\n\
    ");
}
