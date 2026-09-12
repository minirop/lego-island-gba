__attribute__((naked)) void fun_08021bb0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     bl         fun_08021d4c\n\
     bl         fun_08021ae4\n\
     ldr        r6,PTR_DAT_08021c28\n\
     mov        r4,#0x0\n\
LAB_08021bbe:\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021bd6\n\
     lsl        r0,r4,#0x1\n\
     add        r5,r6,#0x4\n\
     add        r0,r5,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x63\n\
     bhi        LAB_08021c38\n\
LAB_08021bd6:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bls        LAB_08021bbe\n\
LAB_08021be0:\n\
     ldr        r0,PTR_DAT_08021c2c\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r0,r2]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08021bec\n\
     b          LAB_08021d28\n\
LAB_08021bec:\n\
     ldr        r0,PTR_DAT_08021c30\n\
     add        r4,r0,#0x0\n\
     add        r4,#0x88\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_08021c7c\n\
     mov        r0,#0x4\n\
     bl         fun_080214e8\n\
     lsl        r0,r0,#0x18\n\
     asr        r1,r0,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_08021c68\n\
     mov        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r2,PTR_DAT_08021c34\n\
     mov        r0,#0x3\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x1\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r2,#0x3]\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x3]\n\
     b          LAB_08021d3c\n\
PTR_DAT_08021c28:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_08021c2c:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08021c30:\n\
     .4byte       DAT_0200f150\n\
PTR_DAT_08021c34:\n\
     .4byte       DAT_02005760\n\
LAB_08021c38:\n\
     ldr        r1,DAT_08021c5c\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     ldr        r1,DAT_08021c60\n\
     ldr        r0,DAT_08021c64\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r0,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r5,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_08021be0\n\
.space 1\n\
.space 1\n\
DAT_08021c5c:\n\
     .4byte 0x020025C8\n\
DAT_08021c60:\n\
     .4byte 0x020025FC\n\
DAT_08021c64:\n\
     .4byte 0x02005750\n\
LAB_08021c68:\n\
     ldr        r1,DAT_08021c78\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x3]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x3]\n\
     b          LAB_08021d3c\n\
.space 1\n\
.space 1\n\
DAT_08021c78:\n\
     .4byte 0x02005760\n\
LAB_08021c7c:\n\
     ldr        r6,PTR_DAT_08021cd4\n\
     ldrb       r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     ldr        r4,PTR_DAT_08021cd8\n\
     cmp        r0,#0x3b\n\
     bls        LAB_08021cc0\n\
     strb       r1,[r6,#0x0]\n\
     ldr        r3,PTR_DAT_08021cdc\n\
     ldr        r2,PTR_DAT_08021ce0\n\
     ldrb       r1,[r2,#0x3]\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r1,r0,#0x1e\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r3\n\
     lsr        r0,r0,#0x1e\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldrb       r2,[r2,#0x3]\n\
     lsl        r0,r2,#0x1d\n\
     lsr        r2,r0,#0x1e\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r4,#0x4\n\
     add        r2,r2,r1\n\
     lsr        r0,r0,#0x1e\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_08021cc0:\n\
     ldr        r7,PTR_DAT_08021ce4\n\
     ldrb       r5,[r7,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_08021ce8\n\
     mov        r0,#0x8\n\
     ldrb       r2,[r4,#0x3]\n\
     orr        r0,r2\n\
     strb       r0,[r4,#0x3]\n\
     b          LAB_08021d3c\n\
.space 1\n\
.space 1\n\
PTR_DAT_08021cd4:\n\
     .4byte       DAT_0200f25c\n\
PTR_DAT_08021cd8:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_08021cdc:\n\
     .4byte       DAT_02005700\n\
PTR_DAT_08021ce0:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_08021ce4:\n\
     .4byte       DAT_0200f1f0\n\
LAB_08021ce8:\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r4,#0x3]\n\
     and        r0,r3\n\
     strb       r0,[r4,#0x3]\n\
     ldr        r0,DAT_08021d24\n\
     ldrb       r0,[r0,#0x3]\n\
     lsl        r0,r0,#0x1d\n\
     lsr        r0,r0,#0x1e\n\
     bl         fun_080214e8\n\
     lsl        r0,r0,#0x18\n\
     asr        r1,r0,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_08021d3c\n\
     mov        r0,#0x3\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x1\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r4,#0x3]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x3]\n\
     mov        r0,#0xf0\n\
     strb       r0,[r7,#0x0]\n\
     strb       r5,[r6,#0x0]\n\
     b          LAB_08021d3c\n\
DAT_08021d24:\n\
     .4byte 0x02005710\n\
LAB_08021d28:\n\
     ldr        r1,DAT_08021d44\n\
     mov        r0,#0x10\n\
     ldrb       r1,[r1,#0x3]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021d3c\n\
     ldr        r0,DAT_08021d48\n\
     add        r0,#0x88\n\
     mov        r1,#0x1\n\
     str        r1,[r0,#0x0]\n\
LAB_08021d3c:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08021d44:\n\
     .4byte 0x02005710\n\
DAT_08021d48:\n\
     .4byte 0x0200F150\n\
    ");
}
__attribute__((naked)) void fun_08021d4c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r2,DAT_08021d80\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r2,r0]\n\
     ldr        r1,DAT_08021d84\n\
     ldrb       r4,[r1,#0x3]\n\
     lsl        r0,r4,#0x1d\n\
     lsr        r0,r0,#0x1e\n\
     add        r6,r2,#0x0\n\
     add        r5,r1,#0x0\n\
     cmp        r3,r0\n\
     beq        LAB_08021d6c\n\
     mov        r0,#0x10\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021d8c\n\
LAB_08021d6c:\n\
     ldr        r0,DAT_08021d88\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_08021e06\n\
.space 1\n\
.space 1\n\
DAT_08021d80:\n\
     .4byte 0x02005750\n\
DAT_08021d84:\n\
     .4byte 0x02005710\n\
DAT_08021d88:\n\
     .4byte 0x0200F240\n\
LAB_08021d8c:\n\
     ldr        r2,DAT_08021db4\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08021db8\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x8\n\
     ldrb       r1,[r5,#0x3]\n\
     and        r0,r1\n\
     add        r4,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021dbc\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     b          LAB_08021dc4\n\
.space 1\n\
.space 1\n\
DAT_08021db4:\n\
     .4byte 0x0200F240\n\
DAT_08021db8:\n\
     .4byte 0x0000FDFF\n\
LAB_08021dbc:\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_08021e0c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
LAB_08021dc4:\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r3,DAT_08021e10\n\
     mov        r0,#0x4\n\
     ldrsh      r2,[r6,r0]\n\
     lsl        r2,r2,#0x5\n\
     add        r2,r2,r3\n\
     ldrb       r5,[r5,#0x3]\n\
     lsl        r1,r5,#0x1d\n\
     lsr        r0,r1,#0x1e\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r3\n\
     ldrh       r5,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,r5,r0\n\
     lsr        r1,r1,#0x1e\n\
     lsl        r1,r1,#0x5\n\
     add        r1,r1,r3\n\
     ldrh       r2,[r2,#0x6]\n\
     ldrh       r1,[r1,#0x6]\n\
     sub        r1,r2,r1\n\
     ldr        r4,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_0803d064\n\
     add        r1,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x18\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800476c\n\
LAB_08021e06:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08021e0c:\n\
     .4byte 0x0000F7FF\n\
DAT_08021e10:\n\
     .4byte 0x0200F150\n\
    ");
}
__attribute__((naked)) void fun_08021e14()
{
    asm("\n\
     ldr        r2,PTR_DAT_08021e3c\n\
     ldr        r0,PTR_DAT_08021e40\n\
     add        r0,#0x88\n\
     mov        r1,#0x2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08021e44\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08021e48\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0xc]\n\
     str        r0,[r1,#0x8]\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x0]\n\
     strh       r0,[r2,#0xa]\n\
     strh       r0,[r2,#0x8]\n\
     strh       r0,[r2,#0x6]\n\
     strh       r0,[r2,#0x4]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
PTR_DAT_08021e3c:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_08021e40:\n\
     .4byte       DAT_0200f150\n\
PTR_DAT_08021e44:\n\
     .4byte       DAT_0200f25c\n\
PTR_DAT_08021e48:\n\
     .4byte       DAT_02005700\n\
    ");
}
__attribute__((naked)) void fun_08021e4c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r6,DAT_08021e8c\n\
     mov        r4,#0x0\n\
     ldr        r7,DAT_08021e90\n\
LAB_08021e54:\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021e9c\n\
     lsl        r0,r4,#0x1\n\
     add        r5,r6,#0x4\n\
     add        r0,r5,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x63\n\
     bls        LAB_08021e9c\n\
     ldr        r1,DAT_08021e94\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     ldr        r0,DAT_08021e98\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r0,r1]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r5,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     str        r0,[r7,#0x0]\n\
     b          LAB_08021ea6\n\
DAT_08021e8c:\n\
     .4byte 0x02005710\n\
DAT_08021e90:\n\
     .4byte 0x020025FC\n\
DAT_08021e94:\n\
     .4byte 0x020025C8\n\
DAT_08021e98:\n\
     .4byte 0x02005750\n\
LAB_08021e9c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bls        LAB_08021e54\n\
LAB_08021ea6:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08021eac()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_08021ef0\n\
     ldrb       r1,[r4,#0x1]\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r0,r0,#0x1c\n\
     mov        r2,#0xfe\n\
     and        r2,r0\n\
     mov        r3,#0x10\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     orr        r0,r2\n\
     mov        r1,#0xfd\n\
     and        r1,r2\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     mov        r2,#0xfb\n\
     and        r1,r2\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     and        r0,r3\n\
     strb       r0,[r4,#0x1]\n\
     ldr        r0,DAT_08021ef4\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08021ef8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08021efc\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08021ef0:\n\
     .4byte 0x02005760\n\
DAT_08021ef4:\n\
     .4byte 0x0200F254\n\
DAT_08021ef8:\n\
     .4byte 0x0200F258\n\
DAT_08021efc:\n\
     .4byte 0x0200F268\n\
    ");
}
__attribute__((naked)) void fun_08021f00()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x50\n\
     ldr        r0,DAT_08021f2c\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021fe6\n\
     ldr        r1,DAT_08021f30\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021f38\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021fd8\n\
     ldr        r1,DAT_08021f34\n\
     mov        r2,#0xf0\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08021fd8\n\
DAT_08021f2c:\n\
     .4byte 0x02005750\n\
DAT_08021f30:\n\
     .4byte 0x0200F268\n\
DAT_08021f34:\n\
     .4byte 0x0200F254\n\
LAB_08021f38:\n\
     ldr        r1,DAT_08021fb0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021f54\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021f54\n\
     ldr        r1,DAT_08021fb4\n\
     mov        r4,#0xf0\n\
     lsl        r4,r4,#0x5\n\
     add        r0,r4,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08021f54:\n\
     ldr        r4,DAT_08021fb4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021fd8\n\
     ldr        r0,DAT_08021fb8\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     bl         fun_080214e8\n\
     lsl        r2,r0,#0x18\n\
     lsr        r0,r2,#0x18\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08021fc8\n\
     ldr        r4,DAT_08021fbc\n\
     ldrb       r3,[r4,#0x1]\n\
     lsl        r0,r3,#0x1c\n\
     lsr        r0,r0,#0x1c\n\
     asr        r2,r2,#0x18\n\
     mov        r5,#0x1\n\
     add        r1,r5,#0x0\n\
     lsl        r1,r2\n\
     orr        r1,r0\n\
     mov        r0,#0xf\n\
     and        r1,r0\n\
     mov        r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x1]\n\
     ldr        r0,DAT_08021fc0\n\
     lsl        r2,r2,#0x5\n\
     add        r0,#0x8\n\
     add        r2,r2,r0\n\
     str        r5,[r2,#0x0]\n\
     ldr        r1,DAT_08021fc4\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021fd8\n\
     bl         fun_08022178\n\
     b          LAB_08021fd8\n\
.space 1\n\
.space 1\n\
DAT_08021fb0:\n\
     .4byte 0x0200F254\n\
DAT_08021fb4:\n\
     .4byte 0x0200F258\n\
DAT_08021fb8:\n\
     .4byte 0x0200F264\n\
DAT_08021fbc:\n\
     .4byte 0x02005760\n\
DAT_08021fc0:\n\
     .4byte 0x0200F150\n\
DAT_08021fc4:\n\
     .4byte 0x0200F234\n\
LAB_08021fc8:\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021fd8\n\
     bl         fun_08022178\n\
LAB_08021fd8:\n\
     ldr        r1,DAT_08022028\n\
     ldr        r0,DAT_0802202c\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_08022030\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
LAB_08021fe6:\n\
     ldr        r0,DAT_08022034\n\
     ldrh       r1,[r0,#0x4]\n\
     lsl        r3,r1,#0x10\n\
     cmp        r3,#0x0\n\
     beq        LAB_08022074\n\
     ldrb       r0,[r0,#0x3]\n\
     lsl        r0,r0,#0x1d\n\
     lsr        r0,r0,#0x1e\n\
     ldr        r1,DAT_08022038\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r1,r2]\n\
     cmp        r0,r1\n\
     beq        LAB_08022050\n\
     ldr        r1,DAT_0802203c\n\
     ldr        r2,DAT_08022040\n\
     ldr        r0,DAT_08022044\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,DAT_08022048\n\
     add        r2,r2,r4\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     lsr        r3,r3,#0x16\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r2,DAT_0802204c\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     b          LAB_08022074\n\
.space 1\n\
.space 1\n\
DAT_08022028:\n\
     .4byte 0x02005760\n\
DAT_0802202c:\n\
     .4byte 0x0200F254\n\
DAT_08022030:\n\
     .4byte 0x0200F258\n\
DAT_08022034:\n\
     .4byte 0x02005710\n\
DAT_08022038:\n\
     .4byte 0x02005750\n\
DAT_0802203c:\n\
     .4byte 0x084FC114\n\
DAT_08022040:\n\
     .4byte 0x08669620\n\
DAT_08022044:\n\
     .4byte 0x020025B4\n\
DAT_08022048:\n\
     .4byte 0x0000C334\n\
DAT_0802204c:\n\
     .4byte 0x0865FD94\n\
LAB_08022050:\n\
     ldr        r1,DAT_080220b4\n\
     ldr        r2,DAT_080220b8\n\
     ldr        r0,DAT_080220bc\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,DAT_080220c0\n\
     add        r2,r2,r4\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     lsr        r3,r3,#0x16\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r2,DAT_080220c4\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
LAB_08022074:\n\
     ldr        r0,DAT_080220c8\n\
     ldrh       r1,[r0,#0x6]\n\
     lsl        r3,r1,#0x10\n\
     cmp        r3,#0x0\n\
     beq        LAB_0802213e\n\
     ldrb       r0,[r0,#0x3]\n\
     lsl        r0,r0,#0x1d\n\
     lsr        r0,r0,#0x1e\n\
     ldr        r1,DAT_080220cc\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r1,r2]\n\
     cmp        r0,r1\n\
     beq        LAB_080220d4\n\
     ldr        r1,DAT_080220b4\n\
     ldr        r2,DAT_080220b8\n\
     ldr        r0,DAT_080220bc\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,DAT_080220d0\n\
     add        r2,r2,r4\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     lsr        r3,r3,#0x16\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r2,DAT_080220c4\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     b          LAB_080220f8\n\
DAT_080220b4:\n\
     .4byte 0x084FC114\n\
DAT_080220b8:\n\
     .4byte 0x08669620\n\
DAT_080220bc:\n\
     .4byte 0x020025B4\n\
DAT_080220c0:\n\
     .4byte 0x0000C364\n\
DAT_080220c4:\n\
     .4byte 0x0865FD94\n\
DAT_080220c8:\n\
     .4byte 0x02005710\n\
DAT_080220cc:\n\
     .4byte 0x02005750\n\
DAT_080220d0:\n\
     .4byte 0x0000C394\n\
LAB_080220d4:\n\
     ldr        r1,DAT_08022100\n\
     ldr        r2,DAT_08022104\n\
     ldr        r0,DAT_08022108\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,DAT_0802210c\n\
     add        r2,r2,r4\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     lsr        r3,r3,#0x16\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r2,DAT_08022110\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
LAB_080220f8:\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_08022114\n\
     b          LAB_08022136\n\
.space 1\n\
.space 1\n\
DAT_08022100:\n\
     .4byte 0x084FC114\n\
DAT_08022104:\n\
     .4byte 0x08669620\n\
DAT_08022108:\n\
     .4byte 0x020025B4\n\
DAT_0802210c:\n\
     .4byte 0x0000C3C4\n\
DAT_08022110:\n\
     .4byte 0x0865FD94\n\
DAT_08022114:\n\
     .4byte 0x0200F158\n\
LAB_08022118:\n\
     ldr        r0,DAT_0802216c\n\
     ldrb       r0,[r0,#0x1]\n\
     lsl        r0,r0,#0x1c\n\
     lsr        r0,r0,#0x1c\n\
     asr        r0,r4\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022130\n\
     lsl        r0,r4,#0x5\n\
     add        r0,r0,r5\n\
     str        r1,[r0,#0x0]\n\
LAB_08022130:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_08022136:\n\
     bl         fun_08002968\n\
     cmp        r4,r0\n\
     blt        LAB_08022118\n\
LAB_0802213e:\n\
     ldr        r0,DAT_08022170\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022162\n\
     ldr        r5,DAT_0802216c\n\
     ldrb       r1,[r5,#0x3]\n\
     lsl        r0,r1,#0x19\n\
     ldr        r4,DAT_08022174\n\
     lsr        r0,r0,#0x1e\n\
     ldrh       r2,[r4,#0x0]\n\
     cmp        r0,r2\n\
     beq        LAB_08022162\n\
     bl         fun_08021a60\n\
     ldrb       r5,[r5,#0x3]\n\
     lsl        r0,r5,#0x19\n\
     lsr        r0,r0,#0x1e\n\
     strh       r0,[r4,#0x0]\n\
LAB_08022162:\n\
     add        sp,#0x50\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802216c:\n\
     .4byte 0x02005710\n\
DAT_08022170:\n\
     .4byte 0x0200F268\n\
DAT_08022174:\n\
     .4byte 0x0200F260\n\
    ");
}
__attribute__((naked)) void fun_08022178()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,DAT_080221f8\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r4,DAT_080221fc\n\
     bl         fun_08002968\n\
     add        r1,r0,#0x0\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     bl         fun_080435d0\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r4,DAT_08022200\n\
     mov        r2,#0x3\n\
     and        r0,r2\n\
     lsl        r0,r0,#0x1\n\
     mov        r1,#0x7\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r3,[r4,#0x3]\n\
     and        r1,r3\n\
     orr        r1,r0\n\
     lsl        r0,r1,#0x19\n\
     lsr        r0,r0,#0x1e\n\
     add        r0,#0x1\n\
     and        r0,r2\n\
     lsl        r0,r0,#0x5\n\
     mov        r2,#0x61\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     and        r1,r2\n\
     orr        r1,r0\n\
     strb       r1,[r4,#0x3]\n\
     ldrb       r1,[r4,#0x1]\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r0,r0,#0x1c\n\
     mov        r2,#0xfe\n\
     and        r2,r0\n\
     mov        r3,#0x10\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     orr        r0,r2\n\
     mov        r1,#0xfd\n\
     and        r1,r2\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     mov        r2,#0xfb\n\
     and        r1,r2\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     and        r0,r3\n\
     strb       r0,[r4,#0x1]\n\
     ldr        r0,DAT_08022204\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08022208\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0802220c\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080221f8:\n\
     .4byte 0x0200F234\n\
DAT_080221fc:\n\
     .4byte 0x0200F264\n\
DAT_08022200:\n\
     .4byte 0x02005760\n\
DAT_08022204:\n\
     .4byte 0x0200F254\n\
DAT_08022208:\n\
     .4byte 0x0200F258\n\
DAT_0802220c:\n\
     .4byte 0x0200F268\n\
    ");
}
__attribute__((naked)) void fun_08022210()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_0802228c\n\
     mov        r10,r0\n\
     ldr        r1,DAT_08022290\n\
     mov        r8,r1\n\
     ldr        r2,DAT_08022294\n\
     mov        r9,r2\n\
LAB_08022228:\n\
     mov        r3,r10\n\
     ldrb       r3,[r3,#0x3]\n\
     lsl        r0,r3,#0x1d\n\
     lsr        r1,r0,#0x1e\n\
     ldr        r0,DAT_08022298\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r0,r4]\n\
     cmp        r1,r0\n\
     bne        LAB_080222f4\n\
     cmp        r1,r5\n\
     beq        LAB_080222f4\n\
     lsl        r0,r5,#0x5\n\
     ldr        r6,DAT_0802229c\n\
     add        r1,r0,r6\n\
     ldr        r1,[r1,#0x0]\n\
     add        r7,r0,#0x0\n\
     cmp        r1,#0x2\n\
     bne        LAB_080222f4\n\
     add        r0,r5,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080222f4\n\
     lsl        r2,r5,#0x2\n\
     mov        r0,r9\n\
     add        r3,r2,r0\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r4,DAT_080222a0\n\
     add        r0,r4,#0x0\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     mov        r6,#0x0\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x8\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x3]\n\
     and        r0,r1\n\
     ldr        r4,DAT_08022294\n\
     mov        r12,r4\n\
     add        r4,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080222a4\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x4\n\
     add        r0,r6,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     b          LAB_080222ae\n\
DAT_0802228c:\n\
     .4byte 0x02005710\n\
DAT_08022290:\n\
     .4byte 0x0200F150\n\
DAT_08022294:\n\
     .4byte 0x0200F240\n\
DAT_08022298:\n\
     .4byte 0x02005750\n\
DAT_0802229c:\n\
     .4byte 0x0200F158\n\
DAT_080222a0:\n\
     .4byte 0x0000FDFF\n\
LAB_080222a4:\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r3,DAT_080222ec\n\
     add        r0,r3,#0x0\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
LAB_080222ae:\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_080222f0\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r0,r2]\n\
     lsl        r1,r1,#0x5\n\
     add        r1,r8\n\
     mov        r3,r8\n\
     add        r2,r7,r3\n\
     ldrh       r6,[r1,#0x4]\n\
     ldrh       r3,[r2,#0x4]\n\
     sub        r0,r6,r3\n\
     ldrh       r1,[r1,#0x6]\n\
     ldrh       r2,[r2,#0x6]\n\
     sub        r1,r1,r2\n\
     mov        r6,r12\n\
     add        r2,r4,r6\n\
     ldr        r4,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_0803d064\n\
     add        r1,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x18\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800476c\n\
     b          LAB_08022306\n\
.space 1\n\
.space 1\n\
DAT_080222ec:\n\
     .4byte 0x0000F7FF\n\
DAT_080222f0:\n\
     .4byte 0x02005750\n\
LAB_080222f4:\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r9\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
LAB_08022306:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x3\n\
     bls        LAB_08022228\n\
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
__attribute__((naked)) void fun_08022320()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     bl         fun_08022210\n\
     ldr        r5,DAT_0802237c\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022376\n\
     ldr        r4,DAT_08022380\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r4,#0x3]\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x3]\n\
     ldr        r0,DAT_08022384\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022376\n\
     ldr        r0,DAT_08022388\n\
     ldrb       r0,[r0,#0x3]\n\
     lsl        r0,r0,#0x1d\n\
     lsr        r0,r0,#0x1e\n\
     bl         fun_080214e8\n\
     lsl        r0,r0,#0x18\n\
     asr        r1,r0,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_08022376\n\
     mov        r0,#0x3\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x1\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r4,#0x3]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     mov        r1,#0xf0\n\
     strb       r1,[r5,#0x0]\n\
     mov        r1,#0x8\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x3]\n\
LAB_08022376:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802237c:\n\
     .4byte 0x0200F1F0\n\
DAT_08022380:\n\
     .4byte 0x02005760\n\
DAT_08022384:\n\
     .4byte 0x02005750\n\
DAT_08022388:\n\
     .4byte 0x02005710\n\
    ");
}
__attribute__((naked)) void fun_0802238c()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08022390()
{
    asm("\n\
     ldr        r2,DAT_080223a8\n\
     ldr        r0,DAT_080223ac\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_080223b0\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_080223b4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_080223a8:\n\
     .4byte 0x0200F280\n\
DAT_080223ac:\n\
     .4byte 0x08514A60\n\
DAT_080223b0:\n\
     .4byte 0x0200F270\n\
DAT_080223b4:\n\
     .4byte 0x085149FC\n\
    ");
}
__attribute__((naked)) void fun_080223b8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0xc\n\
     ldr        r4,PTR_DAT_08022410\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080223da\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     ldr        r1,PTR_DAT_08022414\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
LAB_080223da:\n\
     ldr        r1,PTR_DAT_08022418\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldrh       r2,[r4,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_080223ec\n\
     ldr        r1,PTR_DAT_0802241c\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_080223ec:\n\
     ldr        r1,PTR_DAT_08022420\n\
     mov        r5,#0x0\n\
     strh       r5,[r1,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_080223fa\n\
     ldrh       r0,[r4,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
LAB_080223fa:\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x29\n\
     bne        LAB_08022428\n\
     ldr        r1,PTR_DAT_08022424\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802242c\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022410:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022414:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_08022418:\n\
     .4byte       DAT_0200f2a4\n\
PTR_DAT_0802241c:\n\
     .4byte       DAT_02005cd4\n\
PTR_DAT_08022420:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_08022424:\n\
     .4byte       DAT_0200f2c8\n\
LAB_08022428:\n\
     ldr        r0,DAT_080224dc\n\
     strh       r5,[r0,#0x0]\n\
LAB_0802242c:\n\
     ldr        r1,DAT_080224e0\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,sp,#0x8\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_080224e4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080224e8\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r0,sp,#0x8\n\
     strh       r5,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080224ec\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080224f0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_080224f4\n\
     bl         fun_080045f0\n\
     mov        r0,#0x0\n\
     mov        r1,#0x3\n\
     bl         fun_08005a38\n\
     mov        r0,#0x1\n\
     mov        r1,#0x2\n\
     bl         fun_08005a38\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     bl         fun_08005a38\n\
     ldr        r0,DAT_080224f8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022508\n\
     mov        r5,#0x0\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_080224fc\n\
     mov        r8,r0\n\
LAB_080224a2:\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r8\n\
     str        r7,[r0,#0x0]\n\
     lsl        r4,r5,#0x5\n\
     ldr        r6,DAT_08022500\n\
     add        r4,r4,r6\n\
     mov        r0,#0x2c\n\
     add        r1,r5,#0x0\n\
     mul        r1,r0\n\
     ldr        r0,DAT_08022504\n\
     add        r1,r1,r0\n\
     add        r0,r4,#0x0\n\
     bl         fun_080004ac\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x12]\n\
     orr        r0,r1\n\
     strh       r0,[r4,#0x12]\n\
     strb       r7,[r4,#0x14]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x3\n\
     bls        LAB_080224a2\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0x4\n\
     bl         fun_0803aa14\n\
     b          LAB_08022524\n\
DAT_080224dc:\n\
     .4byte 0x0200F2C8\n\
DAT_080224e0:\n\
     .4byte 0x0200F2B0\n\
DAT_080224e4:\n\
     .4byte 0x040000D4\n\
DAT_080224e8:\n\
     .4byte 0x8100C000\n\
DAT_080224ec:\n\
     .4byte 0x81000200\n\
DAT_080224f0:\n\
     .4byte 0x0200F270\n\
DAT_080224f4:\n\
     .4byte 0x0851ABE8\n\
DAT_080224f8:\n\
     .4byte 0x02005750\n\
DAT_080224fc:\n\
     .4byte 0x02005700\n\
DAT_08022500:\n\
     .4byte 0x0200F320\n\
DAT_08022504:\n\
     .4byte 0x08514B30\n\
LAB_08022508:\n\
     ldr        r4,DAT_080226a0\n\
     ldr        r1,DAT_080226a4\n\
     add        r0,r4,#0x0\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_0803aa14\n\
     mov        r0,#0x1\n\
     ldrh       r2,[r4,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r4,#0x12]\n\
     strb       r5,[r4,#0x14]\n\
LAB_08022524:\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_080226a8\n\
     ldrh       r0,[r0,#0x8]\n\
     cmp        r4,r0\n\
     bcs        LAB_08022550\n\
     mov        r6,#0x1\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     mov        r5,#0x0\n\
     add        r7,r0,#0x0\n\
LAB_08022536:\n\
     str        r5,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1\n\
     add        r2,r6,#0x0\n\
     add        r3,r6,#0x0\n\
     bl         fun_080059c8\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r7\n\
     bcc        LAB_08022536\n\
LAB_08022550:\n\
     ldr        r1,PTR_DAT_080226ac\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080226b0\n\
     mov        r0,#0x90\n\
     lsl        r0,r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080226b4\n\
     ldr        r0,PTR_DAT_080226b8\n\
     mov        r4,#0x0\n\
     str        r4,[r0,#0x0]\n\
     str        r4,[r1,#0x0]\n\
     ldr        r0,DAT_080226a0\n\
     mov        r9,r0\n\
     ldr        r0,PTR_DAT_080226bc\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r1,r0,#0x5\n\
     add        r1,r9\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0803a140\n\
     ldr        r0,PTR_DAT_080226c0\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226c4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226c8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226cc\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226d0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226d4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226d8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226dc\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226e0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226e4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226e8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226ec\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226f0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226f4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080226f8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r6,DAT_080226fc\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022700\n\
     str        r0,[r1,#0x0]\n\
     add        r5,r6,#0x0\n\
     add        r5,#0x10\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022704\n\
     str        r0,[r1,#0x0]\n\
     mov        r7,#0x1\n\
     strh       r7,[r0,#0x6]\n\
     strh       r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022708\n\
     str        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x6]\n\
     strh       r4,[r0,#0x0]\n\
     add        r5,#0x20\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802270c\n\
     str        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x6]\n\
     strh       r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022710\n\
     str        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x6]\n\
     strh       r4,[r0,#0x0]\n\
     mov        r1,#0x40\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x30\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022714\n\
     mov        r8,r1\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x20\n\
     bl         fun_08003998\n\
     ldr        r5,PTR_DAT_08022718\n\
     str        r0,[r5,#0x0]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x10\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802271c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_08022720\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802264e\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x40\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08022724\n\
     str        r0,[r1,#0x0]\n\
     bl         fun_080233a8\n\
LAB_0802264e:\n\
     ldr        r1,[r5,#0x0]\n\
     strh       r7,[r1,#0x6]\n\
     mov        r0,r8\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r7,[r2,#0x6]\n\
     mov        r0,#0x25\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     strh       r0,[r2,#0x2]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08022728\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r4,r2]\n\
     lsl        r1,r1,#0x5\n\
     add        r1,r9\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,#0x4\n\
     ldrsh      r2,[r4,r1]\n\
     mov        r1,#0x2c\n\
     mul        r1,r2\n\
     ldr        r2,DAT_080226a4\n\
     add        r1,r1,r2\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_0802272c\n\
     str        r1,[r0,#0x8]\n\
     bl         fun_0803ab8c\n\
     ldr        r1,DAT_08022730\n\
     ldr        r2,DAT_08022734\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080226a0:\n\
     .4byte 0x0200F320\n\
DAT_080226a4:\n\
     .4byte 0x08514B30\n\
DAT_080226a8:\n\
     .4byte 0x085149FC\n\
PTR_DAT_080226ac:\n\
     .4byte       DAT_0200f290\n\
PTR_DAT_080226b0:\n\
     .4byte       DAT_0200f2b8\n\
PTR_DAT_080226b4:\n\
     .4byte       DAT_0200f298\n\
PTR_DAT_080226b8:\n\
     .4byte       DAT_0200f2fc\n\
PTR_DAT_080226bc:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_080226c0:\n\
     .4byte       DAT_0200f2cc\n\
PTR_DAT_080226c4:\n\
     .4byte       DAT_0200f2f8\n\
PTR_DAT_080226c8:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_080226cc:\n\
     .4byte       DAT_0200f3a0\n\
PTR_DAT_080226d0:\n\
     .4byte       DAT_0200f2b4\n\
PTR_DAT_080226d4:\n\
     .4byte       DAT_0200f2bc\n\
PTR_DAT_080226d8:\n\
     .4byte       DAT_0200f2d0\n\
PTR_DAT_080226dc:\n\
     .4byte       DAT_0200f294\n\
PTR_DAT_080226e0:\n\
     .4byte       DAT_0200f2f0\n\
PTR_DAT_080226e4:\n\
     .4byte       DAT_0200f2c4\n\
PTR_DAT_080226e8:\n\
     .4byte       DAT_0200f30c\n\
PTR_DAT_080226ec:\n\
     .4byte       DAT_0200f29c\n\
PTR_DAT_080226f0:\n\
     .4byte       DAT_0200f2ac\n\
PTR_DAT_080226f4:\n\
     .4byte       DAT_0200f2ec\n\
PTR_DAT_080226f8:\n\
     .4byte       DAT_0200f2e8\n\
DAT_080226fc:\n\
     .4byte 0x0851ABA8\n\
PTR_DAT_08022700:\n\
     .4byte       DAT_0200f310\n\
PTR_DAT_08022704:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022708:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_0802270c:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022710:\n\
     .4byte       DAT_0200f2c0\n\
PTR_DAT_08022714:\n\
     .4byte       DAT_0200f2a8\n\
PTR_DAT_08022718:\n\
     .4byte       DAT_0200f2e4\n\
PTR_DAT_0802271c:\n\
     .4byte       DAT_0200f2dc\n\
PTR_DAT_08022720:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022724:\n\
     .4byte       DAT_0200f2e0\n\
PTR_DAT_08022728:\n\
     .4byte       DAT_0200f300\n\
DAT_0802272c:\n\
     .4byte 0x080230AD\n\
DAT_08022730:\n\
     .4byte 0x0000037F\n\
DAT_08022734:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08022738()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x18\n\
     lsr        r2,r2,#0x18\n\
     mov        r8,r2\n\
     ldr        r5,PTR_DAT_080227a8\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0xc0\n\
     ble        LAB_080227f8\n\
     ldr        r1,PTR_DAT_080227ac\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080227c8\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,r8\n\
     beq        LAB_08022762\n\
     b          LAB_0802295c\n\
LAB_08022762:\n\
     ldr        r1,PTR_DAT_080227b0\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x5\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,PTR_DAT_080227b4\n\
     ldr        r2,PTR_DAT_080227b8\n\
     ldrh       r1,[r2,#0x0]\n\
     lsl        r0,r1,#0x5\n\
     add        r0,r0,r3\n\
     mov        r4,#0x0\n\
     mov        r1,#0x96\n\
     strh       r1,[r0,#0x4]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r3\n\
     mov        r1,#0x24\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,PTR_DAT_080227bc\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x5\n\
     str        r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080227c0\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_080227c4\n\
     str        r4,[r2,#0x0]\n\
     str        r4,[r5,#0x0]\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9ec\n\
     b          LAB_0802295c\n\
.space 1\n\
.space 1\n\
PTR_DAT_080227a8:\n\
     .4byte       DAT_0200f2fc\n\
PTR_DAT_080227ac:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_080227b0:\n\
     .4byte       DAT_0200f2b0\n\
PTR_DAT_080227b4:\n\
     .4byte       DAT_0200f320\n\
PTR_DAT_080227b8:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_080227bc:\n\
     .4byte       DAT_0200f2b8\n\
PTR_DAT_080227c0:\n\
     .4byte       DAT_0200f290\n\
PTR_DAT_080227c4:\n\
     .4byte       DAT_0200f298\n\
LAB_080227c8:\n\
     mov        r0,#0x1e\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_080227ec\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080227f0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080227e4\n\
     ldr        r0,DAT_080227f4\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
LAB_080227e4:\n\
     mov        r0,#0x29\n\
     bl         fun_08001088\n\
     b          LAB_0802295c\n\
DAT_080227ec:\n\
     .4byte 0x0200254C\n\
DAT_080227f0:\n\
     .4byte 0x0200F2F8\n\
DAT_080227f4:\n\
     .4byte 0x0200ED50\n\
LAB_080227f8:\n\
     lsl        r6,r1,#0x10\n\
     lsr        r4,r6,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         fun_080033c0\n\
     ldr        r2,DAT_0802284c\n\
     mov        r3,r8\n\
     lsl        r1,r3,#0x5\n\
     add        r1,r1,r2\n\
     ldrh       r1,[r1,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r1,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         fun_080033c0\n\
     add        r5,r0,#0x0\n\
     add        r0,r4,#0x0\n\
     bl         fun_080033c0\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r5,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     sub        r1,r1,r0\n\
     lsr        r0,r1,#0x1f\n\
     add        r1,r1,r0\n\
     asr        r1,r1,#0x1\n\
     sub        r1,r7,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r7,r1,#0x10\n\
     mov        r4,#0x0\n\
     asr        r1,r6,#0x10\n\
     cmp        r1,#0x1\n\
     beq        LAB_08022880\n\
     cmp        r1,#0x1\n\
     bgt        LAB_08022850\n\
     cmp        r1,#0x0\n\
     beq        LAB_080228a0\n\
     b          LAB_080228bc\n\
.space 1\n\
.space 1\n\
DAT_0802284c:\n\
     .4byte 0x0200F320\n\
LAB_08022850:\n\
     cmp        r1,#0x2\n\
     bne        LAB_080228bc\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     ldr        r1,DAT_08022878\n\
     add        r0,r0,r1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     ldr        r0,DAT_0802287c\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x16\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r4,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     b          LAB_080228b8\n\
DAT_08022878:\n\
     .4byte 0xFFFFFEA2\n\
DAT_0802287c:\n\
     .4byte 0x0200F2B0\n\
LAB_08022880:\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     sub        r0,#0xfa\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     ldr        r0,DAT_0802289c\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x16\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r4,r0\n\
     lsl        r0,r0,#0x11\n\
     b          LAB_080228ba\n\
DAT_0802289c:\n\
     .4byte 0x0200F2B0\n\
LAB_080228a0:\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     sub        r0,#0x64\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     ldr        r0,DAT_0802291c\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x16\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r4,r0\n\
LAB_080228b8:\n\
     lsl        r0,r0,#0x10\n\
LAB_080228ba:\n\
     lsr        r4,r0,#0x10\n\
LAB_080228bc:\n\
     cmp        r7,#0x0\n\
     bne        LAB_080228c8\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_080228c8:\n\
     ldr        r0,DAT_08022920\n\
     cmp        r4,r0\n\
     bls        LAB_080228d0\n\
     add        r4,r0,#0x0\n\
LAB_080228d0:\n\
     ldr        r0,PTR_DAT_08022924\n\
     str        r4,[r0,#0x0]\n\
     mov        r0,#0x1b\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08022928\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080228ea\n\
     ldr        r0,PTR_DAT_0802292c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
LAB_080228ea:\n\
     ldr        r0,PTR_DAT_08022930\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022940\n\
     ldr        r0,PTR_DAT_08022934\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802295c\n\
     ldr        r1,PTR_DAT_08022938\n\
     mov        r2,r8\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     lsr        r1,r4,#0x3\n\
     ldr        r2,[r0,#0x0]\n\
     add        r2,r2,r1\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802293c\n\
     mov        r3,r8\n\
     lsl        r1,r3,#0x1\n\
     add        r0,#0x8\n\
     add        r1,r1,r0\n\
     strh       r2,[r1,#0x0]\n\
     bl         fun_080233a8\n\
     b          LAB_0802295c\n\
DAT_0802291c:\n\
     .4byte 0x0200F2B0\n\
DAT_08022920:\n\
     .4byte 0x000003E7\n\
PTR_DAT_08022924:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_08022928:\n\
     .4byte       DAT_0200f2f8\n\
PTR_DAT_0802292c:\n\
     .4byte       DAT_0200ed50\n\
PTR_DAT_08022930:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022934:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_08022938:\n\
     .4byte       DAT_02005700\n\
PTR_DAT_0802293c:\n\
     .4byte       DAT_02005760\n\
LAB_08022940:\n\
     ldr        r0,DAT_08022968\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022956\n\
     ldr        r1,DAT_0802296c\n\
     ldr        r2,DAT_08022970\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08022974\n\
     mov        r0,#0x22\n\
     strh       r0,[r1,#0x0]\n\
LAB_08022956:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_0802295c:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08022968:\n\
     .4byte 0x02002530\n\
DAT_0802296c:\n\
     .4byte 0x020025E8\n\
DAT_08022970:\n\
     .4byte 0x00000299\n\
DAT_08022974:\n\
     .4byte 0x020025C8\n\
    ");
}
__attribute__((naked)) void fun_08022978()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     ldr        r0,DAT_080229d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     beq        LAB_08022990\n\
     ldr        r0,DAT_080229dc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022990\n\
     b          LAB_08022a9a\n\
LAB_08022990:\n\
     ldr        r1,DAT_080229e0\n\
     lsl        r0,r5,#0x5\n\
     add        r4,r0,r1\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r3,r0\n\
     beq        LAB_080229ec\n\
     ldr        r0,DAT_080229dc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080229cc\n\
     ldr        r2,DAT_080229e4\n\
     ldr        r1,DAT_080229e8\n\
     ldrb       r7,[r1,#0x0]\n\
     lsl        r0,r7,#0x1\n\
     add        r1,r7,#0x0\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     add        r2,#0x4\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     bne        LAB_080229ec\n\
LAB_080229cc:\n\
     add        r0,r4,#0x0\n\
     add        r1,r3,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_08022738\n\
     b          LAB_08022a9a\n\
DAT_080229d8:\n\
     .4byte 0x0200055C\n\
DAT_080229dc:\n\
     .4byte 0x02005750\n\
DAT_080229e0:\n\
     .4byte 0x0200F320\n\
DAT_080229e4:\n\
     .4byte 0x08786B90\n\
DAT_080229e8:\n\
     .4byte 0x0200F2A4\n\
LAB_080229ec:\n\
     ldr        r1,PTR_DAT_08022a58\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022a78\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,r5\n\
     bne        LAB_08022a9a\n\
     lsl        r0,r6,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldr        r2,PTR_DAT_08022a5c\n\
     cmp        r0,r1\n\
     beq        LAB_08022a12\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r2,r7]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022a9a\n\
LAB_08022a12:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_08022a60\n\
     ldr        r2,PTR_DAT_08022a64\n\
     ldrh       r7,[r2,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r3\n\
     mov        r4,#0x0\n\
     mov        r1,#0x96\n\
     strh       r1,[r0,#0x4]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r3\n\
     mov        r1,#0x24\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,PTR_DAT_08022a68\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x5\n\
     str        r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08022a6c\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_08022a70\n\
     ldr        r2,PTR_DAT_08022a74\n\
     str        r4,[r2,#0x0]\n\
     str        r4,[r3,#0x0]\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9ec\n\
     b          LAB_08022a9a\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022a58:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022a5c:\n\
     .4byte       DAT_0200f2b0\n\
PTR_DAT_08022a60:\n\
     .4byte       DAT_0200f320\n\
PTR_DAT_08022a64:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_08022a68:\n\
     .4byte       DAT_0200f2b8\n\
PTR_DAT_08022a6c:\n\
     .4byte       DAT_0200f290\n\
PTR_DAT_08022a70:\n\
     .4byte       DAT_0200f2fc\n\
PTR_DAT_08022a74:\n\
     .4byte       DAT_0200f298\n\
LAB_08022a78:\n\
     mov        r0,#0x1e\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08022aa0\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08022aa4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022a94\n\
     ldr        r0,DAT_08022aa8\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
LAB_08022a94:\n\
     mov        r0,#0x29\n\
     bl         fun_08001088\n\
LAB_08022a9a:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08022aa0:\n\
     .4byte 0x0200254C\n\
DAT_08022aa4:\n\
     .4byte 0x0200F2F8\n\
DAT_08022aa8:\n\
     .4byte 0x0200ED50\n\
    ");
}
__attribute__((naked)) void fun_08022aac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     ldr        r0,PTR_DAT_08022b70\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     str        r1,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_08022b74\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022acc\n\
     bl         fun_08023418\n\
LAB_08022acc:\n\
     bl         fun_08023528\n\
     bl         fun_0803ab30\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022af6\n\
     ldr        r0,PTR_DAT_08022b78\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022af6\n\
     ldr        r1,PTR_DAT_08022b7c\n\
     ldr        r2,PTR_DAT_08022b80\n\
     ldrh       r0,[r1,#0x8]\n\
     str        r0,[r2,#0x0]\n\
     ldrh       r0,[r1,#0xa]\n\
     str        r0,[r2,#0x4]\n\
     ldrh       r0,[r1,#0xc]\n\
     str        r0,[r2,#0x8]\n\
     ldrh       r0,[r1,#0xe]\n\
     str        r0,[r2,#0xc]\n\
LAB_08022af6:\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     ldr        r1,PTR_DAT_08022b84\n\
     mov        r10,r1\n\
LAB_08022afe:\n\
     ldr        r2,PTR_DAT_08022b74\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r9,r0\n\
     bne        LAB_08022bc0\n\
     mov        r6,r9\n\
     lsl        r4,r6,#0x5\n\
     mov        r0,r10\n\
     add        r6,r4,r0\n\
     ldrh       r1,[r6,#0x4]\n\
     add        r0,sp,#0x4\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r6,#0x6]\n\
     mov        r5,sp\n\
     add        r5,#0x6\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x14\n\
     ldr        r7,PTR_DAT_08022b88\n\
     ldr        r1,[r7,#0x0]\n\
     asr        r1,r1,#0x7\n\
     ldr        r2,PTR_DAT_08022b8c\n\
     mov        r8,r2\n\
     ldr        r2,[r2,#0x0]\n\
     asr        r2,r2,#0x7\n\
     str        r5,[sp,#0x0]\n\
     add        r3,sp,#0x4\n\
     bl         fun_0803a218\n\
     add        r0,sp,#0x4\n\
     ldrh       r2,[r0,#0x0]\n\
     ldr        r0,[r7,#0x0]\n\
     asr        r0,r0,#0x7\n\
     cmp        r2,r0\n\
     bne        LAB_08022b50\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r3,r8\n\
     ldr        r0,[r3,#0x0]\n\
     asr        r0,r0,#0x7\n\
     cmp        r1,r0\n\
     beq        LAB_08022b98\n\
LAB_08022b50:\n\
     lsl        r0,r2,#0x7\n\
     str        r0,[r7,#0x0]\n\
     ldrh       r5,[r5,#0x0]\n\
     lsl        r0,r5,#0x7\n\
     mov        r6,r8\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,r9\n\
     bl         fun_08022978\n\
     ldr        r0,PTR_DAT_08022b90\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08022b94\n\
     str        r1,[r0,#0x0]\n\
     b          LAB_08022b9e\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022b70:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_08022b74:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022b78:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_08022b7c:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_08022b80:\n\
     .4byte       DAT_02005700\n\
PTR_DAT_08022b84:\n\
     .4byte       DAT_0200f320\n\
PTR_DAT_08022b88:\n\
     .4byte       DAT_0200f290\n\
PTR_DAT_08022b8c:\n\
     .4byte       DAT_0200f2b8\n\
PTR_DAT_08022b90:\n\
     .4byte       DAT_0200f2fc\n\
PTR_DAT_08022b94:\n\
     .4byte       DAT_0200f298\n\
LAB_08022b98:\n\
     strh       r2,[r6,#0x4]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r6,#0x6]\n\
LAB_08022b9e:\n\
     ldr        r1,DAT_08022bb8\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022c00\n\
     ldr        r2,DAT_08022bbc\n\
     mov        r3,r10\n\
     add        r1,r4,r3\n\
     ldrh       r0,[r1,#0x4]\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r0,[r1,#0x6]\n\
     strh       r0,[r2,#0x4]\n\
     b          LAB_08022c00\n\
.space 1\n\
.space 1\n\
DAT_08022bb8:\n\
     .4byte 0x02005750\n\
DAT_08022bbc:\n\
     .4byte 0x02005760\n\
LAB_08022bc0:\n\
     ldr        r6,PTR_DAT_08022cb0\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022c00\n\
     mov        r0,r9\n\
     lsl        r1,r0,#0x4\n\
     ldr        r0,PTR_DAT_08022cb4\n\
     add        r5,r1,r0\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x5\n\
     mov        r3,r10\n\
     add        r2,r0,r3\n\
     mov        r6,#0x4\n\
     ldrsh      r1,[r2,r6]\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r5,#0x2]\n\
     cmp        r1,r0\n\
     bne        LAB_08022bf4\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r2,r1]\n\
     ldrh       r2,[r5,#0x4]\n\
     cmp        r0,r2\n\
     bne        LAB_08022bf4\n\
     mov        r0,r9\n\
     bl         fun_08022978\n\
LAB_08022bf4:\n\
     mov        r3,r10\n\
     add        r0,r4,r3\n\
     ldrh       r1,[r5,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     ldrh       r1,[r5,#0x4]\n\
     strh       r1,[r0,#0x6]\n\
LAB_08022c00:\n\
     mov        r0,r9\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r9,r0\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08022c10\n\
     b          LAB_08022afe\n\
LAB_08022c10:\n\
     ldr        r4,PTR_DAT_08022cb8\n\
     ldr        r7,PTR_DAT_08022cbc\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r1,r6,#0x5\n\
     add        r1,r1,r4\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0803a140\n\
     ldrh       r0,[r7,#0x0]\n\
     lsl        r3,r0,#0x5\n\
     add        r0,r3,r4\n\
     ldrh       r0,[r0,#0x10]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08022cd0\n\
     ldr        r1,PTR_DAT_08022cc0\n\
     mov        r8,r1\n\
     ldr        r2,[r1,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0xe\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r5,PTR_DAT_08022cc4\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x2\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r4,PTR_DAT_08022cc8\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xb\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08022ccc\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x1b\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x7\n\
     b          LAB_08022f18\n\
PTR_DAT_08022cb0:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08022cb4:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_08022cb8:\n\
     .4byte       DAT_0200f320\n\
PTR_DAT_08022cbc:\n\
     .4byte       DAT_0200055c\n\
PTR_DAT_08022cc0:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022cc4:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08022cc8:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022ccc:\n\
     .4byte       DAT_0200f2c0\n\
LAB_08022cd0:\n\
     cmp        r0,#0x0\n\
     bne        LAB_08022d68\n\
     ldr        r0,PTR_DAT_08022d58\n\
     mov        r8,r0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x9\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r5,PTR_DAT_08022d5c\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r4,PTR_DAT_08022d60\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0xd\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08022d64\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x1b\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x7\n\
     b          LAB_08022f18\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022d58:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022d5c:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08022d60:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022d64:\n\
     .4byte       DAT_0200f2c0\n\
LAB_08022d68:\n\
     cmp        r0,#0x3\n\
     bne        LAB_08022e00\n\
     ldr        r0,PTR_DAT_08022df0\n\
     mov        r8,r0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x2\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r5,PTR_DAT_08022df4\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0xa\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r4,PTR_DAT_08022df8\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x15\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x7\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08022dfc\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x13\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xb\n\
     b          LAB_08022f18\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022df0:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022df4:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08022df8:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022dfc:\n\
     .4byte       DAT_0200f2c0\n\
LAB_08022e00:\n\
     cmp        r0,#0x4\n\
     bne        LAB_08022e98\n\
     ldr        r0,PTR_DAT_08022e88\n\
     mov        r8,r0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x12\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r5,PTR_DAT_08022e8c\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x8\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r4,PTR_DAT_08022e90\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x16\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x7\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08022e94\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0xf\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xc\n\
     b          LAB_08022f18\n\
.space 1\n\
.space 1\n\
PTR_DAT_08022e88:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022e8c:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08022e90:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022e94:\n\
     .4byte       DAT_0200f2c0\n\
LAB_08022e98:\n\
     ldr        r0,PTR_DAT_08022f34\n\
     mov        r8,r0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0xf\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r5,PTR_DAT_08022f38\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0xf\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r4,PTR_DAT_08022f3c\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0x14\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x9\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08022f40\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r6,[r7,#0x0]\n\
     lsl        r0,r6,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x18\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x9\n\
LAB_08022f18:\n\
     strh       r0,[r2,#0x4]\n\
     mov        r6,r8\n\
     ldr        r0,PTR_DAT_08022f44\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08022f48\n\
     bl         fun_08023640\n\
     bl         fun_080237b8\n\
     bl         fun_08023718\n\
     b          LAB_08022f5a\n\
PTR_DAT_08022f34:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08022f38:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08022f3c:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08022f40:\n\
     .4byte       DAT_0200f2c0\n\
PTR_DAT_08022f44:\n\
     .4byte       DAT_0200f2b0\n\
LAB_08022f48:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r5,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
LAB_08022f5a:\n\
     ldr        r0,DAT_08022f9c\n\
     ldr        r6,[r0,#0x0]\n\
     ldr        r5,DAT_08022fa0\n\
     ldr        r4,DAT_08022fa4\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r5\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r0,r3]\n\
     mov        r1,#0x14\n\
     bl         fun_08043504\n\
     add        r0,#0x4\n\
     strh       r0,[r6,#0x2]\n\
     ldrh       r4,[r4,#0x0]\n\
     lsl        r0,r4,#0x5\n\
     add        r0,r0,r5\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0x14\n\
     bl         fun_08043504\n\
     add        r0,#0x4\n\
     strh       r0,[r6,#0x4]\n\
     mov        r0,#0x0\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08022f9c:\n\
     .4byte 0x0200F2DC\n\
DAT_08022fa0:\n\
     .4byte 0x0200F320\n\
DAT_08022fa4:\n\
     .4byte 0x0200055C\n\
    ");
}
__attribute__((naked)) void fun_08022fa8()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,PTR_DAT_08023028\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08022fca\n\
     ldr        r2,PTR_DAT_0802302c\n\
     ldr        r1,PTR_DAT_08023030\n\
     ldr        r0,PTR_DAT_08023034\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08023038\n\
     cmp        r0,r1\n\
     ble        LAB_08022fca\n\
     str        r1,[r2,#0x0]\n\
LAB_08022fca:\n\
     ldr        r0,PTR_DAT_0802303c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023040\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023044\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023048\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_0802304c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023050\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023054\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_08023058\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,PTR_DAT_0802305c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023016\n\
     bl         fun_08003b00\n\
LAB_08023016:\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     bl         fun_0803abbc\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_08023028:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_0802302c:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_08023030:\n\
     .4byte       DAT_02005700\n\
PTR_DAT_08023034:\n\
     .4byte       DAT_0200055c\n\
DAT_08023038:\n\
     .4byte 0x000003E7\n\
PTR_DAT_0802303c:\n\
     .4byte       DAT_0200f310\n\
PTR_DAT_08023040:\n\
     .4byte       DAT_0200f2a8\n\
PTR_DAT_08023044:\n\
     .4byte       DAT_0200f2e4\n\
PTR_DAT_08023048:\n\
     .4byte       DAT_0200f2dc\n\
PTR_DAT_0802304c:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08023050:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08023054:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08023058:\n\
     .4byte       DAT_0200f2c0\n\
PTR_DAT_0802305c:\n\
     .4byte       DAT_0200f2e0\n\
    ");
}
__attribute__((naked)) void fun_08023060()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_080230a4\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     bl         fun_08002c9c\n\
     lsl        r1,r0,#0x10\n\
     asr        r5,r1,#0x10\n\
     cmp        r5,#0x1\n\
     ble        LAB_0802309c\n\
     ldr        r4,DAT_080230a8\n\
     ldr        r0,[r4,#0x0]\n\
     lsr        r1,r1,#0x10\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     mov        r0,#0x40\n\
     add        r1,r5,#0x0\n\
     bl         fun_08002c84\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x8c\n\
     strh       r1,[r2,#0x4]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x12\n\
     sub        r0,#0x1b\n\
     strh       r0,[r2,#0x2]\n\
LAB_0802309c:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080230a4:\n\
     .4byte 0x0200F2B0\n\
DAT_080230a8:\n\
     .4byte 0x0200F310\n\
    ");
}
__attribute__((naked)) void fun_080230ac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r7,r0,#0x0\n\
     bl         fun_080014ec\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_080230da\n\
     ldr        r0,DAT_080231a8\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231ac\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231b0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_080231b4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080231b8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231bc\n\
     strh       r2,[r0,#0x0]\n\
LAB_080230da:\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_080230fe\n\
     ldr        r0,DAT_080231c0\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231c4\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_080231c8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080231cc\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231d0\n\
     strh       r2,[r0,#0x0]\n\
LAB_080230fe:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_08023122\n\
     ldr        r0,DAT_080231d4\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231d8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_080231dc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080231e0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_080231e4\n\
     strh       r2,[r0,#0x0]\n\
LAB_08023122:\n\
     bl         fun_080014ec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802314e\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802314e\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802314e\n\
     ldr        r0,DAT_080231e8\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     ldr        r1,DAT_080231ec\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802314e:\n\
     bl         fun_080014ec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023202\n\
     ldr        r5,DAT_080231f0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08023202\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     bne        LAB_08023202\n\
     ldr        r1,DAT_080231f4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023200\n\
     ldr        r0,DAT_080231b0\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r6,DAT_080231ec\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023190\n\
     mov        r0,#0x1a\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_080231e8\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r6,#0x0]\n\
LAB_08023190:\n\
     ldr        r0,DAT_080231f8\n\
     ldr        r1,[r0,#0x0]\n\
     sub        r1,#0x8\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x2\n\
     ble        LAB_080231fc\n\
     sub        r0,r1,#0x2\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_08023202\n\
DAT_080231a8:\n\
     .4byte 0x0200F2F4\n\
DAT_080231ac:\n\
     .4byte 0x0200F3A4\n\
DAT_080231b0:\n\
     .4byte 0x0200F3A0\n\
DAT_080231b4:\n\
     .4byte 0x0200F2D0\n\
DAT_080231b8:\n\
     .4byte 0x0200F2C4\n\
DAT_080231bc:\n\
     .4byte 0x0200F2AC\n\
DAT_080231c0:\n\
     .4byte 0x0200F2C0\n\
DAT_080231c4:\n\
     .4byte 0x0200F2B4\n\
DAT_080231c8:\n\
     .4byte 0x0200F2F0\n\
DAT_080231cc:\n\
     .4byte 0x0200F29C\n\
DAT_080231d0:\n\
     .4byte 0x0200F2E8\n\
DAT_080231d4:\n\
     .4byte 0x0200F2D4\n\
DAT_080231d8:\n\
     .4byte 0x0200F2BC\n\
DAT_080231dc:\n\
     .4byte 0x0200F294\n\
DAT_080231e0:\n\
     .4byte 0x0200F30C\n\
DAT_080231e4:\n\
     .4byte 0x0200F2EC\n\
DAT_080231e8:\n\
     .4byte 0x0200ED50\n\
DAT_080231ec:\n\
     .4byte 0x0200F2F8\n\
DAT_080231f0:\n\
     .4byte 0x0200F2B0\n\
DAT_080231f4:\n\
     .4byte 0x0200F2C8\n\
DAT_080231f8:\n\
     .4byte 0x0200F2FC\n\
LAB_080231fc:\n\
     strh       r4,[r5,#0x0]\n\
     b          LAB_08023202\n\
LAB_08023200:\n\
     strh       r4,[r1,#0x0]\n\
LAB_08023202:\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023282\n\
     ldr        r5,DAT_08023254\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08023282\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     bne        LAB_08023282\n\
     ldr        r0,DAT_08023258\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r6,DAT_0802325c\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802323c\n\
     mov        r0,#0x1a\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08023260\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r6,#0x0]\n\
LAB_0802323c:\n\
     ldr        r0,DAT_08023264\n\
     ldr        r1,[r0,#0x0]\n\
     sub        r1,#0x3\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x3\n\
     ble        LAB_08023268\n\
     sub        r0,r1,#0x3\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_0802326a\n\
DAT_08023254:\n\
     .4byte 0x0200F2B0\n\
DAT_08023258:\n\
     .4byte 0x0200F2B4\n\
DAT_0802325c:\n\
     .4byte 0x0200F2F8\n\
DAT_08023260:\n\
     .4byte 0x0200ED50\n\
DAT_08023264:\n\
     .4byte 0x0200F298\n\
LAB_08023268:\n\
     strh       r4,[r5,#0x0]\n\
LAB_0802326a:\n\
     ldr        r0,DAT_080232d4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     bl         fun_08043718\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023282\n\
     ldrh       r0,[r7,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023282\n\
     sub        r0,#0x1\n\
     strh       r0,[r7,#0x10]\n\
LAB_08023282:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023306\n\
     ldr        r5,DAT_080232d8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08023306\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     bne        LAB_08023306\n\
     ldr        r0,DAT_080232dc\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r6,DAT_080232e0\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080232bc\n\
     mov        r0,#0x1a\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_080232e4\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r6,#0x0]\n\
LAB_080232bc:\n\
     ldr        r0,DAT_080232e8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0x3\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x3\n\
     ble        LAB_080232ec\n\
     sub        r0,r1,#0x3\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_080232ee\n\
DAT_080232d4:\n\
     .4byte 0x0200F2A0\n\
DAT_080232d8:\n\
     .4byte 0x0200F2B0\n\
DAT_080232dc:\n\
     .4byte 0x0200F2BC\n\
DAT_080232e0:\n\
     .4byte 0x0200F2F8\n\
DAT_080232e4:\n\
     .4byte 0x0200ED50\n\
DAT_080232e8:\n\
     .4byte 0x0200F298\n\
LAB_080232ec:\n\
     strh       r4,[r5,#0x0]\n\
LAB_080232ee:\n\
     ldr        r0,DAT_08023390\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     bl         fun_08043718\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023306\n\
     ldrh       r0,[r7,#0x10]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08023306\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x10]\n\
LAB_08023306:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802333c\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802333c\n\
     ldr        r0,DAT_08023390\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     bl         fun_08043718\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802333c\n\
     ldrh       r0,[r7,#0x10]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08023332\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x10]\n\
LAB_08023332:\n\
     ldrh       r0,[r7,#0x10]\n\
     cmp        r0,#0x2\n\
     bls        LAB_0802333c\n\
     sub        r0,#0x1\n\
     strh       r0,[r7,#0x10]\n\
LAB_0802333c:\n\
     bl         fun_08023060\n\
     ldr        r3,DAT_08023394\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r3,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     cmp        r0,r1\n\
     ble        LAB_08023352\n\
     str        r1,[r3,#0x0]\n\
LAB_08023352:\n\
     ldr        r0,[r3,#0x0]\n\
     ldr        r1,DAT_08023398\n\
     cmp        r0,r1\n\
     bge        LAB_0802335c\n\
     str        r1,[r3,#0x0]\n\
LAB_0802335c:\n\
     ldr        r1,DAT_0802339c\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     cmp        r0,r2\n\
     bge        LAB_0802336a\n\
     str        r2,[r1,#0x0]\n\
LAB_0802336a:\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x80\n\
     ble        LAB_08023374\n\
     mov        r0,#0x80\n\
     str        r0,[r1,#0x0]\n\
LAB_08023374:\n\
     ldr        r2,DAT_080233a0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,DAT_080233a4\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r3,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023390:\n\
     .4byte 0x0200F2A0\n\
DAT_08023394:\n\
     .4byte 0x0200F2FC\n\
DAT_08023398:\n\
     .4byte 0xFFFFFF00\n\
DAT_0802339c:\n\
     .4byte 0x0200F298\n\
DAT_080233a0:\n\
     .4byte 0x0200F290\n\
DAT_080233a4:\n\
     .4byte 0x0200F2B8\n\
    ");
}
__attribute__((naked)) void fun_080233a8()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_080233c0\n\
     ldr        r4,DAT_080233bc\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     b          LAB_080233c6\n\
DAT_080233bc:\n\
     .4byte 0x0200F2A4\n\
LAB_080233c0:\n\
     ldr        r4,DAT_0802340c\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
LAB_080233c6:\n\
     mov        r1,#0x3\n\
     bl         fun_080435d0\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     ldrb       r1,[r4,#0x0]\n\
     cmp        r0,r1\n\
     bne        LAB_080233e0\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x1\n\
     mov        r1,#0x3\n\
     bl         fun_080435d0\n\
LAB_080233e0:\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r0,DAT_08023410\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08023414\n\
     ldrb       r3,[r4,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x2]\n\
     ldrb       r3,[r4,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x1\n\
     add        r1,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802340c:\n\
     .4byte 0x0200F2A4\n\
DAT_08023410:\n\
     .4byte 0x0200F2E0\n\
DAT_08023414:\n\
     .4byte 0x08786B90\n\
    ");
}
__attribute__((naked)) void fun_08023418()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x14\n\
     bl         fun_0803c1a4\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     mov        r4,#0x0\n\
     ldr        r1,DAT_080234d8\n\
     mov        r8,r1\n\
LAB_08023430:\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     add        r6,r4,#0x1\n\
     lsl        r5,r4,#0x2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023462\n\
     mov        r2,r8\n\
     add        r0,r5,r2\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,sp\n\
     ldr        r1,DAT_080234dc\n\
     add        r2,r6,#0x0\n\
     bl         fun_080455fc\n\
     lsl        r1,r4,#0x4\n\
     sub        r1,r1,r4\n\
     lsl        r1,r1,#0x12\n\
     asr        r1,r1,#0x10\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_080234e0\n\
     bl         fun_0803c138\n\
LAB_08023462:\n\
     ldr        r7,DAT_080234e4\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r4,r0\n\
     bne        LAB_08023476\n\
     ldr        r1,DAT_080234e8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080234ec\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08023476:\n\
     mov        r1,r8\n\
     add        r0,r5,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_080234f0\n\
     cmp        r1,r0\n\
     ble        LAB_08023486\n\
     mov        r2,#0x1\n\
     mov        r9,r2\n\
LAB_08023486:\n\
     lsl        r0,r6,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08023430\n\
     mov        r4,r9\n\
     cmp        r4,#0x0\n\
     beq        LAB_080234a4\n\
     ldr        r1,PTR_DAT_080234f4\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_080234a4:\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023508\n\
     ldr        r2,PTR_DAT_080234f8\n\
     ldr        r1,PTR_DAT_080234fc\n\
     ldrb       r0,[r2,#0x6]\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08023500\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r2,DAT_08023504\n\
     ldrb       r4,[r1,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x2]\n\
     ldrb       r4,[r1,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r2,#0x2\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x4]\n\
     b          LAB_08023510\n\
DAT_080234d8:\n\
     .4byte 0x02005700\n\
DAT_080234dc:\n\
     .4byte 0x08514BE0\n\
DAT_080234e0:\n\
     .4byte 0x0865FD94\n\
DAT_080234e4:\n\
     .4byte 0x0200055C\n\
DAT_080234e8:\n\
     .4byte 0x020025B8\n\
DAT_080234ec:\n\
     .4byte 0x02002558\n\
DAT_080234f0:\n\
     .4byte 0x000003E7\n\
PTR_DAT_080234f4:\n\
     .4byte       DAT_020025c8\n\
PTR_DAT_080234f8:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_080234fc:\n\
     .4byte       DAT_0200f2a4\n\
PTR_DAT_08023500:\n\
     .4byte       DAT_0200f2e0\n\
DAT_08023504:\n\
     .4byte 0x08786B90\n\
LAB_08023508:\n\
     ldr        r2,DAT_08023520\n\
     ldr        r0,DAT_08023524\n\
     ldrb       r0,[r0,#0x0]\n\
     strb       r0,[r2,#0x6]\n\
LAB_08023510:\n\
     add        sp,#0x14\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023520:\n\
     .4byte 0x02005760\n\
DAT_08023524:\n\
     .4byte 0x0200F2A4\n\
    ");
}
__attribute__((naked)) void fun_08023528()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_080235cc\n\
     ldrh       r0,[r0,#0x8]\n\
     cmp        r5,r0\n\
     bcs        LAB_08023626\n\
     ldr        r6,DAT_080235d0\n\
LAB_08023536:\n\
     add        r0,r5,#0x0\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x1\n\
     lsl        r0,r5\n\
     mov        r1,#0x20\n\
     lsl        r1,r5\n\
     orr        r0,r1\n\
     bl         fun_08004c04\n\
     cmp        r5,#0x2\n\
     bne        LAB_0802355e\n\
     bl         fun_0803a9dc\n\
     ldr        r0,DAT_080235d4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802355e\n\
     bl         fun_08005468\n\
LAB_0802355e:\n\
     cmp        r5,#0x1\n\
     bne        LAB_080235e0\n\
     ldr        r0,DAT_080235d8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x5\n\
     add        r2,r0,r6\n\
     ldrh       r1,[r2,#0x4]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x78\n\
     bge        LAB_08023576\n\
     mov        r1,#0x78\n\
LAB_08023576:\n\
     add        r4,r1,#0x0\n\
     add        r3,r4,#0x0\n\
     lsl        r0,r4,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0x87\n\
     lsl        r1,r1,#0x3\n\
     cmp        r0,r1\n\
     ble        LAB_08023588\n\
     add        r3,r1,#0x0\n\
LAB_08023588:\n\
     add        r4,r3,#0x0\n\
     ldrh       r1,[r2,#0x6]\n\
     mov        r3,#0x6\n\
     ldrsh      r0,[r2,r3]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x2\n\
     cmp        r0,r2\n\
     ble        LAB_0802359a\n\
     add        r1,r2,#0x0\n\
LAB_0802359a:\n\
     lsl        r1,r1,#0x10\n\
     asr        r0,r1,#0x10\n\
     sub        r0,#0x5\n\
     asr        r1,r1,#0x14\n\
     sub        r0,r0,r1\n\
     cmp        r0,#0x50\n\
     bge        LAB_080235aa\n\
     mov        r0,#0x50\n\
LAB_080235aa:\n\
     lsl        r1,r4,#0x10\n\
     asr        r1,r1,#0x10\n\
     sub        r1,#0x78\n\
     lsl        r2,r0,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r2,#0x50\n\
     mov        r0,#0x1\n\
     bl         fun_08005aa4\n\
     ldr        r0,DAT_080235d4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080235dc\n\
     bl         fun_08005468\n\
     b          LAB_080235e0\n\
.space 1\n\
.space 1\n\
DAT_080235cc:\n\
     .4byte 0x085149FC\n\
DAT_080235d0:\n\
     .4byte 0x0200F320\n\
DAT_080235d4:\n\
     .4byte 0x0200F2CC\n\
DAT_080235d8:\n\
     .4byte 0x0200055C\n\
LAB_080235dc:\n\
     bl         fun_08005060\n\
LAB_080235e0:\n\
     cmp        r5,#0x0\n\
     bne        LAB_08023618\n\
     ldr        r0,DAT_0802360c\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r6\n\
     ldrh       r2,[r0,#0x4]\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x13\n\
     ldrh       r0,[r0,#0x6]\n\
     lsl        r2,r0,#0x10\n\
     asr        r2,r2,#0x13\n\
     mov        r0,#0x0\n\
     bl         fun_08005aa4\n\
     ldr        r0,DAT_08023610\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023614\n\
     bl         fun_08005468\n\
     b          LAB_08023618\n\
DAT_0802360c:\n\
     .4byte 0x0200055C\n\
DAT_08023610:\n\
     .4byte 0x0200F2CC\n\
LAB_08023614:\n\
     bl         fun_08005060\n\
LAB_08023618:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     ldr        r0,DAT_08023638\n\
     ldrh       r0,[r0,#0x8]\n\
     cmp        r5,r0\n\
     bcc        LAB_08023536\n\
LAB_08023626:\n\
     ldr        r1,DAT_0802363c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x42\n\
     bl         fun_08004c04\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08023638:\n\
     .4byte 0x085149FC\n\
DAT_0802363c:\n\
     .4byte 0x0200F2CC\n\
    ");
}
__attribute__((naked)) void fun_08023640()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,PTR_DAT_08023684\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802369c\n\
     ldr        r4,PTR_DAT_08023688\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802369c\n\
     ldr        r0,PTR_DAT_0802368c\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     and        r3,r0\n\
     cmp        r3,#0x0\n\
     bne        LAB_08023708\n\
     ldr        r0,PTR_DAT_08023690\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08023694\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     cmp        r2,#0x7\n\
     bne        LAB_08023708\n\
     ldr        r1,PTR_DAT_08023698\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r3,[r4,#0x0]\n\
     b          LAB_08023708\n\
.space 1\n\
.space 1\n\
PTR_DAT_08023684:\n\
     .4byte       DAT_0200f3a0\n\
PTR_DAT_08023688:\n\
     .4byte       DAT_0200f2d0\n\
PTR_DAT_0802368c:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_08023690:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_08023694:\n\
     .4byte       DAT_0200f3a4\n\
PTR_DAT_08023698:\n\
     .4byte       DAT_0200f2c4\n\
LAB_0802369c:\n\
     ldr        r0,PTR_DAT_080236d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023708\n\
     ldr        r0,PTR_DAT_080236dc\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r5,#0x1\n\
     and        r3,r5\n\
     cmp        r3,#0x0\n\
     bne        LAB_08023708\n\
     ldr        r4,PTR_DAT_080236e0\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080236ec\n\
     ldr        r0,PTR_DAT_080236e4\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080236e8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     cmp        r2,#0x7\n\
     bne        LAB_08023708\n\
     strh       r3,[r4,#0x0]\n\
     b          LAB_08023708\n\
.space 1\n\
.space 1\n\
PTR_DAT_080236d8:\n\
     .4byte       DAT_0200f2c4\n\
PTR_DAT_080236dc:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_080236e0:\n\
     .4byte       DAT_0200f2ac\n\
PTR_DAT_080236e4:\n\
     .4byte       DAT_0200f2f4\n\
PTR_DAT_080236e8:\n\
     .4byte       DAT_0200f3a4\n\
LAB_080236ec:\n\
     ldr        r0,DAT_08023710\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_08023714\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     cmp        r2,#0x3\n\
     bne        LAB_08023708\n\
     strh       r5,[r4,#0x0]\n\
LAB_08023708:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023710:\n\
     .4byte 0x0200F2F4\n\
DAT_08023714:\n\
     .4byte 0x0200F3A4\n\
    ");
}
__attribute__((naked)) void fun_08023718()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,PTR_DAT_08023780\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_08023784\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023750\n\
     ldr        r3,PTR_DAT_08023788\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023750\n\
     ldr        r0,PTR_DAT_0802378c\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     and        r2,r0\n\
     cmp        r2,#0x0\n\
     bne        LAB_08023750\n\
     ldr        r0,PTR_DAT_08023790\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     bne        LAB_08023750\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
LAB_08023750:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080237ac\n\
     ldr        r0,PTR_DAT_0802378c\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r4,#0x1\n\
     and        r2,r4\n\
     cmp        r2,#0x0\n\
     bne        LAB_080237ac\n\
     ldr        r3,PTR_DAT_08023794\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023798\n\
     ldr        r0,PTR_DAT_08023790\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     bne        LAB_080237ac\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_080237ac\n\
PTR_DAT_08023780:\n\
     .4byte       DAT_0200f2b4\n\
PTR_DAT_08023784:\n\
     .4byte       DAT_0200f29c\n\
PTR_DAT_08023788:\n\
     .4byte       DAT_0200f2f0\n\
PTR_DAT_0802378c:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_08023790:\n\
     .4byte       DAT_0200f2c0\n\
PTR_DAT_08023794:\n\
     .4byte       DAT_0200f2e8\n\
LAB_08023798:\n\
     ldr        r0,DAT_080237b4\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     bne        LAB_080237ac\n\
     strh       r4,[r3,#0x0]\n\
LAB_080237ac:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080237b4:\n\
     .4byte 0x0200F2C0\n\
    ");
}
__attribute__((naked)) void fun_080237b8()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,PTR_DAT_080237f4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023808\n\
     ldr        r3,PTR_DAT_080237f8\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023808\n\
     ldr        r0,PTR_DAT_080237fc\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     and        r2,r0\n\
     cmp        r2,#0x0\n\
     bne        LAB_08023860\n\
     ldr        r0,PTR_DAT_08023800\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     bne        LAB_08023860\n\
     ldr        r1,PTR_DAT_08023804\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_08023860\n\
.space 1\n\
.space 1\n\
PTR_DAT_080237f4:\n\
     .4byte       DAT_0200f2bc\n\
PTR_DAT_080237f8:\n\
     .4byte       DAT_0200f294\n\
PTR_DAT_080237fc:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_08023800:\n\
     .4byte       DAT_0200f2d4\n\
PTR_DAT_08023804:\n\
     .4byte       DAT_0200f30c\n\
LAB_08023808:\n\
     ldr        r0,PTR_DAT_0802383c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023860\n\
     ldr        r0,PTR_DAT_08023840\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r4,#0x1\n\
     and        r2,r4\n\
     cmp        r2,#0x0\n\
     bne        LAB_08023860\n\
     ldr        r3,PTR_DAT_08023844\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802384c\n\
     ldr        r0,PTR_DAT_08023848\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     bne        LAB_08023860\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_08023860\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802383c:\n\
     .4byte       DAT_0200f30c\n\
PTR_DAT_08023840:\n\
     .4byte       DAT_0200f2a0\n\
PTR_DAT_08023844:\n\
     .4byte       DAT_0200f2ec\n\
PTR_DAT_08023848:\n\
     .4byte       DAT_0200f2d4\n\
LAB_0802384c:\n\
     ldr        r0,DAT_08023868\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     bne        LAB_08023860\n\
     strh       r4,[r3,#0x0]\n\
LAB_08023860:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023868:\n\
     .4byte 0x0200F2D4\n\
    ");
}
int fun_0802386c()
{
    return 1;
}
int fun_08023870()
{
    return 1;
}
