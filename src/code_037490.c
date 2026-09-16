__attribute__((naked)) void fun_08037490()
{
    asm("\n\
     ldr        r2,DAT_080374a8\n\
     ldr        r0,DAT_080374ac\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_080374b0\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_080374b4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_080374a8:\n\
     .4byte 0x02010E20\n\
DAT_080374ac:\n\
     .4byte 0x0863F888\n\
DAT_080374b0:\n\
     .4byte 0x02010E10\n\
DAT_080374b4:\n\
     .4byte 0x0863F824\n\
    ");
}
__attribute__((naked)) void fun_080374b8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6}\n\
     ldr        r0,PTR_DAT_080375ac\n\
     mov        r4,#0x0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375b0\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375b4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375b8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375bc\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080375c0\n\
     ldr        r0,PTR_DAT_080375c4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080375c8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375cc\n\
     mov        r9,r0\n\
     mov        r0,#0x12\n\
     mov        r1,r9\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080375d0\n\
     mov        r8,r0\n\
     mov        r0,#0x3c\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080375d4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375d8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375dc\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375e0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375e4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375e8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375ec\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375f0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080375f4\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080375f8\n\
     ldr        r0,DAT_080375fc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08037600\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037604\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037608\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803760c\n\
     mov        r1,#0x19\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037610\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037614\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037618\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803761c\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_0803840c\n\
     bl         fun_08037fd0\n\
     bl         fun_08038020\n\
     bl         fun_08002e64\n\
     bl         fun_0803847c\n\
     ldr        r5,DAT_08037620\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08037624\n\
     str        r0,[r1,#0x0]\n\
     mov        r6,#0x1\n\
     strh       r6,[r0,#0x6]\n\
     strh       r4,[r0,#0x10]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     mov        r2,r8\n\
     ldrh       r1,[r2,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x8]\n\
     strh       r4,[r0,#0xa]\n\
     sub        r5,#0x20\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08037628\n\
     str        r0,[r1,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     strh       r4,[r0,#0x10]\n\
     strh       r4,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     strh       r4,[r0,#0x8]\n\
     strh       r4,[r0,#0xa]\n\
     ldr        r1,DAT_0803762c\n\
     ldr        r2,DAT_08037630\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
PTR_DAT_080375ac:\n\
     .4byte       DAT_02010ea0\n\
PTR_DAT_080375b0:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_080375b4:\n\
     .4byte       DAT_02010e94\n\
PTR_DAT_080375b8:\n\
     .4byte       DAT_0201027c\n\
PTR_DAT_080375bc:\n\
     .4byte       DAT_020106bc\n\
PTR_DAT_080375c0:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_080375c4:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_080375c8:\n\
     .4byte       DAT_020111a0\n\
PTR_DAT_080375cc:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_080375d0:\n\
     .4byte       DAT_02011194\n\
PTR_DAT_080375d4:\n\
     .4byte       DAT_02011198\n\
PTR_DAT_080375d8:\n\
     .4byte       DAT_02010e30\n\
PTR_DAT_080375dc:\n\
     .4byte       DAT_020112a4\n\
PTR_DAT_080375e0:\n\
     .4byte       DAT_02011218\n\
PTR_DAT_080375e4:\n\
     .4byte       DAT_02010e9c\n\
PTR_DAT_080375e8:\n\
     .4byte       DAT_0201119c\n\
PTR_DAT_080375ec:\n\
     .4byte       DAT_0201122c\n\
PTR_DAT_080375f0:\n\
     .4byte       DAT_020112ac\n\
PTR_DAT_080375f4:\n\
     .4byte       DAT_02011234\n\
PTR_DAT_080375f8:\n\
     .4byte       DAT_020111a4\n\
DAT_080375fc:\n\
     .4byte 0x00009E58\n\
PTR_DAT_08037600:\n\
     .4byte       DAT_02010e38\n\
PTR_DAT_08037604:\n\
     .4byte       DAT_020111a8\n\
PTR_DAT_08037608:\n\
     .4byte       DAT_02011220\n\
PTR_DAT_0803760c:\n\
     .4byte       DAT_02010e90\n\
PTR_DAT_08037610:\n\
     .4byte       DAT_02010eb0\n\
PTR_DAT_08037614:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08037618:\n\
     .4byte       DAT_02010eac\n\
PTR_DAT_0803761c:\n\
     .4byte       DAT_02010ea4\n\
DAT_08037620:\n\
     .4byte 0x08640A98\n\
DAT_08037624:\n\
     .4byte 0x02011224\n\
DAT_08037628:\n\
     .4byte 0x02011190\n\
DAT_0803762c:\n\
     .4byte 0x00006739\n\
DAT_08037630:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08037634()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x64\n\
     ldr        r1,PTR_DAT_080376b4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080376b8\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080376bc\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_080376c0\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     bl         fun_080029c8\n\
     ldr        r4,PTR_DAT_080376c4\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08037662\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_08037662:\n\
     ldr        r0,PTR_DAT_080376c8\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037690\n\
     ldr        r0,PTR_DAT_080376cc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037690\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037690\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r4,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037690\n\
     bl         fun_08037bb8\n\
     mov        r0,#0xa\n\
     strh       r0,[r4,#0x0]\n\
LAB_08037690:\n\
     ldr        r0,PTR_DAT_080376c8\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080376d0\n\
     ldr        r0,PTR_DAT_080376cc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080376d0\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080376d0\n\
     bl         fun_0803817c\n\
     b          LAB_080376e6\n\
PTR_DAT_080376b4:\n\
     .4byte       DAT_02010e98\n\
PTR_DAT_080376b8:\n\
     .4byte       DAT_02011224\n\
PTR_DAT_080376bc:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_080376c0:\n\
     .4byte       DAT_02011194\n\
PTR_DAT_080376c4:\n\
     .4byte       DAT_02011218\n\
PTR_DAT_080376c8:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_080376cc:\n\
     .4byte       DAT_0200f4a0\n\
LAB_080376d0:\n\
     ldr        r1,PTR_DAT_08037750\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08037754\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
LAB_080376e6:\n\
     ldr        r2,PTR_DAT_08037758\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x20\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037718\n\
     ldr        r0,PTR_DAT_0803775c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08037718\n\
     ldr        r0,PTR_DAT_08037760\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037718\n\
     ldr        r1,PTR_DAT_08037764\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1f\n\
     bhi        LAB_08037718\n\
     strh       r3,[r1,#0x0]\n\
LAB_08037718:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803776c\n\
     ldr        r0,PTR_DAT_08037760\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803776c\n\
     ldr        r0,PTR_DAT_0803775c\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803773c\n\
     ldr        r0,PTR_DAT_08037768\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803778a\n\
LAB_0803773c:\n\
     ldr        r1,PTR_DAT_08037764\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xe0\n\
     bls        LAB_0803778a\n\
     mov        r0,#0xe0\n\
     b          LAB_08037788\n\
PTR_DAT_08037750:\n\
     .4byte       DAT_020112ac\n\
PTR_DAT_08037754:\n\
     .4byte       DAT_02011190\n\
PTR_DAT_08037758:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_0803775c:\n\
     .4byte       DAT_0201119c\n\
PTR_DAT_08037760:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08037764:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_08037768:\n\
     .4byte       DAT_02010e38\n\
LAB_0803776c:\n\
     ldr        r1,PTR_DAT_0803782c\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     ldr        r1,PTR_DAT_08037830\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037780\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08037780:\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x1f\n\
     bhi        LAB_0803778a\n\
     mov        r0,#0x20\n\
LAB_08037788:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803778a:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080377b0\n\
     ldr        r0,PTR_DAT_08037834\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080377b0\n\
     ldr        r1,PTR_DAT_08037838\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xf\n\
     bhi        LAB_080377b0\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
LAB_080377b0:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080377d6\n\
     ldr        r0,PTR_DAT_08037834\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080377d6\n\
     ldr        r1,PTR_DAT_08037838\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x90\n\
     bls        LAB_080377d6\n\
     mov        r0,#0x90\n\
     strh       r0,[r1,#0x0]\n\
LAB_080377d6:\n\
     ldr        r5,PTR_DAT_0803783c\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x5\n\
     bhi        LAB_08037898\n\
     ldr        r0,PTR_DAT_08037840\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037898\n\
     bl         fun_08038550\n\
     mov        r0,#0x19\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037844\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     add        r3,r0,#0x0\n\
     add        r3,#0x1e\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     mov        r0,#0x2\n\
     mov        r1,#0x10\n\
     add        r2,r4,#0x0\n\
     bl         fun_08037a34\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r5,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08037898\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0xfe\n\
     b          LAB_0803786e\n\
PTR_DAT_0803782c:\n\
     .4byte       DAT_02011198\n\
PTR_DAT_08037830:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_08037834:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08037838:\n\
     .4byte       DAT_02011194\n\
PTR_DAT_0803783c:\n\
     .4byte       DAT_02010ea0\n\
PTR_DAT_08037840:\n\
     .4byte       DAT_02011228\n\
LAB_08037844:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r5,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     add        r3,r0,#0x0\n\
     add        r3,#0x1e\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     mov        r0,#0x7\n\
     mov        r1,#0x10\n\
     add        r2,r4,#0x0\n\
     bl         fun_08037a34\n\
     add        r4,r0,#0x0\n\
     cmp        r4,#0x0\n\
     beq        LAB_08037898\n\
     mov        r0,#0x2\n\
LAB_0803786e:\n\
     strb       r0,[r4,#0x1c]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08037898\n\
     mov        r0,#0x0\n\
     bl         fun_08002c04\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r4,#0x10]\n\
     ldr        r0,DAT_08037908\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_0803790c\n\
     sub        r1,r1,r0\n\
     str        r1,[r4,#0x14]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r2,#0x0\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     strb       r2,[r4,#0x1d]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x1a]\n\
LAB_08037898:\n\
     ldr        r0,DAT_08037910\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08037914\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     bl         fun_080384bc\n\
     bl         fun_08037ae8\n\
     bl         fun_08038070\n\
     bl         fun_08037c80\n\
     bl         fun_08037d44\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_08037918\n\
     ldrh       r0,[r4,#0x0]\n\
     mov        r1,sp\n\
     bl         fun_08002f00\n\
     ldr        r3,DAT_0803791c\n\
     mov        r0,sp\n\
     mov        r1,#0x8c\n\
     mov        r2,#0x14\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_08037920\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08037924\n\
     cmp        r1,r0\n\
     bgt        LAB_080378e6\n\
     ldr        r0,DAT_08037928\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,r0\n\
     bhi        LAB_080378e6\n\
     b          LAB_08037a0a\n\
LAB_080378e6:\n\
     ldr        r1,PTR_DAT_0803792c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08037930\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_08037934\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803793c\n\
     ldr        r1,PTR_DAT_08037938\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     add        r4,r1,#0x0\n\
     b          LAB_08037950\n\
.space 1\n\
.space 1\n\
DAT_08037908:\n\
     .4byte 0x0001D4C0\n\
DAT_0803790c:\n\
     .4byte 0x0000EA60\n\
DAT_08037910:\n\
     .4byte 0x02011224\n\
DAT_08037914:\n\
     .4byte 0x0000FDFF\n\
DAT_08037918:\n\
     .4byte 0x02011198\n\
DAT_0803791c:\n\
     .4byte 0x0865FB7C\n\
DAT_08037920:\n\
     .4byte 0x020111A4\n\
DAT_08037924:\n\
     .4byte 0x0001FBD0\n\
DAT_08037928:\n\
     .4byte 0x00002A30\n\
PTR_DAT_0803792c:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08037930:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_08037934:\n\
     .4byte       DAT_02010eac\n\
PTR_DAT_08037938:\n\
     .4byte       DAT_02010ea4\n\
LAB_0803793c:\n\
     ldr        r4,PTR_DAT_080379b0\n\
     ldr        r0,PTR_DAT_080379b4\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     mov        r0,#0xc8\n\
     mul        r0,r1\n\
     ldrh       r1,[r2,#0x0]\n\
     bl         __divsi3\n\
     strh       r0,[r4,#0x0]\n\
LAB_08037950:\n\
     ldr        r0,PTR_DAT_080379b8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0x1\n\
     sub        r1,r1,r0\n\
     ldr        r0,PTR_DAT_080379bc\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     sub        r1,r1,r0\n\
     ldr        r3,DAT_080379c0\n\
     add        r1,r1,r3\n\
     ldr        r2,DAT_080379c4\n\
     ldrh       r3,[r2,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r3\n\
     sub        r1,r1,r0\n\
     ldrh       r4,[r4,#0x0]\n\
     add        r4,r4,r1\n\
     ldr        r1,DAT_080379c8\n\
     ldr        r0,DAT_080379cc\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     bhi        LAB_08037982\n\
     add        r4,#0x64\n\
LAB_08037982:\n\
     cmp        r4,#0x0\n\
     bge        LAB_08037988\n\
     mov        r4,#0x0\n\
LAB_08037988:\n\
     ldr        r0,PTR_DAT_080379d0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080379d4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080379e0\n\
     ldr        r0,PTR_DAT_080379d8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r0,r2]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     ble        LAB_08037a0a\n\
     ldr        r1,PTR_DAT_080379dc\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     b          LAB_080379fc\n\
.space 1\n\
.space 1\n\
PTR_DAT_080379b0:\n\
     .4byte       DAT_02010ea4\n\
PTR_DAT_080379b4:\n\
     .4byte       DAT_020111a8\n\
PTR_DAT_080379b8:\n\
     .4byte       DAT_0201122c\n\
PTR_DAT_080379bc:\n\
     .4byte       DAT_02010e9c\n\
DAT_080379c0:\n\
     .4byte 0x0000012B\n\
DAT_080379c4:\n\
     .4byte 0x02010E94\n\
DAT_080379c8:\n\
     .4byte 0x02011198\n\
DAT_080379cc:\n\
     .4byte 0x00002A2F\n\
PTR_DAT_080379d0:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_080379d4:\n\
     .4byte       DAT_02002530\n\
PTR_DAT_080379d8:\n\
     .4byte       DAT_02011224\n\
PTR_DAT_080379dc:\n\
     .4byte       DAT_020025c8\n\
LAB_080379e0:\n\
     ldr        r0,DAT_08037a1c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r0,r2]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     ble        LAB_08037a0a\n\
     ldr        r1,DAT_08037a20\n\
     ldr        r3,DAT_08037a24\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08037a28\n\
     mov        r0,#0x22\n\
LAB_080379fc:\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     ldr        r1,DAT_08037a2c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08037a0a:\n\
     ldr        r1,DAT_08037a30\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x64\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08037a1c:\n\
     .4byte 0x02011224\n\
DAT_08037a20:\n\
     .4byte 0x020025E8\n\
DAT_08037a24:\n\
     .4byte 0x00000297\n\
DAT_08037a28:\n\
     .4byte 0x020025C8\n\
DAT_08037a2c:\n\
     .4byte 0x020025B8\n\
DAT_08037a30:\n\
     .4byte 0x02011198\n\
    ");
}
__attribute__((naked)) void fun_08037a34()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r8,r1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r12,r2\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     mov        r9,r3\n\
     ldr        r1,DAT_08037acc\n\
     mov        r4,#0x0\n\
     ldr        r3,DAT_08037ad0\n\
     add        r2,r3,#0x0\n\
LAB_08037a5a:\n\
     lsl        r5,r4,#0x10\n\
     asr        r4,r5,#0x10\n\
     lsl        r0,r4,#0x3\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r6,r0,r2\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037a6e\n\
     lsr        r1,r5,#0x10\n\
LAB_08037a6e:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x13\n\
     ble        LAB_08037a5a\n\
     lsl        r0,r1,#0x10\n\
     asr        r4,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r4,r0\n\
     beq        LAB_08037ad8\n\
     lsl        r0,r4,#0x3\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r6,r0,r3\n\
     mov        r5,#0x0\n\
     mov        r4,#0x0\n\
     strh       r7,[r6,#0x2]\n\
     mov        r0,r8\n\
     strh       r0,[r6,#0x18]\n\
     mov        r1,r12\n\
     lsl        r0,r1,#0x10\n\
     str        r0,[r6,#0x8]\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x10\n\
     str        r0,[r6,#0xc]\n\
     str        r4,[r6,#0x10]\n\
     str        r4,[r6,#0x14]\n\
     strb       r5,[r6,#0x1d]\n\
     lsl        r0,r7,#0x10\n\
     asr        r0,r0,#0xc\n\
     ldr        r1,DAT_08037ad4\n\
     add        r0,r0,r1\n\
     bl         fun_08003998\n\
     str        r0,[r6,#0x4]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     strh       r4,[r6,#0x1a]\n\
     strh       r4,[r6,#0x1e]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     strb       r5,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     b          LAB_08037ada\n\
.space 1\n\
.space 1\n\
DAT_08037acc:\n\
     .4byte 0x0000FFFF\n\
DAT_08037ad0:\n\
     .4byte 0x02010EC0\n\
DAT_08037ad4:\n\
     .4byte 0x086409D8\n\
LAB_08037ad8:\n\
     mov        r0,#0x0\n\
LAB_08037ada:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08037ae8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
     mov        r6,#0x88\n\
     lsl        r6,r6,#0x1\n\
LAB_08037af0:\n\
     lsl        r0,r5,#0x3\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08037ba8\n\
     add        r4,r0,r1\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037b96\n\
     ldr        r0,DAT_08037bac\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,[r4,#0x8]\n\
     sub        r2,r2,r0\n\
     ldr        r0,[r4,#0x10]\n\
     add        r2,r2,r0\n\
     str        r2,[r4,#0x8]\n\
     ldr        r0,[r4,#0xc]\n\
     ldr        r1,[r4,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0xc]\n\
     ldr        r1,[r4,#0x4]\n\
     cmp        r2,#0x0\n\
     bge        LAB_08037b22\n\
     ldr        r0,DAT_08037bb0\n\
     add        r2,r2,r0\n\
LAB_08037b22:\n\
     asr        r0,r2,#0x10\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x4]\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08037b32\n\
     ldr        r2,DAT_08037bb0\n\
     add        r0,r0,r2\n\
LAB_08037b32:\n\
     asr        r0,r0,#0x10\n\
     strh       r0,[r1,#0x4]\n\
     ldrb       r1,[r4,#0x1d]\n\
     ldrb       r2,[r4,#0x1c]\n\
     add        r0,r1,r2\n\
     strb       r0,[r4,#0x1d]\n\
     ldrh       r0,[r4,#0x1a]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037b50\n\
     ldr        r0,[r4,#0x4]\n\
     ldrb       r1,[r4,#0x1d]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_08003ff8\n\
LAB_08037b50:\n\
     ldrh       r1,[r4,#0x1e]\n\
     mov        r2,#0x1e\n\
     ldrsh      r0,[r4,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08037b5e\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r4,#0x1e]\n\
LAB_08037b5e:\n\
     ldr        r1,[r4,#0x4]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x10\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r2,r1,#0x0\n\
     cmp        r0,r6\n\
     bhi        LAB_08037b7e\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     blt        LAB_08037b7e\n\
     cmp        r1,#0xb0\n\
     ble        LAB_08037b96\n\
LAB_08037b7e:\n\
     ldrh       r1,[r4,#0x18]\n\
     cmp        r1,#0x10\n\
     bne        LAB_08037b8c\n\
     ldr        r1,DAT_08037bb4\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_08037b8c:\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     add        r0,r2,#0x0\n\
     bl         fun_08003b00\n\
LAB_08037b96:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x13\n\
     bls        LAB_08037af0\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08037ba8:\n\
     .4byte 0x02010EC0\n\
DAT_08037bac:\n\
     .4byte 0x020111A4\n\
DAT_08037bb0:\n\
     .4byte 0x0000FFFF\n\
DAT_08037bb4:\n\
     .4byte 0x02010EA0\n\
    ");
}
__attribute__((naked)) void fun_08037bb8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r1,DAT_08037c60\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x64\n\
     bgt        LAB_08037c5a\n\
     mov        r0,#0x3\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037bf2\n\
     ldr        r0,DAT_08037c64\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08037c68\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08037bf2:\n\
     ldr        r3,DAT_08037c6c\n\
     mov        r1,#0x0\n\
     ldr        r6,DAT_08037c70\n\
     add        r5,r6,#0x0\n\
LAB_08037bfa:\n\
     lsl        r2,r1,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,r5\n\
     ldrh       r0,[r4,#0x12]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037c0e\n\
     lsr        r3,r2,#0x10\n\
LAB_08037c0e:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     ble        LAB_08037bfa\n\
     lsl        r0,r3,#0x10\n\
     asr        r1,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_08037c5a\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,r6\n\
     mov        r0,#0x10\n\
     strh       r0,[r4,#0x10]\n\
     mov        r0,#0x1d\n\
     bl         fun_080016f0\n\
     mov        r0,#0x5\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,DAT_08037c74\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,DAT_08037c78\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0xc]\n\
     ldr        r0,DAT_08037c7c\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x4]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     strh       r1,[r4,#0x12]\n\
LAB_08037c5a:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08037c60:\n\
     .4byte 0x02010E9C\n\
DAT_08037c64:\n\
     .4byte 0x02010EB0\n\
DAT_08037c68:\n\
     .4byte 0x02011240\n\
DAT_08037c6c:\n\
     .4byte 0x0000FFFF\n\
DAT_08037c70:\n\
     .4byte 0x02010E40\n\
DAT_08037c74:\n\
     .4byte 0x02010E3C\n\
DAT_08037c78:\n\
     .4byte 0x02011194\n\
DAT_08037c7c:\n\
     .4byte 0x08640A28\n\
    ");
}
__attribute__((naked)) void fun_08037c80()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x10\n\
     mov        r2,#0x0\n\
LAB_08037c8a:\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08037d3c\n\
     add        r4,r0,r1\n\
     ldrh       r0,[r4,#0x12]\n\
     mov        r8,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037d20\n\
     ldr        r0,[r4,#0x8]\n\
     add        r0,#0x8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x4]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r1,[r4,#0x10]\n\
     add        r1,#0xf0\n\
     ldr        r0,[r4,#0x8]\n\
     cmp        r0,r1\n\
     ble        LAB_08037cc4\n\
     strh       r2,[r4,#0x12]\n\
     ldr        r0,[r4,#0x4]\n\
     bl         fun_08003b00\n\
LAB_08037cc4:\n\
     mov        r2,#0x0\n\
LAB_08037cc6:\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x3\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08037d40\n\
     add        r5,r0,r1\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r6,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037d12\n\
     ldr        r1,[r5,#0x4]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r1,r2]\n\
     mov        r7,#0x4\n\
     ldrsh      r1,[r1,r7]\n\
     mov        r2,#0x18\n\
     ldrsh      r3,[r5,r2]\n\
     mov        r7,#0x8\n\
     ldrsh      r2,[r4,r7]\n\
     str        r2,[sp,#0x0]\n\
     mov        r7,#0xc\n\
     ldrsh      r2,[r4,r7]\n\
     str        r2,[sp,#0x4]\n\
     mov        r2,#0x8\n\
     str        r2,[sp,#0x8]\n\
     mov        r2,#0x4\n\
     str        r2,[sp,#0xc]\n\
     add        r2,r3,#0x0\n\
     bl         fun_08037f34\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037d12\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080385d0\n\
LAB_08037d12:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r0,r6,r1\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x13\n\
     ble        LAB_08037cc6\n\
LAB_08037d20:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     add        r0,r8\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     ble        LAB_08037c8a\n\
     add        sp,#0x10\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08037d3c:\n\
     .4byte 0x02010E40\n\
DAT_08037d40:\n\
     .4byte 0x02010EC0\n\
    ");
}
__attribute__((naked)) void fun_08037d44()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x10\n\
     mov        r2,#0x0\n\
LAB_08037d4a:\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x3\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08037db0\n\
     add        r4,r0,r1\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r5,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037d98\n\
     ldrh       r0,[r4,#0x18]\n\
     lsr        r3,r0,#0x1\n\
     ldr        r0,DAT_08037db4\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     ldr        r1,DAT_08037db8\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     ldr        r2,[r4,#0x4]\n\
     mov        r6,#0x2\n\
     ldrsh      r2,[r2,r6]\n\
     str        r2,[sp,#0x0]\n\
     ldr        r2,[r4,#0x4]\n\
     mov        r6,#0x4\n\
     ldrsh      r2,[r2,r6]\n\
     str        r2,[sp,#0x4]\n\
     str        r3,[sp,#0x8]\n\
     str        r3,[sp,#0xc]\n\
     mov        r2,#0x12\n\
     mov        r3,#0x8\n\
     bl         fun_08037f34\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037d98\n\
     add        r0,r4,#0x0\n\
     bl         fun_08037dbc\n\
LAB_08037d98:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r0,r5,r1\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x13\n\
     ble        LAB_08037d4a\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08037db0:\n\
     .4byte 0x02010EC0\n\
DAT_08037db4:\n\
     .4byte 0x02010E3C\n\
DAT_08037db8:\n\
     .4byte 0x02011194\n\
    ");
}
__attribute__((naked)) void fun_08037dbc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r0,DAT_08037dfc\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08037e00\n\
     cmp        r1,r0\n\
     ble        LAB_08037dcc\n\
     b          LAB_08037ef4\n\
LAB_08037dcc:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r0,r1]\n\
     cmp        r1,#0x2\n\
     bne        LAB_08037e14\n\
     ldr        r1,DAT_08037e04\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08037e08\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_08037e0c\n\
     ldr        r3,DAT_08037e10\n\
LAB_08037dea:\n\
     ldmia      r3!,{r1}\n\
     add        r0,r5,#0x0\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     add        r2,#0x1\n\
     cmp        r2,#0x18\n\
     bls        LAB_08037dea\n\
     b          LAB_08037e3a\n\
DAT_08037dfc:\n\
     .4byte 0x020111A4\n\
DAT_08037e00:\n\
     .4byte 0x0001FBD0\n\
DAT_08037e04:\n\
     .4byte 0x02010E9C\n\
DAT_08037e08:\n\
     .4byte 0x02010EB0\n\
DAT_08037e0c:\n\
     .4byte 0x0000FDFF\n\
DAT_08037e10:\n\
     .4byte 0x02011240\n\
LAB_08037e14:\n\
     cmp        r1,#0x3\n\
     bne        LAB_08037e68\n\
     ldr        r1,DAT_08037e54\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08037e58\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_08037e5c\n\
     ldr        r3,DAT_08037e60\n\
LAB_08037e2a:\n\
     ldmia      r3!,{r1}\n\
     add        r0,r5,#0x0\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     add        r2,#0x1\n\
     cmp        r2,#0x18\n\
     bls        LAB_08037e2a\n\
LAB_08037e3a:\n\
     mov        r0,#0x20\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08037e64\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x4]\n\
     bl         fun_08003b00\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08037ef4\n\
DAT_08037e54:\n\
     .4byte 0x0201122C\n\
DAT_08037e58:\n\
     .4byte 0x02010E90\n\
DAT_08037e5c:\n\
     .4byte 0x0000FDFF\n\
DAT_08037e60:\n\
     .4byte 0x020111B0\n\
DAT_08037e64:\n\
     .4byte 0x020111A8\n\
LAB_08037e68:\n\
     ldr        r0,PTR_DAT_08037efc\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08037ef4\n\
     ldr        r0,PTR_DAT_08037f00\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08037e8c\n\
     cmp        r1,#0x1\n\
     beq        LAB_08037ef4\n\
     mov        r6,#0x1e\n\
     ldrsh      r0,[r4,r6]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08037ef4\n\
     ldrh       r0,[r4,#0x18]\n\
     cmp        r0,#0x8\n\
     beq        LAB_08037e92\n\
LAB_08037e8c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_08038218\n\
LAB_08037e92:\n\
     ldr        r0,PTR_DAT_08037f00\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_08037ef4\n\
     ldr        r1,PTR_DAT_08037f04\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_080016f0\n\
     ldr        r1,PTR_DAT_08037efc\n\
     mov        r0,#0xaa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08037f08\n\
     ldr        r0,PTR_DAT_08037f0c\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08037f10\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_08037f14\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     bne        LAB_08037ed4\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r4,#0x0]\n\
LAB_08037ed4:\n\
     ldr        r0,PTR_DAT_08037f18\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037f1c\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08037f20\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08037f24\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r6,DAT_08037f28\n\
     add        r0,r0,r6\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08037f2c\n\
     cmp        r0,r1\n\
     bgt        LAB_08037ef4\n\
     ldr        r0,DAT_08037f30\n\
     str        r0,[r2,#0x0]\n\
LAB_08037ef4:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08037efc:\n\
     .4byte       DAT_0201119c\n\
PTR_DAT_08037f00:\n\
     .4byte       DAT_020112ac\n\
PTR_DAT_08037f04:\n\
     .4byte       DAT_02010e94\n\
PTR_DAT_08037f08:\n\
     .4byte       DAT_02010ea8\n\
PTR_DAT_08037f0c:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_08037f10:\n\
     .4byte       DAT_020112a8\n\
PTR_DAT_08037f14:\n\
     .4byte       DAT_02011214\n\
PTR_DAT_08037f18:\n\
     .4byte       DAT_02010e34\n\
PTR_DAT_08037f1c:\n\
     .4byte       DAT_02010e38\n\
PTR_DAT_08037f20:\n\
     .4byte       DAT_0201121c\n\
PTR_DAT_08037f24:\n\
     .4byte       DAT_020111a4\n\
DAT_08037f28:\n\
     .4byte 0xFFFFCA90\n\
DAT_08037f2c:\n\
     .4byte 0x00009E57\n\
DAT_08037f30:\n\
     .4byte 0x00009E58\n\
    ");
}
__attribute__((naked)) void fun_08037f34()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r5,[sp,#0x1c]\n\
     ldr        r6,[sp,#0x20]\n\
     ldr        r4,[sp,#0x24]\n\
     mov        r8,r4\n\
     ldr        r4,[sp,#0x28]\n\
     mov        r9,r4\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r4,r0,r2\n\
     lsl        r4,r4,#0x10\n\
     lsr        r7,r4,#0x10\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     sub        r4,r1,r3\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r12,r4\n\
     add        r0,r0,r2\n\
     add        r1,r1,r3\n\
     lsl        r1,r1,#0x10\n\
     lsr        r4,r1,#0x10\n\
     lsl        r5,r5,#0x10\n\
     asr        r5,r5,#0x10\n\
     mov        r1,r8\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r8,r1\n\
     sub        r2,r5,r1\n\
     lsl        r6,r6,#0x10\n\
     asr        r6,r6,#0x10\n\
     mov        r3,r9\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     mov        r9,r3\n\
     sub        r1,r6,r3\n\
     lsl        r1,r1,#0x10\n\
     lsr        r3,r1,#0x10\n\
     add        r5,r8\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     add        r6,r9\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     lsl        r0,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     cmp        r0,r2\n\
     blt        LAB_08037fc0\n\
     lsl        r1,r7,#0x10\n\
     lsl        r0,r5,#0x10\n\
     cmp        r1,r0\n\
     bgt        LAB_08037fc0\n\
     lsl        r1,r4,#0x10\n\
     lsl        r0,r3,#0x10\n\
     cmp        r1,r0\n\
     blt        LAB_08037fc0\n\
     mov        r4,r12\n\
     lsl        r1,r4,#0x10\n\
     lsl        r0,r6,#0x10\n\
     cmp        r1,r0\n\
     bgt        LAB_08037fc0\n\
     mov        r0,#0x1\n\
     b          LAB_08037fc2\n\
LAB_08037fc0:\n\
     mov        r0,#0x0\n\
LAB_08037fc2:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08037fd0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
     ldr        r6,DAT_08038018\n\
     mov        r4,#0x0\n\
LAB_08037fd8:\n\
     ldr        r0,DAT_0803801c\n\
     bl         fun_08003998\n\
     lsl        r2,r5,#0x10\n\
     asr        r2,r2,#0x10\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x10]\n\
     ldr        r3,[r1,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     add        r0,#0xa\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x8]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0xa]\n\
     add        r2,#0x1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r5,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     cmp        r2,#0x18\n\
     ble        LAB_08037fd8\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08038018:\n\
     .4byte 0x02011240\n\
DAT_0803801c:\n\
     .4byte 0x08640A38\n\
    ");
}
__attribute__((naked)) void fun_08038020()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
     ldr        r6,DAT_08038068\n\
     mov        r4,#0x0\n\
LAB_08038028:\n\
     ldr        r0,DAT_0803806c\n\
     bl         fun_08003998\n\
     lsl        r2,r5,#0x10\n\
     asr        r2,r2,#0x10\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x10]\n\
     ldr        r3,[r1,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     add        r0,#0xa\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r0,#0x94\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x8]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0xa]\n\
     add        r2,#0x1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r5,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     cmp        r2,#0x18\n\
     ble        LAB_08038028\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08038068:\n\
     .4byte 0x020111B0\n\
DAT_0803806c:\n\
     .4byte 0x08640A88\n\
    ");
}
__attribute__((naked)) void fun_08038070()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r0,DAT_08038094\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     blt        LAB_0803814e\n\
     cmp        r1,#0xaa\n\
     bne        LAB_0803809c\n\
     ldr        r2,DAT_08038098\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x4\n\
     add        r0,r3,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     b          LAB_080380aa\n\
.space 1\n\
.space 1\n\
DAT_08038094:\n\
     .4byte 0x0201119C\n\
DAT_08038098:\n\
     .4byte 0x02011224\n\
LAB_0803809c:\n\
     ldr        r2,DAT_08038154\n\
     cmp        r1,#0x0\n\
     bne        LAB_080380ac\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08038158\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
LAB_080380aa:\n\
     strh       r0,[r1,#0x12]\n\
LAB_080380ac:\n\
     ldrh       r0,[r5,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_0803815c\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r6,r0,#0x0\n\
     ldr        r3,PTR_DAT_08038160\n\
     cmp        r1,#0x0\n\
     bne        LAB_080380d6\n\
     ldr        r1,PTR_DAT_08038164\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080380d0\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_080380d0:\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_080380d6:\n\
     ldr        r0,PTR_DAT_08038168\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     lsr        r1,r0,#0x1f\n\
     add        r0,r0,r1\n\
     asr        r0,r0,#0x1\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,r0\n\
     bge        LAB_080380fe\n\
     ldr        r1,PTR_DAT_0803816c\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080380fe\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038170\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r1,r4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r1,#0x0]\n\
LAB_080380fe:\n\
     ldr        r1,PTR_DAT_08038174\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x1f\n\
     bhi        LAB_0803811e\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08038114\n\
     mov        r0,#0x64\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08038114:\n\
     ldrh       r4,[r3,#0x0]\n\
     cmp        r4,#0x1f\n\
     bhi        LAB_0803811e\n\
     mov        r0,#0x20\n\
     strh       r0,[r3,#0x0]\n\
LAB_0803811e:\n\
     ldrh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_08038178\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803812e\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
LAB_0803812e:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08038138\n\
     strh       r0,[r4,#0x0]\n\
LAB_08038138:\n\
     ldr        r0,[r2,#0x0]\n\
     ldrb       r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_08003ff8\n\
     ldr        r0,PTR_DAT_08038170\n\
     ldrh       r2,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,r2,r0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0803814e:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08038154:\n\
     .4byte 0x02011224\n\
DAT_08038158:\n\
     .4byte 0x0000F7FF\n\
PTR_DAT_0803815c:\n\
     .4byte       DAT_02010e38\n\
PTR_DAT_08038160:\n\
     .4byte       DAT_02010e3c\n\
PTR_DAT_08038164:\n\
     .4byte       DAT_02011198\n\
PTR_DAT_08038168:\n\
     .4byte       DAT_02010ea8\n\
PTR_DAT_0803816c:\n\
     .4byte       DAT_020112a8\n\
PTR_DAT_08038170:\n\
     .4byte       DAT_02011214\n\
PTR_DAT_08038174:\n\
     .4byte       DAT_02010e34\n\
PTR_DAT_08038178:\n\
     .4byte       DAT_0201121c\n\
    ");
}
__attribute__((naked)) void fun_0803817c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080381a0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x64\n\
     ble        LAB_080381a8\n\
     ldr        r0,DAT_080381a4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_080381f8\n\
DAT_080381a0:\n\
     .4byte 0x0201122C\n\
DAT_080381a4:\n\
     .4byte 0x02011190\n\
LAB_080381a8:\n\
     mov        r0,#0x3\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080381d0\n\
     ldr        r0,DAT_080381fc\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08038200\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_080381d0:\n\
     ldr        r1,DAT_08038204\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1f\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08038208\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803820c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_08038210\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_08038214\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1a\n\
     strh       r0,[r1,#0x4]\n\
LAB_080381f8:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080381fc:\n\
     .4byte 0x02010E90\n\
DAT_08038200:\n\
     .4byte 0x020111B0\n\
DAT_08038204:\n\
     .4byte 0x020112AC\n\
DAT_08038208:\n\
     .4byte 0x02011190\n\
DAT_0803820c:\n\
     .4byte 0x0000FDFF\n\
DAT_08038210:\n\
     .4byte 0x02010E3C\n\
DAT_08038214:\n\
     .4byte 0x02011194\n\
    ");
}
__attribute__((naked)) void fun_08038218()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r0,#0x0\n\
     add        r0,#0x20\n\
     ldrb       r0,[r0,#0x0]\n\
     mov        r9,r0\n\
     ldrh       r0,[r7,#0x18]\n\
     cmp        r0,#0x10\n\
     bne        LAB_080382dc\n\
     ldr        r1,DAT_08038390\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08038394\n\
     mov        r2,r9\n\
     lsl        r0,r2,#0x18\n\
     asr        r0,r0,#0x17\n\
     add        r0,r0,r1\n\
     mov        r8,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     ldr        r1,[r7,#0x4]\n\
     mov        r4,#0x2\n\
     ldrsh      r2,[r1,r4]\n\
     mov        r4,#0x4\n\
     ldrsh      r3,[r1,r4]\n\
     mov        r1,#0x8\n\
     bl         fun_08037a34\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_0803828e\n\
     ldr        r5,DAT_08038398\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     ldr        r4,DAT_0803839c\n\
     sub        r0,r4,r0\n\
     str        r0,[r6,#0x10]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     sub        r4,r4,r0\n\
     str        r4,[r6,#0x14]\n\
     ldr        r1,[r6,#0x4]\n\
     mov        r2,#0x2\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     strb       r2,[r6,#0x1c]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x1a]\n\
     mov        r0,#0x28\n\
     strh       r0,[r6,#0x1e]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,r9\n\
     strb       r1,[r0,#0x0]\n\
LAB_0803828e:\n\
     mov        r2,r8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     ldr        r1,[r7,#0x4]\n\
     mov        r4,#0x2\n\
     ldrsh      r2,[r1,r4]\n\
     mov        r4,#0x4\n\
     ldrsh      r3,[r1,r4]\n\
     mov        r1,#0x8\n\
     bl         fun_08037a34\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_080382dc\n\
     ldr        r5,DAT_08038398\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     ldr        r4,DAT_0803839c\n\
     sub        r0,r4,r0\n\
     str        r0,[r6,#0x10]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     sub        r4,r4,r0\n\
     str        r4,[r6,#0x14]\n\
     ldr        r1,[r6,#0x4]\n\
     mov        r2,#0x2\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     strb       r2,[r6,#0x1c]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x1a]\n\
     mov        r0,#0x28\n\
     strh       r0,[r6,#0x1e]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,r9\n\
     strb       r1,[r0,#0x0]\n\
LAB_080382dc:\n\
     ldrh       r2,[r7,#0x18]\n\
     cmp        r2,#0x8\n\
     bne        LAB_08038378\n\
     ldr        r1,DAT_080383a0\n\
     mov        r3,r9\n\
     lsl        r0,r3,#0x18\n\
     asr        r0,r0,#0x17\n\
     add        r0,r0,r1\n\
     mov        r8,r0\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     ldr        r1,[r7,#0x4]\n\
     mov        r3,#0x2\n\
     ldrsh      r2,[r1,r3]\n\
     mov        r4,#0x4\n\
     ldrsh      r3,[r1,r4]\n\
     mov        r1,#0x4\n\
     bl         fun_08037a34\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_08038332\n\
     ldr        r5,DAT_08038398\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     ldr        r4,DAT_0803839c\n\
     sub        r0,r4,r0\n\
     str        r0,[r6,#0x10]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     sub        r4,r4,r0\n\
     str        r4,[r6,#0x14]\n\
     ldr        r1,[r6,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,#0x28\n\
     strh       r0,[r6,#0x1e]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,r9\n\
     strb       r1,[r0,#0x0]\n\
LAB_08038332:\n\
     mov        r2,r8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     ldr        r1,[r7,#0x4]\n\
     mov        r4,#0x2\n\
     ldrsh      r2,[r1,r4]\n\
     mov        r4,#0x4\n\
     ldrsh      r3,[r1,r4]\n\
     mov        r1,#0x4\n\
     bl         fun_08037a34\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_08038378\n\
     ldr        r5,DAT_08038398\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     ldr        r4,DAT_0803839c\n\
     sub        r0,r4,r0\n\
     str        r0,[r6,#0x10]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08002c04\n\
     sub        r4,r4,r0\n\
     str        r4,[r6,#0x14]\n\
     ldr        r1,[r6,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,#0x28\n\
     strh       r0,[r6,#0x1e]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     mov        r1,r9\n\
     strb       r1,[r0,#0x0]\n\
LAB_08038378:\n\
     mov        r0,#0x0\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r0,[r7,#0x4]\n\
     bl         fun_08003b00\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08038390:\n\
     .4byte 0x02010EA0\n\
DAT_08038394:\n\
     .4byte 0x087D5EA4\n\
DAT_08038398:\n\
     .4byte 0x0003A980\n\
DAT_0803839c:\n\
     .4byte 0x0001D4C0\n\
DAT_080383a0:\n\
     .4byte 0x087D5EA0\n\
    ");
}
__attribute__((naked)) void fun_080383a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r1,DAT_080383c4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     beq        LAB_080383c8\n\
     cmp        r0,#0x1\n\
     beq        LAB_080383ea\n\
     b          LAB_08038406\n\
.space 1\n\
.space 1\n\
DAT_080383c4:\n\
     .4byte 0x02010EAC\n\
LAB_080383c8:\n\
     asr        r2,r4,#0x10\n\
     asr        r3,r5,#0x10\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     bl         fun_08037a34\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_08038406\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x20\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     b          LAB_08038406\n\
LAB_080383ea:\n\
     asr        r2,r4,#0x10\n\
     asr        r3,r5,#0x10\n\
     mov        r0,#0x1\n\
     mov        r1,#0xb\n\
     bl         fun_08037a34\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_08038406\n\
     add        r0,#0x20\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r2,#0x4]\n\
     strh       r1,[r0,#0x6]\n\
LAB_08038406:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803840c()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_08038468\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0803846c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08038470\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0x8a\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08038474\n\
     bl         fun_08039e64\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08038478\n\
     bl         fun_080045f0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_0803a140\n\
     add        sp,#0x4\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08038468:\n\
     .4byte 0x040000D4\n\
DAT_0803846c:\n\
     .4byte 0x8100C000\n\
DAT_08038470:\n\
     .4byte 0x81000200\n\
DAT_08038474:\n\
     .4byte 0x02010E10\n\
DAT_08038478:\n\
     .4byte 0x08640AA8\n\
    ");
}
__attribute__((naked)) void fun_0803847c()
{
    asm("\n\
     mov        r1,#0x0\n\
     ldr        r3,DAT_080384b4\n\
     mov        r2,#0x0\n\
LAB_08038482:\n\
     lsl        r0,r1,#0x3\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x13\n\
     bls        LAB_08038482\n\
     mov        r1,#0x0\n\
     ldr        r3,DAT_080384b8\n\
     mov        r2,#0x0\n\
LAB_0803849c:\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     strh       r2,[r0,#0x12]\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x3\n\
     bls        LAB_0803849c\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_080384b4:\n\
     .4byte 0x02010EC0\n\
DAT_080384b8:\n\
     .4byte 0x02010E40\n\
    ");
}
__attribute__((naked)) void fun_080384bc()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080384f0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x4c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,DAT_080384f4\n\
     asr        r0,r0,#0x8\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     str        r1,[r2,#0x0]\n\
     asr        r2,r1,#0x8\n\
     ldr        r0,DAT_080384f8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080384fc\n\
     lsr        r0,r1,#0x1f\n\
     add        r0,r2,r0\n\
     asr        r1,r0,#0x1\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_080384e8\n\
     add        r0,#0x7f\n\
LAB_080384e8:\n\
     asr        r2,r0,#0x7\n\
     lsl        r0,r2,#0x7\n\
     sub        r2,r1,r0\n\
     b          LAB_0803850a\n\
DAT_080384f0:\n\
     .4byte 0x020111A4\n\
DAT_080384f4:\n\
     .4byte 0x02011234\n\
DAT_080384f8:\n\
     .4byte 0x0200F4A0\n\
LAB_080384fc:\n\
     add        r0,r2,#0x0\n\
     cmp        r2,#0x0\n\
     bge        LAB_08038504\n\
     add        r0,#0x7f\n\
LAB_08038504:\n\
     asr        r0,r0,#0x7\n\
     lsl        r0,r0,#0x7\n\
     sub        r2,r2,r0\n\
LAB_0803850a:\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x80\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9dc\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
